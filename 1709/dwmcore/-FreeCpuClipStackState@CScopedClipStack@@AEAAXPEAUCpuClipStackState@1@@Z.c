/*
 * XREFs of ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x18011D88C
 * Callers:
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180031C44 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x18011D840 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScopedClipStack::FreeCpuClipStackState(CScopedClipStack *this, CRegionShape **a2)
{
  CRegionShape *v3; // rcx

  CShapePtr::Release(a2);
  v3 = a2[11];
  if ( v3 )
    (**(void (__fastcall ***)(CRegionShape *, __int64))v3)(v3, 1LL);
}
