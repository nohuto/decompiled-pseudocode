/*
 * XREFs of VfIrpWatermark @ 0x14081DCCC
 * Callers:
 *     IovUtilWatermarkIrp @ 0x1400074C4 (IovUtilWatermarkIrp.c)
 *     PopAllocateIrp @ 0x1401673F8 (PopAllocateIrp.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x14082B39C (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14082B51C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfIrpWatermark(__int64 a1, char a2)
{
  __int64 result; // rax

  result = VfIrpDatabaseEntryFindAndLock(a1);
  if ( result )
  {
    if ( (a2 & 1) != 0 )
      *(_DWORD *)(result + 56) |= 0x100000u;
    if ( (a2 & 2) != 0 )
      *(_DWORD *)(result + 56) |= 0x20u;
    return VfIrpDatabaseEntryReleaseLock(result);
  }
  return result;
}
