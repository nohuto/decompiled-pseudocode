/*
 * XREFs of CmpTransMgrRollback @ 0x14042E45C
 * Callers:
 *     CmKtmNotification @ 0x14042C540 (CmKtmNotification.c)
 *     CmpAbortLightWeightTransaction @ 0x14042D3E8 (CmpAbortLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1404CBACC (CmRmFinalizeRecovery.c)
 *     CmpRmUnDoPhase @ 0x14066C3E0 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpTransMgrRollback(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 NextElement; // rax
  __int64 v6; // rdx
  int v8; // r8d
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  *a2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 48) |= 2u;
  while ( 1 )
  {
    NextElement = CmListGetNextElement(a1 + 16, &v10, 0LL);
    v6 = NextElement;
    if ( !NextElement )
      break;
    v8 = *(_DWORD *)(NextElement + 64);
    if ( (v8 & 1) == 0 )
    {
      ++*a2;
      v9 = *(_DWORD *)(NextElement + 68);
      if ( v9 )
      {
        if ( v9 == 12 && !*(_DWORD *)(v6 + 96) )
          *(_DWORD *)(v6 + 96) = *(_DWORD *)(*(_QWORD *)(v6 + 48) + 32LL);
      }
      else if ( !*(_DWORD *)(v6 + 88) )
      {
        *(_DWORD *)(v6 + 88) = *(_DWORD *)(*(_QWORD *)(v6 + 48) + 32LL);
      }
      *(_DWORD *)(v6 + 64) = v8 | 1;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
