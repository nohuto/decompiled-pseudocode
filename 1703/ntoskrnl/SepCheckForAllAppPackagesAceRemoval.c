/*
 * XREFs of SepCheckForAllAppPackagesAceRemoval @ 0x14059AF88
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x1406F8654 (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     SepSidInToken @ 0x14012B964 (SepSidInToken.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     SepHasAllAppPackagesPresent @ 0x1406F8BF8 (SepHasAllAppPackagesPresent.c)
 */

void __fastcall SepCheckForAllAppPackagesAceRemoval(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR a2,
        _BYTE *a3,
        _BYTE *a4)
{
  PACCESS_TOKEN ClientToken; // rcx
  char v9; // [rsp+30h] [rbp-30h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-28h] BYREF
  char v11; // [rsp+90h] [rbp+30h]
  char v12; // [rsp+98h] [rbp+38h]

  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !SepAllowAllApplicationAceRemoval && !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    SeCaptureSubjectContext(&SubjectContext);
    ClientToken = SubjectContext.ClientToken;
    if ( !SubjectContext.ClientToken )
      ClientToken = SubjectContext.PrimaryToken;
    if ( SepSidInToken((__int64)ClientToken, 0LL, SeTrustedInstallerSid, 0, 0, 0) )
    {
      SeReleaseSubjectContext(&SubjectContext);
    }
    else
    {
      SeReleaseSubjectContext(&SubjectContext);
      if ( (unsigned __int8)SepHasAllAppPackagesPresent(SecurityDescriptor)
        && !(unsigned __int8)SepHasAllAppPackagesPresent(a2) )
      {
        if ( v11 && v12 && !v9 && a4 )
          *a4 = 1;
        if ( a3 )
          *a3 = 1;
      }
    }
  }
}
