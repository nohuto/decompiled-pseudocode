/*
 * XREFs of GetOldRedirectionBitmap @ 0x1C008A5F8
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x1C008A5A0 (DeleteOldRedirectionBitmap.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

__int64 __fastcall GetOldRedirectionBitmap(__int64 a1)
{
  __int64 Prop; // rax
  __int64 v2; // r11

  Prop = GetProp(a1, atomLayer, 1);
  if ( Prop )
    return *(_QWORD *)(Prop + 8);
  return v2;
}
