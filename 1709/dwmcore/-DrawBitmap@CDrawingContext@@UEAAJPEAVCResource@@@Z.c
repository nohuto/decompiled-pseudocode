/*
 * XREFs of ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18003CFD0
 * Callers:
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV?$span@$$CBE@gsl@@@Z @ 0x18001DD7C (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV-$span@$$CBE@gsl@@@Z.c)
 *     ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180175F20 (-Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180041CEC (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008D8E0 (-IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, struct CResource *a2)
{
  __int64 (__fastcall *v4)(struct CResource *, __int64); // rax
  char v5; // al
  int v6; // eax
  unsigned int v7; // ebx

  v4 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v4 == (char *)CCachedVisualImage::IsOfType )
    v5 = CCachedVisualImage::IsOfType(a2, 72LL);
  else
    v5 = v4(a2, 72LL);
  if ( v5 )
  {
    v6 = CDrawingContext::DrawBitmap(
           this,
           (struct IImageSource *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != (struct CResource *)16)));
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1076u);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v7;
}
