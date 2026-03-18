/*
 * XREFs of ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B73B4
 * Callers:
 *     ??_GCDisplay@@EEAAPEAXI@Z @ 0x1800B7130 (--_GCDisplay@@EEAAPEAXI@Z.c)
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B72E0 (-EnsureHwRenderTarget@CDisplay@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_.c)
 *     ?ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ @ 0x1800D78A0 (-ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::ReleaseHwRenderTarget(CDisplay *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = (__int64 *)((char *)this + 72);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 296LL))(v2);
    ReleaseInterface<IRenderTargetBitmap>(v1);
  }
}
