/*
 * XREFs of sprintf_s @ 0x14001D2A0
 * Callers:
 *     ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x1400436C8 (-GetDisplayName@CDisplayNode@@QEAAPEBDXZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x14001C900 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_s_0 @ 0x14001D922 (_o___stdio_common_vsprintf_s_0.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  unsigned __int64 *v6; // rax
  int result; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = _local_stdio_printf_options();
  result = o___stdio_common_vsprintf_s_0(*v6, Buffer, BufferCount, Format, 0LL, (__int64 *)va);
  if ( result < 0 )
    return -1;
  return result;
}
