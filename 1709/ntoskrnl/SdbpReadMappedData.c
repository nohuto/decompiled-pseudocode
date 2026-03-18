/*
 * XREFs of SdbpReadMappedData @ 0x140524D2C
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x1404F5A30 (SdbpOpenDatabaseInMemory.c)
 *     SdbpReadTagData @ 0x1404F5D38 (SdbpReadTagData.c)
 *     SdbGetTagDataSize @ 0x140524C44 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140524CF8 (SdbGetTagFromTagID.c)
 *     SdbpGetTagHeadSize @ 0x1405252D8 (SdbpGetTagHeadSize.c)
 *     SdbOpenDatabaseEx @ 0x14076DA64 (SdbOpenDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1407713B0 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  if ( a2 + a4 < a4 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      681,
      (unsigned int)"Offset and region size add up to cause an integer overflow or underflow");
  }
  else
  {
    if ( *(_DWORD *)(a1 + 20) >= a2 + a4 )
    {
      memmove(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
      return 1LL;
    }
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      686,
      (unsigned int)"Attempt to read past the end of the database offset 0x%lx size 0x%lx (0x%lx)");
  }
  return 0LL;
}
