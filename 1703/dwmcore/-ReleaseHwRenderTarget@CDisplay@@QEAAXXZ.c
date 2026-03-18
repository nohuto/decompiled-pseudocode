/*
 * XREFs of ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B7934
 * Callers:
 *     ??_GCDisplay@@EEAAPEAXI@Z @ 0x1800B77F0 (--_GCDisplay@@EEAAPEAXI@Z.c)
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJAEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B7858 (-EnsureHwRenderTarget@CDisplay@@QEAAJAEBU_GUID@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization.c)
 *     ?ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ @ 0x1800CD7D0 (-ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::ReleaseHwRenderTarget(CDisplay *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = (__int64 *)((char *)this + 48);
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 240LL))(v2);
    ReleaseInterface<ID2D1Geometry>(v1);
  }
}
