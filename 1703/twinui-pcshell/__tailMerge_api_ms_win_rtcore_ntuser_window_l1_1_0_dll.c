/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x1801955F0
 * Callers:
 *     __imp_load_IsWindowEnabled @ 0x1801955E4 (__imp_load_IsWindowEnabled.c)
 *     __imp_load_PostMessageW @ 0x180195670 (__imp_load_PostMessageW.c)
 *     __imp_load_AllowSetForegroundWindow @ 0x18019567C (__imp_load_AllowSetForegroundWindow.c)
 *     __imp_load_GetWindowThreadProcessId @ 0x180195688 (__imp_load_GetWindowThreadProcessId.c)
 *     __imp_load_GetWindow @ 0x180195694 (__imp_load_GetWindow.c)
 *     __imp_load_GetForegroundWindow @ 0x1801956A0 (__imp_load_GetForegroundWindow.c)
 *     __imp_load_RemovePropW @ 0x1801956AC (__imp_load_RemovePropW.c)
 *     __imp_load_SetForegroundWindow @ 0x1801956B8 (__imp_load_SetForegroundWindow.c)
 *     __imp_load_RegisterWindowMessageW @ 0x1801956C4 (__imp_load_RegisterWindowMessageW.c)
 *     __imp_load_SetPropW @ 0x1801956D0 (__imp_load_SetPropW.c)
 *     __imp_load_PostThreadMessageW @ 0x1801956DC (__imp_load_PostThreadMessageW.c)
 *     __imp_load_DispatchMessageW @ 0x1801956E8 (__imp_load_DispatchMessageW.c)
 *     __imp_load_TranslateMessage @ 0x1801956F4 (__imp_load_TranslateMessage.c)
 *     __imp_load_PeekMessageW @ 0x180195700 (__imp_load_PeekMessageW.c)
 *     __imp_load_GetPropW @ 0x180195791 (__imp_load_GetPropW.c)
 *     __imp_load_IsWindowVisible @ 0x18019579D (__imp_load_IsWindowVisible.c)
 *     __imp_load_GetClassInfoW @ 0x1801957A9 (__imp_load_GetClassInfoW.c)
 *     __imp_load_GetWindowLongPtrW @ 0x1801957B5 (__imp_load_GetWindowLongPtrW.c)
 *     __imp_load_SendNotifyMessageW @ 0x1801957D0 (__imp_load_SendNotifyMessageW.c)
 *     __imp_load_DestroyWindow @ 0x1801957E8 (__imp_load_DestroyWindow.c)
 *     __imp_load_EnumWindows @ 0x1801957F4 (__imp_load_EnumWindows.c)
 *     __imp_load_PostQuitMessage @ 0x180195800 (__imp_load_PostQuitMessage.c)
 *     __imp_load_RegisterClassExW @ 0x18019580C (__imp_load_RegisterClassExW.c)
 *     __imp_load_SetWindowLongPtrW @ 0x180195818 (__imp_load_SetWindowLongPtrW.c)
 *     __imp_load_DefWindowProcW @ 0x180195824 (__imp_load_DefWindowProcW.c)
 *     __imp_load_ShowWindow @ 0x180195830 (__imp_load_ShowWindow.c)
 *     __imp_load_SetWindowPos @ 0x180195946 (__imp_load_SetWindowPos.c)
 *     __imp_load_GetWindowRect @ 0x18019595E (__imp_load_GetWindowRect.c)
 *     __imp_load_GetClientRect @ 0x1801959EF (__imp_load_GetClientRect.c)
 *     __imp_load_EnableWindow @ 0x180195A80 (__imp_load_EnableWindow.c)
 *     __imp_load_FindWindowW @ 0x180195A98 (__imp_load_FindWindowW.c)
 *     __imp_load_IsWindow @ 0x180195AA4 (__imp_load_IsWindow.c)
 *     __imp_load_GetWindowLongW @ 0x180195B65 (__imp_load_GetWindowLongW.c)
 *     __imp_load_GetClassNameW @ 0x180195BFC (__imp_load_GetClassNameW.c)
 *     __imp_load_SetWindowTextW @ 0x180195C2C (__imp_load_SetWindowTextW.c)
 *     __imp_load_CreateWindowExW @ 0x180195C38 (__imp_load_CreateWindowExW.c)
 *     __imp_load_SendMessageW @ 0x180195C44 (__imp_load_SendMessageW.c)
 *     __imp_load_ScreenToClient @ 0x180195C50 (__imp_load_ScreenToClient.c)
 *     __imp_load_ClientToScreen @ 0x180195C5C (__imp_load_ClientToScreen.c)
 *     __imp_load_GetMessageW @ 0x180195C80 (__imp_load_GetMessageW.c)
 *     __imp_load_GetAncestor @ 0x180195C8C (__imp_load_GetAncestor.c)
 *     __imp_load_EnumPropsExW @ 0x180195C98 (__imp_load_EnumPropsExW.c)
 *     __imp_load_SetWindowLongW @ 0x180195CA4 (__imp_load_SetWindowLongW.c)
 *     __imp_load_SendMessageTimeoutW @ 0x180195CB0 (__imp_load_SendMessageTimeoutW.c)
 *     __imp_load_RegisterClassW @ 0x180195CBC (__imp_load_RegisterClassW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180191670 (__delayLoadHelper2.c)
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
