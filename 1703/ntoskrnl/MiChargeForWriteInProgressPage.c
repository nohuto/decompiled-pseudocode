/*
 * XREFs of MiChargeForWriteInProgressPage @ 0x14010EDCC
 * Callers:
 *     MiReferencePageForModifiedWrite @ 0x14010EC0C (MiReferencePageForModifiedWrite.c)
 *     MiAllocateModWriterEntry @ 0x14010ED60 (MiAllocateModWriterEntry.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 */

__int64 __fastcall MiChargeForWriteInProgressPage(unsigned __int64 a1, char a2)
{
  int v3; // esi
  unsigned int v5; // ebp

  v3 = a2 & 2;
  v5 = MiChargeResident(a1, 1LL, (unsigned int)-(v3 != 0));
  if ( v5 )
  {
    if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit(a1, 1uLL, v3 != 0 ? 4 : 8) )
      return v5;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), 1uLL);
  }
  return 0LL;
}
