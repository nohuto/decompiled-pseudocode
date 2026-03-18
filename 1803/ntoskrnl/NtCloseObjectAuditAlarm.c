/*
 * XREFs of NtCloseObjectAuditAlarm @ 0x14056C944
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeCheckAuditPrivilege @ 0x1404D7CA8 (SeCheckAuditPrivilege.c)
 *     SepProbeAndCaptureString_U @ 0x1404D9134 (SepProbeAndCaptureString_U.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14078E650 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x140795050 (SepAuditFailed.c)
 */

NTSTATUS __stdcall NtCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  int v3; // edi
  char PreviousMode; // si
  NTSTATUS v7; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)HandleId;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !GenerateOnClose )
    return 0;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v7 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
    if ( v7 >= 0 )
      SepAdtCloseObjectAuditAlarm((_DWORD)P, v3, (unsigned int)&SubjectContext, 0, 0);
  }
  else
  {
    v7 = -1073741727;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v7 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v7;
}
