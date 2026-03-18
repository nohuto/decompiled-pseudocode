/*
 * XREFs of SePrivilegeCheck @ 0x140527F60
 * Callers:
 *     CMFCheckAccess @ 0x14041F098 (CMFCheckAccess.c)
 *     PspSinglePrivCheck @ 0x14044B934 (PspSinglePrivCheck.c)
 *     ObpAdjustCreatorAccessState @ 0x1404F2E14 (ObpAdjustCreatorAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     PsOpenProcess @ 0x14050F290 (PsOpenProcess.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     SeCheckPrivilegedObject @ 0x14058547C (SeCheckPrivilegedObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x140597CCC (PiAuDoesClientHavePrivilege.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1400EDD50 (SepPrivilegeCheck.c)
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
