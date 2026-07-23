/*
 * XREFs of RtlGetSuiteMask @ 0x18005A990
 * Callers:
 *     RtlGetVersion @ 0x18002DAB0 (RtlGetVersion.c)
 *     sub_180056E90 @ 0x180056E90 (sub_180056E90.c)
 *     sub_180059DC0 @ 0x180059DC0 (sub_180059DC0.c)
 *     RtlQueryResourcePolicy @ 0x18005A240 (RtlQueryResourcePolicy.c)
 *     sub_18005A768 @ 0x18005A768 (sub_18005A768.c)
 *     sub_180083A4C @ 0x180083A4C (sub_180083A4C.c)
 *     sub_1800EB1A0 @ 0x1800EB1A0 (sub_1800EB1A0.c)
 *     sub_180104850 @ 0x180104850 (sub_180104850.c)
 *     sub_180104A3C @ 0x180104A3C (sub_180104A3C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return NtCurrentPeb()->SharedData->SuiteMask;
  else
    return MEMORY[0x7FFE02D0];
}
