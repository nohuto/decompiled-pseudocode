/*
 * XREFs of HUBDSM_CompletingWaitWakeOnDetachDuringSuspending @ 0x1C001D830
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteWaitWake @ 0x1C0016640 (HUBPDO_CompleteWaitWake.c)
 */

__int64 __fastcall HUBDSM_CompletingWaitWakeOnDetachDuringSuspending(__int64 a1)
{
  HUBPDO_CompleteWaitWake(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
