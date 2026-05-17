/*
 * XREFs of vsprintf_s @ 0x1800A1040
 * Callers:
 *     sprintf_s @ 0x1800A1010 (sprintf_s.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_1800A23A4 @ 0x1800A23A4 (sub_1800A23A4.c)
 */

int __cdecl vsprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  int result; // eax

  if ( !Buffer || !BufferCount || !Format )
    goto LABEL_6;
  result = sub_1800A23A4(Buffer, BufferCount, Format, ArgList);
  if ( result >= 0 )
    return result;
  *Buffer = 0;
  if ( result == -2 )
LABEL_6:
    sub_180095DE0();
  return -1;
}
