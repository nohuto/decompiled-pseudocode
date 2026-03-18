/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x140777970
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLockFromDpcLevelNoReboot(unsigned __int64 a1)
{
  unsigned __int8 v2; // dl

  VfUtilCheckKernelAddress(a1, 8LL);
  if ( KeGetCurrentIrql() < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, v2, a1, 0LL);
  return ((__int64 (__fastcall *)(unsigned __int64))pXdvKeReleaseSpinLockFromDpcLevel)(a1);
}
