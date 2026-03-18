/*
 * XREFs of TxtpClearCache @ 0x140757CB0
 * Callers:
 *     ResFwFreeContext @ 0x140755078 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x140755A34 (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x140757A8C (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x140758C40 (BgpTxtDestroyRegion.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x140757D34 (BgpGxRectangleDestroy.c)
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
  dword_14033C590 = 0;
  return result;
}
