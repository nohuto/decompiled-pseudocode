/*
 * XREFs of ?GetRects@?$CMergedRectBase@$01@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180150DE4
 * Callers:
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x18014EAC8 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x180151BAC (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
 */

bool __fastcall CMergedRectBase<2>::GetRects(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rbx
  int v6; // r9d
  bool result; // al

  v3 = a2;
  LOBYTE(a2) = 1;
  CMergedRectBase<2>::Optimize(a1, a2);
  v6 = *(_DWORD *)(a1 + 40);
  *v3 = v6;
  result = v6 != 0;
  *a3 = a1;
  return result;
}
