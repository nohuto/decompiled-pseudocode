/*
 * XREFs of HvViewMapCopyToFileOffset @ 0x1401E0E98
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E00E8 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvWriteHivePrimaryFile @ 0x1404391D8 (HvWriteHivePrimaryFile.c)
 *     HvpDropPagedBins @ 0x1405BCFDC (HvpDropPagedBins.c)
 *     CmpDoSystemCacheWrite @ 0x14066A6BC (CmpDoSystemCacheWrite.c)
 * Callees:
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     HvViewMapAddressForFileOffset @ 0x1406759AC (HvViewMapAddressForFileOffset.c)
 */

__int64 __fastcall HvViewMapCopyToFileOffset(__int64 a1, unsigned int a2, char *a3, int a4)
{
  int v4; // ebx
  ULONG_PTR v8; // rax
  __int64 result; // rax

  v4 = a4;
  if ( !a4 )
    return 0LL;
  while ( 1 )
  {
    v8 = HvViewMapAddressForFileOffset(a1, a2);
    result = MmCopyToCachedPage(v8, a3, 0, 0x1000uLL, 0);
    if ( (int)result < 0 )
      break;
    a2 += 4096;
    a3 += 4096;
    v4 -= 4096;
    if ( !v4 )
      return 0LL;
  }
  return result;
}
