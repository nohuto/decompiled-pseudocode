/*
 * XREFs of TtmpExitProximity @ 0x14077237C
 * Callers:
 *     TtmiSetPendingOnOffRequest @ 0x140771F2C (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalMonitorControl @ 0x140771FE0 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x140773264 (TtmiScheduleSessionWorker.c)
 *     TtmiLogExitProximity @ 0x1407760A0 (TtmiLogExitProximity.c)
 */

__int64 __fastcall TtmpExitProximity(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = a2[8];
  if ( (result & 8) != 0 )
  {
    v5 = a2[65];
    a2[8] = result & 0xFFFFFFB7 | 0x40;
    TtmiLogExitProximity(v5, a2[66]);
    a2[8] |= 4u;
    return TtmiScheduleSessionWorker(a1, 2LL);
  }
  return result;
}
