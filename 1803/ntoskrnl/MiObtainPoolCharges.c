/*
 * XREFs of MiObtainPoolCharges @ 0x14013307C
 * Callers:
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiExpandNonPagedPool @ 0x1400BE8FC (MiExpandNonPagedPool.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     MiGetPoolPages @ 0x1400F0860 (MiGetPoolPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  __int64 v4; // r9
  volatile signed __int64 *v5; // rax

  if ( !qword_1403CFCA8 )
    return 1LL;
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, a1, 1u) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL, v4) )
    {
      v5 = &qword_1403CC640;
      if ( a2 )
        v5 = &qword_1403CC648;
      _InterlockedExchangeAdd64(v5, a1);
      return 1LL;
    }
    ++dword_1403CB178;
    MiReturnCommit((__int64)&MiSystemPartition, a1);
  }
  else
  {
    ++dword_1403CB17C;
  }
  return 0LL;
}
