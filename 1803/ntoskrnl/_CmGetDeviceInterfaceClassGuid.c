/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x14050AE00
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14050AEB8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiSwCompleteCreate @ 0x1405C59F0 (PiSwCompleteCreate.c)
 *     IopProcessSetInterfaceState @ 0x1405F4C6C (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x14050AE6C (_CmGetDeviceInterfaceClassGuidString.c)
 */

int __fastcall CmGetDeviceInterfaceClassGuid(__int64 a1, __int64 a2, GUID *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+30h] [rbp-68h] BYREF

  result = CmGetDeviceInterfaceClassGuidString(a1, a2, SourceString);
  if ( result >= 0 )
  {
    result = RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( result >= 0 )
      return RtlGUIDFromString(&DestinationString, a3);
  }
  return result;
}
