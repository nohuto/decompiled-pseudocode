/*
 * XREFs of ?ReleaseDeviceBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180055914
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJII@Z @ 0x180055214 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJII@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180055960 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180163830 (-NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18004B9C0 (--$ReleaseInterface@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800B2230 (-RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::ReleaseDeviceBitmapResources(CGdiSpriteBitmap *this)
{
  CMILCOMBase **v1; // rdi
  __int64 v3; // rcx

  v1 = (CMILCOMBase **)((char *)this + 384);
  v3 = *((_QWORD *)this + 48);
  if ( v3 )
  {
    CBitmapOfDeviceBitmaps::RemoveResourceNotifier(
      (CBitmapOfDeviceBitmaps *)(v3 + 224),
      (CGdiSpriteBitmap *)((char *)this + 96));
    ReleaseInterface<CBitmapOfDeviceBitmaps>(v1);
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
  }
}
