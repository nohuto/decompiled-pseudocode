/*
 * XREFs of ESM_SimulatingFSEReceivedOnTimeout @ 0x1C003D880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ESM_SimulatingFSEReceivedOnTimeout(__int64 a1)
{
  WPP_RECORDER_SF_q(
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 80LL),
    2u,
    0xDu,
    0x76u,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 24LL));
  return 118LL;
}
