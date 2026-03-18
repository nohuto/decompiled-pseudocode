/*
 * XREFs of TtmpExitProximity @ 0x14070EC1C
 * Callers:
 *     TtmiSetPendingOnOffRequest @ 0x14070E7CC (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalMonitorControl @ 0x14070E880 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x14070F9F4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogExitProximity @ 0x140712140 (TtmiLogExitProximity.c)
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
