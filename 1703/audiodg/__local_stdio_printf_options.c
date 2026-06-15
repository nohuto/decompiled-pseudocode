/*
 * XREFs of __local_stdio_printf_options @ 0x14001CB90
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x14001CB70 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x14001CBA0 (initialize_msvcrt_compatibility.c)
 *     sprintf_s @ 0x14001D528 (sprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x14001D640 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x14001DC4C (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x14001DCB0 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
