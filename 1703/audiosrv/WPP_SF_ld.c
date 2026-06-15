/*
 * XREFs of WPP_SF_ld @ 0x1800B8610
 * Callers:
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x1800B6ED4 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ld(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_bd0193786e9e34b543d459a2183e6794_Traceguids, 47LL, &v5);
}
