/*
 * XREFs of _vsnwprintf @ 0x1800619C0
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180016F9C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002ABE0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x18009B618 (StringVPrintfWorkerW.c)
 *     StringVPrintfWorkerW_0 @ 0x18009E6DC (StringVPrintfWorkerW_0.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180060530 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x180061822 (_o___stdio_common_vswprintf_0.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, Args);
  if ( result < 0 )
    return -1;
  return result;
}
