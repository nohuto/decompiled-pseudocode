/*
 * XREFs of SdbInitDatabaseInMemory @ 0x1404AF9F8
 * Callers:
 *     KsepShimDbMapToMemory @ 0x1404AF86C (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x1404B3F94 (PiLookupInDDB.c)
 *     PpInitializeBootDDB @ 0x1407FBAB8 (PpInitializeBootDDB.c)
 *     KseShimDatabaseBootInitialize @ 0x1408251EC (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SdbCloseDatabaseRead @ 0x140453518 (SdbCloseDatabaseRead.c)
 *     SdbpInitializeMatchers @ 0x1404AFA80 (SdbpInitializeMatchers.c)
 *     SdbpOpenDatabaseInMemory @ 0x1404AFAE0 (SdbpOpenDatabaseInMemory.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbInitDatabaseInMemory(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rcx

  v4 = AslAlloc(a1, 1008LL);
  if ( v4 )
  {
    v5 = SdbpOpenDatabaseInMemory(a1, a2, 0LL);
    *(_QWORD *)(v4 + 8) = v5;
    if ( v5 )
    {
      *(_DWORD *)(v4 + 24) = 1;
      *(_DWORD *)(v4 + 28) = 1;
      *(_DWORD *)(v4 + 56) = 2;
      *(_QWORD *)(v4 + 48) = v5;
      *(_OWORD *)(v4 + 32) = *(_OWORD *)(v5 + 28);
      SdbpInitializeMatchers(v4);
      return v4;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 965, (unsigned int)"Unable to open main database");
    v7 = *(_QWORD *)(v4 + 8);
    if ( v7 )
      SdbCloseDatabaseRead(v7);
    ExFreePoolWithTag((PVOID)v4, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 956, (unsigned int)"Failed to allocate sdbcontext");
  }
  return 0LL;
}
