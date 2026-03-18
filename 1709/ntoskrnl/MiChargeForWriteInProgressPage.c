/*
 * XREFs of MiChargeForWriteInProgressPage @ 0x14011F45C
 * Callers:
 *     MiReferencePageForModifiedWrite @ 0x1400EF550 (MiReferencePageForModifiedWrite.c)
 *     MiAllocateModWriterEntry @ 0x14011F3F0 (MiAllocateModWriterEntry.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiChargeForWriteInProgressPage(__int64 a1, char a2)
{
  int v3; // esi
  unsigned int v5; // ebp
  __int64 v6; // r9

  v3 = a2 & 2;
  v5 = MiChargeResident((ULONG_PTR *)a1, 1uLL);
  if ( v5 )
  {
    if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit(a1, 1uLL, v3 != 0 ? 4 : 8, v6) )
      return v5;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), 1uLL);
  }
  return 0LL;
}
