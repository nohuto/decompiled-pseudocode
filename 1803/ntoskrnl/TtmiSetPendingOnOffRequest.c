/*
 * XREFs of TtmiSetPendingOnOffRequest @ 0x140771F2C
 * Callers:
 *     TtmiResetTerminalTimeouts @ 0x140771D4C (TtmiResetTerminalTimeouts.c)
 *     TtmiTerminalMonitorControl @ 0x140771FE0 (TtmiTerminalMonitorControl.c)
 *     TtmiUndimAllTerminals @ 0x1407721FC (TtmiUndimAllTerminals.c)
 *     TtmpDispatchSetDisplayState @ 0x140774378 (TtmpDispatchSetDisplayState.c)
 * Callees:
 *     TtmpExitProximity @ 0x14077237C (TtmpExitProximity.c)
 *     TtmpShouldEscapeProximity @ 0x140772558 (TtmpShouldEscapeProximity.c)
 *     TtmiScheduleSessionWorker @ 0x140773264 (TtmiScheduleSessionWorker.c)
 *     TtmiLogProximityBlockedRequest @ 0x140776328 (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogTerminalOffRequest @ 0x140777D2C (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x140777E44 (TtmiLogTerminalOnRequest.c)
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
