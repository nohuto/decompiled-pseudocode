/*
 * XREFs of ExpWnfCheckCrossScopeAccess @ 0x1404584F8
 * Callers:
 *     NtQueryWnfStateNameInformation @ 0x1404476C4 (NtQueryWnfStateNameInformation.c)
 *     NtUpdateWnfStateData @ 0x1404EE944 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1404EF144 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateData @ 0x1405D16C8 (NtDeleteWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1404C0014 (ExpWnfLookupPermanentName.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExpWnfCheckCrossScopeAccess(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  PVOID v3; // rdi
  void *v4; // rbx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF
  PVOID P; // [rsp+90h] [rbp+18h] BYREF

  v1 = (a1 >> 6) & 0xF;
  if ( (_DWORD)v1 == 3 )
    return 0LL;
  if ( (_DWORD)v1 != 1 || ((a1 >> 4) & 3) != 0 )
    return SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) == 0 ? 0xC0000061 : 0;
  result = ExpWnfLookupPermanentName(a1, &P);
  if ( (int)result < 0 )
    return result;
  v3 = P;
  v4 = (void *)*((_QWORD *)P + 2);
  SeCaptureSubjectContext(&SubjectContext);
  SeAccessCheck(
    v4,
    &SubjectContext,
    0,
    0x10u,
    0,
    0LL,
    (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  ExFreePoolWithTag(v3, 0x20666E57u);
  result = (unsigned int)AccessStatus;
  if ( AccessStatus >= 0 )
    return 0LL;
  if ( AccessStatus == -1073741790 )
    return SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) == 0 ? 0xC0000061 : 0;
  return result;
}
