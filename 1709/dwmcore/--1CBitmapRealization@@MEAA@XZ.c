/*
 * XREFs of ??1CBitmapRealization@@MEAA@XZ @ 0x18002B16C
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18004D254 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x180087DA4 (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??_GCD2DBitmapCacheSourceRealization@@UEAAPEAXI@Z @ 0x180088620 (--_GCD2DBitmapCacheSourceRealization@@UEAAPEAXI@Z.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1801D333C (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801A5C6C (-RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 */

void __fastcall CBitmapRealization::~CBitmapRealization(CBitmapRealization *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 48);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( (*((_DWORD *)this + 67) & 0x100) != 0 )
    CD3DDeviceManager::RemoveHwProtectedEntity(
      (CD3DDeviceManager *)&g_D3DDeviceManager,
      *(struct _LUID *)((char *)this + 288));
  FastRegion::CRegion::FreeMemory((CBitmapRealization *)((char *)this + 312));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 96);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
