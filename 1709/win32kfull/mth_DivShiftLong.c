/*
 * XREFs of mth_DivShiftLong @ 0x1C02B74FC
 * Callers:
 *     fs_FindBitMapSize @ 0x1C02B4CD4 (fs_FindBitMapSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall mth_DivShiftLong(int a1, __int16 a2)
{
  int v2; // eax

  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
      return (unsigned int)a1;
    switch ( a2 )
    {
      case 2:
        a1 >>= 1;
        return (unsigned int)a1;
      case 4:
        a1 >>= 2;
        return (unsigned int)a1;
      case 8:
        a1 >>= 3;
        return (unsigned int)a1;
    }
  }
  if ( a1 < 0 )
    v2 = a1 - a2 + 1;
  else
    v2 = a1;
  return (unsigned int)(v2 / a2);
}
