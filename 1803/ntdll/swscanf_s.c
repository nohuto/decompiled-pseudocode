/*
 * XREFs of swscanf_s @ 0x180096990
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180099634 @ 0x180099634 (sub_180099634.c)
 */

int swscanf_s(const wchar_t *const Buffer, const wchar_t *const Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Buffer[v4] );
    return sub_180099634(Buffer, v4, Format, va);
  }
  else
  {
    sub_18008B020();
    return -1;
  }
}
