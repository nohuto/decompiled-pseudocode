/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x180099A82
 * Callers:
 *     __imp_load_IsWindowEnabled @ 0x180099A76 (__imp_load_IsWindowEnabled.c)
 *     __imp_load_PostMessageW @ 0x180099B00 (__imp_load_PostMessageW.c)
 *     __imp_load_AllowSetForegroundWindow @ 0x180099B0C (__imp_load_AllowSetForegroundWindow.c)
 *     __imp_load_GetWindowThreadProcessId @ 0x180099B18 (__imp_load_GetWindowThreadProcessId.c)
 *     __imp_load_GetWindow @ 0x180099B24 (__imp_load_GetWindow.c)
 *     __imp_load_GetForegroundWindow @ 0x180099B30 (__imp_load_GetForegroundWindow.c)
 *     __imp_load_RemovePropW @ 0x180099B3C (__imp_load_RemovePropW.c)
 *     __imp_load_SetForegroundWindow @ 0x180099B48 (__imp_load_SetForegroundWindow.c)
 *     __imp_load_RegisterWindowMessageW @ 0x180099B54 (__imp_load_RegisterWindowMessageW.c)
 *     __imp_load_SetPropW @ 0x180099B60 (__imp_load_SetPropW.c)
 *     __imp_load_PostThreadMessageW @ 0x180099B6C (__imp_load_PostThreadMessageW.c)
 *     __imp_load_DispatchMessageW @ 0x180099B78 (__imp_load_DispatchMessageW.c)
 *     __imp_load_TranslateMessage @ 0x180099B84 (__imp_load_TranslateMessage.c)
 *     __imp_load_PeekMessageW @ 0x180099B90 (__imp_load_PeekMessageW.c)
 *     __imp_load_GetPropW @ 0x180099C21 (__imp_load_GetPropW.c)
 *     __imp_load_IsWindowVisible @ 0x180099C2D (__imp_load_IsWindowVisible.c)
 *     __imp_load_SetWindowLongPtrW @ 0x180099C39 (__imp_load_SetWindowLongPtrW.c)
 *     __imp_load_GetWindowLongPtrW @ 0x180099C45 (__imp_load_GetWindowLongPtrW.c)
 *     __imp_load_SendNotifyMessageW @ 0x180099C60 (__imp_load_SendNotifyMessageW.c)
 *     __imp_load_DestroyWindow @ 0x180099C78 (__imp_load_DestroyWindow.c)
 *     __imp_load_EnumWindows @ 0x180099C84 (__imp_load_EnumWindows.c)
 *     __imp_load_PostQuitMessage @ 0x180099C90 (__imp_load_PostQuitMessage.c)
 *     __imp_load_DefWindowProcW @ 0x180099CA0 (__imp_load_DefWindowProcW.c)
 *     __imp_load_ShowWindow @ 0x180099CAC (__imp_load_ShowWindow.c)
 *     __imp_load_SetWindowPos @ 0x180099DC2 (__imp_load_SetWindowPos.c)
 *     __imp_load_GetWindowRect @ 0x180099DDA (__imp_load_GetWindowRect.c)
 *     __imp_load_GetClientRect @ 0x180099E6B (__imp_load_GetClientRect.c)
 *     __imp_load_EnableWindow @ 0x180099EFC (__imp_load_EnableWindow.c)
 *     __imp_load_FindWindowW @ 0x180099F08 (__imp_load_FindWindowW.c)
 *     __imp_load_IsWindow @ 0x180099F14 (__imp_load_IsWindow.c)
 *     __imp_load_GetWindowLongW @ 0x180099F68 (__imp_load_GetWindowLongW.c)
 *     __imp_load_GetClassNameW @ 0x180099F74 (__imp_load_GetClassNameW.c)
 *     __imp_load_SetWindowTextW @ 0x180099FA4 (__imp_load_SetWindowTextW.c)
 *     __imp_load_ClientToScreen @ 0x180099FB0 (__imp_load_ClientToScreen.c)
 *     __imp_load_ScreenToClient @ 0x180099FC8 (__imp_load_ScreenToClient.c)
 *     __imp_load_SendMessageW @ 0x180099FD4 (__imp_load_SendMessageW.c)
 *     __imp_load_GetMessageW @ 0x180099FE0 (__imp_load_GetMessageW.c)
 *     __imp_load_GetDesktopWindow @ 0x18009A071 (__imp_load_GetDesktopWindow.c)
 *     __imp_load_GetWindowTextW @ 0x18009A07D (__imp_load_GetWindowTextW.c)
 *     __imp_load_GetAncestor @ 0x18009A089 (__imp_load_GetAncestor.c)
 *     __imp_load_EnumPropsExW @ 0x18009A13E (__imp_load_EnumPropsExW.c)
 *     __imp_load_SetWindowLongW @ 0x18009A14A (__imp_load_SetWindowLongW.c)
 *     __imp_load_SendMessageTimeoutW @ 0x18009A156 (__imp_load_SendMessageTimeoutW.c)
 *     __imp_load_SendMessageCallbackW @ 0x18009A1F3 (__imp_load_SendMessageCallbackW.c)
 *     __imp_load_GetCursorPos @ 0x18009A223 (__imp_load_GetCursorPos.c)
 *     __imp_load_GetMessageExtraInfo @ 0x18009A22F (__imp_load_GetMessageExtraInfo.c)
 *     __imp_load_SetTimer @ 0x18009A23B (__imp_load_SetTimer.c)
 *     __imp_load_KillTimer @ 0x18009A247 (__imp_load_KillTimer.c)
 *     __imp_load_WindowFromPoint @ 0x18009BF8F (__imp_load_WindowFromPoint.c)
 *     __imp_load_SetMessageExtraInfo @ 0x18009BF9B (__imp_load_SetMessageExtraInfo.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180095E90 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_window_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
