/*
 * XREFs of nullDeleteFilterOpenAdapter @ 0x1C00641A8
 * Callers:
 *     ndisMKillOpen @ 0x1C00FB908 (ndisMKillOpen.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall nullDeleteFilterOpenAdapter(__int64 a1, __int64 a2)
{
  XRemoveBindingFromLists(a1, a2);
}
