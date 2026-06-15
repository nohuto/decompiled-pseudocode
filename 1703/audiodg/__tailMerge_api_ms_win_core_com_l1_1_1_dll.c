/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x14001DD9D
 * Callers:
 *     __imp_load_CoTaskMemAlloc @ 0x14001DD91 (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateInstance @ 0x14001DE16 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoTaskMemFree @ 0x14001DE22 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_CoUninitialize @ 0x14001E042 (__imp_load_CoUninitialize.c)
 *     __imp_load_CoRegisterClassObject @ 0x14001E0EB (__imp_load_CoRegisterClassObject.c)
 *     __imp_load_CoResumeClassObjects @ 0x14001E103 (__imp_load_CoResumeClassObjects.c)
 *     __imp_load_CoInitializeSecurity @ 0x14001E10F (__imp_load_CoInitializeSecurity.c)
 *     __imp_load_CoInitializeEx @ 0x14001E133 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoRevokeClassObject @ 0x14001E13F (__imp_load_CoRevokeClassObject.c)
 *     __imp_load_PropVariantClear @ 0x14001E14B (__imp_load_PropVariantClear.c)
 *     __imp_load_CoImpersonateClient @ 0x14001E157 (__imp_load_CoImpersonateClient.c)
 *     __imp_load_CoRevertToSelf @ 0x14001E163 (__imp_load_CoRevertToSelf.c)
 *     __imp_load_CoCreateGuid @ 0x14001E16F (__imp_load_CoCreateGuid.c)
 *     __imp_load_StringFromCLSID @ 0x14001E19F (__imp_load_StringFromCLSID.c)
 *     __imp_load_StringFromGUID2 @ 0x14001E1AB (__imp_load_StringFromGUID2.c)
 *     __imp_load_CLSIDFromString @ 0x14001E1B7 (__imp_load_CLSIDFromString.c)
 *     __imp_load_CoGetApartmentType @ 0x14001E1F6 (__imp_load_CoGetApartmentType.c)
 *     __imp_load_RoGetAgileReference @ 0x14001E202 (__imp_load_RoGetAgileReference.c)
 *     __imp_load_CoReleaseMarshalData @ 0x14001E20E (__imp_load_CoReleaseMarshalData.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x14001E21A (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CreateStreamOnHGlobal @ 0x14001E226 (__imp_load_CreateStreamOnHGlobal.c)
 *     __imp_load_CoMarshalInterface @ 0x14001E232 (__imp_load_CoMarshalInterface.c)
 *     __imp_load_CoTaskMemRealloc @ 0x14001E589 (__imp_load_CoTaskMemRealloc.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x14001B850 (__delayLoadHelper2.c)
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
