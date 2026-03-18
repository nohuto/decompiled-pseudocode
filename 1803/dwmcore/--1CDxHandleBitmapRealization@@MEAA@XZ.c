/*
 * XREFs of ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18004575C
 * Callers:
 *     ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x180045720 (--_ECDxHandleBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x180213C2C (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x180214A90 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180045800 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 */

void __fastcall CDxHandleBitmapRealization::~CDxHandleBitmapRealization(CDxHandleBitmapRealization *this)
{
  bool v1; // zf
  void *v3; // rcx

  v1 = *((_BYTE *)this + 404) == 0;
  *(_QWORD *)this = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CDxHandleBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDxHandleBitmapRealization::`vftable'{for `IBitmapRealization'};
  if ( !v1 )
  {
    v3 = (void *)*((_QWORD *)this + 35);
    if ( v3 )
      CloseHandle(v3);
  }
  CDxHandleBitmapRealization::ReleaseD2DBitmap(this);
  CBitmapRealization::~CBitmapRealization(this);
}
