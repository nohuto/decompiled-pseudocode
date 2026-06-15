/*
 * XREFs of __local_stdio_printf_options @ 0x180060530
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180060510 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180060540 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180061424 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnprintf @ 0x180061898 (_vsnprintf.c)
 *     _vsnprintf_s @ 0x1800618FC (_vsnprintf_s.c)
 *     _snprintf_s @ 0x180061964 (_snprintf_s.c)
 *     _vsnwprintf @ 0x1800619C0 (_vsnwprintf.c)
 *     vswprintf_s @ 0x180061A24 (vswprintf_s.c)
 *     _vscwprintf @ 0x180061A84 (_vscwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
