/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x140614550
 * Callers:
 *     PopHiberInitializeResources @ 0x1405EFC6C (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14071FB28 (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_1403CC5E0, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
