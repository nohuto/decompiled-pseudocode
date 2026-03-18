/*
 * XREFs of _IsChild @ 0x1C0115B04
 * Callers:
 *     xxxDoPaint @ 0x1C004D4FC (xxxDoPaint.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     CheckPwndFilter @ 0x1C00CD134 (CheckPwndFilter.c)
 *     _SelectPalette @ 0x1C00E6528 (_SelectPalette.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
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
