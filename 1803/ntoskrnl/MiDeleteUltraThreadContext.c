/*
 * XREFs of MiDeleteUltraThreadContext @ 0x14013A5C4
 * Callers:
 *     MiZeroLargePage @ 0x140138310 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x1401386E0 (MiZeroInParallelWorker.c)
 *     MiCreateUltraThreadContext @ 0x14013A724 (MiCreateUltraThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x14017B574 (MiDeleteZeroThreadContext.c)
 *     MmDeleteProcessor @ 0x14025258C (MmDeleteProcessor.c)
 *     MiCombineIdenticalPages @ 0x14048CAE4 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x140756CEC (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x140757E44 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x14013A5FC (MiDeleteUltraMapContext.c)
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
