/*
 * XREFs of ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1800A7630
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180165000 (-Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180047630 (-IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800A8680 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, struct CResource *a2)
{
  bool (__fastcall *v4)(__int64, int); // rax
  bool v5; // al
  int v6; // eax
  unsigned int v7; // ebx

  v4 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
  if ( v4 == CCachedVisualImage::IsOfType )
    v5 = CCachedVisualImage::IsOfType((__int64)a2, 60);
  else
    v5 = v4((__int64)a2, 60);
  if ( v5 )
  {
    v6 = CDrawingContext::DrawBitmap(
           this,
           (struct IBitmapResource *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != (struct CResource *)16)),
           0);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x128Fu);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v7;
}
