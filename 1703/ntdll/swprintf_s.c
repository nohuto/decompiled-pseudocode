/*
 * XREFs of swprintf_s @ 0x1800A1530
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x1800603E0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x180060530 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x180061F90 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x180082C20 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x180082CF0 (RtlIpv4AddressToStringW.c)
 *     sub_1800D39E4 @ 0x1800D39E4 (sub_1800D39E4.c)
 *     RtlEthernetAddressToStringW @ 0x1800F4250 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x1800A1560 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
