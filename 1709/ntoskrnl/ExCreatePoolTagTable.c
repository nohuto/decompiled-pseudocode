/*
 * XREFs of ExCreatePoolTagTable @ 0x1405B74F4
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 */

void *__fastcall ExCreatePoolTagTable(unsigned int a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  void *IndependentPages; // rax
  void *v4; // rbx

  v2 = a1;
  if ( (unsigned __int64)PoolTrackTableSize >= 0x492492492492491LL )
    return 0LL;
  IndependentPages = (void *)MmAllocateIndependentPages(56 * (PoolTrackTableSize + 1), a2);
  v4 = IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, 56 * PoolTrackTableSize);
    *(&ExPoolTagTables + v2) = v4;
  }
  return v4;
}
