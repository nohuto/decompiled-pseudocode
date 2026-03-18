/*
 * XREFs of ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18004A8D0
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ??_ECBrushResourceRealizer@@UEAAPEAXI@Z @ 0x18004AD60 (--_ECBrushResourceRealizer@@UEAAPEAXI@Z.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x1800A76A8 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@.c)
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800A87D0 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ??_G?$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z @ 0x1800C5730 (--_G-$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z.c)
 *     ??_GCLegacyMilBrushRealizer@@MEAAPEAXI@Z @ 0x180176A00 (--_GCLegacyMilBrushRealizer@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(CLegacyMilBrushRealizer *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CLegacyMilBrushRealizer::`vftable';
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *((_QWORD *)this + 5) = &CMILBrushSolid::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 8) = &CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  *((_QWORD *)this + 2) = &CMILCOMBase::`vftable';
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
