/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevel @ 0x140826A80
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140813F1C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLockFromDpcLevel(ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 v3; // dl
  void *retaddr; // [rsp+38h] [rbp+0h]

  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 0x800) != 0 && CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, v3, BugCheckParameter3, 0LL);
  VfDeadlockReleaseResource(BugCheckParameter3, 5LL, KeGetCurrentThread(), retaddr);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeReleaseSpinLockFromDpcLevel)(BugCheckParameter3);
}
