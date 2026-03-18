/*
 * XREFs of _CmIsDeviceInterfaceEnabled @ 0x140528078
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140518C7C (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140527330 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405D18F0 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1405280B8 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 */

NTSTATUS __fastcall CmIsDeviceInterfaceEnabled(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return NtPlugPlayGetDeviceInterfaceEnabled(a1, &DestinationString, a4);
  return result;
}
