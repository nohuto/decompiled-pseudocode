/*
 * XREFs of _snprintf_s @ 0x180049D10
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x1800D3750 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180048830 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsnprintf_s_0 @ 0x180049B24 (_o___stdio_common_vsnprintf_s_0.c)
 */

int snprintf_s(char *const Buffer, const size_t BufferCount, const size_t MaxCount, const char *const Format, ...)
{
  int result; // eax

  _local_stdio_printf_options();
  result = o___stdio_common_vsnprintf_s_0();
  if ( result < 0 )
    return -1;
  return result;
}
