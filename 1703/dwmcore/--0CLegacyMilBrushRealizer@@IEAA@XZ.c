/*
 * XREFs of ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18004A92C
 * Callers:
 *     ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18004B100 (-GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x1800A76A8 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@.c)
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800A87D0 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800A99D0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 * Callees:
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x180041DC0 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CLegacyMilBrushRealizer *__fastcall CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(CLegacyMilBrushRealizer *this)
{
  CMILBrush *v2; // rcx
  __int64 v3; // rax
  void (*v4)(void); // rax

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
  v2 = (CLegacyMilBrushRealizer *)((char *)this + 40);
  v3 = *(_QWORD *)v2;
  *(_OWORD *)((char *)this + 72) = 0LL;
  v4 = *(void (**)(void))(v3 + 48);
  if ( (char *)v4 == (char *)CMILBrush::SetDefaultRealizationPixelFormat )
    CMILBrush::SetDefaultRealizationPixelFormat(v2);
  else
    v4();
  return this;
}
