/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x14054EAD4
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14054BE4C (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpCleanupLightWeightPrepare @ 0x14054EBE4 (CmpCleanupLightWeightPrepare.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 *     CmpProcessLightWeightUOW @ 0x14054F18C (CmpProcessLightWeightUOW.c)
 */

__int64 __fastcall CmpPrepareLightWeightTransaction(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 NextElement; // rax
  __int64 v4; // r8
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp-30h] BYREF

  if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 1uLL) )
    TlgWrite(&stru_140397090, &unk_140308469, 0LL, 0LL, 2u, &pData);
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 1u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v7, 0LL);
      if ( !NextElement )
        break;
      v5 = CmpProcessLightWeightUOW(NextElement, 0LL, v4);
      if ( v5 < 0 )
      {
        CmpCleanupLightWeightPrepare(a1);
        goto LABEL_8;
      }
    }
  }
  v5 = 0;
LABEL_8:
  if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 1uLL) )
    TlgWrite(&stru_140397090, &unk_140308438, 0LL, 0LL, 2u, &v9);
  return (unsigned int)v5;
}
