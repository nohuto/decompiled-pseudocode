/*
 * XREFs of sprintf_s @ 0x1800A1010
 * Callers:
 *     sub_18003AAAC @ 0x18003AAAC (sub_18003AAAC.c)
 *     RtlIpv6AddressToStringA @ 0x18007BF90 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x180087BB0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1800F3FF0 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F4060 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F4120 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     vsprintf_s @ 0x1800A1040 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
