/*
 * XREFs of BgpTxtClearRegion @ 0x140841368
 * Callers:
 *     BgpTxtDisplayString @ 0x140841398 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x1401651B0 (BgpGxDrawRectangle.c)
 */

__int64 __fastcall BgpTxtClearRegion(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a1 && (*(_DWORD *)(a1 + 64) & 1) != 0 )
    return BgpGxDrawRectangle(*(_QWORD *)(a1 + 24), a1, a3);
  else
    return 3221225485LL;
}
