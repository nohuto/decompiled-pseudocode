/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x14077759C
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x140777560 (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot @ 0x140777600 (VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpcCommon(ULONG_PTR a1)
{
  unsigned __int8 CurrentIrql; // dl
  __int16 v4; // [rsp+30h] [rbp-8h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && (v4 & 0x200) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, a1, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeReleaseInStackQueuedSpinLockForDpc)(a1);
}
