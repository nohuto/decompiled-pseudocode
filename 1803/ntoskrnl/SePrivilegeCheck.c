/*
 * XREFs of SePrivilegeCheck @ 0x1405B0D30
 * Callers:
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     SeSinglePrivilegeCheckEx @ 0x1404D569C (SeSinglePrivilegeCheckEx.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     ObpAdjustCreatorAccessState @ 0x140562B1C (ObpAdjustCreatorAccessState.c)
 *     PspSinglePrivCheck @ 0x140578D80 (PspSinglePrivCheck.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     SeCheckPrivilegedObject @ 0x1406138A4 (SeCheckPrivilegedObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x140729B48 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x1407C8194 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140105560 (SepPrivilegeCheck.c)
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
