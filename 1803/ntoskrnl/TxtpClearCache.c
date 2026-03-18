/*
 * XREFs of TxtpClearCache @ 0x14083C4B0
 * Callers:
 *     ResFwFreeContext @ 0x14083B078 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x14083C60C (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x14083D1D0 (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x14083D254 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x14083D230 (BgpGxRectangleDestroy.c)
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
  dword_140397870 = 0;
  return result;
}
