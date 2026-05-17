/*
 * XREFs of swprintf_s @ 0x180096900
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x180006BC0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x180006D00 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x18006D930 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x180079FD0 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x18007A0A0 (RtlIpv4AddressToStringW.c)
 *     sub_1800C8094 @ 0x1800C8094 (sub_1800C8094.c)
 *     RtlEthernetAddressToStringW @ 0x1800F13F0 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x180096930 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
