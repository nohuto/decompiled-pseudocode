/*
 * XREFs of ?Release@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800541D0
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800A1F10 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WBA@EAAKXZ @ 0x1800D60A0 (-Release@CBitmapOfDeviceBitmaps@@WBA@EAAKXZ.c)
 *     ?Release@CMILBrushBitmap@@WBI@EAAKXZ @ 0x1800D60B0 (-Release@CMILBrushBitmap@@WBI@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WCA@EAAKXZ @ 0x1800D60C0 (-Release@CBitmapOfDeviceBitmaps@@WCA@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WCI@EAAKXZ @ 0x1800D60D0 (-Release@CBitmapOfDeviceBitmaps@@WCI@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WOA@EAAKXZ @ 0x1800D60E0 (-Release@CBitmapOfDeviceBitmaps@@WOA@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WDA@EAAKXZ @ 0x1800D67F0 (-Release@CBitmapOfDeviceBitmaps@@WDA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Release(CBitmapOfDeviceBitmaps *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CBitmapOfDeviceBitmaps *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}
