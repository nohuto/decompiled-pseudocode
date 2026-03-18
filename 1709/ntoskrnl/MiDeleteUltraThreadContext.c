/*
 * XREFs of MiDeleteUltraThreadContext @ 0x1400CF060
 * Callers:
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     MiCreateUltraThreadContext @ 0x1400CF818 (MiCreateUltraThreadContext.c)
 *     MiZeroLargePage @ 0x1400CFBFC (MiZeroLargePage.c)
 *     MiDeleteZeroThreadContext @ 0x1401556D4 (MiDeleteZeroThreadContext.c)
 *     MiCombineIdenticalPages @ 0x140509D90 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x1406ED858 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x1406EE968 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1400CF098 (MiDeleteUltraMapContext.c)
 */

__int64 __fastcall MiDeleteUltraThreadContext(__int64 a1)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 4; ++i )
  {
    result = MiDeleteUltraMapContext(a1, i);
    a1 += 32LL;
  }
  return result;
}
