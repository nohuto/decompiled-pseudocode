/*
 * XREFs of ??0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z @ 0x1800CC720
 * Callers:
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800CC310 (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x180081C6C (--0CBitmap@@QEAA@XZ.c)
 *     ??0?$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ @ 0x1800CC93C (--0-$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ.c)
 */

CBitmapOfDeviceBitmaps *__fastcall CBitmapOfDeviceBitmaps::CBitmapOfDeviceBitmaps(
        CBitmapOfDeviceBitmaps *this,
        int a2,
        int a3,
        const struct PixelFormatInfo *a4)
{
  CBitmap::CBitmap(this);
  *((_QWORD *)this + 29) = (char *)this + 264;
  *((_QWORD *)this + 30) = (char *)this + 264;
  *((_DWORD *)this + 62) = 2;
  *(_QWORD *)((char *)this + 252) = 2LL;
  *(_QWORD *)this = &CBitmapOfDeviceBitmaps::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CBitmapOfDeviceBitmaps::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 28) = &CBitmapOfDeviceBitmaps::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 35) = &CBitmapOfDeviceBitmaps::`vftable'{for `IDeviceResourceNotify'};
  DynArrayIA<CBitmapOfDeviceBitmaps::DeviceBitmapInfo,2,1>::DynArrayIA<CBitmapOfDeviceBitmaps::DeviceBitmapInfo,2,1>((char *)this + 312);
  *((_DWORD *)this + 42) = a2;
  *((_DWORD *)this + 43) = a3;
  *((_QWORD *)this + 23) = *(_QWORD *)a4;
  *((_DWORD *)this + 48) = *((_DWORD *)a4 + 2);
  *((_DWORD *)this + 44) = 1119879168;
  *((_DWORD *)this + 45) = 1119879168;
  return this;
}
