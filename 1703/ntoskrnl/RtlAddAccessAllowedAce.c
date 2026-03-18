/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1404A57B0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x14003DE8C (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenMembershipEx @ 0x1400671B0 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x1401627E4 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x14023BE40 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1402526D0 (WdipAccessCheck.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140765540 (ViInitializeLocalSystemDescriptor.c)
 *     WmipInitializeSecurity @ 0x1407FF444 (WmipInitializeSecurity.c)
 *     MiSystemPartitionObjectCreate @ 0x1407FFB40 (MiSystemPartitionObjectCreate.c)
 *     SeMakeSystemToken @ 0x14081A5B4 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14081AB04 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14081AD40 (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x14081C738 (SepInitSystemDacls.c)
 *     DbgkpCreateNotificationEvent @ 0x14082109C (DbgkpCreateNotificationEvent.c)
 *     ExpKeyedEventInitialization @ 0x14082212C (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140822E64 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1408332A0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x14050C130 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce((int)Acl, AceRevision, 0, AccessMask, Sid, 0);
}
