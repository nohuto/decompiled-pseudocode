/*
 * XREFs of HvViewMapCopyToFileOffset @ 0x1401E4FCC
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130A30 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E4228 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvWriteHivePrimaryFile @ 0x1404E4520 (HvWriteHivePrimaryFile.c)
 *     HvpDropPagedBins @ 0x1405BEF08 (HvpDropPagedBins.c)
 *     CmpDoSystemCacheWrite @ 0x140694D44 (CmpDoSystemCacheWrite.c)
 * Callees:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     HvViewMapAddressForFileOffset @ 0x14069FEE4 (HvViewMapAddressForFileOffset.c)
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
    result = MmCopyToCachedPage(v8, a3, 0LL, 0x1000uLL, 0);
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
