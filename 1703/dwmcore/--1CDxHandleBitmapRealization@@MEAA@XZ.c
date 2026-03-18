/*
 * XREFs of ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18007A318
 * Callers:
 *     ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x18007A380 (--_ECDxHandleBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x1801B4FFC (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1801B5EC0 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x18007A0A0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 */

void __fastcall CDxHandleBitmapRealization::~CDxHandleBitmapRealization(CDxHandleBitmapRealization *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 13) = &CDxHandleBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 14) = &CBitmapRealization::`vftable'{for `IDeviceResource'};
  v2 = (void *)*((_QWORD *)this + 31);
  if ( v2 )
    CloseHandle(v2);
  CDxHandleBitmapRealization::ReleaseD2DBitmap(this);
  CBitmapRealization::~CBitmapRealization(this);
}
