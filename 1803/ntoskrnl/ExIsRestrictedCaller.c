/*
 * XREFs of ExIsRestrictedCaller @ 0x14048C09C
 * Callers:
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     PspQueryWorkingSetWatch @ 0x14077AA34 (PspQueryWorkingSetWatch.c)
 *     ExpProfileCreate @ 0x1407C7550 (ExpProfileCreate.c)
 * Callees:
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
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
