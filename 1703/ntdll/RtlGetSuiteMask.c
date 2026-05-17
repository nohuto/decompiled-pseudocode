/*
 * XREFs of RtlGetSuiteMask @ 0x18000FC90
 * Callers:
 *     sub_18000C298 @ 0x18000C298 (sub_18000C298.c)
 *     RtlQueryResourcePolicy @ 0x18000F560 (RtlQueryResourcePolicy.c)
 *     sub_18000FAB4 @ 0x18000FAB4 (sub_18000FAB4.c)
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     RtlGetVersion @ 0x1800396A0 (RtlGetVersion.c)
 *     sub_180061420 @ 0x180061420 (sub_180061420.c)
 *     sub_1800616E4 @ 0x1800616E4 (sub_1800616E4.c)
 *     sub_18008A924 @ 0x18008A924 (sub_18008A924.c)
 *     sub_1801006B0 @ 0x1801006B0 (sub_1801006B0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall RtlGetSuiteMask(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    return *((unsigned int *)NtCurrentPeb()->HotpatchInformation + 5);
  else
    return MEMORY[0x7FFE02D0];
}
