/*
 * XREFs of RtlpValidateSidBuffer @ 0x140469DC8
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140469CA4 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14008C0B0 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x1404F5A90 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
