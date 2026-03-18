/*
 * XREFs of KdpSysCheckLowMemory @ 0x14079886C
 * Callers:
 *     KdSystemDebugControl @ 0x1406D6B20 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140797E08 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
