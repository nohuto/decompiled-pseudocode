/*
 * XREFs of ProbeAndConvertXFORM @ 0x1C0022DC0
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C00220D0 (NtGdiExtCreateRegion.c)
 * Callees:
 *     bConvertDwordToFloat @ 0x1C0022E70 (bConvertDwordToFloat.c)
 */

__int64 __fastcall ProbeAndConvertXFORM(unsigned int *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)bConvertDwordToFloat(*a1)
    && (unsigned int)bConvertDwordToFloat(a1[1])
    && (unsigned int)bConvertDwordToFloat(a1[2])
    && (unsigned int)bConvertDwordToFloat(a1[3])
    && (unsigned int)bConvertDwordToFloat(a1[4]) )
  {
    return (unsigned int)bConvertDwordToFloat(a1[5]) != 0;
  }
  return v2;
}
