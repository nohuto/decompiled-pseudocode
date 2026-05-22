/*
 * XREFs of __local_stdio_printf_options @ 0x1800E0DF0
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800E0DD0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800E0E00 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800E1280 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnprintf_s @ 0x1800E1D34 (_vsnprintf_s.c)
 *     sprintf_s @ 0x1800E1D9C (sprintf_s.c)
 *     _scprintf @ 0x1800E1DF0 (_scprintf.c)
 *     _vsnwprintf @ 0x1800E1E44 (_vsnwprintf.c)
 *     vswprintf_s @ 0x1800E1EA8 (vswprintf_s.c)
 *     swprintf_s @ 0x1800E1F08 (swprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
