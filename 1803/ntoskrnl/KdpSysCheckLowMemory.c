/*
 * XREFs of KdpSysCheckLowMemory @ 0x140805940
 * Callers:
 *     KdSystemDebugControl @ 0x140740980 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140804ED4 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
