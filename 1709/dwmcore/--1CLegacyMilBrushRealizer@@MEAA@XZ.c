/*
 * XREFs of ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18007D85C
 * Callers:
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@_N@Z @ 0x18003D474 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@.c)
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18003F820 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ??_ECBrushResourceRealizer@@UEAAPEAXI@Z @ 0x18007B920 (--_ECBrushResourceRealizer@@UEAAPEAXI@Z.c)
 *     ??_G?$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z @ 0x18007D740 (--_G-$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z.c)
 *     ??_GCLegacyMilBrushRealizer@@MEAAPEAXI@Z @ 0x18017DBC0 (--_GCLegacyMilBrushRealizer@@MEAAPEAXI@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801AD898 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
