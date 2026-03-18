/*
 * XREFs of MiCreateUltraThreadContext @ 0x14013A724
 * Callers:
 *     MiZeroLargePage @ 0x140138310 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x1401386E0 (MiZeroInParallelWorker.c)
 *     MiCreateZeroThreadContext @ 0x14016FEEC (MiCreateZeroThreadContext.c)
 *     MmInitializeProcessor @ 0x14047BD90 (MmInitializeProcessor.c)
 *     MiCombineIdenticalPages @ 0x14048CAE4 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x140756CEC (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x140757D28 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14013A5C4 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013A78C (MiCreateUltraThreadContextHelper.c)
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
