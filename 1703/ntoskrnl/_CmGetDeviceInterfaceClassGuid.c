/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x1404E16A4
 * Callers:
 *     PiSwCompleteCreate @ 0x14045F814 (PiSwCompleteCreate.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1404E141C (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x1404E1710 (_CmGetDeviceInterfaceClassGuidString.c)
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
