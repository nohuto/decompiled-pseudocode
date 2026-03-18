/*
 * XREFs of ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C001B1F4 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C00375F0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00383C8 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     HandleInputDestDestruction @ 0x1C0061C74 (HandleInputDestDestruction.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0109854 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C010CD70 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C010D020 (-AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDES.c)
 *     ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1C010D130 (-AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z.c)
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C010D250 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C010E340 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C010FDB0 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C01102BC (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011074C (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C01111E0 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0116850 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01184C4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C011E9A0 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C011EF90 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 *     ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C012542C (-HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01261EC (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C01267B0 (-ShellEndpointExists@CPTPProcessor@@AEAA_NXZ.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C0134680 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CInputDest *__fastcall CInputDest::CInputDest(CInputDest *this, const struct tagINPUTDEST *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  memset(this, 0, 0xB0uLL);
  *((_BYTE *)this + 176) = 0;
  if ( *((_DWORD *)a2 + 21) )
  {
    v5 = *((_QWORD *)a2 + 9);
    if ( !v5 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, 0LL);
      v5 = *((_QWORD *)a2 + 9);
    }
    v7[1] = v5;
    v7[0] = (char *)this + 72;
    HMAssignmentLock(v7);
  }
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  *((_OWORD *)this + 9) = *((_OWORD *)a2 + 9);
  *((_OWORD *)this + 10) = *((_OWORD *)a2 + 10);
  return this;
}
