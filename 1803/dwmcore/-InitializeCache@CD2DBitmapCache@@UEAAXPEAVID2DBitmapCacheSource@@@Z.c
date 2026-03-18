/*
 * XREFs of ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180077A60
 * Callers:
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180045800 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180045860 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x1800778FC (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmapCache::InitializeCache(CD2DBitmapCache *this, struct ID2DBitmapCacheSource *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void (__fastcall ***v7)(_QWORD, GUID *, char *); // rcx

  CD2DBitmapCache::ClearCache((CD2DBitmapCache *)((char *)this - 16));
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 4) = 0LL;
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = (void (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 2);
    if ( v7 )
      (**v7)(v7, &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5, (char *)this + 24);
  }
}
