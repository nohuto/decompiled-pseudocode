/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x14046D7AC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepProbeAndCaptureString_U @ 0x14046B9E8 (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046BB0C (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046BC3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCheckAuditPrivilege @ 0x14046BEA0 (SeCheckAuditPrivilege.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     SeCaptureSecurityDescriptor @ 0x1404BBCD0 (SeCaptureSecurityDescriptor.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14072AC08 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x14072CC70 (SeExamineSacl.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  PUNICODE_STRING v12; // r14
  char PreviousMode; // r12
  int v15; // edx
  NTSTATUS v16; // edi
  PVOID v17; // rdi
  __int64 v18; // rdx
  NTSTATUS v19; // esi
  __int64 v20; // rdi
  ULONG PrivilegeCount; // r14d
  unsigned int v22; // ecx
  char *v23; // rdx
  ULONG *PoolWithTag; // rax
  __int64 v25; // rdx
  ULONG *v26; // r12
  PVOID v28; // r14
  char v29; // al
  __int64 v30; // rdx
  PVOID v31; // rdi
  BOOLEAN v32; // r13
  __int64 v33; // rcx
  NTSTATUS v34; // ebx
  __int16 v35; // ax
  __int64 v36; // rdx
  ACL *v37; // rdx
  __int64 v38; // rax
  ACL *v39; // rcx
  BOOLEAN GenerateAudit; // [rsp+A1h] [rbp-B7h] BYREF
  BOOLEAN GenerateAlarm; // [rsp+A2h] [rbp-B6h] BYREF
  char v42; // [rsp+A3h] [rbp-B5h]
  char v43; // [rsp+A4h] [rbp-B4h]
  int v44; // [rsp+A8h] [rbp-B0h]
  PVOID v45; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int16 v46; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID Token; // [rsp+C0h] [rbp-98h] BYREF
  PVOID v48; // [rsp+C8h] [rbp-90h] BYREF
  PVOID P; // [rsp+D0h] [rbp-88h] BYREF
  PVOID v50; // [rsp+D8h] [rbp-80h] BYREF
  PVOID v51; // [rsp+E0h] [rbp-78h]
  __int64 v52; // [rsp+E8h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-68h] BYREF
  ULONG v54; // [rsp+110h] [rbp-48h]
  unsigned int v55; // [rsp+114h] [rbp-44h]
  size_t Size; // [rsp+118h] [rbp-40h]

  v12 = ObjectTypeName;
  P = 0LL;
  v48 = 0LL;
  v50 = 0LL;
  v45 = 0LL;
  v51 = 0LL;
  GenerateAudit = 0;
  GenerateAlarm = 0;
  v52 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v42 = PreviousMode;
  v43 = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
  {
    v34 = -1073741727;
    goto LABEL_55;
  }
  v16 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v16 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v16 != -1073741816 )
    {
      v33 = (unsigned int)v16;
LABEL_52:
      SepAuditFailed(v33);
    }
    return v16;
  }
  v17 = Token;
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    ObfDereferenceObject(Token);
    v34 = -1073741659;
LABEL_55:
    SeReleaseSubjectContext(&SubjectContext);
    return v34;
  }
  if ( !SecurityDescriptor )
  {
    ObfDereferenceObject(Token);
    v34 = -1073741703;
    goto LABEL_55;
  }
  LOBYTE(v15) = PreviousMode;
  v19 = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, v15, 1, 0, (__int64)&v45);
  v44 = v19;
  if ( v19 >= 0 && v45 )
  {
    if ( AccessGranted && Privileges )
    {
      if ( ((unsigned __int8)Privileges & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = 0x7FFFFFFF0000LL;
      PrivilegeCount = Privileges->PrivilegeCount;
      v54 = PrivilegeCount;
      if ( PrivilegeCount >= 0x43 )
      {
        v16 = -1073741811;
        v44 = -1073741811;
        goto LABEL_30;
      }
      v22 = 12 * PrivilegeCount + 8;
      v55 = v22;
      if ( 12 * PrivilegeCount != -8 )
      {
        v23 = (char *)Privileges + v22;
        if ( (unsigned __int64)v23 > 0x7FFFFFFF0000LL || v23 < (char *)Privileges )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Size = v22;
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v22, 0x72506553u);
      v26 = PoolWithTag;
      v51 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LOBYTE(v25) = v42;
        SeReleaseSecurityDescriptor(v45, v25, 0LL);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        v44 = -1073741670;
        SepAuditFailed(3221225626LL);
        return -1073741670;
      }
      memmove(PoolWithTag, Privileges, Size);
      *v26 = PrivilegeCount;
      PreviousMode = v42;
      v12 = ObjectTypeName;
    }
    else
    {
      v20 = 0x7FFFFFFF0000LL;
    }
    if ( HandleId )
    {
      if ( ((unsigned __int8)HandleId & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v52 = *(_QWORD *)HandleId;
    }
    if ( (unsigned __int64)GenerateOnClose < 0x7FFFFFFF0000LL )
      v20 = (__int64)GenerateOnClose;
    *(_BYTE *)v20 = *(_BYTE *)v20;
    v16 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
    v44 = v16;
    if ( v16 >= 0 )
    {
      v16 = SepProbeAndCaptureString_U((unsigned __int64)v12, (__int64)&v48);
      v44 = v16;
      if ( v16 >= 0 )
      {
        v16 = SepProbeAndCaptureString_U((unsigned __int64)ObjectName, (__int64)&v50);
        v44 = v16;
      }
    }
LABEL_30:
    if ( v16 >= 0 )
    {
      v28 = v48;
      v29 = SepAdtAuditObjectAccessWithContext(
              0LL,
              (const UNICODE_STRING *)v48,
              AccessGranted,
              AccessGranted == 0,
              (__int64)&SubjectContext,
              0,
              &v46);
      v31 = v45;
      if ( !v29 )
        goto LABEL_32;
      v35 = *((_WORD *)v45 + 1);
      if ( (v35 & 0x10) == 0 )
        goto LABEL_70;
      if ( v35 >= 0 )
      {
        v37 = (ACL *)*((_QWORD *)v45 + 3);
        goto LABEL_72;
      }
      v36 = *((unsigned int *)v45 + 3);
      if ( (_DWORD)v36 )
        v37 = (ACL *)((char *)v45 + v36);
      else
LABEL_70:
        v37 = 0LL;
LABEL_72:
      if ( (v35 & 0x10) == 0 )
        goto LABEL_76;
      if ( v35 >= 0 )
      {
        v39 = (ACL *)*((_QWORD *)v45 + 3);
        goto LABEL_78;
      }
      v38 = *((unsigned int *)v45 + 3);
      if ( (_DWORD)v38 )
        v39 = (ACL *)((char *)v45 + v38);
      else
LABEL_76:
        v39 = 0LL;
LABEL_78:
      SeExamineSacl(v39, v37, Token, GrantedAccess | DesiredAccess, AccessGranted, &GenerateAudit, &GenerateAlarm);
      if ( GenerateAudit || GenerateAlarm )
      {
        v31 = v45;
        v28 = v48;
        v32 = SepAdtOpenObjectAuditAlarm(
                v46,
                (int)P,
                (unsigned __int64)&v52 & -(__int64)(HandleId != 0LL),
                (int)v48,
                (__int64)v50,
                v45,
                (__int64)Token,
                (__int64)SubjectContext.PrimaryToken,
                DesiredAccess,
                GrantedAccess,
                (__int64)v51,
                AccessGranted,
                (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                2,
                0LL,
                0,
                0LL,
                0LL,
                0LL);
LABEL_33:
        if ( !GenerateAudit && !GenerateAlarm && Privileges && AccessGranted )
        {
          v28 = v48;
          SepAdtPrivilegeObjectAuditAlarm(
            (const int *)P,
            (unsigned __int16 *)v48,
            (unsigned __int16 *)v50,
            v52,
            (__int64)Token,
            (__int64)SubjectContext.PrimaryToken,
            (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
            DesiredAccess,
            (int *)v51,
            AccessGranted);
          v32 = 0;
          v31 = v45;
        }
        LOBYTE(v30) = PreviousMode;
        SeReleaseSecurityDescriptor(v31, v30, 0LL);
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v28 )
          ExFreePoolWithTag(v28, 0);
        if ( v50 )
          ExFreePoolWithTag(v50, 0);
        if ( v51 )
          ExFreePoolWithTag(v51, 0);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        *GenerateOnClose = v32;
        return 0;
      }
LABEL_32:
      v32 = 0;
      goto LABEL_33;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v48 )
      ExFreePoolWithTag(v48, 0);
    if ( v50 )
      ExFreePoolWithTag(v50, 0);
    if ( v51 )
      ExFreePoolWithTag(v51, 0);
    LOBYTE(v18) = PreviousMode;
    SeReleaseSecurityDescriptor(v45, v18, 0LL);
    ObfDereferenceObject(Token);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v16 == -1073741670 )
    {
      v33 = 3221225626LL;
      goto LABEL_52;
    }
    return v16;
  }
  ObfDereferenceObject(v17);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v19 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v19;
}
