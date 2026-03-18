/*
 * XREFs of SepCheckForCriticalAceRemoval @ 0x14046CC94
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     SeAdjustObjectSecurity @ 0x140730224 (SeAdjustObjectSecurity.c)
 * Callees:
 *     SepSidInToken @ 0x1400D5100 (SepSidInToken.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SepHasCriticalAcePresent @ 0x1405D5890 (SepHasCriticalAcePresent.c)
 */

void __fastcall SepCheckForCriticalAceRemoval(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR a2,
        _BYTE *a3,
        _BYTE *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  _BYTE *v10; // rbx
  _BYTE *v11; // rdi
  PACCESS_TOKEN ClientToken; // rcx
  PSID v13; // r15
  PSID v14; // rsi
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-28h] BYREF
  WORD v16; // [rsp+B0h] [rbp+50h] BYREF
  WORD v17; // [rsp+B8h] [rbp+58h] BYREF

  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  v10 = a5;
  if ( a5 )
    *a5 = 0;
  v11 = a6;
  if ( a6 )
    *a6 = 0;
  if ( !SepAllowAllApplicationAceRemoval && !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    SeCaptureSubjectContext(&SubjectContext);
    ClientToken = SubjectContext.ClientToken;
    if ( !SubjectContext.ClientToken )
      ClientToken = SubjectContext.PrimaryToken;
    if ( SepSidInToken((__int64)ClientToken, 0LL, (void *)SeTrustedInstallerSid, 0, 0, 0) )
    {
      SeReleaseSubjectContext(&SubjectContext);
    }
    else
    {
      SeReleaseSubjectContext(&SubjectContext);
      v13 = SeAllAppPackagesSid;
      if ( (unsigned __int8)SepHasCriticalAcePresent(SecurityDescriptor, SeAllAppPackagesSid, (WORD)&v17)
        && !(unsigned __int8)SepHasCriticalAcePresent(a2, v13, (WORD)&v16) )
      {
        if ( (_BYTE)a5 && (_BYTE)a6 && !(_BYTE)v16 && a4 )
          *a4 = 1;
        if ( a3 )
          *a3 = 1;
      }
      v14 = SeRegistryReadCapabilitySid;
      if ( (unsigned __int8)SepHasCriticalAcePresent(SecurityDescriptor, SeRegistryReadCapabilitySid, (WORD)&v17)
        && !(unsigned __int8)SepHasCriticalAcePresent(a2, v14, (WORD)&v16) )
      {
        if ( (_BYTE)a5 && (_BYTE)a6 && !(_BYTE)v16 && v11 )
          *v11 = 1;
        if ( v10 )
          *v10 = 1;
      }
    }
  }
}
