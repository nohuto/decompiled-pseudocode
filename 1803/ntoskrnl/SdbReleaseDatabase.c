/*
 * XREFs of SdbReleaseDatabase @ 0x1405FFCB8
 * Callers:
 *     PiLookupInDDB @ 0x1405FBCF4 (PiLookupInDDB.c)
 *     KsepShimDbUnmapFromMemory @ 0x1405FFE1C (KsepShimDbUnmapFromMemory.c)
 *     KseShimDatabaseBootRelease @ 0x140642D1C (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x140642DD0 (PpReleaseBootDDB.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SdbCloseDatabaseRead @ 0x1405FFB88 (SdbCloseDatabaseRead.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x1405FFDE0 (SdbpCleanupLocalDatabaseSupport.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

void __fastcall SdbReleaseDatabase(_QWORD *P)
{
  _QWORD *v2; // rcx
  _QWORD **v3; // r8

  if ( *((_DWORD *)P + 248) )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(P[125] + 1000LL)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(P[125] + 1000LL));
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbReleaseDatabase",
        97,
        (unsigned int)"SDB Handle count was decremented after zero.");
    }
    goto LABEL_8;
  }
  if ( *((int *)P + 250) <= 0 )
  {
    SdbpCleanupLocalDatabaseSupport();
    if ( (P[15] & 2) != 0 )
      SdbCloseDatabaseRead((_QWORD *)P[14]);
    v2 = (_QWORD *)P[1];
    if ( v2 )
      SdbCloseDatabaseRead(v2);
    while ( 1 )
    {
      v3 = (_QWORD **)P[71];
      if ( !v3 )
        break;
      if ( v3[1] == v3 )
      {
        P[71] = 0LL;
      }
      else
      {
        P[71] = *v3;
        *v3[1] = *v3;
        (*v3)[1] = v3[1];
      }
      ExFreePoolWithTag(v3, 0x74705041u);
    }
LABEL_8:
    ExFreePoolWithTag(P, 0x74705041u);
    return;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbReleaseDatabase",
    111,
    (unsigned int)"Attempt to release SDB handle that still has unreleased duplicates.");
}
