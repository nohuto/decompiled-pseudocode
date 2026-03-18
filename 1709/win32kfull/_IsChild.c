/*
 * XREFs of _IsChild @ 0x1C011DA54
 * Callers:
 *     xxxDoPaint @ 0x1C009FBB4 (xxxDoPaint.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     CheckPwndFilter @ 0x1C00CFA74 (CheckPwndFilter.c)
 *     _SelectPalette @ 0x1C00F8348 (_SelectPalette.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChild(__int64 a1, __int64 a2)
{
  do
  {
    if ( !a2 || (*(_BYTE *)(a2 + 71) & 0xC0) != 0x40 )
      return 0LL;
    a2 = *(_QWORD *)(a2 + 104);
  }
  while ( a1 != a2 );
  return 1LL;
}
