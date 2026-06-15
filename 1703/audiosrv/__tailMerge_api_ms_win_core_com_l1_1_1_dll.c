/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x180049F35
 * Callers:
 *     __imp_load_CoCreateInstance @ 0x180049F29 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoTaskMemFree @ 0x180049FAE (__imp_load_CoTaskMemFree.c)
 *     __imp_load_PropVariantClear @ 0x18004A25F (__imp_load_PropVariantClear.c)
 *     __imp_load_CoGetMalloc @ 0x18004A26B (__imp_load_CoGetMalloc.c)
 *     __imp_load_CoTaskMemAlloc @ 0x18004A277 (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoDisconnectObject @ 0x18004A32C (__imp_load_CoDisconnectObject.c)
 *     __imp_load_CoTaskMemRealloc @ 0x18004A338 (__imp_load_CoTaskMemRealloc.c)
 *     __imp_load_CoCreateGuid @ 0x18004A344 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoInitializeEx @ 0x18004A350 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x18004A35C (__imp_load_CoUninitialize.c)
 *     __imp_load_CLSIDFromString @ 0x18004A368 (__imp_load_CLSIDFromString.c)
 *     __imp_load_StringFromGUID2 @ 0x18004A47D (__imp_load_StringFromGUID2.c)
 *     __imp_load_PropVariantCopy @ 0x18004A5B5 (__imp_load_PropVariantCopy.c)
 *     __imp_load_StringFromCLSID @ 0x18004A5C1 (__imp_load_StringFromCLSID.c)
 *     __imp_load_CoSetProxyBlanket @ 0x18004A5E5 (__imp_load_CoSetProxyBlanket.c)
 *     __imp_load_CoGetPSClsid @ 0x18004A676 (__imp_load_CoGetPSClsid.c)
 *     __imp_load_IIDFromString @ 0x18004A767 (__imp_load_IIDFromString.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x18004A797 (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CoWaitForMultipleHandles @ 0x18004B3A2 (__imp_load_CoWaitForMultipleHandles.c)
 *     __imp_load_CoGetApartmentType @ 0x18004B3AE (__imp_load_CoGetApartmentType.c)
 *     __imp_load_RoGetAgileReference @ 0x18004B4E7 (__imp_load_RoGetAgileReference.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18002EDC0 (__delayLoadHelper2.c)
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
