/*
 * XREFs of _snwscanf_s @ 0x1800A06E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_1800A4064 @ 0x1800A4064 (sub_1800A4064.c)
 */

int snwscanf_s(const wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sub_1800A4064(Buffer, BufferCount, Format, (__int64 *)va);
  sub_180095DE0();
  return -1;
}
