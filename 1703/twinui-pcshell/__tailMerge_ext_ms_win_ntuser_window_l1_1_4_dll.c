/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_window_l1_1_4_dll @ 0x180196396
 * Callers:
 *     __imp_load_GetLastActivePopup @ 0x18019638A (__imp_load_GetLastActivePopup.c)
 *     __imp_load_SwitchToThisWindow @ 0x180196494 (__imp_load_SwitchToThisWindow.c)
 *     __imp_load_HungWindowFromGhostWindow @ 0x1801964A0 (__imp_load_HungWindowFromGhostWindow.c)
 *     __imp_load_CanBrokerForceForeground @ 0x1801964AC (__imp_load_CanBrokerForceForeground.c)
 *     __imp_load_MapWindowPoints @ 0x1801964B8 (__imp_load_MapWindowPoints.c)
 *     __imp_load_ShowWindowAsync @ 0x1801964C4 (__imp_load_ShowWindowAsync.c)
 *     __imp_load_GhostWindowFromHungWindow @ 0x1801964D0 (__imp_load_GhostWindowFromHungWindow.c)
 *     __imp_load_SetWindowPlacement @ 0x1801964DC (__imp_load_SetWindowPlacement.c)
 *     __imp_load_SetWindowArrangement @ 0x180196500 (__imp_load_SetWindowArrangement.c)
 *     __imp_load_RegisterWindowArrangementCallout @ 0x18019650C (__imp_load_RegisterWindowArrangementCallout.c)
 *     __imp_load_UpdateWindowTrackingInfo @ 0x180196518 (__imp_load_UpdateWindowTrackingInfo.c)
 *     __imp_load_EnableShellWindowManagementBehavior @ 0x180196524 (__imp_load_EnableShellWindowManagementBehavior.c)
 *     __imp_load_GetWindowTrackInfoAsync @ 0x180196530 (__imp_load_GetWindowTrackInfoAsync.c)
 *     __imp_load_IsZoomed @ 0x18019653C (__imp_load_IsZoomed.c)
 *     __imp_load_CloseWindow @ 0x180196548 (__imp_load_CloseWindow.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180191670 (__delayLoadHelper2.c)
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
