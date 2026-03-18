/*
 * XREFs of ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C0065830 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x1C010C8A8 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C010CC04 (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AddLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C010CCDC (-AddLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011074C (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0110B68 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C0112C94 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C0117034 (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?PopLostCaptureTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C01182F8 (-PopLostCaptureTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01184C4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z @ 0x1C0118B5C (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0119238 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01196A0 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C011BAA0 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C011D168 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C011D2D8 (-SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z.c)
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C011D520 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C011E9A0 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?SetForeground@CForegroundInfo@@QEAAXAEBVCInputDest@@@Z @ 0x1C0121340 (-SetForeground@CForegroundInfo@@QEAAXAEBVCInputDest@@@Z.c)
 *     ?Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z @ 0x1C0126178 (-Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01261EC (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputDest::operator=(__int64 a1, __int64 a2)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != a2 )
  {
    if ( !*(_BYTE *)(a1 + 176) || *(_QWORD *)(a2 + 72) != *(_QWORD *)(a1 + 72) )
    {
      CInputDest::SetEmpty((CInputDest *)a1);
      if ( *(_DWORD *)(a2 + 84) )
      {
        if ( *(_QWORD *)(a1 + 72) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
        v7[1] = *(_QWORD *)(a2 + 72);
        v7[0] = a1 + 72;
        HMAssignmentLock(v7);
      }
    }
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
  }
  return a1;
}
