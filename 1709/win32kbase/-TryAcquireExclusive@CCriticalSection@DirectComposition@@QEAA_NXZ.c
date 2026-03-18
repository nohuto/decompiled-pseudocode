/*
 * XREFs of ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C0080170
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C003393C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0033B80 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
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
