/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x18004D07C
 * Callers:
 *     __imp_load_CoTaskMemFree @ 0x18004D070 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_CoCreateInstance @ 0x18004D0F5 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x18004D101 (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CoInitializeEx @ 0x18004D23C (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x18004D248 (__imp_load_CoUninitialize.c)
 *     __imp_load_CoCreateGuid @ 0x18004D254 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoGetApartmentType @ 0x18004DCA6 (__imp_load_CoGetApartmentType.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18004A680 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
