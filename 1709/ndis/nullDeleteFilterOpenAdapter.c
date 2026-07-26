/*
 * XREFs of nullDeleteFilterOpenAdapter @ 0x1C00647D8
 * Callers:
 *     ndisMKillOpen @ 0x1C00FF208 (ndisMKillOpen.c)
 * Callees:
 *     XRemoveBindingFromLists @ 0x1C0002104 (XRemoveBindingFromLists.c)
 */

void __fastcall nullDeleteFilterOpenAdapter(__int64 a1, __int64 a2)
{
  XRemoveBindingFromLists(a1, a2);
}
