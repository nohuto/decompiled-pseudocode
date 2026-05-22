/*
 * XREFs of _scprintf @ 0x1800E1DF0
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x18004AE9C (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@M@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800E0DF0 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_0 @ 0x1800E1A5A (_o___stdio_common_vsprintf_0.c)
 */

int scprintf(const char *const Format, ...)
{
  unsigned __int64 *v2; // rax
  int result; // eax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  v2 = _local_stdio_printf_options();
  result = o___stdio_common_vsprintf_0(*v2 | 2, 0LL, 0LL, Format, 0LL, va);
  if ( result < 0 )
    return -1;
  return result;
}
