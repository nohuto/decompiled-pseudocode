/*
 * XREFs of ?DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z @ 0x1801B2960
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006EC50 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 */

__int64 __fastcall CImageLegacyMilBrush::DrawIntoBaseTile(
        CImageLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CDrawingContext *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax

  v5 = CDrawingContext::ApplyRenderStateInternal(a3, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1F0u);
  }
  else
  {
    v7 = CDrawingContext::DrawBitmap(
           a3,
           (struct IImageSource *)((*((_QWORD *)this + 66) + 8LL) & -(__int64)(*((_QWORD *)this + 66) != 0LL)),
           0);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1F8u);
    else
      *((_DWORD *)this + 94) = 1;
  }
  return v6;
}
