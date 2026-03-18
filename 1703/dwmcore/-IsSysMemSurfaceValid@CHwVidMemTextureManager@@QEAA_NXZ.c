/*
 * XREFs of ?IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ @ 0x1801A306C
 * Callers:
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x1801A30A0 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 *     ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x1801A34CC (-ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwVidMemTextureManager::IsSysMemSurfaceValid(CHwVidMemTextureManager *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1) != 0;
  return v2;
}
