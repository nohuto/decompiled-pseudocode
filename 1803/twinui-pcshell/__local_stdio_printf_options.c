/*
 * XREFs of __local_stdio_printf_options @ 0x180097DE0
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180097DC0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180097DF0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180098BB4 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnprintf_s @ 0x1800991D8 (_vsnprintf_s.c)
 *     _vsnwprintf @ 0x180099240 (_vsnwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
