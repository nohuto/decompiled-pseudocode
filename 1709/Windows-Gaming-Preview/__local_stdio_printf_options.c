/*
 * XREFs of __local_stdio_printf_options @ 0x180040BA0
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180040B80 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180040BB0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180041AD0 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180042098 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x1800420FC (_vsnprintf_s.c)
 *     wprintf @ 0x180042164 (wprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
