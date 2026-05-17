/*
 * XREFs of _i64toa_s @ 0x18009FDC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009FE84 @ 0x18009FE84 (sub_18009FE84.c)
 */

errno_t __cdecl i64toa_s(__int64 Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return sub_18009FE84(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
