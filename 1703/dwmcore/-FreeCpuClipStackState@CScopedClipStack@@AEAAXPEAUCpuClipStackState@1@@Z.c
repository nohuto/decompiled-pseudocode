/*
 * XREFs of ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1801348DC
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x1800932E0 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x180134954 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScopedClipStack::FreeCpuClipStackState(CScopedClipStack *this, CRectanglesShape **a2)
{
  CRectanglesShape *v3; // rcx

  CShapePtr::Release(a2);
  v3 = a2[11];
  if ( v3 )
    (**(void (__fastcall ***)(CRectanglesShape *, __int64))v3)(v3, 1LL);
}
