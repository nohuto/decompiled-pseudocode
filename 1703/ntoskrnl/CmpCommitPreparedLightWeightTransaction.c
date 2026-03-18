/*
 * XREFs of CmpCommitPreparedLightWeightTransaction @ 0x140669A1C
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
 *     CmpProcessLightWeightUOW @ 0x140669CF4 (CmpProcessLightWeightUOW.c)
 */

void __fastcall CmpCommitPreparedLightWeightTransaction(__int64 a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  int v5; // [rsp+30h] [rbp-88h] BYREF
  __int64 v6; // [rsp+38h] [rbp-80h] BYREF
  __int64 v7; // [rsp+40h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR v8; // [rsp+48h] [rbp-70h] BYREF
  int *v9; // [rsp+68h] [rbp-50h]
  int v10; // [rsp+70h] [rbp-48h]
  int v11; // [rsp+74h] [rbp-44h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-38h] BYREF

  if ( a1 )
  {
    v1 = 0;
    if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 1uLL) )
      TlgWrite(&stru_14033C3C0, &unk_1402AADE6, 0LL, 0LL, 2u, &pData);
    v7 = MEMORY[0xFFFFF78000000014];
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v6 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement((_QWORD *)(a1 + 16), &v6, 0);
      if ( !NextElement )
        break;
      CmpProcessLightWeightUOW(NextElement, &v7, 1LL);
      ++v1;
    }
    if ( stru_14033C3C0.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&stru_14033C3C0, 1uLL) )
      {
        v11 = 0;
        v9 = &v5;
        v5 = v1;
        v10 = 4;
        TlgWrite(&stru_14033C3C0, &unk_1402AADA3, 0LL, 0LL, 3u, &v8);
      }
    }
  }
}
