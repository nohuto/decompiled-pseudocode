/*
 * XREFs of ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265730
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140264F84 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402652D4 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1402654CC (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread(PVOID StartContext)
{
  PRKEVENT v1; // rbx
  KIRQL v3; // al
  _SINGLE_LIST_ENTRY *v4; // r8
  __int64 v5; // r9
  struct _LIST_ENTRY *Flink; // rdx
  KIRQL v7; // di
  LARGE_INTEGER *Timeout; // rax
  KIRQL v9; // si
  __int64 p_Blink; // rdi
  LIST_ENTRY *v11; // rdi
  LIST_ENTRY *p_WaitListHead; // rcx
  LIST_ENTRY *Blink; // rdx
  __int64 v14; // rdx
  KIRQL v15; // al
  unsigned __int64 Blink_high; // rdx
  PRKEVENT v17; // rax
  PRKEVENT **v18; // rcx
  PRKEVENT v19; // [rsp+30h] [rbp-20h] BYREF
  PRKEVENT **v20; // [rsp+38h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-10h]
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF

  v1 = *(PRKEVENT *)StartContext;
  v19 = 0LL;
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v22 = -50000000LL;
  v3 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
  ++HIDWORD(v1[3].Header.WaitListHead.Blink);
  Flink = v1[3].Header.WaitListHead.Flink;
  v7 = v3;
  if ( (PRKEVENT)Flink->Flink != &v1[3] )
    __fastfail(3u);
  v19 = v1 + 3;
  v20 = (PRKEVENT **)Flink;
  Flink->Flink = (struct _LIST_ENTRY *)&v19;
  v1[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v19;
  KeSetActualBasePriorityThread((__int64)CurrentThread, (int)v1[5].Header.WaitListHead.Flink, v4, v5);
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  __writecr8(v7);
  KeSetEvent(*((PRKEVENT *)StartContext + 2), 0, 0);
  while ( 1 )
  {
    while ( 1 )
    {
      Timeout = (LARGE_INTEGER *)&v22;
      if ( HIDWORD(v1[3].Header.WaitListHead.Blink) <= 1 )
        Timeout = 0LL;
      if ( KeWaitForSingleObject(&v1[1], WrKernel, 0, 0, Timeout) == 258 )
        break;
      p_Blink = 0LL;
      v9 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
      while ( 1 )
      {
        if ( HIDWORD(v1[3].Header.WaitListHead.Blink) <= LODWORD(v1[3].Header.WaitListHead.Blink) )
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
        else
        {
          if ( !p_Blink )
            goto LABEL_26;
          v11 = 0LL;
        }
        if ( !v1[1].Header.SignalState && v1->Header.WaitListHead.Blink->Flink >= (struct _LIST_ENTRY *)3 )
          KeSetEvent(v1 + 1, 0, 0);
        ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
        __writecr8(v9);
        v14 = *((_QWORD *)StartContext + 1);
        if ( !v11 )
          break;
        p_Blink = (__int64)&v11[-5].Blink;
        SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(
          (__int64)v1,
          v14,
          *((void **)StartContext + 3),
          *((UCHAR **)StartContext + 4),
          p_Blink);
        v15 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
        Blink_high = HIDWORD(v1[3].Header.WaitListHead.Blink);
        v9 = v15;
        if ( LODWORD(v1[3].Header.WaitListHead.Blink) > (unsigned int)Blink_high
          && (unsigned __int64)v1->Header.WaitListHead.Blink->Flink >> 1 > Blink_high )
        {
          KeSetEvent(v1 + 2, 0, 0);
        }
      }
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue((__int64)v1, v14, 0xFFu, 1);
    }
    v9 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
    if ( HIDWORD(v1[3].Header.WaitListHead.Blink) > 1 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
    __writecr8(v9);
  }
LABEL_26:
  if ( !v1[1].Header.SignalState
    && (v1->Header.WaitListHead.Blink != &v1->Header.WaitListHead || !LODWORD(v1[3].Header.WaitListHead.Blink)) )
  {
    KeSetEvent(v1 + 1, 0, 0);
  }
  v17 = v19;
  v18 = v20;
  if ( (PRKEVENT *)v19->Header.WaitListHead.Flink != &v19 || *v20 != &v19 )
    __fastfail(3u);
  *v20 = (PRKEVENT *)v19;
  v17->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v18;
  --HIDWORD(v1[3].Header.WaitListHead.Blink);
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  __writecr8(v9);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams((struct _EX_RUNDOWN_REF **)StartContext);
}
