/*
 * XREFs of RtlpValidateSidBuffer @ 0x140486AE0
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140486BD0 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140019310 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x140486030 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
