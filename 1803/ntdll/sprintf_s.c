/*
 * XREFs of sprintf_s @ 0x180096350
 * Callers:
 *     sub_1800420A8 @ 0x1800420A8 (sub_1800420A8.c)
 *     RtlIpv6AddressToStringA @ 0x180080770 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x180080FF0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1800F11A0 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F1210 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F12D0 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     vsprintf_s @ 0x180096380 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
