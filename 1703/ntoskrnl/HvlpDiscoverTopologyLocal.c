/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x140687780
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140155358 (HvlStartBootLogicalProcessors.c)
 *     HvlEnlightenProcessor @ 0x140155924 (HvlEnlightenProcessor.c)
 * Callees:
 *     <none>
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
