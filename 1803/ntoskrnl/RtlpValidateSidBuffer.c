/*
 * XREFs of RtlpValidateSidBuffer @ 0x140540A60
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14054093C (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14005C810 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x1404C80A0 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
