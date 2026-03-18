/*
 * XREFs of HvlpPreallocatePageListResources @ 0x140717ED4
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x1406251EC (PopPreallocateHibernateMemory.c)
 * Callees:
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 HvlpPreallocatePageListResources()
{
  unsigned int v0; // ebx
  void *IndependentPages; // rax

  v0 = 0;
  if ( !HvlpFallbackScratchPage )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(0x1000uLL, -1);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    else
      return (unsigned int)-1073741670;
  }
  return v0;
}
