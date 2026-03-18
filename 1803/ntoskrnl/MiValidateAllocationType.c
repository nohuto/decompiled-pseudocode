/*
 * XREFs of MiValidateAllocationType @ 0x1405B4680
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1405B4210 (MiAllocateVirtualMemoryPrepare.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateAllocationType(int a1, int a2)
{
  if ( (a1 & 0x9E038FFF) != 0 || (a1 & 0x1083000) == 0 )
    return 3221225485LL;
  if ( (a1 & 0x61EC4000) == 0 )
    return 0LL;
  if ( (a1 & 0x80000) != 0 && a1 != 0x80000 || (a1 & 0x1000000) != 0 && a1 != 0x1000000 )
    return 3221225485LL;
  if ( (a1 & 0x20400000) == 0x20400000 )
  {
    if ( (a1 & 0x40800000) != 0 )
      return 3221225485LL;
  }
  else if ( (a1 & 0x20000000) != 0 && ((a1 & 0x1000) == 0 || (a1 & 0x40E00000) != 0) )
  {
    return 3221225485LL;
  }
  if ( (a1 & 0x800000) != 0 )
  {
    if ( (a1 & 0x40600000) != 0 )
      return 3221225485LL;
    if ( (a2 & 0xFFFFF9F9) != 0 )
      return 3221225541LL;
  }
  else if ( (a1 & 0x400000) == 0 || (a1 & 0x20400000) == 0x20400000 )
  {
    if ( (a1 & 0x200000) != 0 )
    {
      if ( (a1 & 0x2000) == 0 )
        return 3221225485LL;
      if ( (a1 & 0x40000000) != 0 )
        return 3221225485LL;
    }
    else if ( (a1 & 0x40100000) == 0x40100000 )
    {
      return 3221225485LL;
    }
  }
  else
  {
    if ( (a1 & 0x2000) == 0 || (a1 & 0xFFAFDFFF) != 0 )
      return 3221225485LL;
    if ( a2 != 4 )
      return 3221225541LL;
  }
  if ( (a1 & 0x40000) == 0 )
  {
    if ( (a1 & 0x4000) == 0 || (a1 & 0x2000) != 0 && (a1 & 0xFFFF8FFF) == 0 )
      return 0LL;
    return 3221225485LL;
  }
  if ( (a1 & 0x2000) == 0 || (a1 & 0xBFEBDFFF) != 0 )
    return 3221225485LL;
  if ( a2 == 1 )
    return 0LL;
  return 3221225485LL;
}
