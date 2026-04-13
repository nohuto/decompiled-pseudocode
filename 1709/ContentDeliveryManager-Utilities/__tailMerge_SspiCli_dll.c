/*
 * XREFs of __tailMerge_SspiCli_dll @ 0x1800B49A1
 * Callers:
 *     __imp_load_GetUserNameExW @ 0x1800B4995 (__imp_load_GetUserNameExW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180092260 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_SspiCli_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_SspiCli_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
