/*
 * XREFs of ?GetD2DBitmap@CD2DBitmapCacheSourceRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180216430
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180179BD0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 */

__int64 __fastcall CD2DBitmapCacheSourceRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        char a4,
        _QWORD *a5)
{
  return CD2DBitmapCache::GetBitmap(a1 - 128, *(struct _LUID *)a2, *(_DWORD *)(a2 + 8), *(_BYTE *)(a2 + 16), a3, a4, a5);
}
