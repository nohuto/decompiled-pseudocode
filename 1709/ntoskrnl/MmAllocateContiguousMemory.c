/*
 * XREFs of MmAllocateContiguousMemory @ 0x140216E20
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateContiguousMemory @ 0x140119418 (MiAllocateContiguousMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int64 v2; // rdx

  v2 = (unsigned __int64)HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > qword_1403885E0 )
    v2 = qword_1403885E0;
  return (PVOID)MiAllocateContiguousMemory(NumberOfBytes, 0LL, v2, 0LL, 6u, 0x80000000);
}
