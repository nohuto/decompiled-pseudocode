/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1405498F0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400FA910 (RtlCheckTokenMembershipEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140128E84 (SepAppendAceToTokenDefaultDacl.c)
 *     SepInitProcessAuditSd @ 0x1401511F4 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x1402516C0 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x140279B0C (WdipAccessCheck.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407A7120 (ViInitializeLocalSystemDescriptor.c)
 *     WmipInitializeSecurity @ 0x140843F94 (WmipInitializeSecurity.c)
 *     IopCreateUmdfDirectory @ 0x1408450BC (IopCreateUmdfDirectory.c)
 *     SeMakeSystemToken @ 0x14084AF38 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14084B488 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14084B6C4 (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x14084D144 (SepInitSystemDacls.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140852E58 (PspInitializeSystemPartitionPhase0.c)
 *     ExpKeyedEventInitialization @ 0x140853288 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x1408542AC (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x14086A3C0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 0);
}
