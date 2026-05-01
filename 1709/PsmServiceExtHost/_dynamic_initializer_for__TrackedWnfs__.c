/*
 * XREFs of _dynamic_initializer_for__TrackedWnfs__ @ 0x180001020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__TrackedWnfs__()
{
  __int64 result; // rax

  qword_180067014 = 0LL;
  dword_18006701C = 0;
  qword_180067020 = WNF_PO_SCENARIO_CHANGE;
  qword_180067028 = (__int64)SstpHandlePoScenarioChange;
  qword_180067030 = 0LL;
  qword_180067038 = 0LL;
  qword_180067040 = WNF_EDP_DPL_KEYS_STATE;
  qword_180067048 = (__int64)SstpHandleDplKeysStateChange;
  qword_180067050 = 0LL;
  qword_180067058 = 0LL;
  qword_180067060 = WNF_SHEL_SUSPEND_APP_BACKGROUND_ACTIVITY;
  qword_180067068 = (__int64)SstpHandleShellSuspendBgActivityChange;
  qword_180067070 = 0LL;
  qword_180067078 = 0LL;
  qword_180067080 = WNF_PO_ENERGY_SAVER_STATE;
  qword_180067088 = (__int64)SstpHandlePoEnergySaverStateChange;
  qword_180067090 = 0LL;
  qword_180067098 = 0LL;
  qword_1800670A0 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
  qword_1800670A8 = (__int64)SstpHandleThermalLimitingStateChange;
  result = 0LL;
  qword_1800670B0 = 0LL;
  qword_1800670B8 = 0LL;
  return result;
}
