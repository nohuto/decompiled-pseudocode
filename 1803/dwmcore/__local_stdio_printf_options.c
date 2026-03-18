/*
 * XREFs of __local_stdio_printf_options @ 0x1800DAAC0
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800DAAA0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800DAAD0 (initialize_msvcrt_compatibility.c)
 *     _vsnprintf @ 0x1800DB7BC (_vsnprintf.c)
 *     _vsnwprintf @ 0x1800DB820 (_vsnwprintf.c)
 *     swprintf_s @ 0x1800DB884 (swprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800DC7EC (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
