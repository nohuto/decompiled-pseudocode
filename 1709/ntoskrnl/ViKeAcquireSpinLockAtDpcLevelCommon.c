/*
 * XREFs of ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1407BA150
 * Callers:
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x1407B8D50 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x1407B8DA0 (VerifierKeAcquireSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1407A6D9C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 */

__int64 __fastcall ViKeAcquireSpinLockAtDpcLevelCommon(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 v3; // dl

  ++dword_14036A0C8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress(BugCheckParameter2, 8uLL);
  if ( (MmVerifierData & 2) != 0 && KeGetCurrentIrql() < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, v3, BugCheckParameter2, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeAcquireSpinLockAtDpcLevel)(BugCheckParameter2);
}
