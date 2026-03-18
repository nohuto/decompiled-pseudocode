/*
 * XREFs of SdbInitDatabaseInMemory @ 0x1404F5948
 * Callers:
 *     KsepShimDbMapToMemory @ 0x1404F55B4 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x14054487C (PiLookupInDDB.c)
 *     KseShimDatabaseBootInitialize @ 0x14083EFA4 (KseShimDatabaseBootInitialize.c)
 *     PpInitializeBootDDB @ 0x1408403F4 (PpInitializeBootDDB.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SdbpInitializeMatchers @ 0x1404F59D0 (SdbpInitializeMatchers.c)
 *     SdbpOpenDatabaseInMemory @ 0x1404F5A30 (SdbpOpenDatabaseInMemory.c)
 *     SdbCloseDatabaseRead @ 0x1405440E4 (SdbCloseDatabaseRead.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbInitDatabaseInMemory(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  void *v7; // rcx

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
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 1013, (unsigned int)"Unable to open main database");
    v7 = *(void **)(v4 + 8);
    if ( v7 )
      SdbCloseDatabaseRead(v7);
    ExFreePoolWithTag((PVOID)v4, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 1004, (unsigned int)"Failed to allocate sdbcontext");
  }
  return 0LL;
}
