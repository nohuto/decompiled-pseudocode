/*
 * XREFs of __local_stdio_printf_options @ 0x180193A90
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180193A70 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180193AA0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180194840 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180194E70 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x180194ED4 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
