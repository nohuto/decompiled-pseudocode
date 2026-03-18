/*
 * XREFs of _GetParent @ 0x1C00DFF54
 * Callers:
 *     NtUserGetAncestor @ 0x1C00DFE40 (NtUserGetAncestor.c)
 *     _GetAncestor @ 0x1C0113990 (_GetAncestor.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetParent(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 )
    return *(_QWORD *)(a1 + 104);
  return *(_QWORD *)(a1 + 120);
}
