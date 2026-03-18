/*
 * XREFs of HUBHSM_ResettingHubOnResume @ 0x1C0007C40
 * Callers:
 *     <none>
 * Callees:
 *     HUBPARENT_ResetHub @ 0x1C0006C80 (HUBPARENT_ResetHub.c)
 */

__int64 __fastcall HUBHSM_ResettingHubOnResume(__int64 a1)
{
  HUBPARENT_ResetHub(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
