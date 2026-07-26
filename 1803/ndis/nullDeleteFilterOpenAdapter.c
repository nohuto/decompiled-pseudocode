/*
 * XREFs of nullDeleteFilterOpenAdapter @ 0x1C0065320
 * Callers:
 *     ndisMKillOpen @ 0x1C0102BA4 (ndisMKillOpen.c)
 * Callees:
 *     XRemoveBindingFromLists @ 0x1C0013930 (XRemoveBindingFromLists.c)
 */

void __fastcall nullDeleteFilterOpenAdapter(__int64 *a1, __int64 a2)
{
  XRemoveBindingFromLists(a1, a2);
}
