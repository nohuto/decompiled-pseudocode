/*
 * XREFs of __local_stdio_scanf_options @ 0x180041B98
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180041B70 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180041BA0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180042AC8 (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
