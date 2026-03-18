/*
 * XREFs of KdpSysCheckLowMemory @ 0x14078B644
 * Callers:
 *     KdSystemDebugControl @ 0x1406AB880 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x14078ABE0 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
