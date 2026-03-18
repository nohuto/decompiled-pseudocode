/*
 * XREFs of NtCloseObjectAuditAlarm @ 0x140443584
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepProbeAndCaptureString_U @ 0x14046C3CC (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x14046C8E4 (SeCheckAuditPrivilege.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406F2820 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 */

NTSTATUS __stdcall NtCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  int v3; // edi
  char PreviousMode; // si
  __int64 v7; // rdx
  NTSTATUS v8; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)HandleId;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !GenerateOnClose )
    return 0;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v7) = PreviousMode;
  if ( (unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v7) )
  {
    v8 = SepProbeAndCaptureString_U(SubsystemName, &P);
    if ( v8 >= 0 )
      SepAdtCloseObjectAuditAlarm((_DWORD)P, v3, (unsigned int)&SubjectContext, 0, 0);
  }
  else
  {
    v8 = -1073741727;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v8 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v8;
}
