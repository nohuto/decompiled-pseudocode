/*
 * XREFs of __local_stdio_printf_options @ 0x1801E1AF0
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1801E1AD0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1801E1B00 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1801E2890 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1801E2E90 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x1801E2EF4 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
