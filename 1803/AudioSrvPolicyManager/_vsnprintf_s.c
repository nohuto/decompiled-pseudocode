/*
 * XREFs of _vsnprintf_s @ 0x180035AF8
 * Callers:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x180001F1C (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180034AC0 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsnprintf_s_0 @ 0x180035A86 (_o___stdio_common_vsnprintf_s_0.c)
 */

int __cdecl vsnprintf_s(
        char *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const char *const Format,
        va_list ArgList)
{
  int result; // eax

  _local_stdio_printf_options();
  result = o___stdio_common_vsnprintf_s_0();
  if ( result < 0 )
    return -1;
  return result;
}
