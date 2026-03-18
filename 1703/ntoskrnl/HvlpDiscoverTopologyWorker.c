/*
 * XREFs of HvlpDiscoverTopologyWorker @ 0x140687790
 * Callers:
 *     HvlpDiscoverTopologyLocal @ 0x140687780 (HvlpDiscoverTopologyLocal.c)
 *     HvlpDiscoverTopologyComplete @ 0x1408326B4 (HvlpDiscoverTopologyComplete.c)
 * Callees:
 *     HvlpDiscoverTopologyAmd @ 0x140832584 (HvlpDiscoverTopologyAmd.c)
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
