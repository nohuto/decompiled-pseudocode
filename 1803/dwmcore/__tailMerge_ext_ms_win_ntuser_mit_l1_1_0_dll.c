/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x1800DBF4D
 * Callers:
 *     __imp_load_DWMCommitInputSystemOutputConfig @ 0x1800DBF41 (__imp_load_DWMCommitInputSystemOutputConfig.c)
 *     __imp_load_DWMBindCursorToOutputConfig @ 0x1800DBFC6 (__imp_load_DWMBindCursorToOutputConfig.c)
 *     __imp_load_DWMSetInputSystemOutputConfig @ 0x1800DBFD2 (__imp_load_DWMSetInputSystemOutputConfig.c)
 *     __imp_load_DWMSetCursorOrientation @ 0x1800DBFDE (__imp_load_DWMSetCursorOrientation.c)
 *     __imp_load_MITGetCursorUpdateHandle @ 0x1800DCCC8 (__imp_load_MITGetCursorUpdateHandle.c)
 *     __imp_load_MITActivateInputProcessing @ 0x1800DCCD4 (__imp_load_MITActivateInputProcessing.c)
 *     __imp_load_MITDeactivateInputProcessing @ 0x1800DCCE0 (__imp_load_MITDeactivateInputProcessing.c)
 *     __imp_load_MITDispatchCompletion @ 0x1800DCCEC (__imp_load_MITDispatchCompletion.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800C9150 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_mit_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
