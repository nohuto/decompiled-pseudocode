/*
 * XREFs of SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80
 * Callers:
 *     SeOpenObjectAuditAlarm @ 0x140487F20 (SeOpenObjectAuditAlarm.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x140692F64 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SeMaximumAuditMask @ 0x14025DFC0 (SeMaximumAuditMask.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046BD00 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046BDC0 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SepQueryNameString @ 0x140564610 (SepQueryNameString.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14072AC08 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14072B970 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x14072BE68 (SepQueryTypeString.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x14072C0C4 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SeExamineSacl @ 0x14072CC70 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140730C80 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140730D94 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 */

void __stdcall SeOpenObjectAuditAlarmWithTransaction(
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
  unsigned __int16 v10; // r11
  PVOID v11; // r10
  unsigned int v12; // edx
  UNICODE_STRING *v13; // rbx
  const UNICODE_STRING *v14; // rsi
  PACCESS_TOKEN ClientToken; // rdi
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // r12
  char *AuxData; // r14
  BOOLEAN v18; // r15
  int v19; // ebx
  char v20; // r14
  BOOLEAN v21; // r12
  SECURITY_SUBJECT_CONTEXT *v22; // rbx
  unsigned __int8 v23; // r8
  unsigned __int8 v24; // r10
  unsigned __int8 v25; // al
  char v26; // al
  unsigned int *v27; // rcx
  BOOLEAN v28; // al
  char v29; // al
  _BYTE *PrimaryToken; // r8
  unsigned __int16 *v31; // rcx
  __int16 v32; // r11
  __int16 v33; // r15
  __int64 v34; // r9
  int v35; // eax
  unsigned int i; // r10d
  int v37; // r9d
  ACCESS_MASK v38; // esi
  __int16 v39; // cx
  ACL *v40; // rdx
  __int64 v41; // rax
  ACL *v42; // rcx
  __int64 v43; // rax
  __int16 v44; // ax
  ACL *v45; // rdx
  __int64 v46; // rax
  __int16 v47; // ax
  __int64 v48; // rcx
  __int64 v49; // rax
  const UNICODE_STRING *v50; // rdi
  PVOID v51; // rcx
  int v52; // eax
  GUID *v53; // rax
  __int64 v54; // rdx
  wchar_t *Buffer; // rcx
  wchar_t *PoolWithTag; // rax
  wchar_t *v57; // rcx
  wchar_t *v58; // rax
  int v59; // [rsp+50h] [rbp-D8h]
  BOOLEAN GenerateAudit[4]; // [rsp+A8h] [rbp-80h] BYREF
  unsigned int v61; // [rsp+ACh] [rbp-7Ch]
  BOOLEAN GenerateAlarm[4]; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int16 v63; // [rsp+B4h] [rbp-74h] BYREF
  int v64; // [rsp+B8h] [rbp-70h]
  const UNICODE_STRING *v65; // [rsp+C0h] [rbp-68h] BYREF
  const UNICODE_STRING *v66; // [rsp+C8h] [rbp-60h]
  PVOID P; // [rsp+D0h] [rbp-58h] BYREF
  char *v68; // [rsp+D8h] [rbp-50h]
  const UNICODE_STRING *v69; // [rsp+E0h] [rbp-48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-40h] BYREF
  UNICODE_STRING *ObjectType; // [rsp+158h] [rbp+30h]
  unsigned int *v74; // [rsp+170h] [rbp+48h]

  v74 = (unsigned int *)SecurityDescriptor;
  ObjectType = ObjectTypeName;
  v10 = 999;
  GenerateAudit[0] = 0;
  v11 = Object;
  GenerateAlarm[0] = 0;
  v12 = 0;
  v61 = 999;
  v13 = 0LL;
  P = 0LL;
  v14 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v69 = 0LL;
  v64 = 0;
  v63 = 999;
  if ( !AccessMode )
    return;
  ClientToken = AccessState->SubjectSecurityContext.ClientToken;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  AuxData = (char *)AccessState->AuxData;
  v68 = AuxData;
  if ( !ClientToken )
    ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
  v18 = AccessGranted;
  if ( !SecurityDescriptor )
    goto LABEL_24;
  v10 = 118;
  v61 = 118;
  if ( !AccessGranted )
    LOBYTE(v14) = 1;
  v63 = 118;
  v19 = AccessGranted != 0 ? 3 : 0;
  if ( (_BYTE)v14 )
    v19 |= 0x30u;
  if ( !dword_140362148 )
    goto LABEL_12;
  if ( (dword_140362148 & v19) != 0 )
  {
LABEL_62:
    v61 = SepAdtClassifyObjectIntoSubCategory(v11, ObjectTypeName, v18, (unsigned __int8)v14);
    v63 = v61;
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(
                            (unsigned __int16)v61,
                            v18,
                            (unsigned __int8)v14,
                            p_SubjectSecurityContext) )
    {
      v38 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
      v39 = *((_WORD *)v74 + 1);
      if ( (v39 & 0x10) != 0 )
      {
        if ( v39 >= 0 )
        {
          v40 = (ACL *)*((_QWORD *)v74 + 3);
        }
        else
        {
          v41 = v74[3];
          if ( (_DWORD)v41 )
            v40 = (ACL *)((char *)v74 + v41);
          else
            v40 = 0LL;
        }
      }
      else
      {
        v40 = 0LL;
      }
      if ( (v39 & 0x10) != 0 )
      {
        if ( v39 >= 0 )
        {
          v42 = (ACL *)*((_QWORD *)v74 + 3);
        }
        else
        {
          v43 = v74[3];
          if ( (_DWORD)v43 )
            v42 = (ACL *)((char *)v74 + v43);
          else
            v42 = 0LL;
        }
      }
      else
      {
        v42 = 0LL;
      }
      SeExamineSacl(v42, v40, ClientToken, v38, v18, GenerateAudit, GenerateAlarm);
      v44 = *((_WORD *)v74 + 1);
      if ( (v44 & 0x10) != 0 )
      {
        if ( v44 >= 0 )
        {
          v45 = (ACL *)*((_QWORD *)v74 + 3);
        }
        else
        {
          v46 = v74[3];
          if ( (_DWORD)v46 )
            v45 = (ACL *)((char *)v74 + v46);
          else
            v45 = 0LL;
        }
      }
      else
      {
        v45 = 0LL;
      }
      SeExamineGlobalSacl(ObjectType, v45, ClientToken, v38, v18, GenerateAudit, GenerateAlarm);
      v21 = GenerateAudit[0];
      if ( GenerateAudit[0] )
      {
        *GenerateOnClose = 1;
        if ( v18 )
        {
          v47 = *((_WORD *)v74 + 1);
          if ( (v47 & 0x10) != 0 )
          {
            if ( v47 >= 0 )
            {
              v48 = *((_QWORD *)v74 + 3);
            }
            else
            {
              v49 = v74[3];
              if ( (_DWORD)v49 )
                v48 = (__int64)v74 + v49;
              else
                v48 = 0LL;
            }
          }
          else
          {
            v48 = 0LL;
          }
          SeMaximumAuditMask(v48, v38, (__int64)ClientToken, (_DWORD *)AuxData + 7);
          SeMaximumAuditMaskFromGlobalSacl(ObjectType, v38, ClientToken, (PACCESS_MASK)AuxData + 7);
        }
      }
    }
    else
    {
      v21 = GenerateAudit[0];
    }
    v10 = v61;
    SecurityDescriptor = v74;
    goto LABEL_13;
  }
  v20 = 0;
  if ( !dword_140362288 )
  {
LABEL_12:
    v21 = GenerateAudit[0];
LABEL_13:
    v22 = &AccessState->SubjectSecurityContext;
    goto LABEL_14;
  }
  if ( AccessState == (PACCESS_STATE)-32LL )
  {
    p_SubjectSecurityContext = &SubjectContext;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v10 = v61;
    v12 = 0;
    SecurityDescriptor = v74;
    ObjectTypeName = ObjectType;
    v11 = Object;
  }
  PrimaryToken = p_SubjectSecurityContext->ClientToken;
  if ( p_SubjectSecurityContext->ClientToken || (PrimaryToken = p_SubjectSecurityContext->PrimaryToken) != 0LL )
  {
    if ( PrimaryToken[118] != 2 )
      goto LABEL_59;
    v31 = AdtpPerCategoryCount;
    v32 = 0;
    v33 = 0;
    v34 = 2LL;
    do
    {
      v35 = *v31++;
      v12 += v35;
      --v34;
    }
    while ( v34 );
    for ( i = v12 + 14; v12 < i; ++v12 )
    {
      v37 = (unsigned __int8)PrimaryToken[((unsigned __int64)v12 >> 1) + 88] >> (4 * (v12 & 1));
      if ( (v37 & 1) != 0 )
      {
        if ( (v19 & 2) != 0 )
          goto LABEL_56;
        ++v32;
      }
      if ( (v37 & 4) != 0 )
      {
        if ( (v19 & 0x20) != 0 )
          goto LABEL_56;
        ++v33;
      }
    }
    if ( (v19 & 1) != 0 && v32 == 14 || (v19 & 0x10) != 0 && v33 == 14 )
LABEL_56:
      v20 = 1;
    v18 = AccessGranted;
  }
  else
  {
    SepAuditFailed(3221225596LL);
  }
  v11 = Object;
  ObjectTypeName = ObjectType;
  SecurityDescriptor = v74;
  v10 = v61;
LABEL_59:
  v22 = &AccessState->SubjectSecurityContext;
  if ( AccessState == (PACCESS_STATE)-32LL )
  {
    SeReleaseSubjectContext(p_SubjectSecurityContext);
    v10 = v61;
    SecurityDescriptor = v74;
    ObjectTypeName = ObjectType;
    v11 = Object;
  }
  if ( v20 )
  {
    AuxData = v68;
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    goto LABEL_62;
  }
  v21 = GenerateAudit[0];
LABEL_14:
  v23 = v18 == 0;
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) != 0 )
    v23 = 1;
  v24 = 0;
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) == 0 )
    v24 = v18;
  v25 = 0;
  while ( *((int *)AccessState->AuxData + v25 + 22) >= 0 )
  {
    if ( ++v25 >= 0x20u )
    {
      v26 = 0;
      goto LABEL_22;
    }
  }
  v26 = SepAdtAuditThisEventWithContext(129LL, v24, v23, v22);
  v10 = v61;
  SecurityDescriptor = v74;
LABEL_22:
  AuxData = v68;
  v68[216] = v26;
  if ( v21 )
    goto LABEL_97;
  v13 = (UNICODE_STRING *)v65;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  v14 = v69;
LABEL_24:
  if ( v18 )
  {
    v27 = *(unsigned int **)AuxData;
    if ( *(_QWORD *)AuxData )
    {
      if ( *v27 )
      {
        v29 = SepAdtAuditPrivilegeUseWithContext(v27, v18, 0, p_SubjectSecurityContext, &v63);
        v10 = v63;
        SecurityDescriptor = v74;
        v61 = v63;
        if ( v29 )
        {
          AccessState->AuditPrivileges = 1;
          goto LABEL_97;
        }
      }
    }
  }
  if ( GenerateAlarm[0] )
  {
LABEL_97:
    v13 = (UNICODE_STRING *)v65;
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    v14 = v69;
    v28 = 1;
    goto LABEL_29;
  }
  v28 = 0;
LABEL_29:
  AccessState->GenerateAudit = v28;
  if ( !v28 && !AuxData[216] )
    return;
  v50 = AbsoluteObjectName;
  if ( AbsoluteObjectName && AbsoluteObjectName->Length )
  {
LABEL_100:
    v51 = Object;
    goto LABEL_108;
  }
  v51 = Object;
  if ( Object )
  {
    v52 = SepQueryNameString(Object, &P);
    v64 = v52;
    if ( v52 < 0 )
      goto LABEL_132;
    v50 = v66;
    v10 = v61;
    SecurityDescriptor = v74;
    if ( P )
    {
      if ( *((_WORD *)P + 1) != (_WORD)v66 )
        v50 = (const UNICODE_STRING *)P;
      v51 = Object;
      goto LABEL_108;
    }
    goto LABEL_100;
  }
  v50 = v66;
LABEL_108:
  if ( ObjectType && ObjectType->Length )
  {
    v14 = ObjectType;
LABEL_115:
    if ( v18 )
    {
      if ( v50 )
      {
        Buffer = AccessState->ObjectName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          *(_DWORD *)&AccessState->ObjectName.Length = 0;
        }
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v50->MaximumLength, 0x20206553u);
        AccessState->ObjectName.Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          AccessState->ObjectName.MaximumLength = v50->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectName, v50);
        }
      }
      if ( v14 )
      {
        v57 = AccessState->ObjectTypeName.Buffer;
        if ( v57 )
        {
          ExFreePoolWithTag(v57, 0);
          *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
        }
        v58 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14->MaximumLength, 0x20206553u);
        AccessState->ObjectTypeName.Buffer = v58;
        if ( v58 )
        {
          AccessState->ObjectTypeName.MaximumLength = v14->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectTypeName, v14);
        }
      }
      if ( TransactionId )
        *((GUID *)AuxData + 2) = *TransactionId;
    }
    else
    {
      v53 = TransactionId;
      if ( !TransactionId )
        v53 = (GUID *)(AuxData + 32);
      SepAdtOpenObjectAuditAlarm(
        v10,
        (int)&SeSubsystemName,
        0,
        (int)v14,
        (__int64)v50,
        SecurityDescriptor,
        (__int64)p_SubjectSecurityContext->ClientToken,
        (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        *(_QWORD *)AuxData,
        0,
        (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
        2,
        0LL,
        0,
        0LL,
        (__int64)v53,
        (__int64)AccessState);
      LOBYTE(v59) = 0;
      SepAdtStagingEvent(
        v61,
        v54,
        0LL,
        v14,
        v50,
        p_SubjectSecurityContext->ClientToken,
        AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        v59,
        0LL,
        AccessState);
    }
    v52 = v64;
    goto LABEL_132;
  }
  if ( !v51 )
    goto LABEL_115;
  v52 = SepQueryTypeString(v51, &v65);
  v13 = (UNICODE_STRING *)v65;
  v64 = v52;
  if ( v52 >= 0 )
  {
    v10 = v61;
    SecurityDescriptor = v74;
    if ( v65 )
      v14 = v65;
    goto LABEL_115;
  }
LABEL_132:
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    v52 = v64;
  }
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    v52 = v64;
  }
  if ( v52 < 0 )
    SepAuditFailed((unsigned int)v52);
}
