/*
 * XREFs of TtmiSetPendingOnOffRequest @ 0x14070E7CC
 * Callers:
 *     TtmiResetTerminalTimeouts @ 0x14070E590 (TtmiResetTerminalTimeouts.c)
 *     TtmiTerminalMonitorControl @ 0x14070E880 (TtmiTerminalMonitorControl.c)
 *     TtmiUndimAllTerminals @ 0x14070EAA0 (TtmiUndimAllTerminals.c)
 *     TtmpDispatchSetDisplayState @ 0x140710AFC (TtmpDispatchSetDisplayState.c)
 * Callees:
 *     TtmpExitProximity @ 0x14070EC1C (TtmpExitProximity.c)
 *     TtmpShouldEscapeProximity @ 0x14070EDE8 (TtmpShouldEscapeProximity.c)
 *     TtmiScheduleSessionWorker @ 0x14070F9F4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogProximityBlockedRequest @ 0x1407123C8 (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogTerminalOffRequest @ 0x140713B34 (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x140713C4C (TtmiLogTerminalOnRequest.c)
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
