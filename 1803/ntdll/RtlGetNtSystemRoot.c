/*
 * XREFs of RtlGetNtSystemRoot @ 0x18003FAD0
 * Callers:
 *     sub_18003BE00 @ 0x18003BE00 (sub_18003BE00.c)
 *     sub_18004148C @ 0x18004148C (sub_18004148C.c)
 *     sub_18004E6B0 @ 0x18004E6B0 (sub_18004E6B0.c)
 *     RtlQueryResourcePolicy @ 0x18005A240 (RtlQueryResourcePolicy.c)
 *     sub_180077824 @ 0x180077824 (sub_180077824.c)
 *     sub_18008A2B0 @ 0x18008A2B0 (sub_18008A2B0.c)
 *     sub_1800C8094 @ 0x1800C8094 (sub_1800C8094.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D51FC @ 0x1800D51FC (sub_1800D51FC.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return NtCurrentPeb()->SharedData->NtSystemRoot;
  else
    return (PWSTR)2147352624;
}
