/*
 * XREFs of ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0047DD0
 * Callers:
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00462F8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0047FC4 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     HandleInputDestDestruction @ 0x1C004BF10 (HandleInputDestDestruction.c)
 *     IsCapturedBySystem @ 0x1C00985F0 (IsCapturedBySystem.c)
 *     ?HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z @ 0x1C00D51D0 (-HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C012371C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0124488 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0125D44 (-RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C012683C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131DC4 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputDest::operator==(int *a1, __int64 a2)
{
  int v3; // ecx
  int v4; // eax
  char v5; // cl
  bool v6; // zf

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
      if ( a1[1] != *(_DWORD *)(a2 + 4) )
        goto LABEL_11;
      v6 = a1[2] == *(_DWORD *)(a2 + 8);
    }
    else
    {
      if ( (v4 & 2) == 0 )
      {
        LOBYTE(v4) = *((_QWORD *)a1 + 10) == *(_QWORD *)(a2 + 80);
        return v4;
      }
      if ( a1[8] != *(_DWORD *)(a2 + 32) || a1[9] != *(_DWORD *)(a2 + 36) )
        goto LABEL_11;
      v6 = *((_QWORD *)a1 + 3) == *(_QWORD *)(a2 + 24);
    }
    if ( v6 )
    {
LABEL_12:
      LOBYTE(v4) = v5;
      return v4;
    }
LABEL_11:
    v5 = 0;
    goto LABEL_12;
  }
  return v4;
}
