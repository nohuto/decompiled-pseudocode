/*
 * XREFs of SdbReleaseDatabase @ 0x1404533F0
 * Callers:
 *     KsepShimDbUnmapFromMemory @ 0x14045336C (KsepShimDbUnmapFromMemory.c)
 *     PiLookupInDDB @ 0x1404B3F94 (PiLookupInDDB.c)
 *     KseShimDatabaseBootRelease @ 0x1405C6260 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x1405C6318 (PpReleaseBootDDB.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SdbCloseDatabaseRead @ 0x140453518 (SdbCloseDatabaseRead.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x14045355C (SdbpCleanupLocalDatabaseSupport.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

void __fastcall SdbReleaseDatabase(_QWORD *P)
{
  __int64 v2; // rcx
  _QWORD **v3; // r8

  if ( *((_DWORD *)P + 248) )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(P[125] + 1000LL)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(P[125] + 1000LL));
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbReleaseDatabase",
        96,
        (unsigned int)"SDB Handle count was decremented after zero.");
    }
    goto LABEL_8;
  }
  if ( *((int *)P + 250) <= 0 )
  {
    SdbpCleanupLocalDatabaseSupport();
    if ( (P[15] & 2) != 0 )
      SdbCloseDatabaseRead(P[14]);
    v2 = P[1];
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
    110,
    (unsigned int)"Attempt to release SDB handle that still has unreleased duplicates.");
}
