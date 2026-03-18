/*
 * XREFs of HUBMISC_StartD3ColdReconnectTimer @ 0x1C002AED4
 * Callers:
 *     HUBPSM30_StartingTimerForAllowingReconnectOnResumingFromD3Cold @ 0x1C000F6F0 (HUBPSM30_StartingTimerForAllowingReconnectOnResumingFromD3Cold.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00029F8 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall HUBMISC_StartD3ColdReconnectTimer(__int64 a1)
{
  int v3; // [rsp+30h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 1440);
  WPP_RECORDER_SF_qd(
    *(_QWORD *)(a1 + 1432),
    4u,
    4u,
    0x38u,
    (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
    a1,
    v3);
  return ExSetTimer(*(_QWORD *)(a1 + 1312), -10000LL * *(unsigned int *)(a1 + 1440), 0LL, 0LL);
}
