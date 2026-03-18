/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1407B9830
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1407A6D9C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLockFromDpcLevelNoReboot(ULONG_PTR BugCheckParameter3)
{
  __int64 CurrentIrql; // rdx

  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && (unsigned __int8)CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, (unsigned __int8)CurrentIrql, BugCheckParameter3, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvKeReleaseSpinLockFromDpcLevel)(
           BugCheckParameter3,
           CurrentIrql);
}
