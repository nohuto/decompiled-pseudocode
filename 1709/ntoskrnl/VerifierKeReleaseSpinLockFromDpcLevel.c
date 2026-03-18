/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevel @ 0x1407B97A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1407A6D9C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     VfDeadlockReleaseResource @ 0x1407BB6AC (VfDeadlockReleaseResource.c)
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
