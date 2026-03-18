/*
 * XREFs of _GetParent @ 0x1C00D8A00
 * Callers:
 *     _GetAncestor @ 0x1C00178E0 (_GetAncestor.c)
 *     NtUserGetAncestor @ 0x1C00D88F0 (NtUserGetAncestor.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
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
