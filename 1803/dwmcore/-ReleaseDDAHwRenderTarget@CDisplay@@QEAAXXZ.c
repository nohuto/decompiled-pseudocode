/*
 * XREFs of ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B784C
 * Callers:
 *     ??_GCDisplay@@EEAAPEAXI@Z @ 0x1800B7130 (--_GCDisplay@@EEAAPEAXI@Z.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x18016FF28 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18016FFE0 (-EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ @ 0x1801700B0 (-ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::ReleaseDDAHwRenderTarget(CDisplay *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = (__int64 *)((char *)this + 80);
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 296LL))(v2);
    ReleaseInterface<IRenderTargetBitmap>(v1);
  }
}
