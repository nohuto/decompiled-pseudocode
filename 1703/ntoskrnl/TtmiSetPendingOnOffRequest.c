/*
 * XREFs of TtmiSetPendingOnOffRequest @ 0x1406D8444
 * Callers:
 *     TtmiResetTerminalTimeouts @ 0x1406D8208 (TtmiResetTerminalTimeouts.c)
 *     TtmiTerminalMonitorControl @ 0x1406D84F8 (TtmiTerminalMonitorControl.c)
 *     TtmiUndimAllTerminals @ 0x1406D8714 (TtmiUndimAllTerminals.c)
 *     TtmpDispatchSetDisplayState @ 0x1406DA6EC (TtmpDispatchSetDisplayState.c)
 * Callees:
 *     TtmpExitProximity @ 0x1406D8884 (TtmpExitProximity.c)
 *     TtmpShouldEscapeProximity @ 0x1406D8A54 (TtmpShouldEscapeProximity.c)
 *     TtmiScheduleSessionWorker @ 0x1406D95E8 (TtmiScheduleSessionWorker.c)
 *     TtmiLogProximityBlockedRequest @ 0x1406DBED4 (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogTerminalOffRequest @ 0x1406DD680 (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x1406DD798 (TtmiLogTerminalOnRequest.c)
 */

__int64 __fastcall TtmiSetPendingOnOffRequest(__int64 a1, unsigned int *a2, char a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rcx

  v8 = a1;
  if ( (a2[8] & 8) != 0 )
  {
    if ( !a3 || a4 != 1 || !(unsigned __int8)TtmpShouldEscapeProximity(a2) )
    {
      LOBYTE(a1) = a3;
      return TtmiLogProximityBlockedRequest(a1, a4, a5);
    }
    LOBYTE(v9) = a4;
    TtmpExitProximity(v8, a2, v9);
  }
  v10 = a2[7];
  if ( a3 )
    TtmiLogTerminalOnRequest(v10, a4, a5);
  else
    TtmiLogTerminalOffRequest(v10, a4, a5);
  a2[13] = a4;
  a2[8] |= 4u;
  a2[12] = 2 - (a3 != 0);
  return TtmiScheduleSessionWorker(v8, 2LL);
}
