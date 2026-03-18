/*
 * XREFs of ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x180077F00
 * Callers:
 *     ??_GCDisplay@@EEAAPEAXI@Z @ 0x1800778E0 (--_GCDisplay@@EEAAPEAXI@Z.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180147B04 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180147B90 (-EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ @ 0x180147C60 (-ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::ReleaseDDAHwRenderTarget(CDisplay *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = (__int64 *)((char *)this + 56);
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 248LL))(v2);
    ReleaseInterface<ID2D1Geometry>(v1);
  }
}
