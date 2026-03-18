/*
 * XREFs of NtPrivilegedServiceAuditAlarm @ 0x14046A39C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepProbeAndCaptureString_U @ 0x14046C3CC (SepProbeAndCaptureString_U.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14046C574 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeCheckAuditPrivilege @ 0x14046C8E4 (SeCheckAuditPrivilege.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v10; // rdx
  int v11; // ebx
  PVOID v12; // rsi
  ULONG PrivilegeCount; // ebx
  SIZE_T v14; // rdx
  char *v15; // rcx
  ULONG *PoolWithTag; // rax
  ULONG *v17; // rdi
  PVOID v18; // rbx
  PVOID v19; // r14
  __int64 v21; // rcx
  int v22; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  ULONG *v24; // [rsp+50h] [rbp-58h]
  PVOID v25; // [rsp+58h] [rbp-50h] BYREF
  PVOID P; // [rsp+60h] [rbp-48h] BYREF
  ULONG v27; // [rsp+68h] [rbp-40h]
  int v28; // [rsp+6Ch] [rbp-3Ch]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-38h] BYREF
  PVOID v30; // [rsp+90h] [rbp-18h]

  v24 = 0LL;
  P = 0LL;
  v25 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v10) = PreviousMode;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v10) )
  {
    v11 = -1073741727;
LABEL_35:
    SeReleaseSubjectContext(&SubjectContext);
    return v11;
  }
  v11 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v30 = Object;
  v22 = v11;
  if ( v11 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 == -1073741816 )
      return v11;
    v21 = (unsigned int)v11;
LABEL_33:
    SepAuditFailed(v21);
    return v11;
  }
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v11 = -1073741659;
    goto LABEL_35;
  }
  if ( SubsystemName && (v11 = SepProbeAndCaptureString_U(SubsystemName, &P), v22 = v11, v11 < 0)
    || ServiceName && (v11 = SepProbeAndCaptureString_U(ServiceName, &v25), v22 = v11, v11 < 0) )
  {
    v17 = v24;
  }
  else
  {
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    PrivilegeCount = Privileges->PrivilegeCount;
    v27 = PrivilegeCount;
    if ( PrivilegeCount >= 0x43 )
    {
      v11 = -1073741811;
      v17 = v24;
    }
    else
    {
      v14 = 12 * PrivilegeCount + 8;
      v28 = 12 * PrivilegeCount + 8;
      if ( 12 * PrivilegeCount != -8 )
      {
        v15 = (char *)Privileges + (unsigned int)v14;
        if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < (char *)Privileges )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v14, 0x72506553u);
      v17 = PoolWithTag;
      v24 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Privileges, 12 * PrivilegeCount + 8);
        *v17 = PrivilegeCount;
        v11 = v22;
      }
      else
      {
        v11 = -1073741670;
      }
    }
    v12 = Object;
  }
  if ( v11 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v12);
    if ( v11 != -1073741670 )
      return v11;
    v21 = 3221225626LL;
    goto LABEL_33;
  }
  v18 = v25;
  v19 = P;
  SepAdtPrivilegedServiceAuditAlarm(
    (unsigned int)&SubjectContext,
    (_DWORD)P,
    (_DWORD)v25,
    (_DWORD)v12,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v17,
    AccessGranted);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  ObfDereferenceObject(v12);
  SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
