/*
 * XREFs of PopUpdateSingleThreadHeteroPolicies @ 0x1406CF490
 * Callers:
 *     <none>
 * Callees:
 *     KeUpdateThreadHeteroPolicy @ 0x140418980 (KeUpdateThreadHeteroPolicy.c)
 */

__int64 __fastcall PopUpdateSingleThreadHeteroPolicies(__int64 a1, __int64 a2)
{
  KeUpdateThreadHeteroPolicy(a2);
  return 0LL;
}
