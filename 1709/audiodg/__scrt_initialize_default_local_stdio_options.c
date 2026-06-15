/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x14001D3B8
 * Callers:
 *     pre_c_initialization @ 0x14001C930 (pre_c_initialization.c)
 *     post_pgo_initialization @ 0x14001C9E0 (post_pgo_initialization.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x14001C900 (__local_stdio_printf_options.c)
 *     __local_stdio_scanf_options @ 0x14001C908 (__local_stdio_scanf_options.c)
 */

unsigned __int64 *_scrt_initialize_default_local_stdio_options()
{
  unsigned __int64 *v0; // rax
  unsigned __int64 *result; // rax

  v0 = _local_stdio_printf_options();
  *v0 |= 4uLL;
  result = _local_stdio_scanf_options();
  *result |= 2uLL;
  return result;
}
