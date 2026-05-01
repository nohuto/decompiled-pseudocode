/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_private_l1_3_2_dll @ 0x18019656C
 * Callers:
 *     __imp_load_IsShellManagedWindow @ 0x180196560 (__imp_load_IsShellManagedWindow.c)
 *     __imp_load_IsShellFrameWindow @ 0x1801965E5 (__imp_load_IsShellFrameWindow.c)
 *     __imp_load_SetWindowCompositionAttribute @ 0x1801965F1 (__imp_load_SetWindowCompositionAttribute.c)
 *     __imp_load_SetWindowBand @ 0x1801965FD (__imp_load_SetWindowBand.c)
 *     __imp_load_SetWindowShowState @ 0x180196609 (__imp_load_SetWindowShowState.c)
 *     __imp_load_GetModernAppWindow @ 0x180196615 (__imp_load_GetModernAppWindow.c)
 *     __imp_load_BeginLayoutUpdate @ 0x180196621 (__imp_load_BeginLayoutUpdate.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180191670 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_private_l1_3_2_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_private_l1_3_2_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
