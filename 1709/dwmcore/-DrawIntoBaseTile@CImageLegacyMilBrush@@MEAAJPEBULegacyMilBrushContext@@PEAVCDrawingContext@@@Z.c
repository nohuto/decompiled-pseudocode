/*
 * XREFs of ?DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z @ 0x1801817A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180041CEC (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::DrawIntoBaseTile(
        CImageLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CDrawingContext *a3)
{
  signed int v5; // eax
  unsigned int v6; // ebx
  signed int v7; // eax

  v5 = CDrawingContext::ApplyRenderStateInternal(a3, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x1F0u);
  }
  else
  {
    v7 = CDrawingContext::DrawBitmap(
           a3,
           (struct IImageSource *)((*((_QWORD *)this + 66) + 8LL) & -(__int64)(*((_QWORD *)this + 66) != 0LL)),
           0);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1F8u);
    else
      *((_DWORD *)this + 94) = 1;
  }
  return v6;
}
