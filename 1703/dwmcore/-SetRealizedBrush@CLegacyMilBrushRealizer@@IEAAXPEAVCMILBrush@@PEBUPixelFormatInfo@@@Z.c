/*
 * XREFs of ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18004A840
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18004AE10 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x1800A76A8 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@.c)
 *     ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x1800C576C (-SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180054480 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyMilBrushRealizer::SetRealizedBrush(
        CLegacyMilBrushRealizer *this,
        struct CMILBrush *a2,
        const struct PixelFormatInfo *a3)
{
  __int64 v5; // rcx
  CMILBrushBitmap *v7; // rcx
  void (*v8)(void); // rax

  v5 = *((_QWORD *)this + 11);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 11) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CMILBrush *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = (CMILBrushBitmap *)*((_QWORD *)this + 11);
  if ( v7 )
  {
    if ( a3 )
    {
      *((_QWORD *)v7 + 1) = *(_QWORD *)a3;
      *((_DWORD *)v7 + 4) = *((_DWORD *)a3 + 2);
    }
    else
    {
      v8 = *(void (**)(void))(*(_QWORD *)v7 + 48LL);
      if ( (char *)v8 == (char *)CMILBrushBitmap::SetDefaultRealizationPixelFormat )
        CMILBrushBitmap::SetDefaultRealizationPixelFormat(v7);
      else
        v8();
    }
  }
}
