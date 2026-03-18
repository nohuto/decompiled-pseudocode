/*
 * XREFs of ExCpuSetResourceManagerAccessCheck @ 0x140004224
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     NtAcquireProcessActivityReference @ 0x1405C343C (NtAcquireProcessActivityReference.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1400D47B0 (SeAccessCheckWithHint.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall ExCpuSetResourceManagerAccessCheck(KPROCESSOR_MODE a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+90h] [rbp+8h]

  if ( !a1 || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a1) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(ExpCpuSetSecurityDescriptor, 7LL, &SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return v4;
}
