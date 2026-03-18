/*
 * XREFs of ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400574C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x14003CA78 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140055574 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140057744 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread(PRKEVENT *StartContext)
{
  PRKEVENT v1; // rbx
  KIRQL v3; // al
  struct _LIST_ENTRY *Flink; // rdx
  KIRQL v5; // di
  LARGE_INTEGER *Timeout; // rax
  struct _LIST_ENTRY **p_Blink; // rdi
  KIRQL v8; // si
  LIST_ENTRY *p_WaitListHead; // rcx
  LIST_ENTRY *Blink; // rdx
  LIST_ENTRY *v11; // rdi
  __int64 v12; // rdx
  KIRQL v13; // al
  unsigned __int64 Blink_high; // rdx
  PRKEVENT v15; // rax
  PRKEVENT **v16; // rcx
  PRKEVENT v17; // [rsp+30h] [rbp-20h] BYREF
  PRKEVENT **v18; // [rsp+38h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF

  v1 = *StartContext;
  v17 = 0LL;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v20 = -50000000LL;
  v3 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
  ++HIDWORD(v1[3].Header.WaitListHead.Blink);
  Flink = v1[3].Header.WaitListHead.Flink;
  v5 = v3;
  if ( (PRKEVENT)Flink->Flink != &v1[3] )
    __fastfail(3u);
  v17 = v1 + 3;
  v18 = (PRKEVENT **)Flink;
  Flink->Flink = (struct _LIST_ENTRY *)&v17;
  v1[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v17;
  KeSetActualBasePriorityThread(CurrentThread, LODWORD(v1[5].Header.WaitListHead.Flink));
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  __writecr8(v5);
  KeSetEvent(StartContext[2], 0, 0);
  while ( 1 )
  {
    while ( 1 )
    {
      Timeout = (LARGE_INTEGER *)&v20;
      if ( HIDWORD(v1[3].Header.WaitListHead.Blink) <= 1 )
        Timeout = 0LL;
      if ( KeWaitForSingleObject(&v1[1], WrKernel, 0, 0, Timeout) == 258 )
        break;
      p_Blink = 0LL;
      v8 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
      while ( 1 )
      {
        if ( HIDWORD(v1[3].Header.WaitListHead.Blink) > LODWORD(v1[3].Header.WaitListHead.Blink) )
        {
          if ( !p_Blink )
            goto LABEL_22;
          v11 = 0LL;
        }
        else
        {
          p_WaitListHead = &v1->Header.WaitListHead;
          Blink = v1->Header.WaitListHead.Blink;
          if ( Blink == &v1->Header.WaitListHead )
          {
            v11 = 0LL;
            KeResetEvent(v1 + 1);
          }
          else
          {
            v11 = p_WaitListHead->Flink;
            p_WaitListHead->Flink = p_WaitListHead->Flink->Flink;
            if ( v11 == Blink )
            {
              v1->Header.WaitListHead.Blink = &v1->Header.WaitListHead;
              p_WaitListHead->Flink = 0LL;
            }
            else
            {
              --Blink->Flink;
            }
          }
        }
        if ( !v1[1].Header.SignalState && v1->Header.WaitListHead.Blink->Flink >= (struct _LIST_ENTRY *)3 )
          KeSetEvent(v1 + 1, 0, 0);
        ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
        __writecr8(v8);
        v12 = (__int64)StartContext[1];
        if ( !v11 )
          break;
        p_Blink = &v11[-5].Blink;
        SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(v1, v12, StartContext[3], StartContext[4], p_Blink);
        v13 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
        Blink_high = HIDWORD(v1[3].Header.WaitListHead.Blink);
        v8 = v13;
        if ( LODWORD(v1[3].Header.WaitListHead.Blink) > (unsigned int)Blink_high
          && (unsigned __int64)v1->Header.WaitListHead.Blink->Flink >> 1 > Blink_high )
        {
          KeSetEvent(v1 + 2, 0, 0);
        }
      }
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue((__int64)v1, v12, 0xFFu, 1);
    }
    v8 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
    if ( HIDWORD(v1[3].Header.WaitListHead.Blink) > 1 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
    __writecr8(v8);
  }
LABEL_22:
  if ( !v1[1].Header.SignalState
    && (v1->Header.WaitListHead.Blink != &v1->Header.WaitListHead || !LODWORD(v1[3].Header.WaitListHead.Blink)) )
  {
    KeSetEvent(v1 + 1, 0, 0);
  }
  v15 = v17;
  v16 = v18;
  if ( (PRKEVENT *)v17->Header.WaitListHead.Flink != &v17 || *v18 != &v17 )
    __fastfail(3u);
  *v18 = (PRKEVENT *)v17;
  v15->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v16;
  --HIDWORD(v1[3].Header.WaitListHead.Blink);
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  __writecr8(v8);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams((struct _EX_RUNDOWN_REF **)StartContext);
}
