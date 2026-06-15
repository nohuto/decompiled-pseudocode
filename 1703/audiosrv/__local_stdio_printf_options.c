/*
 * XREFs of __local_stdio_printf_options @ 0x180048830
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180048810 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180048840 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180049738 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180049B9C (_vsnwprintf.c)
 *     vswprintf_s @ 0x180049C00 (vswprintf_s.c)
 *     _vsnprintf_s @ 0x180049C60 (_vsnprintf_s.c)
 *     _vscwprintf @ 0x180049CC8 (_vscwprintf.c)
 *     _snprintf_s @ 0x180049D10 (_snprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
