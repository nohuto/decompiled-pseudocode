/*
 * XREFs of ??1CD2DBitmapCache@@MEAA@XZ @ 0x180077B20
 * Callers:
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x180049740 (--1CBitmapRealization@@MEAA@XZ.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18008A4D8 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x180179800 (--_ECD2DBitmapCache@@MEAAPEAXI@Z.c)
 *     ??1CColorKeyBitmapRealization@@MEAA@XZ @ 0x180213424 (--1CColorKeyBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x180214A90 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x1800778FC (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmapCache::~CD2DBitmapCache(CD2DBitmapCache *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  CD2DBitmapCache::ClearCache(this);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 56);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
