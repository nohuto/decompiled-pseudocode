/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x14057D51C
 * Callers:
 *     PopHiberInitializeResources @ 0x14057AC78 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14068EED8 (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_14036D0A0, ((a1 & 0xFFF) != 0) + (unsigned int)(a1 >> 12), a3);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
