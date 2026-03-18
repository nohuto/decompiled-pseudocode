/*
 * XREFs of ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18008A6CC
 * Callers:
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180089F90 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x18008A81C (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180150210 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180046690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmapCache::ClearCache(CD2DBitmapCache *this)
{
  __int64 i; // rsi
  __int64 v3; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * i);
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v3 + 16), (CD2DBitmapCache *)((char *)this + 24));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 20) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 56, 8u);
}
