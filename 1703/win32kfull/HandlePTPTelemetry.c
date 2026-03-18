/*
 * XREFs of HandlePTPTelemetry @ 0x1C013B880
 * Callers:
 *     ?EndShutdown@@YAXJ@Z @ 0x1C011716C (-EndShutdown@@YAXJ@Z.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C019A540 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C0196B9C (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C019726C (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 */

void *HandlePTPTelemetry()
{
  struct tagTPTELEMSTATE *v0; // rcx
  void *result; // rax

  if ( *((_DWORD *)&gTPTelemState + 13) )
  {
    TraceLoggingPTPGestureUsageEvent(gTPTelemState);
    v0 = gTPTelemState;
    if ( *((__int64 *)&gTPTelemState + 7) > 0
      || *((__int64 *)&gTPTelemState + 8) > 0
      || *((_DWORD *)&gTPTelemState + 3)
      || *((_DWORD *)&gTPTelemState + 4) )
    {
      TraceLoggingPTPUsageDetailsEvent(gTPTelemState, gliQpcFreq);
      v0 = gTPTelemState;
    }
    return memset(v0, 0, 0x58uLL);
  }
  return result;
}
