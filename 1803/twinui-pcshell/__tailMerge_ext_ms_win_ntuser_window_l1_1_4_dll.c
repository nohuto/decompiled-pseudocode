/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_window_l1_1_4_dll @ 0x18009AC0B
 * Callers:
 *     __imp_load_SwitchToThisWindow @ 0x18009ABFF (__imp_load_SwitchToThisWindow.c)
 *     __imp_load_HungWindowFromGhostWindow @ 0x18009AC84 (__imp_load_HungWindowFromGhostWindow.c)
 *     __imp_load_CanBrokerForceForeground @ 0x18009AC90 (__imp_load_CanBrokerForceForeground.c)
 *     __imp_load_ShowWindowAsync @ 0x18009AD21 (__imp_load_ShowWindowAsync.c)
 *     __imp_load_GhostWindowFromHungWindow @ 0x18009AD2D (__imp_load_GhostWindowFromHungWindow.c)
 *     __imp_load_SetWindowArrangement @ 0x18009AD5D (__imp_load_SetWindowArrangement.c)
 *     __imp_load_RegisterWindowArrangementCallout @ 0x18009AD69 (__imp_load_RegisterWindowArrangementCallout.c)
 *     __imp_load_UpdateWindowTrackingInfo @ 0x18009AD75 (__imp_load_UpdateWindowTrackingInfo.c)
 *     __imp_load_EnableShellWindowManagementBehavior @ 0x18009AD81 (__imp_load_EnableShellWindowManagementBehavior.c)
 *     __imp_load_GetWindowTrackInfoAsync @ 0x18009AD8D (__imp_load_GetWindowTrackInfoAsync.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180095E90 (__delayLoadHelper2.c)
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
