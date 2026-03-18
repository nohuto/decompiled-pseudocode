/*
 * XREFs of ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x18007AA60
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18007A7D8 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     ?IsHardwareProtected@CD2DBitmap@@W7EBA_NXZ @ 0x1800D5B10 (-IsHardwareProtected@CD2DBitmap@@W7EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DBitmap::IsHardwareProtected(CD2DBitmap *this)
{
  return (*((_DWORD *)this + 26) & 0x80000) != 0;
}
