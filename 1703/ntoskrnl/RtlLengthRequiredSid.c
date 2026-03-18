/*
 * XREFs of RtlLengthRequiredSid @ 0x14046EA80
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     WdipAccessCheck @ 0x1402526D0 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1402589D0 (EtwpApplyPayloadFilterInternal.c)
 *     PopNetInitialize @ 0x14080C59C (PopNetInitialize.c)
 *     SepVariableInitialization @ 0x14081B100 (SepVariableInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140824620 (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
