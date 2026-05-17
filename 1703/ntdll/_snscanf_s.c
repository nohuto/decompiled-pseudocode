/*
 * XREFs of _snscanf_s @ 0x1800A05C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_1800A3130 @ 0x1800A3130 (sub_1800A3130.c)
 */

int snscanf_s(const char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sub_1800A3130(Buffer, BufferCount, Format, (__int64 *)va);
  sub_180095DE0();
  return -1;
}
