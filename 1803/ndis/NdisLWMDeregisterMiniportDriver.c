/*
 * XREFs of NdisLWMDeregisterMiniportDriver @ 0x1C00EB6A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C00B1AE0 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 */

void __fastcall NdisLWMDeregisterMiniportDriver(char *BugCheckParameter2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x80u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)BugCheckParameter2);
  if ( BugCheckParameter2[26] >= 0 )
    ndisBugCheckEx(0x29uLL, 1uLL, (ULONG_PTR)BugCheckParameter2, 0LL);
  ndisInternalDeregisterMiniportDriver((ULONG_PTR)BugCheckParameter2);
  ExFreePoolWithTag(BugCheckParameter2, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x81u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids);
}
