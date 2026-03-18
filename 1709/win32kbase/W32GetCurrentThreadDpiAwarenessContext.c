/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C0015EDC (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00160F0 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0059390 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C00595A0 (PhysicalToLogicalDPIRect.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00596C0 (PhysicalToLogicalDPIPoint.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0059B24 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     NtUserGetDpiForMonitor @ 0x1C005AA50 (NtUserGetDpiForMonitor.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C005C430 (TransformPointBetweenCoordinateSpaces.c)
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C005D320 (LogicalToPhysicalDPIPoint.c)
 *     NtUserLockCursor @ 0x1C005D750 (NtUserLockCursor.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C005D840 (TransformRectBetweenCoordinateSpaces.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 *     UserIsGDIScalingApplicable @ 0x1C00735D0 (UserIsGDIScalingApplicable.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0093680 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtUserClipCursor @ 0x1C00A2040 (NtUserClipCursor.c)
 *     NtUserGetClipCursor @ 0x1C00E7BA0 (NtUserGetClipCursor.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C00F2800 (GreGetDpiDepDefaultGuiFont.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00F289C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00F28D8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0048C48 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  unsigned int v0; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v0 = 18;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( *(_QWORD *)(ThreadWin32Thread + 352) )
      CaptureAndValidateUserModeDpiAwarenessContext(ThreadWin32Thread);
    if ( *(_DWORD *)(v5 + 340) )
    {
      return *(unsigned int *)(v5 + 340);
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2, v4);
      if ( CurrentProcessWin32Process )
        return *(unsigned int *)(CurrentProcessWin32Process + 280);
    }
  }
  return v0;
}
