/*
 * XREFs of ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x180213C2C
 * Callers:
 *     ??_GCDxHandleAdvancedDirectFlipBitmapRealization@@MEAAPEAXI@Z @ 0x180213CA0 (--_GCDxHandleAdvancedDirectFlipBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x180214450 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::~CDxHandleAdvancedDirectFlipBitmapRealization(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  *(_QWORD *)this = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 51) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable';
  CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources(this);
  *((_BYTE *)this + 440) = 0;
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
}
