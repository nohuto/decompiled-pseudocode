/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x14044BCDC
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14044B9BC (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     CmpCleanupLightWeightPrepare @ 0x14044BA6C (CmpCleanupLightWeightPrepare.c)
 *     CmpProcessLightWeightUOW @ 0x14044BDE0 (CmpProcessLightWeightUOW.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
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

  if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 1uLL) )
    TlgWrite(&stru_1403549F0, &unk_1402CEB51, 0LL, 0LL, 2u, &pData);
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
        goto LABEL_10;
      }
    }
  }
  v5 = 0;
LABEL_10:
  if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 1uLL) )
    TlgWrite(&stru_1403549F0, &unk_1402CEB20, 0LL, 0LL, 2u, &v9);
  return (unsigned int)v5;
}
