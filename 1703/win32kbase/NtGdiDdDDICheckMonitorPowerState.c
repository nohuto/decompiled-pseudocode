/*
 * XREFs of NtGdiDdDDICheckMonitorPowerState @ 0x1C007C8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGdiDdDDICheckMonitorPowerState()
{
  if ( gbGDIOn )
    return ((__int64 (*)(void))qword_1C018B970)();
  else
    return 3223191558LL;
}
