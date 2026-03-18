/*
 * XREFs of HvlpDiscoverTopologyWorker @ 0x1406B31B4
 * Callers:
 *     HvlpDiscoverTopologyLocal @ 0x1406B319C (HvlpDiscoverTopologyLocal.c)
 *     HvlpDiscoverTopologyComplete @ 0x1408695A8 (HvlpDiscoverTopologyComplete.c)
 * Callees:
 *     HvlpDiscoverTopologyAmd @ 0x140869478 (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x1408696C4 (HvlpDiscoverTopologyIntel.c)
 */

__int64 HvlpDiscoverTopologyWorker()
{
  __int64 result; // rax

  if ( HvlpCpuVendor == 1 )
    return HvlpDiscoverTopologyAmd();
  if ( HvlpCpuVendor == 2 )
    return HvlpDiscoverTopologyIntel();
  return result;
}
