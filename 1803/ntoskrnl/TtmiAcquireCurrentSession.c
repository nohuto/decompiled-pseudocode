/*
 * XREFs of TtmiAcquireCurrentSession @ 0x140773184
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407704C0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407707B0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140770870 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x140773298 (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x140774220 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1400BD230 (PsGetProcessSessionIdEx.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x14065363C (TtmpAcquireSessionById.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(_QWORD *a1)
{
  int ProcessSessionId; // eax
  unsigned int v3; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessSessionId == -1 )
  {
    v3 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession", 816, -1, -1073740715);
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, ProcessSessionId);
  }
  return v3;
}
