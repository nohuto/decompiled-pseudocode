/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1407B9430
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x1407B93F0 (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot @ 0x1407B9490 (VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpcCommon(ULONG_PTR BugCheckParameter3)
{
  __int64 CurrentIrql; // rdx

  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && (unsigned __int8)CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, (unsigned __int8)CurrentIrql, BugCheckParameter3, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvKeReleaseInStackQueuedSpinLockForDpc)(
           BugCheckParameter3,
           CurrentIrql);
}
