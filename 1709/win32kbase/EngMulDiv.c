/*
 * XREFs of EngMulDiv @ 0x1C0059AB0
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C0015EDC (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00160F0 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00597E0 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIPt @ 0x1C0059838 (ScaleDPIPt.c)
 *     ScaleDPIRect @ 0x1C00598B8 (ScaleDPIRect.c)
 *     GetMonitorRectForDpi @ 0x1C0059998 (GetMonitorRectForDpi.c)
 *     NtUserGetDpiForMonitor @ 0x1C005AA50 (NtUserGetDpiForMonitor.c)
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 *     InitLoadResources @ 0x1C0062000 (InitLoadResources.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00F2914 (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z @ 0x1C0134B48 (-FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z.c)
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
