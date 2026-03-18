/*
 * XREFs of TtmiAcquireCurrentSession @ 0x140584CA4
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140584B80 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1406D6DE0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1406D6EA0 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1406D961C (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x1406DA594 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x140584CE8 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(__int64 a1)
{
  unsigned int ProcessSessionId; // eax
  unsigned int v3; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessSessionId == -1 )
  {
    v3 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession");
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, ProcessSessionId);
  }
  return v3;
}
