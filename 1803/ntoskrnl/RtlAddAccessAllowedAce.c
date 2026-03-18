/*
 * XREFs of RtlAddAccessAllowedAce @ 0x140541520
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14009F5A0 (RtlCheckTokenMembershipEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1400A0C84 (SepAppendAceToTokenDefaultDacl.c)
 *     SepInitProcessAuditSd @ 0x140180424 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x140287190 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1402ACDE0 (WdipAccessCheck.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1408142A0 (ViInitializeLocalSystemDescriptor.c)
 *     ExpKeyedEventInitialization @ 0x14089EE78 (ExpKeyedEventInitialization.c)
 *     WmipInitializeSecurity @ 0x14089FA2C (WmipInitializeSecurity.c)
 *     SeMakeSystemToken @ 0x1408BCBA0 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1408BD0F0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1408BD32C (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x1408BEDD8 (SepInitSystemDacls.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x1408C4278 (PspInitializeSystemPartitionPhase0.c)
 *     IopCreateUmdfDirectory @ 0x1408C46C8 (IopCreateUmdfDirectory.c)
 *     PopUmpoInitializeChannel @ 0x1408C6304 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1408DEBB0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 0);
}
