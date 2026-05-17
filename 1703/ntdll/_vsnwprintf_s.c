/*
 * XREFs of _vsnwprintf_s @ 0x1800A0630
 * Callers:
 *     _snwprintf_s @ 0x1800A0600 (_snwprintf_s.c)
 *     sub_18010B820 @ 0x18010B820 (sub_18010B820.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_1800A3190 @ 0x1800A3190 (sub_1800A3190.c)
 */

int __cdecl vsnwprintf_s(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const wchar_t *const Format,
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
    result = sub_1800A3190(Buffer, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
    goto LABEL_10;
  }
  result = sub_1800A3190(Buffer, BufferCount, Format, ArgList);
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
