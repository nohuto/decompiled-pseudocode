/*
 * XREFs of ExIsRestrictedCaller @ 0x14057D764
 * Callers:
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     PspQueryWorkingSetWatch @ 0x1407168B0 (PspQueryWorkingSetWatch.c)
 *     ExpProfileCreate @ 0x140760250 (ExpProfileCreate.c)
 * Callees:
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 */

_BOOL8 __fastcall ExIsRestrictedCaller(char a1)
{
  BOOLEAN v1; // bl
  _BOOL8 result; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  result = 0;
  if ( a1 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v1 = SeAccessCheck(
           SeMediumDaclSd,
           &SubjectContext,
           0,
           0x20000u,
           0,
           0LL,
           (PGENERIC_MAPPING)&ExpRestrictedGenericMapping,
           1,
           &GrantedAccess,
           &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v1 != 1 || AccessStatus < 0 )
      return 1;
  }
  return result;
}
