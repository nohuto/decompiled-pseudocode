/*
 * XREFs of MiChargeForWriteInProgressPage @ 0x140131D70
 * Callers:
 *     MiReferencePageForModifiedWrite @ 0x140131E00 (MiReferencePageForModifiedWrite.c)
 *     MiAllocateModWriterEntry @ 0x1401330FC (MiAllocateModWriterEntry.c)
 * Callees:
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiChargeForWriteInProgressPage(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  unsigned int v7; // ebp
  __int64 v8; // rdx

  v5 = a2 & 2;
  v7 = MiChargeResident((ULONG_PTR *)a1, 1uLL, (unsigned int)-(v5 != 0), a4);
  if ( v7 )
  {
    if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit(a1, 1uLL, v5 != 0 ? 4 : 8) )
      return v7;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1LL, v8);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), 1uLL);
  }
  return 0LL;
}
