/*
 * XREFs of RtlLengthRequiredSid @ 0x14045C500
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     WdipAccessCheck @ 0x140279B0C (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1402825B4 (EtwpApplyPayloadFilterInternal.c)
 *     PopNetInitialize @ 0x140831B60 (PopNetInitialize.c)
 *     CmpInitializeTrustedInstallerSid @ 0x14083A5CC (CmpInitializeTrustedInstallerSid.c)
 *     IopCreateUmdfDirectory @ 0x1408450BC (IopCreateUmdfDirectory.c)
 *     SepVariableInitialization @ 0x14084BA80 (SepVariableInitialization.c)
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
