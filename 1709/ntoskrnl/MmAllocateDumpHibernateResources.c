/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x1406E24F0
 * Callers:
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1406BAB9C (IopLiveDumpAllocateMappingResources.c)
 *     PopHiberInitializeResources @ 0x1406FBB38 (PopHiberInitializeResources.c)
 * Callees:
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140389360, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0), a3);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
