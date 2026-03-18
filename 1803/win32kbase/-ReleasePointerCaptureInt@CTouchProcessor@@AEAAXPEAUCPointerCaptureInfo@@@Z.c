/*
 * XREFs of ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C011AE00
 * Callers:
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C0111ED0 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C01141AC (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C011AD94 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C011BAA0 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ReleasePointerCaptureInt(struct _KTHREAD **this, struct CPointerCaptureInfo *a2)
{
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *(_DWORD *)a2 )
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    if ( !*((_DWORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    CInputDest::SetEmpty((struct CPointerCaptureInfo *)((char *)a2 + 8));
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 48) = 0;
  }
  else
  {
    if ( *((_DWORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    if ( *((_DWORD *)a2 + 48) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  }
}
