/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x1406B319C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139988 (HvlStartBootLogicalProcessors.c)
 *     HvlEnlightenProcessor @ 0x140139EB4 (HvlEnlightenProcessor.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x1406B31B4 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
