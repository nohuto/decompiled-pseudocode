/*
 * XREFs of SdbpReadMappedData @ 0x1405FD5A8
 * Callers:
 *     SdbpReadTagData @ 0x1405FD0CC (SdbpReadTagData.c)
 *     SdbpGetTagHeadSize @ 0x1405FD3F4 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x1405FD4C0 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     SdbpOpenDatabaseInMemory @ 0x1405FFAF0 (SdbpOpenDatabaseInMemory.c)
 *     SdbOpenDatabaseEx @ 0x1407D4BA8 (SdbOpenDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1407D8690 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  int v7; // [rsp+30h] [rbp-18h]

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
    v7 = *(_DWORD *)(a1 + 20);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      686,
      (unsigned int)"Attempt to read past the end of the database offset 0x%lx size 0x%lx (0x%lx)",
      a2,
      a4,
      v7);
  }
  return 0LL;
}
