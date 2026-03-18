/*
 * XREFs of ?FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z @ 0x1C0111E74
 * Callers:
 *     ?PopLostCaptureTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C01182F8 (-PopLostCaptureTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C011AE7C (-RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeLostCaptureTarget(
        struct _KTHREAD **this,
        struct tagCPointerCaptureLostTarget ***a2)
{
  struct tagCPointerCaptureLostTarget **v3; // rax
  struct tagCPointerCaptureLostTarget **v4; // rcx

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v3 = *a2;
  if ( (*a2)[1] != (struct tagCPointerCaptureLostTarget *)a2
    || (v4 = a2[1], *v4 != (struct tagCPointerCaptureLostTarget *)a2) )
  {
    __fastfail(3u);
  }
  *v4 = (struct tagCPointerCaptureLostTarget *)v3;
  v3[1] = (struct tagCPointerCaptureLostTarget *)v4;
  CInputDest::SetEmpty((CInputDest *)(a2 + 2));
  Win32FreePool((__int64)a2);
}
