/*
 * XREFs of __local_stdio_printf_options @ 0x180032710
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800326F0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180032720 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180033608 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180033A6C (_vsnwprintf.c)
 *     vswprintf_s @ 0x180033AD0 (vswprintf_s.c)
 *     _vsnprintf_s @ 0x180033B30 (_vsnprintf_s.c)
 *     _vscwprintf @ 0x180033B98 (_vscwprintf.c)
 *     _snprintf_s @ 0x180033BE0 (_snprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
