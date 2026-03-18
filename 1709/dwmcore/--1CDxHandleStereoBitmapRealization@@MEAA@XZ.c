/*
 * XREFs of ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1801D2BE0
 * Callers:
 *     ??_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z @ 0x1801D2C40 (--_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x18008A81C (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1801D3170 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::~CDxHandleStereoBitmapRealization(
        CDxHandleStereoBitmapRealization *this)
{
  *(_QWORD *)this = &CDxHandleStereoBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleStereoBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CDxHandleStereoBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDxHandleStereoBitmapRealization::`vftable'{for `IBitmapRealization'};
  CDxHandleStereoBitmapRealization::ReleaseD2DBitmap(this);
  CD2DBitmapCache::~CD2DBitmapCache((CDxHandleStereoBitmapRealization *)((char *)this + 416));
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
}
