/*
 * XREFs of ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14008E990
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14008EC0C (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1400917BC (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x1400D286C (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread(PRKEVENT *StartContext)
{
  PRKEVENT v1; // rdi
  KIRQL v3; // al
  struct _LIST_ENTRY *Flink; // rdx
  KIRQL v5; // bl
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v7; // ebx
  KIRQL v8; // si
  struct _LIST_ENTRY **p_Blink; // rbx
  LIST_ENTRY *p_WaitListHead; // rcx
  LIST_ENTRY *Blink; // rdx
  LIST_ENTRY *v12; // rbx
  __int64 v13; // r8
  PRKEVENT v14; // rdx
  unsigned __int64 Blink_high; // rax
  PRKEVENT v16; // rcx
  PRKEVENT **v17; // rax
  PRKEVENT v18; // [rsp+30h] [rbp-20h] BYREF
  PRKEVENT **v19; // [rsp+38h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF

  v1 = *StartContext;
  v18 = 0LL;
  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v21 = -50000000LL;
  v3 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
  ++HIDWORD(v1[3].Header.WaitListHead.Blink);
  Flink = v1[3].Header.WaitListHead.Flink;
  v5 = v3;
  if ( (PRKEVENT)Flink->Flink != &v1[3] )
    __fastfail(3u);
  v18 = v1 + 3;
  v19 = (PRKEVENT **)Flink;
  Flink->Flink = (struct _LIST_ENTRY *)&v18;
  v1[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v18;
  KeSetActualBasePriorityThread((__int64)CurrentThread, LODWORD(v1[5].Header.WaitListHead.Flink));
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  __writecr8(v5);
  KeSetEvent(StartContext[2], 0, 0);
  while ( 1 )
  {
    while ( 1 )
    {
      Timeout = (LARGE_INTEGER *)&v21;
      if ( HIDWORD(v1[3].Header.WaitListHead.Blink) <= 1 )
        Timeout = 0LL;
      v7 = KeWaitForSingleObject(&v1[1], WrKernel, 0, 0, Timeout);
      v8 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
      if ( v7 == 258 )
        break;
      p_Blink = 0LL;
      while ( 1 )
      {
        if ( HIDWORD(v1[3].Header.WaitListHead.Blink) > LODWORD(v1[3].Header.WaitListHead.Blink) )
        {
          if ( !p_Blink )
            goto LABEL_22;
          v12 = 0LL;
        }
        else
        {
          p_WaitListHead = &v1->Header.WaitListHead;
          Blink = v1->Header.WaitListHead.Blink;
          if ( Blink == &v1->Header.WaitListHead )
          {
            v12 = 0LL;
            KeResetEvent(v1 + 1);
          }
          else
          {
            v12 = p_WaitListHead->Flink;
            p_WaitListHead->Flink = p_WaitListHead->Flink->Flink;
            if ( v12 == Blink )
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
        v14 = StartContext[1];
        if ( !v12 )
          break;
        p_Blink = &v12[-5].Blink;
        SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(v1, v14, StartContext[3], StartContext[4], p_Blink);
        v8 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
        Blink_high = HIDWORD(v1[3].Header.WaitListHead.Blink);
        if ( LODWORD(v1[3].Header.WaitListHead.Blink) > (unsigned int)Blink_high
          && (unsigned __int64)v1->Header.WaitListHead.Blink->Flink >> 1 > Blink_high )
        {
          KeSetEvent(v1 + 2, 0, 0);
        }
      }
      LOBYTE(v13) = -1;
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(v1, v14, v13, 1LL);
    }
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
  v16 = v18;
  v17 = v19;
  if ( (PRKEVENT *)v18->Header.WaitListHead.Flink != &v18 || *v19 != &v18 )
    __fastfail(3u);
  *v19 = (PRKEVENT *)v18;
  v16->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v17;
  --HIDWORD(v1[3].Header.WaitListHead.Blink);
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  __writecr8(v8);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams(StartContext);
}
