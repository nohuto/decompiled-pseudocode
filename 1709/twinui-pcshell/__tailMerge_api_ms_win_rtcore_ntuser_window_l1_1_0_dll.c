/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x1801E3740
 * Callers:
 *     __imp_load_IsWindowEnabled @ 0x1801E3734 (__imp_load_IsWindowEnabled.c)
 *     __imp_load_PostMessageW @ 0x1801E37C0 (__imp_load_PostMessageW.c)
 *     __imp_load_AllowSetForegroundWindow @ 0x1801E37CC (__imp_load_AllowSetForegroundWindow.c)
 *     __imp_load_GetWindowThreadProcessId @ 0x1801E37D8 (__imp_load_GetWindowThreadProcessId.c)
 *     __imp_load_GetWindow @ 0x1801E37E4 (__imp_load_GetWindow.c)
 *     __imp_load_GetForegroundWindow @ 0x1801E37F0 (__imp_load_GetForegroundWindow.c)
 *     __imp_load_RemovePropW @ 0x1801E37FC (__imp_load_RemovePropW.c)
 *     __imp_load_SetForegroundWindow @ 0x1801E3808 (__imp_load_SetForegroundWindow.c)
 *     __imp_load_RegisterWindowMessageW @ 0x1801E3814 (__imp_load_RegisterWindowMessageW.c)
 *     __imp_load_SetPropW @ 0x1801E3820 (__imp_load_SetPropW.c)
 *     __imp_load_PostThreadMessageW @ 0x1801E382C (__imp_load_PostThreadMessageW.c)
 *     __imp_load_DispatchMessageW @ 0x1801E3838 (__imp_load_DispatchMessageW.c)
 *     __imp_load_TranslateMessage @ 0x1801E3844 (__imp_load_TranslateMessage.c)
 *     __imp_load_PeekMessageW @ 0x1801E3850 (__imp_load_PeekMessageW.c)
 *     __imp_load_GetPropW @ 0x1801E38E1 (__imp_load_GetPropW.c)
 *     __imp_load_IsWindowVisible @ 0x1801E38ED (__imp_load_IsWindowVisible.c)
 *     __imp_load_GetClassInfoW @ 0x1801E38F9 (__imp_load_GetClassInfoW.c)
 *     __imp_load_GetWindowLongPtrW @ 0x1801E3905 (__imp_load_GetWindowLongPtrW.c)
 *     __imp_load_SendNotifyMessageW @ 0x1801E3920 (__imp_load_SendNotifyMessageW.c)
 *     __imp_load_DestroyWindow @ 0x1801E3938 (__imp_load_DestroyWindow.c)
 *     __imp_load_EnumWindows @ 0x1801E3944 (__imp_load_EnumWindows.c)
 *     __imp_load_PostQuitMessage @ 0x1801E3950 (__imp_load_PostQuitMessage.c)
 *     __imp_load_RegisterClassExW @ 0x1801E395C (__imp_load_RegisterClassExW.c)
 *     __imp_load_SetWindowLongPtrW @ 0x1801E3968 (__imp_load_SetWindowLongPtrW.c)
 *     __imp_load_DefWindowProcW @ 0x1801E3980 (__imp_load_DefWindowProcW.c)
 *     __imp_load_ShowWindow @ 0x1801E398C (__imp_load_ShowWindow.c)
 *     __imp_load_SetWindowPos @ 0x1801E3AA2 (__imp_load_SetWindowPos.c)
 *     __imp_load_GetWindowRect @ 0x1801E3ABA (__imp_load_GetWindowRect.c)
 *     __imp_load_GetClientRect @ 0x1801E3B4B (__imp_load_GetClientRect.c)
 *     __imp_load_EnableWindow @ 0x1801E3BDC (__imp_load_EnableWindow.c)
 *     __imp_load_FindWindowW @ 0x1801E3BF4 (__imp_load_FindWindowW.c)
 *     __imp_load_IsWindow @ 0x1801E3C00 (__imp_load_IsWindow.c)
 *     __imp_load_GetWindowLongW @ 0x1801E3C48 (__imp_load_GetWindowLongW.c)
 *     __imp_load_GetClassNameW @ 0x1801E3C54 (__imp_load_GetClassNameW.c)
 *     __imp_load_SetWindowTextW @ 0x1801E3C84 (__imp_load_SetWindowTextW.c)
 *     __imp_load_ClientToScreen @ 0x1801E3C90 (__imp_load_ClientToScreen.c)
 *     __imp_load_ScreenToClient @ 0x1801E3D2D (__imp_load_ScreenToClient.c)
 *     __imp_load_CreateWindowExW @ 0x1801E3D39 (__imp_load_CreateWindowExW.c)
 *     __imp_load_SendMessageW @ 0x1801E3D45 (__imp_load_SendMessageW.c)
 *     __imp_load_GetMessageW @ 0x1801E3D5D (__imp_load_GetMessageW.c)
 *     __imp_load_GetDesktopWindow @ 0x1801E3D69 (__imp_load_GetDesktopWindow.c)
 *     __imp_load_GetAncestor @ 0x1801E3D75 (__imp_load_GetAncestor.c)
 *     __imp_load_EnumPropsExW @ 0x1801E3E1E (__imp_load_EnumPropsExW.c)
 *     __imp_load_SetWindowLongW @ 0x1801E3E2A (__imp_load_SetWindowLongW.c)
 *     __imp_load_SendMessageTimeoutW @ 0x1801E3E36 (__imp_load_SendMessageTimeoutW.c)
 *     __imp_load_RegisterClassW @ 0x1801E3E42 (__imp_load_RegisterClassW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801DFA40 (__delayLoadHelper2.c)
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
