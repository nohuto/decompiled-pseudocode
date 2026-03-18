/*
 * XREFs of TtmpExitProximity @ 0x1406D8884
 * Callers:
 *     TtmiSetPendingOnOffRequest @ 0x1406D8444 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalMonitorControl @ 0x1406D84F8 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1406D95E8 (TtmiScheduleSessionWorker.c)
 *     TtmiLogExitProximity @ 0x1406DBC40 (TtmiLogExitProximity.c)
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
