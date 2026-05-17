/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x18002C1D0
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x18002DB10 (RtlFormatCurrentUserKeyPath.c)
 *     WerEscalationLazyInit @ 0x18008F6D8 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlValidSid @ 0x18002DA50 (RtlValidSid.c)
 */

__int64 __fastcall RtlLengthSidAsUnicodeString(unsigned __int8 *a1, _DWORD *a2)
{
  int v4; // edx

  if ( (unsigned __int8)RtlValidSid(a1) != 1 )
    return 3221225592LL;
  if ( a1[2] || (v4 = 28, a1[3]) )
    v4 = 36;
  *a2 = v4 + 22 * a1[1];
  return 0LL;
}
