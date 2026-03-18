/*
 * XREFs of ExpWnfCheckCrossScopeAccess @ 0x140598790
 * Callers:
 *     NtUpdateWnfStateData @ 0x1404FEFC8 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1404FFEEC (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x140582464 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x1405EBE04 (NtDeleteWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ExpWnfLookupPermanentName @ 0x1404E0E80 (ExpWnfLookupPermanentName.c)
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
