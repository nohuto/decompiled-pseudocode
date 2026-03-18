/*
 * XREFs of ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18001D898
 * Callers:
 *     ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x18001D854 (-SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@_N@Z @ 0x1801614AC (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@.c)
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x1801C22C0 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801E6D84 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyMilBrushRealizer::SetRealizedBrush(
        CLegacyMilBrushRealizer *this,
        struct CMILBrush *a2,
        const struct PixelFormatInfo *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rcx

  v5 = *((_QWORD *)this + 11);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 11) = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct CMILBrush *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *((_QWORD *)this + 11);
    if ( v7 )
    {
      if ( a3 )
      {
        *(_QWORD *)(v7 + 8) = *(_QWORD *)a3;
        *(_DWORD *)(v7 + 16) = *((_DWORD *)a3 + 2);
      }
      else
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
      }
    }
  }
}
