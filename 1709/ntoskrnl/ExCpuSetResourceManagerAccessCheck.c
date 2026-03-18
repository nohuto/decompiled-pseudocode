/*
 * XREFs of ExCpuSetResourceManagerAccessCheck @ 0x140122710
 * Callers:
 *     NtAcquireProcessActivityReference @ 0x1404513BC (NtAcquireProcessActivityReference.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall ExCpuSetResourceManagerAccessCheck(KPROCESSOR_MODE a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+90h] [rbp+8h] BYREF
  int v6; // [rsp+98h] [rbp+10h] BYREF

  if ( !a1 || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a1) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)ExpCpuSetSecurityDescriptor,
    7,
    (int *)&SubjectContext,
    0,
    1u,
    0,
    0LL,
    (__int64)&ExpRestrictedGenericMapping,
    a1,
    &v6,
    (int *)&v5);
  SeReleaseSubjectContext(&SubjectContext);
  return v5;
}
