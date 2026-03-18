/*
 * XREFs of SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14072D060
 * Callers:
 *     SeOpenObjectForDeleteAuditAlarm @ 0x14072D000 (SeOpenObjectForDeleteAuditAlarm.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046BB0C (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046BD00 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepQueryNameString @ 0x140564610 (SepQueryNameString.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14072AC08 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14072B49C (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepQueryTypeString @ 0x14072BE68 (SepQueryTypeString.c)
 *     SeExamineSacl @ 0x14072CC70 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140730C80 (SeExamineGlobalSacl.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 */

void __stdcall SeOpenObjectForDeleteAuditAlarmWithTransaction(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        GUID *TransactionId,
        PBOOLEAN GenerateOnClose)
{
  const UNICODE_STRING *v10; // rax
  PVOID v12; // r10
  BOOLEAN v13; // r15
  BOOLEAN v14; // r12
  PVOID v15; // r13
  UNICODE_STRING *v16; // rsi
  UNICODE_STRING *v17; // r14
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  int v19; // eax
  __int16 v20; // cx
  ACL *v21; // rdx
  __int64 v22; // rax
  ACL *v23; // rcx
  __int64 v24; // rax
  PACCESS_TOKEN v25; // r15
  BOOLEAN v26; // r12
  __int16 v27; // ax
  ACL *v28; // rdx
  __int64 v29; // rax
  int *v30; // rcx
  GUID *v31; // rax
  GUID *v32; // r15
  wchar_t *Buffer; // rcx
  wchar_t *PoolWithTag; // rax
  wchar_t *v35; // rcx
  wchar_t *v36; // rax
  int v37; // [rsp+40h] [rbp-91h]
  int v38; // [rsp+58h] [rbp-79h]
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-29h] BYREF
  BOOLEAN GenerateAlarm[3]; // [rsp+A9h] [rbp-28h] BYREF
  unsigned __int16 v41[2]; // [rsp+ACh] [rbp-25h] BYREF
  int v42; // [rsp+B0h] [rbp-21h]
  int **AuxData; // [rsp+B8h] [rbp-19h]
  PVOID v44; // [rsp+C0h] [rbp-11h] BYREF
  PVOID P; // [rsp+C8h] [rbp-9h] BYREF
  PACCESS_TOKEN Token; // [rsp+D0h] [rbp-1h]
  ACCESS_MASK AccessModea; // [rsp+150h] [rbp+7Fh]

  v10 = ObjectTypeName;
  v12 = Object;
  v41[0] = 999;
  v13 = 0;
  GenerateAudit = 0;
  v14 = 0;
  GenerateAlarm[0] = 0;
  v15 = 0LL;
  P = 0LL;
  v16 = 0LL;
  v44 = 0LL;
  v17 = 0LL;
  v42 = 0;
  if ( AccessMode )
  {
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    AuxData = (int **)AccessState->AuxData;
    Token = AccessState->SubjectSecurityContext.ClientToken;
    if ( !Token )
      Token = AccessState->SubjectSecurityContext.PrimaryToken;
    if ( ObjectTypeName && ObjectTypeName->Length )
    {
      v17 = ObjectTypeName;
    }
    else if ( v12 )
    {
      v19 = SepQueryTypeString((__int64)v12, &v44);
      v15 = v44;
      v42 = v19;
      if ( v19 < 0 )
        goto LABEL_65;
      v10 = ObjectTypeName;
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
      v12 = Object;
      if ( v44 )
        v17 = (UNICODE_STRING *)v44;
    }
    if ( !SecurityDescriptor
      || !(unsigned __int8)SepAdtAuditObjectAccessWithContext(
                             (__int64)v12,
                             v10,
                             AccessGranted,
                             AccessGranted == 0,
                             (__int64)p_SubjectSecurityContext,
                             1,
                             v41) )
    {
      goto LABEL_34;
    }
    v20 = *((_WORD *)SecurityDescriptor + 1);
    AccessModea = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    if ( (v20 & 0x10) == 0 )
      goto LABEL_14;
    if ( v20 >= 0 )
    {
      v21 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_19;
    }
    v22 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v22 )
      v21 = (ACL *)((char *)SecurityDescriptor + v22);
    else
LABEL_14:
      v21 = 0LL;
LABEL_19:
    if ( (v20 & 0x10) == 0 )
      goto LABEL_20;
    if ( v20 >= 0 )
    {
      v23 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_25;
    }
    v24 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v24 )
      v23 = (ACL *)((char *)SecurityDescriptor + v24);
    else
LABEL_20:
      v23 = 0LL;
LABEL_25:
    v25 = Token;
    v26 = AccessGranted;
    SeExamineSacl(
      v23,
      v21,
      Token,
      AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess,
      AccessGranted,
      &GenerateAudit,
      GenerateAlarm);
    v27 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v27 & 0x10) == 0 )
      goto LABEL_26;
    if ( v27 >= 0 )
    {
      v28 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_31;
    }
    v29 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v29 )
      v28 = (ACL *)((char *)SecurityDescriptor + v29);
    else
LABEL_26:
      v28 = 0LL;
LABEL_31:
    SeExamineGlobalSacl(ObjectTypeName, v28, v25, AccessModea, AccessGranted, &GenerateAudit, GenerateAlarm);
    v13 = GenerateAudit;
    if ( GenerateAudit )
    {
      *GenerateOnClose = 1;
LABEL_42:
      AccessState->GenerateAudit = 1;
      if ( AbsoluteObjectName && AbsoluteObjectName->Length )
      {
        v16 = AbsoluteObjectName;
        goto LABEL_49;
      }
      if ( !Object )
      {
LABEL_49:
        if ( v26 )
        {
          v32 = (GUID *)AuxData;
          SepAdtOpenObjectForDeleteAuditAlarm(
            v41[0],
            (__int64)p_SubjectSecurityContext,
            (__int64)AbsoluteObjectName,
            &v17->Length,
            &v16->Length,
            (__int64)AccessState->SubjectSecurityContext.ClientToken,
            (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
            v37,
            AccessState->PreviouslyGrantedAccess,
            *AuxData,
            v38,
            (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
            TransactionId);
          if ( v16 )
          {
            Buffer = AccessState->ObjectName.Buffer;
            if ( Buffer )
            {
              ExFreePoolWithTag(Buffer, 0);
              *(_DWORD *)&AccessState->ObjectName.Length = 0;
            }
            PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v16->MaximumLength, 0x20206553u);
            AccessState->ObjectName.Buffer = PoolWithTag;
            if ( PoolWithTag )
            {
              AccessState->ObjectName.MaximumLength = v16->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectName, v16);
            }
          }
          if ( v17 )
          {
            v35 = AccessState->ObjectTypeName.Buffer;
            if ( v35 )
            {
              ExFreePoolWithTag(v35, 0);
              *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
            }
            v36 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17->MaximumLength, 0x20206553u);
            AccessState->ObjectTypeName.Buffer = v36;
            if ( v36 )
            {
              AccessState->ObjectTypeName.MaximumLength = v17->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectTypeName, v17);
            }
          }
          if ( TransactionId )
            v32[2] = *TransactionId;
        }
        else
        {
          v31 = TransactionId;
          if ( !TransactionId )
            v31 = (GUID *)(AuxData + 4);
          SepAdtOpenObjectAuditAlarm(
            v41[0],
            &SeSubsystemName,
            0LL,
            &v17->Length,
            &v16->Length,
            (__int16 *)SecurityDescriptor,
            (_QWORD *)AccessState->SubjectSecurityContext.ClientToken,
            (_QWORD *)AccessState->SubjectSecurityContext.PrimaryToken,
            AccessState->OriginalDesiredAccess,
            AccessState->PreviouslyGrantedAccess,
            *AuxData,
            0,
            (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
            2,
            0LL,
            0,
            0LL,
            v31,
            (__int64)AccessState);
        }
        goto LABEL_65;
      }
      v42 = SepQueryNameString((char *)Object, &P);
      if ( v42 >= 0 )
      {
        if ( P )
          v16 = (UNICODE_STRING *)P;
        goto LABEL_49;
      }
LABEL_65:
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
LABEL_69:
      if ( v42 < 0 )
        SepAuditFailed((unsigned int)v42);
      return;
    }
    v14 = GenerateAlarm[0];
LABEL_34:
    if ( AccessGranted )
    {
      v30 = *AuxData;
      if ( *AuxData )
      {
        if ( *v30
          && SepAdtAuditPrivilegeUseWithContext(
               (unsigned int *)v30,
               AccessGranted,
               0,
               &AccessState->SubjectSecurityContext,
               v41) )
        {
          v13 = 1;
          AccessState->AuditPrivileges = 1;
        }
      }
    }
    if ( !v13 && !v14 )
      goto LABEL_69;
    v26 = AccessGranted;
    goto LABEL_42;
  }
}
