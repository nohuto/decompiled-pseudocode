/*
 * XREFs of __tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll @ 0x18003EE8E
 * Callers:
 *     __imp_load_D3DKMTGetYieldPercentage @ 0x18003EE82 (__imp_load_D3DKMTGetYieldPercentage.c)
 *     __imp_load_D3DKMTSetYieldPercentage @ 0x18003EF8C (__imp_load_D3DKMTSetYieldPercentage.c)
 *     __imp_load_D3DKMTGetMemoryBudgetTarget @ 0x18003EF98 (__imp_load_D3DKMTGetMemoryBudgetTarget.c)
 *     __imp_load_D3DKMTSetMemoryBudgetTarget @ 0x18003EFA4 (__imp_load_D3DKMTSetMemoryBudgetTarget.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18003E020 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_dx_d3dkmt_l1_1_3_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
