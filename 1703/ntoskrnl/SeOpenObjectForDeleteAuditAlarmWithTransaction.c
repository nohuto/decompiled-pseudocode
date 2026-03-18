/*
 * XREFs of SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406F5610
 * Callers:
 *     SeOpenObjectForDeleteAuditAlarm @ 0x1406F55B0 (SeOpenObjectForDeleteAuditAlarm.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepQueryNameString @ 0x1404626BC (SepQueryNameString.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046C4F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046C750 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x1406F3A0C (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepQueryTypeString @ 0x1406F43D8 (SepQueryTypeString.c)
 *     SeExamineSacl @ 0x1406F5210 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1406F9224 (SeExamineGlobalSacl.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
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
  PVOID v11; // r10
  BOOLEAN v12; // r15
  BOOLEAN v13; // r12
  PVOID v14; // r13
  UNICODE_STRING *v15; // rsi
  UNICODE_STRING *v16; // r14
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  int v18; // eax
  __int16 v19; // r8
  unsigned int v20; // eax
  int v21; // eax
  ACL *v22; // rdx
  __int64 v23; // rcx
  ACL *v24; // rcx
  __int64 v25; // rax
  PACCESS_TOKEN v26; // r15
  BOOLEAN v27; // r12
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
  UNICODE_STRING *ObjectType; // [rsp+118h] [rbp+47h]
  ACCESS_MASK AccessModea; // [rsp+150h] [rbp+7Fh]

  ObjectType = ObjectTypeName;
  v11 = Object;
  v12 = 0;
  GenerateAudit = 0;
  v13 = 0;
  GenerateAlarm[0] = 0;
  v14 = 0LL;
  P = 0LL;
  v15 = 0LL;
  v44 = 0LL;
  v16 = 0LL;
  v42 = 0;
  v41[0] = 999;
  if ( AccessMode )
  {
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    AuxData = (int **)AccessState->AuxData;
    Token = AccessState->SubjectSecurityContext.ClientToken;
    if ( !Token )
      Token = AccessState->SubjectSecurityContext.PrimaryToken;
    if ( ObjectTypeName && ObjectTypeName->Length )
    {
      v16 = ObjectTypeName;
    }
    else if ( v11 )
    {
      v18 = SepQueryTypeString((__int64)v11, &v44);
      v14 = v44;
      v42 = v18;
      if ( v18 < 0 )
        goto LABEL_64;
      ObjectTypeName = ObjectType;
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
      v11 = Object;
      if ( v44 )
        v16 = (UNICODE_STRING *)v44;
    }
    if ( !SecurityDescriptor
      || !(unsigned __int8)SepAdtAuditObjectAccessWithContext(
                             (__int64)v11,
                             ObjectTypeName,
                             AccessGranted,
                             AccessGranted == 0,
                             (__int64)p_SubjectSecurityContext,
                             1,
                             v41) )
    {
      goto LABEL_33;
    }
    v19 = *((_WORD *)SecurityDescriptor + 1);
    v20 = (unsigned __int16)v19;
    AccessModea = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    LOWORD(v20) = ~v19;
    v21 = (v20 >> 4) & 1;
    if ( v21 )
      goto LABEL_14;
    if ( v19 >= 0 )
    {
      v22 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_19;
    }
    v23 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v23 )
LABEL_14:
      v22 = 0LL;
    else
      v22 = (ACL *)((char *)SecurityDescriptor + v23);
LABEL_19:
    if ( v21 )
      goto LABEL_20;
    if ( v19 >= 0 )
    {
      v24 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_25;
    }
    v25 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v25 )
LABEL_20:
      v24 = 0LL;
    else
      v24 = (ACL *)((char *)SecurityDescriptor + v25);
LABEL_25:
    v26 = Token;
    v27 = AccessGranted;
    SeExamineSacl(
      v24,
      v22,
      Token,
      AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess,
      AccessGranted,
      &GenerateAudit,
      GenerateAlarm);
    v28 = 0LL;
    if ( (~(unsigned __int8)*((_WORD *)SecurityDescriptor + 1) & 0x10) == 0 )
    {
      if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
      {
        v28 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v29 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v29 )
          v28 = (ACL *)((char *)SecurityDescriptor + v29);
      }
    }
    SeExamineGlobalSacl(ObjectType, v28, v26, AccessModea, AccessGranted, &GenerateAudit, GenerateAlarm);
    v12 = GenerateAudit;
    if ( GenerateAudit )
    {
      *GenerateOnClose = 1;
LABEL_41:
      AccessState->GenerateAudit = 1;
      if ( AbsoluteObjectName && AbsoluteObjectName->Length )
      {
        v15 = AbsoluteObjectName;
        goto LABEL_48;
      }
      if ( !Object )
      {
LABEL_48:
        if ( v27 )
        {
          v32 = (GUID *)AuxData;
          SepAdtOpenObjectForDeleteAuditAlarm(
            v41[0],
            (__int64)p_SubjectSecurityContext,
            (__int64)AbsoluteObjectName,
            &v16->Length,
            &v15->Length,
            (__int64)AccessState->SubjectSecurityContext.ClientToken,
            (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
            v37,
            AccessState->PreviouslyGrantedAccess,
            *AuxData,
            v38,
            (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
            TransactionId);
          if ( v15 )
          {
            Buffer = AccessState->ObjectName.Buffer;
            if ( Buffer )
            {
              ExFreePoolWithTag(Buffer, 0);
              *(_DWORD *)&AccessState->ObjectName.Length = 0;
            }
            PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v15->MaximumLength, 0x20206553u);
            AccessState->ObjectName.Buffer = PoolWithTag;
            if ( PoolWithTag )
            {
              AccessState->ObjectName.MaximumLength = v15->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectName, v15);
            }
          }
          if ( v16 )
          {
            v35 = AccessState->ObjectTypeName.Buffer;
            if ( v35 )
            {
              ExFreePoolWithTag(v35, 0);
              *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
            }
            v36 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v16->MaximumLength, 0x20206553u);
            AccessState->ObjectTypeName.Buffer = v36;
            if ( v36 )
            {
              AccessState->ObjectTypeName.MaximumLength = v16->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectTypeName, v16);
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
            &v16->Length,
            &v15->Length,
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
        goto LABEL_64;
      }
      v42 = SepQueryNameString((__int64)Object, &P);
      if ( v42 >= 0 )
      {
        if ( P )
          v15 = (UNICODE_STRING *)P;
        goto LABEL_48;
      }
LABEL_64:
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
LABEL_68:
      if ( v42 < 0 )
        SepAuditFailed((unsigned int)v42);
      return;
    }
    v13 = GenerateAlarm[0];
LABEL_33:
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
          v12 = 1;
          AccessState->AuditPrivileges = 1;
        }
      }
    }
    if ( !v12 && !v13 )
      goto LABEL_68;
    v27 = AccessGranted;
    goto LABEL_41;
  }
}
