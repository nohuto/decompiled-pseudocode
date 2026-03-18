/*
 * XREFs of CmpCommitPreparedLightWeightTransaction @ 0x14054E9B4
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14054BE4C (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 *     CmpProcessLightWeightUOW @ 0x14054F18C (CmpProcessLightWeightUOW.c)
 */

void __fastcall CmpCommitPreparedLightWeightTransaction(__int64 a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 NextElement; // rax
  int v5; // [rsp+30h] [rbp-78h] BYREF
  __int64 v6; // [rsp+38h] [rbp-70h] BYREF
  __int64 v7; // [rsp+40h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR v8; // [rsp+48h] [rbp-60h] BYREF
  int *v9; // [rsp+68h] [rbp-40h]
  int v10; // [rsp+70h] [rbp-38h]
  int v11; // [rsp+74h] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-30h] BYREF

  if ( a1 )
  {
    v1 = 0;
    if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 1uLL) )
      TlgWrite(&stru_140397090, &unk_1403084DD, 0LL, 0LL, 2u, &pData);
    v7 = MEMORY[0xFFFFF78000000014];
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v6 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v6, 0LL);
      if ( !NextElement )
        break;
      CmpProcessLightWeightUOW(NextElement, &v7, 1LL);
      ++v1;
    }
    if ( stru_140397090.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&stru_140397090, 1uLL) )
      {
        v11 = 0;
        v9 = &v5;
        v5 = v1;
        v10 = 4;
        TlgWrite(&stru_140397090, &unk_14030849A, 0LL, 0LL, 3u, &v8);
      }
    }
  }
}
