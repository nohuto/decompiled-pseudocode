/*
 * XREFs of MiCreateUltraThreadContext @ 0x1400CF818
 * Callers:
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x1400CFBFC (MiZeroLargePage.c)
 *     MiCreateZeroThreadContext @ 0x140137370 (MiCreateZeroThreadContext.c)
 *     MiCombineIdenticalPages @ 0x140509D90 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x1406ED858 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1406EE840 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1400CF060 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1400CF880 (MiCreateUltraThreadContextHelper.c)
 */

__int64 __fastcall MiCreateUltraThreadContext(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // ebx

  v6 = 0;
  while ( !_bittest(&a3, v6) || (unsigned int)MiCreateUltraThreadContextHelper(a1 + 32LL * v6, v6, a2) )
  {
    if ( ++v6 >= 4 )
      return 1LL;
  }
  MiDeleteUltraThreadContext(a1);
  return 0LL;
}
