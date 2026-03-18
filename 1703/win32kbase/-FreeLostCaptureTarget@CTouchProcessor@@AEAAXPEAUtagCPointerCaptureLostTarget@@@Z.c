/*
 * XREFs of ?FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z @ 0x1C011E8DC
 * Callers:
 *     ?PopLostCaptureTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0123548 (-PopLostCaptureTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0125D44 (-RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CTouchProcessor::FreeLostCaptureTarget(CTouchProcessor *this, struct tagCPointerCaptureLostTarget *a2)
{
  __int64 v2; // rcx
  struct tagCPointerCaptureLostTarget **v4; // rax

  v2 = *(_QWORD *)a2;
  v4 = (struct tagCPointerCaptureLostTarget **)*((_QWORD *)a2 + 1);
  if ( *(struct tagCPointerCaptureLostTarget **)(*(_QWORD *)a2 + 8LL) != a2 || *v4 != a2 )
    __fastfail(3u);
  *v4 = (struct tagCPointerCaptureLostTarget *)v2;
  *(_QWORD *)(v2 + 8) = v4;
  CInputDest::SetEmpty((struct tagCPointerCaptureLostTarget *)((char *)a2 + 16));
  Win32FreePool((__int64)a2);
}
