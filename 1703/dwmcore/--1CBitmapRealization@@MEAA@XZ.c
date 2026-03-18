/*
 * XREFs of ??1CBitmapRealization@@MEAA@XZ @ 0x180036FBC
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18007A318 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??_ECBitmapRealization@@MEAAPEAXI@Z @ 0x18015A990 (--_ECBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1801B47F0 (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1801B65E8 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x180195C18 (-RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 */

void __fastcall CBitmapRealization::~CBitmapRealization(CBitmapRealization *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 13) = &CBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 14) = &CBitmapRealization::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 44);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( (*((_DWORD *)this + 59) & 0x100) != 0 )
    CD3DDeviceManager::RemoveHwProtectedEntity(
      (CD3DDeviceManager *)&g_D3DDeviceManager,
      *(struct _LUID *)((char *)this + 256));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 360);
  FastRegion::CRegion::FreeMemory((CBitmapRealization *)((char *)this + 280));
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
