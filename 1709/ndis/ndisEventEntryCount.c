/*
 * XREFs of ndisEventEntryCount @ 0x1C00C214C
 * Callers:
 *     ndisAllocateEventLog @ 0x1C00C1FEC (ndisAllocateEventLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisEventEntryCount(int a1)
{
  int v2; // ebx
  int v3; // ebx
  int v5; // ebx
  int v6; // ebx

  if ( !MmIsDriverVerifyingByAddress(DriverEntry) )
  {
    if ( !a1 )
      return 4LL;
    v2 = a1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( !v3 )
        return 32LL;
      if ( v3 != 1 )
        return 4LL;
      return 4096LL;
    }
    return 16LL;
  }
  if ( !a1 )
    return 16LL;
  v5 = a1 - 1;
  if ( !v5 )
    return 32LL;
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      return 4096LL;
    return 16LL;
  }
  return 256LL;
}
