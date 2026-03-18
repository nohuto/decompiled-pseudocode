/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1405EA044
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1405E9F20 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14070D050 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x14070D110 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x14070FA28 (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x1407109A4 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140121C00 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1405EA0E4 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
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
