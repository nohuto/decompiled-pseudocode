/*
 * XREFs of EngMulDiv @ 0x1C0049E60
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C00281A0 (NtUserGetDpiForMonitor.c)
 *     GreGetDeviceCaps @ 0x1C002A9C0 (GreGetDeviceCaps.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C004704C (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0047210 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     ScaleDPIPt @ 0x1C0049CF8 (ScaleDPIPt.c)
 *     ScaleDPIRect @ 0x1C0049D80 (ScaleDPIRect.c)
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C0072984 (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     InitLoadResources @ 0x1C00743E0 (InitLoadResources.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00EFDEC (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?TransformHimetricDeltaToScreenDelta@CPTPEngine@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1C0138574 (-TransformHimetricDeltaToScreenDelta@CPTPEngine@@AEAAXUtagPOINT@@PEAU2@@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPEngine@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1C01385D0 (-TransformTPScreenToHimetric@CPTPEngine@@AEAAXUtagPOINT@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

INT __stdcall EngMulDiv(INT a, INT b, INT c)
{
  INT v3; // r10d
  int v4; // r9d
  unsigned __int64 v5; // rax

  v3 = c;
  v4 = 1;
  if ( a < 0 )
  {
    v4 = -1;
    a = -a;
  }
  if ( b < 0 )
  {
    v4 = -v4;
    b = -b;
  }
  if ( !c )
    goto LABEL_11;
  if ( c < 0 )
  {
    v4 = -v4;
    v3 = -c;
  }
  v5 = (b * (__int64)a + v3 / 2) / v3;
  if ( v5 <= 0x7FFFFFFF )
  {
    if ( v4 <= 0 )
      LODWORD(v5) = -(int)v5;
  }
  else
  {
LABEL_11:
    LODWORD(v5) = 0x80000000;
    if ( v4 > 0 )
      LODWORD(v5) = 0x7FFFFFFF;
  }
  return v5;
}
