/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevel @ 0x1407778E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLockFromDpcLevel(unsigned __int64 a1)
{
  unsigned __int8 v2; // dl
  void *retaddr; // [rsp+38h] [rbp+0h]

  VfUtilCheckKernelAddress(a1, 8LL);
  if ( (MmVerifierData & 0x20000) == 0 && KeGetCurrentIrql() < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, v2, a1, 0LL);
  VfDeadlockReleaseResource(a1, 5LL, KeGetCurrentThread(), retaddr);
  return ((__int64 (__fastcall *)(unsigned __int64))pXdvKeReleaseSpinLockFromDpcLevel)(a1);
}
