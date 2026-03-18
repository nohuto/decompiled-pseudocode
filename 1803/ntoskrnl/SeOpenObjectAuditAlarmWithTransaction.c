/*
 * XREFs of SeOpenObjectAuditAlarmWithTransaction @ 0x14053E640
 * Callers:
 *     SeOpenObjectAuditAlarm @ 0x14053E5E0 (SeOpenObjectAuditAlarm.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F5E54 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SeMaximumAuditMask @ 0x14029F944 (SeMaximumAuditMask.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1404D59E0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1404D5AA0 (SepAdtAuditThisEventWithContext.c)
 *     SepQueryNameString @ 0x14053FE24 (SepQueryNameString.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14078EFAC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14078FD14 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x14079020C (SepQueryTypeString.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140790464 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SeExamineSacl @ 0x140790F20 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x14079456C (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140794680 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepAuditFailed @ 0x140795050 (SepAuditFailed.c)
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
  __int64 v10; // r8
  unsigned __int16 v11; // r11
  PUNICODE_STRING v12; // r10
  PVOID v13; // r14
  const UNICODE_STRING *v14; // r13
  PACCESS_STATE v15; // r12
  unsigned __int8 *ClientToken; // rdx
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rbx
  char *AuxData; // r15
  PACCESS_TOKEN PrimaryToken; // rsi
  BOOLEAN v20; // r13
  unsigned __int8 v21; // r15
  int v22; // ebx
  char v23; // di
  BOOLEAN v24; // r13
  BOOLEAN v25; // di
  BOOLEAN v26; // r10
  unsigned __int8 v27; // al
  char v28; // al
  unsigned int *v29; // rcx
  char v30; // al
  char v31; // al
  SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r13
  __int64 *v33; // rcx
  __int16 v34; // r11
  __int16 v35; // r12
  __int64 v36; // r9
  int v37; // eax
  unsigned int i; // r10d
  int v39; // r9d
  int v40; // edi
  __int16 v41; // ax
  ACL *v42; // rdx
  ACL *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int16 v46; // ax
  ACL *v47; // rdx
  __int64 v48; // rax
  __int16 v49; // ax
  __int64 v50; // rcx
  __int64 v51; // rax
  const UNICODE_STRING *v52; // rsi
  PVOID v53; // rcx
  int v54; // eax
  GUID *v55; // rax
  __int64 v56; // rdx
  wchar_t *Buffer; // rcx
  wchar_t *PoolWithTag; // rax
  wchar_t *v59; // rcx
  wchar_t *v60; // rax
  int v61; // [rsp+50h] [rbp-D8h]
  BOOLEAN GenerateAudit[4]; // [rsp+A8h] [rbp-80h] BYREF
  unsigned int v63; // [rsp+ACh] [rbp-7Ch]
  BOOLEAN GenerateAlarm[4]; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int16 v65; // [rsp+B4h] [rbp-74h] BYREF
  int v66; // [rsp+B8h] [rbp-70h]
  char *v67; // [rsp+C0h] [rbp-68h]
  PVOID v68; // [rsp+C8h] [rbp-60h] BYREF
  const UNICODE_STRING *v69; // [rsp+D0h] [rbp-58h]
  PVOID P; // [rsp+D8h] [rbp-50h] BYREF
  const UNICODE_STRING *v71; // [rsp+E0h] [rbp-48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-40h] BYREF
  unsigned int *v76; // [rsp+170h] [rbp+48h]

  v76 = (unsigned int *)SecurityDescriptor;
  v10 = 0LL;
  GenerateAudit[0] = 0;
  v11 = 999;
  v12 = ObjectTypeName;
  v13 = 0LL;
  GenerateAlarm[0] = 0;
  v14 = 0LL;
  P = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v71 = 0LL;
  v66 = 0;
  v63 = 999;
  v65 = 999;
  if ( !AccessMode )
    return;
  v15 = AccessState;
  ClientToken = (unsigned __int8 *)AccessState->SubjectSecurityContext.ClientToken;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  AuxData = (char *)AccessState->AuxData;
  v67 = AuxData;
  if ( ClientToken )
    PrimaryToken = ClientToken;
  else
    PrimaryToken = AccessState->SubjectSecurityContext.PrimaryToken;
  if ( !SecurityDescriptor )
  {
    v25 = AccessGranted;
    goto LABEL_21;
  }
  v20 = AccessGranted;
  v11 = 118;
  v63 = 118;
  v65 = 118;
  v21 = AccessGranted == 0;
  v22 = (AccessGranted != 0 ? 3 : 0) | 0x30;
  if ( AccessGranted )
    v22 = AccessGranted != 0 ? 3 : 0;
  if ( !dword_1403A5768 )
    goto LABEL_10;
  if ( (v22 & dword_1403A5768) != 0 )
  {
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    goto LABEL_61;
  }
  v23 = 0;
  if ( !dword_1403A58A8 )
  {
LABEL_10:
    AuxData = v67;
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    v24 = GenerateAudit[0];
    goto LABEL_11;
  }
  p_SubjectContext = &AccessState->SubjectSecurityContext;
  if ( AccessState == (PACCESS_STATE)-32LL )
  {
    p_SubjectContext = &SubjectContext;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    ClientToken = (unsigned __int8 *)SubjectContext.ClientToken;
    LODWORD(v10) = 0;
    v11 = v63;
    SecurityDescriptor = v76;
    v12 = ObjectTypeName;
  }
  if ( !ClientToken )
  {
    ClientToken = (unsigned __int8 *)p_SubjectContext->PrimaryToken;
    if ( !ClientToken )
    {
      SepAuditFailed(3221225596LL);
LABEL_57:
      v12 = ObjectTypeName;
      SecurityDescriptor = v76;
      v11 = v63;
      goto LABEL_58;
    }
  }
  if ( ClientToken[118] == 2 )
  {
    v33 = AdtpPerCategoryCount;
    v34 = 0;
    v35 = 0;
    v36 = 2LL;
    do
    {
      v37 = *(unsigned __int16 *)v33;
      v33 = (__int64 *)((char *)v33 + 2);
      LODWORD(v10) = v37 + v10;
      --v36;
    }
    while ( v36 );
    for ( i = v10 + 14; (unsigned int)v10 < i; LODWORD(v10) = v10 + 1 )
    {
      v39 = ClientToken[((unsigned __int64)(unsigned int)v10 >> 1) + 88] >> (4 * (v10 & 1));
      if ( (v39 & 1) != 0 )
      {
        if ( (v22 & 2) != 0 )
          goto LABEL_55;
        ++v34;
      }
      if ( (v39 & 4) != 0 )
      {
        if ( (v22 & 0x20) != 0 )
          goto LABEL_55;
        ++v35;
      }
    }
    if ( (v22 & 1) != 0 && v34 == 14 || (v22 & 0x10) != 0 && v35 == 14 )
LABEL_55:
      v23 = 1;
    v15 = AccessState;
    goto LABEL_57;
  }
LABEL_58:
  p_SubjectSecurityContext = &v15->SubjectSecurityContext;
  if ( v15 == (PACCESS_STATE)-32LL )
  {
    SeReleaseSubjectContext(p_SubjectContext);
    v11 = v63;
    SecurityDescriptor = v76;
    v12 = ObjectTypeName;
  }
  if ( !v23 )
  {
    AuxData = v67;
    v24 = GenerateAudit[0];
    goto LABEL_11;
  }
  v20 = AccessGranted;
LABEL_61:
  v65 = SepAdtClassifyObjectIntoSubCategory(Object, v12, v20, v21);
  v63 = v65;
  if ( (unsigned __int8)SepAdtAuditThisEventWithContext(v65, v20, v21, p_SubjectSecurityContext) )
  {
    v40 = v15->RemainingDesiredAccess | v15->PreviouslyGrantedAccess;
    v41 = *((_WORD *)v76 + 1);
    if ( (v41 & 0x10) != 0 )
    {
      if ( v41 >= 0 )
      {
        v42 = (ACL *)*((_QWORD *)v76 + 3);
      }
      else
      {
        v44 = v76[3];
        if ( (_DWORD)v44 )
          v42 = (ACL *)((char *)v76 + v44);
        else
          v42 = 0LL;
      }
      if ( v41 >= 0 )
      {
        v43 = (ACL *)*((_QWORD *)v76 + 3);
      }
      else
      {
        v45 = v76[3];
        if ( (_DWORD)v45 )
          v43 = (ACL *)((char *)v76 + v45);
        else
          v43 = 0LL;
      }
    }
    else
    {
      v42 = 0LL;
      v43 = 0LL;
    }
    SeExamineSacl(v43, v42, PrimaryToken, v40, v20, GenerateAudit, GenerateAlarm);
    v46 = *((_WORD *)v76 + 1);
    if ( (v46 & 0x10) != 0 )
    {
      if ( v46 >= 0 )
      {
        v47 = (ACL *)*((_QWORD *)v76 + 3);
      }
      else
      {
        v48 = v76[3];
        if ( (_DWORD)v48 )
          v47 = (ACL *)((char *)v76 + v48);
        else
          v47 = 0LL;
      }
    }
    else
    {
      v47 = 0LL;
    }
    SeExamineGlobalSacl(ObjectTypeName, v47, PrimaryToken, v40, v20, GenerateAudit, GenerateAlarm);
    v24 = GenerateAudit[0];
    if ( GenerateAudit[0] )
    {
      *GenerateOnClose = 1;
      if ( AccessGranted )
      {
        v49 = *((_WORD *)v76 + 1);
        if ( (v49 & 0x10) != 0 )
        {
          if ( v49 >= 0 )
          {
            v50 = *((_QWORD *)v76 + 3);
          }
          else
          {
            v51 = v76[3];
            if ( (_DWORD)v51 )
              v50 = (__int64)v76 + v51;
            else
              v50 = 0LL;
          }
        }
        else
        {
          v50 = 0LL;
        }
        AuxData = v67;
        SeMaximumAuditMask(v50, v40, (__int64)PrimaryToken, (_DWORD *)v67 + 7);
        SeMaximumAuditMaskFromGlobalSacl(ObjectTypeName, v40, PrimaryToken, (PACCESS_MASK)AuxData + 7);
        p_SubjectSecurityContext = &v15->SubjectSecurityContext;
        goto LABEL_93;
      }
    }
  }
  else
  {
    v24 = GenerateAudit[0];
  }
  AuxData = v67;
LABEL_93:
  v11 = v63;
  SecurityDescriptor = v76;
LABEL_11:
  v25 = AccessGranted;
  v10 = AccessGranted == 0;
  if ( (v15->OriginalDesiredAccess & 0x2000000) != 0 )
    v10 = 1LL;
  v26 = 0;
  if ( (v15->OriginalDesiredAccess & 0x2000000) == 0 )
    v26 = AccessGranted;
  v27 = 0;
  while ( *((int *)v15->AuxData + v27 + 22) >= 0 )
  {
    if ( ++v27 >= 0x20u )
    {
      v28 = 0;
      goto LABEL_19;
    }
  }
  v28 = SepAdtAuditThisEventWithContext(129LL, v26, v10, p_SubjectSecurityContext);
  v11 = v63;
  SecurityDescriptor = v76;
LABEL_19:
  AuxData[216] = v28;
  if ( v24 )
    goto LABEL_96;
  v13 = v68;
  v14 = v71;
LABEL_21:
  if ( v25 )
  {
    v29 = *(unsigned int **)AuxData;
    if ( *(_QWORD *)AuxData )
    {
      if ( *v29 )
      {
        v31 = SepAdtAuditPrivilegeUseWithContext(v29, v25, 0, p_SubjectSecurityContext, &v65);
        v11 = v65;
        SecurityDescriptor = v76;
        v63 = v65;
        if ( v31 )
        {
          v15->AuditPrivileges = 1;
          goto LABEL_96;
        }
      }
    }
  }
  if ( GenerateAlarm[0] )
  {
LABEL_96:
    v13 = v68;
    v30 = 1;
    v14 = v71;
    goto LABEL_26;
  }
  v30 = 0;
LABEL_26:
  v15->GenerateAudit = v30;
  if ( !v30 && !AuxData[216] )
    return;
  v52 = AbsoluteObjectName;
  if ( AbsoluteObjectName && AbsoluteObjectName->Length )
  {
LABEL_99:
    v53 = Object;
    goto LABEL_107;
  }
  v53 = Object;
  if ( Object )
  {
    v54 = SepQueryNameString(Object, &P, v10, SecurityDescriptor);
    v66 = v54;
    if ( v54 < 0 )
      goto LABEL_131;
    v52 = v69;
    v11 = v63;
    SecurityDescriptor = v76;
    if ( P )
    {
      if ( *((_WORD *)P + 1) != (_WORD)v69 )
        v52 = (const UNICODE_STRING *)P;
      v53 = Object;
      goto LABEL_107;
    }
    goto LABEL_99;
  }
  v52 = v69;
LABEL_107:
  if ( ObjectTypeName && ObjectTypeName->Length )
  {
    v14 = ObjectTypeName;
LABEL_114:
    if ( v25 )
    {
      if ( v52 )
      {
        Buffer = v15->ObjectName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          *(_DWORD *)&v15->ObjectName.Length = 0;
        }
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v52->MaximumLength, 0x20206553u);
        v15->ObjectName.Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          v15->ObjectName.MaximumLength = v52->MaximumLength;
          RtlCopyUnicodeString(&v15->ObjectName, v52);
        }
      }
      if ( v14 )
      {
        v59 = v15->ObjectTypeName.Buffer;
        if ( v59 )
        {
          ExFreePoolWithTag(v59, 0);
          *(_DWORD *)&v15->ObjectTypeName.Length = 0;
        }
        v60 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14->MaximumLength, 0x20206553u);
        v15->ObjectTypeName.Buffer = v60;
        if ( v60 )
        {
          v15->ObjectTypeName.MaximumLength = v14->MaximumLength;
          RtlCopyUnicodeString(&v15->ObjectTypeName, v14);
        }
      }
      if ( TransactionId )
        *((GUID *)AuxData + 2) = *TransactionId;
    }
    else
    {
      v55 = TransactionId;
      if ( !TransactionId )
        v55 = (GUID *)(AuxData + 32);
      SepAdtOpenObjectAuditAlarm(
        v11,
        (int)&SeSubsystemName,
        0,
        (int)v14,
        (__int64)v52,
        SecurityDescriptor,
        (__int64)p_SubjectSecurityContext->ClientToken,
        (__int64)v15->SubjectSecurityContext.PrimaryToken,
        v15->OriginalDesiredAccess,
        v15->PreviouslyGrantedAccess,
        *(_QWORD *)AuxData,
        0,
        (__int64)v15->SubjectSecurityContext.ProcessAuditId,
        2,
        0LL,
        0,
        0LL,
        (__int64)v55,
        (__int64)v15);
      LOBYTE(v61) = 0;
      SepAdtStagingEvent(
        v63,
        v56,
        0LL,
        v14,
        v52,
        p_SubjectSecurityContext->ClientToken,
        v15->SubjectSecurityContext.PrimaryToken,
        v15->OriginalDesiredAccess,
        v15->PreviouslyGrantedAccess,
        v61,
        0LL,
        v15);
    }
    v54 = v66;
    goto LABEL_131;
  }
  if ( !v53 )
    goto LABEL_114;
  v54 = SepQueryTypeString(v53, &v68, v10, SecurityDescriptor);
  v13 = v68;
  v66 = v54;
  if ( v54 >= 0 )
  {
    v11 = v63;
    SecurityDescriptor = v76;
    if ( v68 )
      v14 = (const UNICODE_STRING *)v68;
    goto LABEL_114;
  }
LABEL_131:
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    v54 = v66;
  }
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    v54 = v66;
  }
  if ( v54 < 0 )
    SepAuditFailed((unsigned int)v54);
}
