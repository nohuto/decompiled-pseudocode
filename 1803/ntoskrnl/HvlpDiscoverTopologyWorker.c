/*
 * XREFs of HvlpDiscoverTopologyWorker @ 0x140717D20
 * Callers:
 *     HvlpDiscoverTopologyLocal @ 0x140717D08 (HvlpDiscoverTopologyLocal.c)
 *     HvlpDiscoverTopologyComplete @ 0x1408DDDE0 (HvlpDiscoverTopologyComplete.c)
 * Callees:
 *     HvlpDiscoverTopologyAmd @ 0x1408DDCB0 (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x1408DDEF8 (HvlpDiscoverTopologyIntel.c)
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
