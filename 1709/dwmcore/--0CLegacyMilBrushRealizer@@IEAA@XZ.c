/*
 * XREFs of ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18007D8B8
 * Callers:
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@_N@Z @ 0x18003D474 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@.c)
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18003F820 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800408C0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18007DAF0 (-GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801AD898 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CLegacyMilBrushRealizer *__fastcall CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(CLegacyMilBrushRealizer *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CLegacyMilBrushRealizer::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)((char *)this + 52) = 3LL;
  *((_QWORD *)this + 2) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 5) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 8) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `IMILBrushSolid'};
  *((_QWORD *)this + 11) = 0LL;
  v2 = (__int64 *)((char *)this + 40);
  v3 = *v2;
  *(_OWORD *)((char *)this + 72) = 0LL;
  (*(void (__fastcall **)(__int64 *))(v3 + 48))(v2);
  return this;
}
