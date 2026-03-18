/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0026E90 (xxxEnumDisplayMonitors.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0027BCC (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0027E70 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtUserGetDpiForMonitor @ 0x1C00281A0 (NtUserGetDpiForMonitor.c)
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C002B280 (LogicalToPhysicalDPIPoint.c)
 *     GetDwmDependentMetric @ 0x1C002BF30 (GetDwmDependentMetric.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C004704C (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0047210 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     ?GetDpiAwareness@CInputDest@@QEBAKXZ @ 0x1C0047ED8 (-GetDpiAwareness@CInputDest@@QEBAKXZ.c)
 *     ?SetLogicalCursorPos@CMouseProcessor@@SAXUtagPOINT@@K@Z @ 0x1C004980C (-SetLogicalCursorPos@CMouseProcessor@@SAXUtagPOINT@@K@Z.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C0049CB8 (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C006F03C (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI.c)
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 *     UserIsGDIScalingApplicable @ 0x1C0071560 (UserIsGDIScalingApplicable.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0072150 (TransformRectBetweenCoordinateSpaces.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0072830 (TransformPointBetweenCoordinateSpaces.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00917C4 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     ExpandedMonitorSpace @ 0x1C00DE480 (ExpandedMonitorSpace.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00EFD74 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00EFDB0 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0108420 (RIMTransformDimensionFromDigitizer.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C0108634 (RIMTransformPhysicalPointToScreen.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012AEC0 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012BBF0 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     UserProcessInputIsolationPolicy @ 0x1C0130CBC (UserProcessInputIsolationPolicy.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B678 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  unsigned int v0; // edi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v2; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v0 = 18;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v2 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( *(_QWORD *)(v2 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
      if ( *(_DWORD *)(v2 + 340) )
      {
        return *(unsigned int *)(v2 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        if ( CurrentProcessWin32Process )
          return *(unsigned int *)(CurrentProcessWin32Process + 280);
      }
    }
  }
  return v0;
}
