/*
 * XREFs of __tailMerge_USER32_dll @ 0x1801E515D
 * Callers:
 *     __imp_load_GetSystemMenu @ 0x1801E5151 (__imp_load_GetSystemMenu.c)
 *     __imp_load_GetMenuItemInfoW @ 0x1801E51D6 (__imp_load_GetMenuItemInfoW.c)
 *     __imp_load_GetProcessUIContextInformation @ 0x1801E51E2 (__imp_load_GetProcessUIContextInformation.c)
 *     __imp_load_ChangeWindowMessageFilterEx @ 0x1801E51EE (__imp_load_ChangeWindowMessageFilterEx.c)
 *     __imp_load_GetClassLongW @ 0x1801E51FA (__imp_load_GetClassLongW.c)
 *     __imp_load_LoadCursorW @ 0x1801E5206 (__imp_load_LoadCursorW.c)
 *     __imp_load_SetCursor @ 0x1801E5212 (__imp_load_SetCursor.c)
 *     __imp_load_GetSysColor @ 0x1801E521E (__imp_load_GetSysColor.c)
 *     __imp_load_GetAsyncKeyState @ 0x1801E522A (__imp_load_GetAsyncKeyState.c)
 *     __imp_load_CalculatePopupWindowPosition @ 0x1801E5236 (__imp_load_CalculatePopupWindowPosition.c)
 *     __imp_load_GetDC @ 0x1801E5242 (__imp_load_GetDC.c)
 *     __imp_load_CreateIconIndirect @ 0x1801E524E (__imp_load_CreateIconIndirect.c)
 *     __imp_load_AcquireIAMKey @ 0x1801E525A (__imp_load_AcquireIAMKey.c)
 *     __imp_load_EnableIAMAccess @ 0x1801E5266 (__imp_load_EnableIAMAccess.c)
 *     __imp_load_SetCancelRotationDelayHintWindow @ 0x1801E5272 (__imp_load_SetCancelRotationDelayHintWindow.c)
 *     __imp_load_ClearForeground @ 0x1801E527E (__imp_load_ClearForeground.c)
 *     __imp_load_SetActivationFilter @ 0x1801E528A (__imp_load_SetActivationFilter.c)
 *     __imp_load_SetFallbackForeground @ 0x1801E5296 (__imp_load_SetFallbackForeground.c)
 *     __imp_load_SendEventMessage @ 0x1801E52A2 (__imp_load_SendEventMessage.c)
 *     __imp_load_InternalGetWindowText @ 0x1801E52AE (__imp_load_InternalGetWindowText.c)
 *     __imp_load_EnableMouseInPointerForThread @ 0x1801E52BA (__imp_load_EnableMouseInPointerForThread.c)
 *     __imp_load_DestroyIcon @ 0x1801E52C6 (__imp_load_DestroyIcon.c)
 *     __imp_load_CopyIcon @ 0x1801E52D2 (__imp_load_CopyIcon.c)
 *     __imp_load_ReleaseDC @ 0x1801E52DE (__imp_load_ReleaseDC.c)
 *     __imp_load_CopyImage @ 0x1801E52EA (__imp_load_CopyImage.c)
 *     __imp_load_SetFocus @ 0x1801E52F6 (__imp_load_SetFocus.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801DFA40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_USER32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_USER32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
