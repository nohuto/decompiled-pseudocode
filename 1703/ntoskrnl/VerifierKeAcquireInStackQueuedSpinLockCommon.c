/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140776C34
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x140776AE0 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockNoReboot @ 0x140776DB0 (VerifierKeAcquireInStackQueuedSpinLockNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockCommon(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax

  ++dword_14034F668;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress(a1, 8LL);
  VfUtilCheckKernelAddress(a3, 24LL);
  LOBYTE(v5) = 2;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  result = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64))pXdvKeAcquireInStackQueuedSpinLock)(a1, a3);
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
