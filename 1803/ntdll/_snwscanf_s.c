/*
 * XREFs of _snwscanf_s @ 0x180095A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180099634 @ 0x180099634 (sub_180099634.c)
 */

int snwscanf_s(const wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sub_180099634(Buffer, BufferCount, Format, (__int64 *)va);
  sub_18008B020();
  return -1;
}
