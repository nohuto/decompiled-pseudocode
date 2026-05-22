/*
 * XREFs of __local_stdio_printf_options @ 0x1800C9DA0
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800C9D80 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800C9DB0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800CA22C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1800CAD44 (_vsnwprintf.c)
 *     vswprintf_s @ 0x1800CADA8 (vswprintf_s.c)
 *     _vsnprintf_s @ 0x1800CAE08 (_vsnprintf_s.c)
 *     sprintf_s @ 0x1800CAE70 (sprintf_s.c)
 *     swprintf_s @ 0x1800CAEC4 (swprintf_s.c)
 *     _scprintf @ 0x1800CAF18 (_scprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
