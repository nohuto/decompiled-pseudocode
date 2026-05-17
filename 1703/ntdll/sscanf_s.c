/*
 * XREFs of sscanf_s @ 0x1800A1090
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_1800A3130 @ 0x1800A3130 (sub_1800A3130.c)
 */

int sscanf_s(const char *const Buffer, const char *const Format, ...)
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
    return sub_1800A3130(Buffer, v4, Format, va);
  }
  else
  {
    sub_180095DE0();
    return -1;
  }
}
