/*
 * XREFs of _i64toa_s @ 0x1800950F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095184 @ 0x180095184 (sub_180095184.c)
 */

errno_t __cdecl i64toa_s(__int64 Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return sub_180095184(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
