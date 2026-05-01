/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x180098BB4
 * Callers:
 *     dllmain_crt_process_attach @ 0x180097E60 (dllmain_crt_process_attach.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180097DE0 (__local_stdio_printf_options.c)
 *     __local_stdio_scanf_options @ 0x180097DE8 (__local_stdio_scanf_options.c)
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
