/*
 * XREFs of WPP_SF_ld @ 0x1800E61FC
 * Callers:
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x1800E3FF4 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ld(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_298f35db72853edc559b812a776cab31_Traceguids, 47LL, &v5);
}
