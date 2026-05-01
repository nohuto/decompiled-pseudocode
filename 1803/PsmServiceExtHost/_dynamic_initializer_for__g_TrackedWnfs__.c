/*
 * XREFs of _dynamic_initializer_for__g_TrackedWnfs__ @ 0x180001180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__g_TrackedWnfs__()
{
  __int64 result; // rax

  qword_180092014 = 0LL;
  dword_18009201C = 0;
  qword_180092020 = WNF_PO_SCENARIO_CHANGE;
  qword_180092028 = (__int64)SstpHandlePoScenarioChange;
  qword_180092030 = 0LL;
  qword_180092038 = 0LL;
  qword_180092040 = WNF_SHEL_SUSPEND_APP_BACKGROUND_ACTIVITY;
  qword_180092048 = (__int64)SstpHandleShellSuspendBgActivityChange;
  qword_180092050 = 0LL;
  qword_180092058 = 0LL;
  qword_180092060 = WNF_PO_ENERGY_SAVER_STATE;
  qword_180092068 = (__int64)SstpHandlePoEnergySaverStateChange;
  qword_180092070 = 0LL;
  qword_180092078 = 0LL;
  qword_180092080 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
  qword_180092088 = (__int64)SstpHandleThermalLimitingStateChange;
  result = 0LL;
  qword_180092090 = 0LL;
  qword_180092098 = 0LL;
  return result;
}
