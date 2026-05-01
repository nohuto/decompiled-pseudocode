/*
 * XREFs of __local_stdio_printf_options @ 0x180041B90
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180041B70 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180041BA0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180042AC8 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnprintf_s @ 0x180043098 (_vsnprintf_s.c)
 *     wprintf @ 0x180043100 (wprintf.c)
 *     _vsnwprintf @ 0x180043154 (_vsnwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
