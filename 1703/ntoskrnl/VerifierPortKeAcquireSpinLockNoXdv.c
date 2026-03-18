/*
 * XREFs of VerifierPortKeAcquireSpinLockNoXdv @ 0x140777F80
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 */

KIRQL __fastcall VerifierPortKeAcquireSpinLockNoXdv(PKSPIN_LOCK SpinLock, KIRQL *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  KIRQL result; // al

  ++dword_14034F668;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a3, 132LL);
  VfUtilCheckKernelAddress((unsigned __int64)SpinLock, 8LL);
  LOBYTE(v5) = 2;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  result = KeAcquireSpinLockRaiseToDpc(SpinLock);
  *a2 = result;
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
