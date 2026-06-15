/*
 * XREFs of __local_stdio_printf_options @ 0x1800265E0
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800265C0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800265F0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800271B0 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180027618 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x18002767C (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
