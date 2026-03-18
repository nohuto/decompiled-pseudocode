/*
 * XREFs of SdbInitDatabaseInMemory @ 0x1405FFBD0
 * Callers:
 *     PiLookupInDDB @ 0x1405FBCF4 (PiLookupInDDB.c)
 *     KsepShimDbMapToMemory @ 0x1405FFEA0 (KsepShimDbMapToMemory.c)
 *     PpInitializeBootDDB @ 0x1408A48EC (PpInitializeBootDDB.c)
 *     KseShimDatabaseBootInitialize @ 0x1408C89C4 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     SdbpOpenDatabaseInMemory @ 0x1405FFAF0 (SdbpOpenDatabaseInMemory.c)
 *     SdbCloseDatabaseRead @ 0x1405FFB88 (SdbCloseDatabaseRead.c)
 *     SdbpInitializeMatchers @ 0x1405FFC58 (SdbpInitializeMatchers.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

_QWORD *__fastcall SdbInitDatabaseInMemory(__int64 a1, int a2)
{
  _QWORD *v4; // rbx
  char *v5; // rax
  _QWORD *v7; // rcx

  v4 = AslAlloc(a1, 0x3F0uLL);
  if ( v4 )
  {
    v5 = (char *)SdbpOpenDatabaseInMemory(a1, a2, 0);
    v4[1] = v5;
    if ( v5 )
    {
      *((_DWORD *)v4 + 6) = 1;
      *((_DWORD *)v4 + 7) = 1;
      *((_DWORD *)v4 + 14) = 2;
      v4[6] = v5;
      *((_OWORD *)v4 + 2) = *(_OWORD *)(v5 + 28);
      SdbpInitializeMatchers(v4);
      return v4;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 1013, (unsigned int)"Unable to open main database");
    v7 = (_QWORD *)v4[1];
    if ( v7 )
      SdbCloseDatabaseRead(v7);
    ExFreePoolWithTag(v4, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 1004, (unsigned int)"Failed to allocate sdbcontext");
  }
  return 0LL;
}
