/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x14046A60C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepProbeAndCaptureString_U @ 0x14046C3CC (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046C4F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046C68C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCheckAuditPrivilege @ 0x14046C8E4 (SeCheckAuditPrivilege.c)
 *     SeReleaseSecurityDescriptor @ 0x14050B570 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x14050B5A0 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x1406F5210 (SeExamineSacl.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtOpenObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK GrantedAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN ObjectCreation,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateOnClose)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // esi
  PVOID v16; // rdi
  NTSTATUS v17; // ebx
  __int64 v18; // rcx
  BOOLEAN GenerateAudit; // [rsp+A1h] [rbp-C7h]
  BOOLEAN v21; // [rsp+A2h] [rbp-C6h]
  KPROCESSOR_MODE v22; // [rsp+A3h] [rbp-C5h]
  int v23; // [rsp+A4h] [rbp-C4h]
  PVOID v24; // [rsp+A8h] [rbp-C0h]
  PVOID Token[6]; // [rsp+B8h] [rbp-B0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-80h] BYREF
  PVOID v27; // [rsp+118h] [rbp-50h]
  PVOID v28; // [rsp+120h] [rbp-48h]

  v27 = HandleId;
  memset(&Token[1], 0, 40);
  v24 = 0LL;
  GenerateAudit = 0;
  v21 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v22 = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v13) = PreviousMode;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v13) )
  {
    v17 = -1073741727;
    goto LABEL_12;
  }
  v15 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, Token, 0LL);
  v16 = Token[0];
  v28 = Token[0];
  if ( v15 >= 0 )
  {
    if ( *((_DWORD *)Token[0] + 48) == 2 && *((int *)Token[0] + 49) < 1 )
    {
      ObfDereferenceObject(Token[0]);
      v17 = -1073741659;
    }
    else
    {
      if ( SecurityDescriptor )
      {
        LOBYTE(v14) = PreviousMode;
        v15 = SeCaptureSecurityDescriptor(SecurityDescriptor, v14, 1LL, 0LL);
        v23 = v15;
        ObfDereferenceObject(v16);
        SeReleaseSubjectContext(&SubjectContext);
        if ( v15 != -1073741670 )
          return v15;
        v18 = 3221225626LL;
        goto LABEL_15;
      }
      ObfDereferenceObject(Token[0]);
      v17 = -1073741703;
    }
LABEL_12:
    SeReleaseSubjectContext(&SubjectContext);
    return v17;
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( v15 != -1073741816 )
  {
    v18 = (unsigned int)v15;
LABEL_15:
    SepAuditFailed(v18);
  }
  return v15;
}
