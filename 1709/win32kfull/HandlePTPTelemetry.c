/*
 * XREFs of HandlePTPTelemetry @ 0x1C0142630
 * Callers:
 *     ?EndShutdown@@YAXJ@Z @ 0x1C0120F4C (-EndShutdown@@YAXJ@Z.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01A616C (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C01A261C (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C01A2CEC (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 */

void *HandlePTPTelemetry()
{
  void *result; // rax

  if ( *((_DWORD *)&gTPTelemState + 13) )
  {
    TraceLoggingPTPGestureUsageEvent(gTPTelemState);
    if ( *((__int64 *)&gTPTelemState + 7) > 0
      || *((__int64 *)&gTPTelemState + 10) > 0
      || *((_DWORD *)&gTPTelemState + 3)
      || *((_DWORD *)&gTPTelemState + 4) )
    {
      TraceLoggingPTPUsageDetailsEvent(gTPTelemState, gliQpcFreq);
    }
    return memset(gTPTelemState, 0, 0x68uLL);
  }
  return result;
}
