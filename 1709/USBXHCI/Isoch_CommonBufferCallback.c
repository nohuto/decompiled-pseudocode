/*
 * XREFs of Isoch_CommonBufferCallback @ 0x1C00279A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0006858 (WPP_RECORDER_SF_L.c)
 *     Isoch_MapTransfers @ 0x1C0028964 (Isoch_MapTransfers.c)
 */

__int64 __fastcall Isoch_CommonBufferCallback(__int64 a1)
{
  int v3; // [rsp+28h] [rbp-10h]

  *(_DWORD *)(a1 + 336) = 0;
  v3 = *(_DWORD *)(a1 + 108);
  WPP_RECORDER_SF_L(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    4u,
    0xEu,
    0xCu,
    (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
    v3);
  return Isoch_MapTransfers(a1, 0LL);
}
