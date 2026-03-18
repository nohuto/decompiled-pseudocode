/*
 * XREFs of ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C0147608
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C01440FC (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C014485C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCriticalSection::TryAcquireExclusive(PERESOURCE Resource)
{
  KeEnterCriticalRegion();
  if ( ExAcquireResourceExclusiveLite(Resource, 0) )
    return 1;
  KeLeaveCriticalRegion();
  return 0;
}
