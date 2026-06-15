/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x180033CCB
 * Callers:
 *     __imp_load_CoCreateInstance @ 0x180033CBF (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoTaskMemFree @ 0x180033D44 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_PropVariantClear @ 0x180033FF5 (__imp_load_PropVariantClear.c)
 *     __imp_load_CoGetMalloc @ 0x180034001 (__imp_load_CoGetMalloc.c)
 *     __imp_load_CoTaskMemAlloc @ 0x18003400D (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoDisconnectObject @ 0x180034177 (__imp_load_CoDisconnectObject.c)
 *     __imp_load_CoCreateGuid @ 0x180034183 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoTaskMemRealloc @ 0x18003418F (__imp_load_CoTaskMemRealloc.c)
 *     __imp_load_CoInitializeEx @ 0x18003419B (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x1800341A7 (__imp_load_CoUninitialize.c)
 *     __imp_load_CLSIDFromString @ 0x1800341B3 (__imp_load_CLSIDFromString.c)
 *     __imp_load_StringFromGUID2 @ 0x1800342C8 (__imp_load_StringFromGUID2.c)
 *     __imp_load_PropVariantCopy @ 0x180034400 (__imp_load_PropVariantCopy.c)
 *     __imp_load_StringFromCLSID @ 0x18003440C (__imp_load_StringFromCLSID.c)
 *     __imp_load_CoSetProxyBlanket @ 0x180034430 (__imp_load_CoSetProxyBlanket.c)
 *     __imp_load_CoGetPSClsid @ 0x1800344C1 (__imp_load_CoGetPSClsid.c)
 *     __imp_load_IIDFromString @ 0x1800345B2 (__imp_load_IIDFromString.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x180034667 (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CoWaitForMultipleHandles @ 0x1800351ED (__imp_load_CoWaitForMultipleHandles.c)
 *     __imp_load_CoGetApartmentType @ 0x1800351F9 (__imp_load_CoGetApartmentType.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800DDF20 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
