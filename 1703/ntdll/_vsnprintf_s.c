/*
 * XREFs of _vsnprintf_s @ 0x1800A0520
 * Callers:
 *     _snprintf_s @ 0x1800A04F0 (_snprintf_s.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_1800A23A4 @ 0x1800A23A4 (sub_1800A23A4.c)
 */

int __cdecl vsnprintf_s(
        char *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const char *const Format,
        va_list ArgList)
{
  int result; // eax

  if ( !Format )
    goto LABEL_12;
  if ( MaxCount )
  {
    if ( !Buffer )
    {
LABEL_12:
      sub_180095DE0();
      return -1;
    }
  }
  else if ( !Buffer )
  {
    if ( !BufferCount )
      return 0;
    goto LABEL_12;
  }
  if ( !BufferCount )
    goto LABEL_12;
  if ( BufferCount > MaxCount )
  {
    result = sub_1800A23A4(Buffer, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
    goto LABEL_10;
  }
  result = sub_1800A23A4(Buffer, BufferCount, Format, ArgList);
  if ( result != -2 )
  {
LABEL_10:
    if ( result >= 0 )
      return result;
    goto LABEL_11;
  }
  if ( MaxCount == -1LL )
    return -1;
LABEL_11:
  *Buffer = 0;
  if ( result == -2 )
    goto LABEL_12;
  return -1;
}
