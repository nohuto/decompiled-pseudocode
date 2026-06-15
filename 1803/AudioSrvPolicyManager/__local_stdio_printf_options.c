/*
 * XREFs of __local_stdio_printf_options @ 0x180034AC0
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180034AA0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180034AD0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180035694 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnprintf_s @ 0x180035AF8 (_vsnprintf_s.c)
 *     _vsnwprintf @ 0x180035B60 (_vsnwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
