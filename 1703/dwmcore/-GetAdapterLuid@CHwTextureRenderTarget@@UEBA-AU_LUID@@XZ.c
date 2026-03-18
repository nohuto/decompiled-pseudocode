/*
 * XREFs of ?GetAdapterLuid@CHwTextureRenderTarget@@UEBA?AU_LUID@@XZ @ 0x1800493F0
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18007A7D8 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CHwTextureRenderTarget::GetAdapterLuid(CHwTextureRenderTarget *this, _QWORD *a2)
{
  struct _LUID result; // rax

  result = (struct _LUID)a2;
  *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 128LL) + 712LL);
  return result;
}
