/*
 * XREFs of SePrivilegeCheck @ 0x1404C45D0
 * Callers:
 *     PspSinglePrivCheck @ 0x140449FE4 (PspSinglePrivCheck.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x14046EE78 (SeCheckPrivilegedObject.c)
 *     ObpAdjustCreatorAccessState @ 0x140484A78 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x140574928 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x1405D5B14 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140087BC0 (SepPrivilegeCheck.c)
 */

BOOLEAN __stdcall SePrivilegeCheck(
        PPRIVILEGE_SET RequiredPrivileges,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        KPROCESSOR_MODE AccessMode)
{
  PACCESS_TOKEN ClientToken; // rcx

  if ( !AccessMode )
    return 1;
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
  {
    ClientToken = SubjectSecurityContext->PrimaryToken;
    return SepPrivilegeCheck(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  }
  if ( SubjectSecurityContext->ImpersonationLevel >= SecurityImpersonation )
    return SepPrivilegeCheck(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  return 0;
}
