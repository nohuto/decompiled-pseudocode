/*
 * XREFs of sprintf_s @ 0x18009BD70
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x1800228B0 (LdrpLogDelayLoadTrigger.c)
 *     RtlIpv6AddressToStringA @ 0x18007B910 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x1800866A0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1800F4C70 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F4CE0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F4DA0 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     vsprintf_s @ 0x18009BDA0 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
