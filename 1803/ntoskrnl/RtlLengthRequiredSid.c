/*
 * XREFs of RtlLengthRequiredSid @ 0x140544040
 * Callers:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 *     WdipAccessCheck @ 0x1402ACDE0 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1402B6498 (EtwpApplyPayloadFilterInternal.c)
 *     PopNetInitialize @ 0x1408A7F78 (PopNetInitialize.c)
 *     SepVariableInitialization @ 0x1408BD6E8 (SepVariableInitialization.c)
 *     IopCreateUmdfDirectory @ 0x1408C46C8 (IopCreateUmdfDirectory.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1408C7C8C (CmpInitializeTrustedInstallerSid.c)
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
