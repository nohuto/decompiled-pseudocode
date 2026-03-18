/*
 * XREFs of TxtpClearCache @ 0x1407CFF14
 * Callers:
 *     AnFwpDisableProgressTimer @ 0x1407CE49C (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x1407CF358 (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x1407CFA7C (AnFwDisplayProgressIndicator.c)
 *     ResFwFreeContext @ 0x1407D3A5C (ResFwFreeContext.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x1407CFF98 (BgpGxRectangleDestroy.c)
 */

__int64 TxtpClearCache()
{
  _QWORD *v0; // rbx
  __int64 result; // rax

  v0 = TxtpTextCache;
  result = *(_QWORD *)TxtpTextCache;
  if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(result + 8) != TxtpTextCache )
    __fastfail(3u);
  while ( 1 )
  {
    TxtpTextCache = (_UNKNOWN *)result;
    *(_QWORD *)(result + 8) = &TxtpTextCache;
    if ( v0 == &TxtpTextCache )
      break;
    BgpGxRectangleDestroy(v0[6]);
    BgpFwFreeMemory((__int64)v0);
    v0 = TxtpTextCache;
    result = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(result + 8) != TxtpTextCache )
      __fastfail(3u);
  }
  dword_140354F30 = 0;
  return result;
}
