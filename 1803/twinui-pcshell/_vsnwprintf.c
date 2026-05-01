/*
 * XREFs of _vsnwprintf @ 0x180099240
 * Callers:
 *     Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_ba3db7aa6f4c4ff7c0aefa43081dccfe___ @ 0x18001CE10 (Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_short___--_Initializ.c)
 *     StringVPrintfWorkerW @ 0x18001D330 (StringVPrintfWorkerW.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800835D8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW_0 @ 0x1801F93C0 (StringVPrintfWorkerW_0.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180097DE0 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x180099146 (_o___stdio_common_vswprintf_0.c)
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
