/*
 * XREFs of ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x180041DC0
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18004A92C (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180054480 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 * Callees:
 *     ?IsOpaque@CMILBrushSolid@@UEBA_NXZ @ 0x180041E20 (-IsOpaque@CMILBrushSolid@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMILBrush::SetDefaultRealizationPixelFormat(CMILBrush *this)
{
  __int64 (*v2)(void); // rax
  char IsOpaque; // al

  v2 = *(__int64 (**)(void))(*(_QWORD *)this + 40LL);
  if ( (char *)v2 == (char *)CMILBrushSolid::IsOpaque )
    IsOpaque = CMILBrushSolid::IsOpaque(this);
  else
    IsOpaque = v2();
  if ( IsOpaque )
  {
    *((_DWORD *)this + 2) = 88;
    *((_DWORD *)this + 3) = 3;
  }
  else
  {
    *((_DWORD *)this + 2) = 87;
    *((_DWORD *)this + 3) = 1;
  }
  *((_DWORD *)this + 4) = 0;
}
