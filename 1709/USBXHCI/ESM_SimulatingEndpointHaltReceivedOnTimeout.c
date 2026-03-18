/*
 * XREFs of ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C003F180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ESM_SimulatingEndpointHaltReceivedOnTimeout(__int64 a1)
{
  WPP_RECORDER_SF_q(
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 80LL),
    2u,
    0xDu,
    0x79u,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 24LL));
  return 154LL;
}
