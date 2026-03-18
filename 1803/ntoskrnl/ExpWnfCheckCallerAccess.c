/*
 * XREFs of ExpWnfCheckCallerAccess @ 0x1404F699C
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x1404F57A0 (ExpWnfSubscribeWnfStateChange.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1404F693C (ExpWnfValidatePubSubPreconditions.c)
 *     NtQueryWnfStateNameInformation @ 0x14056F7C0 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExpWnfCheckCallerAccess(PSECURITY_DESCRIPTOR SecurityDescriptor, ACCESS_MASK DesiredAccess)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  if ( !DesiredAccess )
    return 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  SeAccessCheck(
    SecurityDescriptor,
    &SubjectContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)AccessStatus;
}
