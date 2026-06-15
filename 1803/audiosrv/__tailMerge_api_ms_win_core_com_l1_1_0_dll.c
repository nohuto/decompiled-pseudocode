/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x180061E01
 * Callers:
 *     __imp_load_CoTaskMemFree @ 0x180061DF5 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_PropVariantClear @ 0x180061E7A (__imp_load_PropVariantClear.c)
 *     __imp_load_CoCreateInstance @ 0x180061E86 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoGetMalloc @ 0x180061E92 (__imp_load_CoGetMalloc.c)
 *     __imp_load_CoTaskMemAlloc @ 0x180061E9E (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateGuid @ 0x180062008 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoDisconnectObject @ 0x180062014 (__imp_load_CoDisconnectObject.c)
 *     __imp_load_CoInitializeEx @ 0x180062020 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x18006202C (__imp_load_CoUninitialize.c)
 *     __imp_load_CoTaskMemRealloc @ 0x180062038 (__imp_load_CoTaskMemRealloc.c)
 *     __imp_load_StringFromGUID2 @ 0x1800621D2 (__imp_load_StringFromGUID2.c)
 *     __imp_load_CLSIDFromString @ 0x1800621DE (__imp_load_CLSIDFromString.c)
 *     __imp_load_PropVariantCopy @ 0x180062316 (__imp_load_PropVariantCopy.c)
 *     __imp_load_StringFromCLSID @ 0x180062322 (__imp_load_StringFromCLSID.c)
 *     __imp_load_CoSetProxyBlanket @ 0x180062346 (__imp_load_CoSetProxyBlanket.c)
 *     __imp_load_CoGetPSClsid @ 0x1800623D7 (__imp_load_CoGetPSClsid.c)
 *     __imp_load_CreateStreamOnHGlobal @ 0x1800623E3 (__imp_load_CreateStreamOnHGlobal.c)
 *     __imp_load_IIDFromString @ 0x1800624D4 (__imp_load_IIDFromString.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x180062504 (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CoWaitForMultipleHandles @ 0x180063008 (__imp_load_CoWaitForMultipleHandles.c)
 *     __imp_load_CoGetApartmentType @ 0x180063014 (__imp_load_CoGetApartmentType.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180049AA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
