/*
 * XREFs of ?GetD2DBitmap@CColorKeyBitmap@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801D1660
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18008A8A0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 */

__int64 __fastcall CColorKeyBitmap::GetD2DBitmap(__int64 a1, __int64 a2, __m128i *a3, char a4, _QWORD *a5)
{
  signed int Bitmap; // eax
  unsigned int v6; // ebx

  Bitmap = CD2DBitmapCache::GetBitmap(
             a1 - 128,
             *(struct _LUID *)a2,
             *(_DWORD *)(a2 + 8),
             *(_BYTE *)(a2 + 16),
             a3,
             a4,
             a5);
  v6 = Bitmap;
  if ( Bitmap < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Bitmap, 0x79u);
  return v6;
}
