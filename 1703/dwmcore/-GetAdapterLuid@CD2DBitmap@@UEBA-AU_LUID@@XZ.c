/*
 * XREFs of ?GetAdapterLuid@CD2DBitmap@@UEBA?AU_LUID@@XZ @ 0x18007AB30
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18007A7D8 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CD2DBitmap::GetAdapterLuid(CD2DBitmap *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 10) + 24LL) + 712LL);
  return (struct _LUID)a2;
}
