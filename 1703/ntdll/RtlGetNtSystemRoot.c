/*
 * XREFs of RtlGetNtSystemRoot @ 0x18003BA70
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18000F560 (RtlQueryResourcePolicy.c)
 *     sub_18003CBC0 @ 0x18003CBC0 (sub_18003CBC0.c)
 *     sub_180055C50 @ 0x180055C50 (sub_180055C50.c)
 *     sub_180067A7C @ 0x180067A7C (sub_180067A7C.c)
 *     sub_18008CDE0 @ 0x18008CDE0 (sub_18008CDE0.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800D39E4 @ 0x1800D39E4 (sub_1800D39E4.c)
 *     sub_1800DBA3C @ 0x1800DBA3C (sub_1800DBA3C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return NtCurrentPeb()->SharedData->NtSystemRoot;
  else
    return (PWSTR)2147352624;
}
