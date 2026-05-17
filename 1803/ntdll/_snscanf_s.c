/*
 * XREFs of _snscanf_s @ 0x180095900
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180098700 @ 0x180098700 (sub_180098700.c)
 */

int snscanf_s(const char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sub_180098700(Buffer, BufferCount, Format, (__int64 *)va);
  sub_18008B020();
  return -1;
}
