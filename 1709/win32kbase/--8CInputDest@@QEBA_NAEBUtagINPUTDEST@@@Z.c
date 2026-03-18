/*
 * XREFs of ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0017190
 * Callers:
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0015168 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     HandleInputDestDestruction @ 0x1C0016E5C (HandleInputDestDestruction.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0017338 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     IsCapturedBySystem @ 0x1C00A25E0 (IsCapturedBySystem.c)
 *     ?HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z @ 0x1C00DB270 (-HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0122D6C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0123AE0 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0125314 (-RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0125E1C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131458 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputDest::operator==(int *a1, __int64 a2)
{
  int v3; // ecx
  int v4; // eax
  char v5; // cl

  v3 = *a1;
  if ( !v3 && !*(_DWORD *)a2 )
  {
    LOBYTE(v4) = 1;
    return v4;
  }
  v4 = v3 & *(_DWORD *)a2;
  if ( v4 )
  {
    v5 = 1;
    if ( (v4 & 1) != 0 )
    {
      if ( a1[1] != *(_DWORD *)(a2 + 4) || a1[2] != *(_DWORD *)(a2 + 8) )
        v5 = 0;
    }
    else
    {
      if ( (v4 & 2) == 0 )
      {
        LOBYTE(v4) = *((_QWORD *)a1 + 10) == *(_QWORD *)(a2 + 80);
        return v4;
      }
      if ( a1[8] != *(_DWORD *)(a2 + 32) || a1[9] != *(_DWORD *)(a2 + 36) || *((_QWORD *)a1 + 3) != *(_QWORD *)(a2 + 24) )
        v5 = 0;
    }
    LOBYTE(v4) = v5;
  }
  return v4;
}
