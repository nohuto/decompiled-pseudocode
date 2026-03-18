/*
 * XREFs of ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x1801B4FFC
 * Callers:
 *     ??_GCDxHandleAdvancedDirectFlipBitmapRealization@@MEAAPEAXI@Z @ 0x1801B5070 (--_GCDxHandleAdvancedDirectFlipBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1801B5790 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::~CDxHandleAdvancedDirectFlipBitmapRealization(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  *(_QWORD *)this = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 13) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 14) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 53) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable';
  CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources(this);
  *((_BYTE *)this + 456) = 0;
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
}
