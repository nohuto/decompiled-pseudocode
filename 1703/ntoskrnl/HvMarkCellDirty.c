/*
 * XREFs of HvMarkCellDirty @ 0x1404BFD4C
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x14006ECBC (CmpGetSecurityDescriptorNode.c)
 *     CmpCreateTombstone @ 0x1401E0B20 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2)
{
  return HvpMarkCellDirty(a1, a2);
}
