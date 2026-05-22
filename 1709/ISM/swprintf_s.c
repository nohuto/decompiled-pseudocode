/*
 * XREFs of swprintf_s @ 0x1800CAEC4
 * Callers:
 *     ?GetAccessibilitySettings@@YAJ_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x18009F2AC (-GetAccessibilitySettings@@YAJ_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800C9DA0 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_s @ 0x1800CAA06 (__stdio_common_vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  unsigned __int64 *v6; // rax
  int result; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_s(*v6, Buffer, BufferCount, Format, 0LL, va);
  if ( result < 0 )
    return -1;
  return result;
}
