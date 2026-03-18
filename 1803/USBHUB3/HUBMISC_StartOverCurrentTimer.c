/*
 * XREFs of HUBMISC_StartOverCurrentTimer @ 0x1C002ADE0
 * Callers:
 *     HUBPSM20_StartingOverCurrentTimer @ 0x1C000F0A0 (HUBPSM20_StartingOverCurrentTimer.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00029F8 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall HUBMISC_StartOverCurrentTimer(__int64 a1)
{
  int v3; // [rsp+30h] [rbp-18h]

  v3 = 500;
  WPP_RECORDER_SF_qd(
    *(_QWORD *)(a1 + 1432),
    2u,
    4u,
    0x37u,
    (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
    a1,
    v3);
  return ExSetTimer(*(_QWORD *)(a1 + 1312), -5000000LL, 0LL, 0LL);
}
