/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x140015008
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x140014FCC (MiFreeModWriterEntry.c)
 *     MiBuildMappedCluster @ 0x140020978 (MiBuildMappedCluster.c)
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 */

ULONG_PTR *__fastcall MiReleaseWriteInProgressCharges(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  ULONG_PTR *result; // rax

  if ( (_DWORD)a3 )
  {
    MiReturnCommit(a1, a2);
    result = &MiSystemPartition;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      return (ULONG_PTR *)MiReturnResidentAvailable(a2, a2, a3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), a2);
  }
  else
  {
    result = &MiSystemPartition;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      return (ULONG_PTR *)MiReturnResidentAvailable(a2, a2, a3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), a2);
  }
  return result;
}
