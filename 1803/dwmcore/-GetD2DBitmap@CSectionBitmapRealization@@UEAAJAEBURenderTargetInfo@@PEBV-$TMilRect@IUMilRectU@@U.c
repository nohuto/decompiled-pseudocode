/*
 * XREFs of ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180213180
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x180081434 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180179BD0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetD2DBitmap(__int64 a1, __int64 a2, __m128i *a3, char a4, _QWORD *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  int Bitmap; // eax

  *a5 = 0LL;
  v9 = CSectionBitmapRealization::EnsureBitmapCacheSource((CSectionBitmapRealization *)(a1 - 144));
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACDB0, 1u, v9, 0xBCu);
  }
  else if ( *(_QWORD *)(a1 + 288) )
  {
    Bitmap = CD2DBitmapCache::GetBitmap(
               a1 - 128,
               *(struct _LUID *)a2,
               *(_DWORD *)(a2 + 8),
               *(_BYTE *)(a2 + 16),
               a3,
               a4,
               a5);
    v10 = Bitmap;
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACDB0, 1u, Bitmap, 0xC5u);
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return v10;
}
