/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_window_l1_1_4_dll @ 0x1801E46A8
 * Callers:
 *     __imp_load_SwitchToThisWindow @ 0x1801E469C (__imp_load_SwitchToThisWindow.c)
 *     __imp_load_HungWindowFromGhostWindow @ 0x1801E4721 (__imp_load_HungWindowFromGhostWindow.c)
 *     __imp_load_CanBrokerForceForeground @ 0x1801E472D (__imp_load_CanBrokerForceForeground.c)
 *     __imp_load_ShowWindowAsync @ 0x1801E47BE (__imp_load_ShowWindowAsync.c)
 *     __imp_load_GhostWindowFromHungWindow @ 0x1801E47CA (__imp_load_GhostWindowFromHungWindow.c)
 *     __imp_load_SetWindowArrangement @ 0x1801E4873 (__imp_load_SetWindowArrangement.c)
 *     __imp_load_RegisterWindowArrangementCallout @ 0x1801E487F (__imp_load_RegisterWindowArrangementCallout.c)
 *     __imp_load_UpdateWindowTrackingInfo @ 0x1801E488B (__imp_load_UpdateWindowTrackingInfo.c)
 *     __imp_load_EnableShellWindowManagementBehavior @ 0x1801E4897 (__imp_load_EnableShellWindowManagementBehavior.c)
 *     __imp_load_GetWindowTrackInfoAsync @ 0x1801E48A3 (__imp_load_GetWindowTrackInfoAsync.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801DFA40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_window_l1_1_4_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_window_l1_1_4_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
