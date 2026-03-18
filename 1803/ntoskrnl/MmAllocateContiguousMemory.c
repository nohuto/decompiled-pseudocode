/*
 * XREFs of MmAllocateContiguousMemory @ 0x140254910
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateContiguousMemory @ 0x1400BE350 (MiAllocateContiguousMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int64 v2; // rdx

  v2 = (unsigned __int64)HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > qword_1403CB780 )
    v2 = qword_1403CB780;
  return (PVOID)MiAllocateContiguousMemory(NumberOfBytes, 0LL, v2, 0LL, 6u, 0x80000000);
}
