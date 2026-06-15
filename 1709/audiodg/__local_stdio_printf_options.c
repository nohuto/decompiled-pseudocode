/*
 * XREFs of __local_stdio_printf_options @ 0x14001C900
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x14001C8E0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x14001C910 (initialize_msvcrt_compatibility.c)
 *     sprintf_s @ 0x14001D2A0 (sprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x14001D3B8 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x14001D9CC (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x14001DA30 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
