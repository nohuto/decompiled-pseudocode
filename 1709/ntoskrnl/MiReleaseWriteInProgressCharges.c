/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x1400EFDE0
 * Callers:
 *     MiBuildMappedCluster @ 0x1400EE1F0 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x1400EFDA4 (MiFreeModWriterEntry.c)
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReleaseWriteInProgressCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  if ( a3 )
  {
    MiReturnCommit(a1, a2);
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
LABEL_3:
      MiReturnResidentAvailable(a2);
      return;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), a2);
  }
  else
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      goto LABEL_3;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), a2);
  }
}
