/*
 * XREFs of HvlpPreallocatePageListResources @ 0x1406B32A4
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x1406FBE3C (PopPreallocateHibernateMemory.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 */

__int64 __fastcall HvlpPreallocatePageListResources(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  void *IndependentPages; // rax

  v3 = 0;
  if ( !HvlpFallbackScratchPage )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(0x1000uLL, -1, a3);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    else
      return (unsigned int)-1073741670;
  }
  return v3;
}
