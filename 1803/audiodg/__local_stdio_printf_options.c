/*
 * XREFs of __local_stdio_printf_options @ 0x14001B9C0
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x14001B9A0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x14001B9D0 (initialize_msvcrt_compatibility.c)
 *     sprintf_s @ 0x14001C358 (sprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x14001C474 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnprintf_s @ 0x14001CA84 (_vsnprintf_s.c)
 *     _vsnwprintf @ 0x14001CAEC (_vsnwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
