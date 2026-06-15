/*
 * XREFs of __tailMerge_HID_DLL @ 0x1800340B6
 * Callers:
 *     __imp_load_HidD_GetHidGuid @ 0x1800340AA (__imp_load_HidD_GetHidGuid.c)
 *     __imp_load_HidD_GetAttributes @ 0x180034147 (__imp_load_HidD_GetAttributes.c)
 *     __imp_load_HidD_GetPreparsedData @ 0x180034153 (__imp_load_HidD_GetPreparsedData.c)
 *     __imp_load_HidP_GetCaps @ 0x18003415F (__imp_load_HidP_GetCaps.c)
 *     __imp_load_HidD_FreePreparsedData @ 0x18003416B (__imp_load_HidD_FreePreparsedData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800DDF20 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_HID_DLL(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_HID_DLL,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
