/*
 * XREFs of SdbReleaseDatabase @ 0x140543FBC
 * Callers:
 *     KsepShimDbUnmapFromMemory @ 0x1404F5DB4 (KsepShimDbUnmapFromMemory.c)
 *     PiLookupInDDB @ 0x14054487C (PiLookupInDDB.c)
 *     KseShimDatabaseBootRelease @ 0x1405D9560 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x1405D9614 (PpReleaseBootDDB.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x140543F80 (SdbpCleanupLocalDatabaseSupport.c)
 *     SdbCloseDatabaseRead @ 0x1405440E4 (SdbCloseDatabaseRead.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

void __fastcall SdbReleaseDatabase(__int64 P, __int64 a2)
{
  void *v3; // rcx
  _QWORD **v4; // r8

  if ( *(_DWORD *)(P + 992) )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(P + 1000) + 1000LL)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(P + 1000) + 1000LL));
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbReleaseDatabase",
        97,
        (unsigned int)"SDB Handle count was decremented after zero.");
    }
    goto LABEL_8;
  }
  if ( *(int *)(P + 1000) <= 0 )
  {
    SdbpCleanupLocalDatabaseSupport(P, a2);
    if ( (*(_DWORD *)(P + 120) & 2) != 0 )
      SdbCloseDatabaseRead(*(PVOID *)(P + 112));
    v3 = *(void **)(P + 8);
    if ( v3 )
      SdbCloseDatabaseRead(v3);
    while ( 1 )
    {
      v4 = *(_QWORD ***)(P + 568);
      if ( !v4 )
        break;
      if ( v4[1] == v4 )
      {
        *(_QWORD *)(P + 568) = 0LL;
      }
      else
      {
        *(_QWORD *)(P + 568) = *v4;
        *v4[1] = *v4;
        (*v4)[1] = v4[1];
      }
      ExFreePoolWithTag(v4, 0x74705041u);
    }
LABEL_8:
    ExFreePoolWithTag((PVOID)P, 0x74705041u);
    return;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbReleaseDatabase",
    111,
    (unsigned int)"Attempt to release SDB handle that still has unreleased duplicates.");
}
