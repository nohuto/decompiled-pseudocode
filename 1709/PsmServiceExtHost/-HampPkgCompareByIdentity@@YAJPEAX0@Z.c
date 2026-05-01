/*
 * XREFs of ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180046610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampPkgCompareByIdentity(struct _HAM_PACKAGE_INFO *a1, char *a2)
{
  return HampPkgCompareInfo(a1, (struct _HAM_PACKAGE_INFO *)(a2 + 40));
}
