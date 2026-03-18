/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x140669B9C
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140669900 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406697BC (CmpCleanupLightWeightPrepare.c)
 *     CmpProcessLightWeightUOW @ 0x140669CF4 (CmpProcessLightWeightUOW.c)
 */

__int64 __fastcall CmpPrepareLightWeightTransaction(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  __int64 v4; // r8
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp-30h] BYREF

  if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 1uLL) )
    TlgWrite(&stru_14033C3C0, &unk_1402AAD72, 0LL, 0LL, 2u, &pData);
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 1u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v7 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement((_QWORD *)(a1 + 16), &v7, 0);
      if ( !NextElement )
        break;
      v5 = CmpProcessLightWeightUOW(NextElement, 0LL, v4);
      if ( v5 < 0 )
      {
        CmpCleanupLightWeightPrepare(a1);
        goto LABEL_10;
      }
    }
  }
  v5 = 0;
LABEL_10:
  if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 1uLL) )
    TlgWrite(&stru_14033C3C0, &unk_1402AAD41, 0LL, 0LL, 2u, &v9);
  return (unsigned int)v5;
}
