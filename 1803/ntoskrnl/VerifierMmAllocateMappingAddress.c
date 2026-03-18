/*
 * XREFs of VerifierMmAllocateMappingAddress @ 0x140831170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfAllocPoolNotification @ 0x140824784 (VfAllocPoolNotification.c)
 *     VfFaultsInjectResourceFailure @ 0x140824DA4 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmAllocateMappingAddress(__int64 a1, unsigned int a2)
{
  __int64 v5; // rbx

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v5 = ((__int64 (__fastcall *)(__int64, _QWORD))pXdvMmAllocateMappingAddress)(a1, a2);
  VfAllocPoolNotification();
  return v5;
}
