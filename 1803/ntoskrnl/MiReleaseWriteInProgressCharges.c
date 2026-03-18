/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x140134F38
 * Callers:
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     MiBuildMappedCluster @ 0x140133CF8 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x140134EFC (MiFreeModWriterEntry.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

ULONG_PTR *__fastcall MiReleaseWriteInProgressCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR *result; // rax

  if ( a3 )
  {
    MiReturnCommit(a1, a2);
    result = &MiSystemPartition;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      return (ULONG_PTR *)MiReturnResidentAvailable(a2, a2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), a2);
  }
  else
  {
    result = &MiSystemPartition;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      return (ULONG_PTR *)MiReturnResidentAvailable(a2, a2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), a2);
  }
  return result;
}
