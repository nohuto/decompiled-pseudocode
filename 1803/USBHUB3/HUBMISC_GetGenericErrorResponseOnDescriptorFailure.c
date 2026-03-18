/*
 * XREFs of HUBMISC_GetGenericErrorResponseOnDescriptorFailure @ 0x1C00265A4
 * Callers:
 *     HUBDSM_ReturningErrorResponseOnProductStringQuery @ 0x1C001B970 (HUBDSM_ReturningErrorResponseOnProductStringQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0011564 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall HUBMISC_GetGenericErrorResponseOnDescriptorFailure(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = *(_WORD *)(a1 + 1990) > 0x200u ? 0xFFFFFFF8 : 0;
  WPP_RECORDER_SF_q(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    (*(_WORD *)(a1 + 1990) > 0x200u) + 90,
    (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
    a1);
  return v1 + 4025;
}
