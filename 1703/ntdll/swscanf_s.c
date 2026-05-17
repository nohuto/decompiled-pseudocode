/*
 * XREFs of swscanf_s @ 0x1800A15C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_1800A4064 @ 0x1800A4064 (sub_1800A4064.c)
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
    return sub_1800A4064(Buffer, v4, Format, va);
  }
  else
  {
    sub_180095DE0();
    return -1;
  }
}
