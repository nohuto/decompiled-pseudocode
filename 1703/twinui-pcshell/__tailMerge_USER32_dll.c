/*
 * XREFs of __tailMerge_USER32_dll @ 0x180196CB1
 * Callers:
 *     __imp_load_GetSystemMenu @ 0x180196CA5 (__imp_load_GetSystemMenu.c)
 *     __imp_load_GetMenuItemInfoW @ 0x180196D2A (__imp_load_GetMenuItemInfoW.c)
 *     __imp_load_GetProcessUIContextInformation @ 0x180196D36 (__imp_load_GetProcessUIContextInformation.c)
 *     __imp_load_ChangeWindowMessageFilterEx @ 0x180196D42 (__imp_load_ChangeWindowMessageFilterEx.c)
 *     __imp_load_GetClassLongW @ 0x180196D4E (__imp_load_GetClassLongW.c)
 *     __imp_load_LoadCursorW @ 0x180196D5A (__imp_load_LoadCursorW.c)
 *     __imp_load_SetCursor @ 0x180196D66 (__imp_load_SetCursor.c)
 *     __imp_load_GetSysColor @ 0x180196D72 (__imp_load_GetSysColor.c)
 *     __imp_load_GetDC @ 0x180196D7E (__imp_load_GetDC.c)
 *     __imp_load_CreateIconIndirect @ 0x180196D8A (__imp_load_CreateIconIndirect.c)
 *     __imp_load_GetAsyncKeyState @ 0x180196D96 (__imp_load_GetAsyncKeyState.c)
 *     __imp_load_CalculatePopupWindowPosition @ 0x180196DA2 (__imp_load_CalculatePopupWindowPosition.c)
 *     __imp_load_AcquireIAMKey @ 0x180196DAE (__imp_load_AcquireIAMKey.c)
 *     __imp_load_EnableIAMAccess @ 0x180196DBA (__imp_load_EnableIAMAccess.c)
 *     __imp_load_SetCancelRotationDelayHintWindow @ 0x180196DC6 (__imp_load_SetCancelRotationDelayHintWindow.c)
 *     __imp_load_ClearForeground @ 0x180196DD2 (__imp_load_ClearForeground.c)
 *     __imp_load_SetActivationFilter @ 0x180196DDE (__imp_load_SetActivationFilter.c)
 *     __imp_load_SetFallbackForeground @ 0x180196DEA (__imp_load_SetFallbackForeground.c)
 *     __imp_load_SendEventMessage @ 0x180196DF6 (__imp_load_SendEventMessage.c)
 *     __imp_load_EnableMiPShellThread @ 0x180196E02 (__imp_load_EnableMiPShellThread.c)
 *     __imp_load_ReleaseDC @ 0x180196E0E (__imp_load_ReleaseDC.c)
 *     __imp_load_CopyImage @ 0x180196E1A (__imp_load_CopyImage.c)
 *     __imp_load_InternalGetWindowText @ 0x180196E26 (__imp_load_InternalGetWindowText.c)
 *     __imp_load_SetFocus @ 0x180196E32 (__imp_load_SetFocus.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180191670 (__delayLoadHelper2.c)
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
