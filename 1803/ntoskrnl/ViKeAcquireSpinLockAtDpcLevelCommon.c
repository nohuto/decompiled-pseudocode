/*
 * XREFs of ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1408274B0
 * Callers:
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140825FF0 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x140826040 (VerifierKeAcquireSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140813F1C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 */

__int64 __fastcall ViKeAcquireSpinLockAtDpcLevelCommon(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 v3; // dl

  ++dword_1403AD168;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 148LL);
  VfUtilCheckKernelAddress(BugCheckParameter2, 8uLL);
  if ( (MmVerifierData & 2) != 0 && KeGetCurrentIrql() < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, v3, BugCheckParameter2, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeAcquireSpinLockAtDpcLevel)(BugCheckParameter2);
}
