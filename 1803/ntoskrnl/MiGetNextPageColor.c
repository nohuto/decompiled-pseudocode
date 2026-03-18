/*
 * XREFs of MiGetNextPageColor @ 0x1400093C8
 * Callers:
 *     MiCombineIdenticalPages @ 0x14048CAE4 (MiCombineIdenticalPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1405BB3F0 (MiAllocateDriverPage.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x140756CEC (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x140757D28 (MiInitializeScrubPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 10) | _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & (unsigned int)*(unsigned __int16 *)(a1 + 8);
}
