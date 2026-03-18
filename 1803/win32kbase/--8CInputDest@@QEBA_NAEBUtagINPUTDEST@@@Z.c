/*
 * XREFs of ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003704C
 * Callers:
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0037000 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037C94 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00382F8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     HandleInputDestDestruction @ 0x1C0061C74 (HandleInputDestDestruction.c)
 *     IsCapturedBySystem @ 0x1C0073900 (IsCapturedBySystem.c)
 *     ?HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z @ 0x1C009F670 (-HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z.c)
 *     ??9CInputDest@@QEBA_NAEBV0@@Z @ 0x1C01098F0 (--9CInputDest@@QEBA_NAEBV0@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01184C4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01196A0 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C011AE7C (-RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C011BAA0 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputDest::operator==(unsigned int *a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  bool v6; // zf

  v4 = *a1;
  if ( !(_DWORD)v4 && !*(_DWORD *)a2 )
  {
    LOBYTE(v5) = 1;
    return v5;
  }
  v5 = v4 & *(_DWORD *)a2;
  if ( v5 )
  {
    LOBYTE(v4) = 1;
    if ( (v5 & 1) != 0 )
    {
      if ( a1[1] != *(_DWORD *)(a2 + 4) )
        goto LABEL_13;
      v6 = a1[2] == *(_DWORD *)(a2 + 8);
    }
    else
    {
      if ( (v5 & 2) == 0 )
      {
        if ( (v5 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2);
        LOBYTE(v5) = *((_QWORD *)a1 + 9) == *(_QWORD *)(a2 + 72);
        return v5;
      }
      if ( a1[6] != *(_DWORD *)(a2 + 24) || a1[7] != *(_DWORD *)(a2 + 28) )
        goto LABEL_13;
      v6 = *((_QWORD *)a1 + 2) == *(_QWORD *)(a2 + 16);
    }
    if ( v6 )
    {
LABEL_14:
      LOBYTE(v5) = v4;
      return v5;
    }
LABEL_13:
    LOBYTE(v4) = 0;
    goto LABEL_14;
  }
  return v5;
}
