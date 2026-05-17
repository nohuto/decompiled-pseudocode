/*
 * XREFs of swprintf_s @ 0x18009C290
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x18006B970 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x18006BAB0 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x1800717A0 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x180080070 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x180080150 (RtlIpv4AddressToStringW.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CE750 (CsrpLocalSetupForSecureProcess.c)
 *     RtlEthernetAddressToStringW @ 0x1800F4EC0 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x18009C2C0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
