/*
 * XREFs of SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0
 * Callers:
 *     SeOpenObjectAuditAlarm @ 0x1404F6170 (SeOpenObjectAuditAlarm.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x14056C688 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SeMaximumAuditMask @ 0x14024687C (SeMaximumAuditMask.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepQueryNameString @ 0x1404626BC (SepQueryNameString.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046C750 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406F3EE0 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x1406F43D8 (SepQueryTypeString.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1406F462C (SepAdtClassifyObjectIntoSubCategory.c)
 *     SeExamineSacl @ 0x1406F5210 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1406F9224 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1406F9340 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
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
  PVOID v13; // rbx
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
  __int64 v31; // r9
  __int16 v32; // r11
  __int16 v33; // r15
  unsigned __int16 *v34; // rcx
  int v35; // eax
  unsigned int i; // r10d
  unsigned __int64 v37; // rax
  char v38; // cl
  ACCESS_MASK v39; // esi
  __int16 v40; // r8
  unsigned int v41; // eax
  int v42; // eax
  ACL *v43; // rdx
  __int64 v44; // rcx
  ACL *v45; // rcx
  __int64 v46; // rax
  __int16 v47; // cx
  ACL *v48; // rdx
  __int64 v49; // rax
  __int16 v50; // cx
  __int64 v51; // rcx
  __int64 v52; // rax
  const UNICODE_STRING *v53; // rdi
  PVOID v54; // rcx
  int v55; // eax
  GUID *v56; // rax
  __int64 v57; // rdx
  wchar_t *Buffer; // rcx
  wchar_t *PoolWithTag; // rax
  wchar_t *v60; // rcx
  wchar_t *v61; // rax
  int v62; // [rsp+50h] [rbp-D8h]
  BOOLEAN GenerateAudit[4]; // [rsp+A8h] [rbp-80h] BYREF
  unsigned int v64; // [rsp+ACh] [rbp-7Ch]
  BOOLEAN GenerateAlarm[4]; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int16 v66; // [rsp+B4h] [rbp-74h] BYREF
  int v67; // [rsp+B8h] [rbp-70h]
  PVOID v68; // [rsp+C0h] [rbp-68h] BYREF
  const UNICODE_STRING *v69; // [rsp+C8h] [rbp-60h]
  PVOID P; // [rsp+D0h] [rbp-58h] BYREF
  char *v71; // [rsp+D8h] [rbp-50h]
  const UNICODE_STRING *v72; // [rsp+E0h] [rbp-48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-40h] BYREF
  UNICODE_STRING *ObjectType; // [rsp+158h] [rbp+30h]
  unsigned int *v77; // [rsp+170h] [rbp+48h]

  v77 = (unsigned int *)SecurityDescriptor;
  ObjectType = ObjectTypeName;
  v10 = 999;
  GenerateAudit[0] = 0;
  v11 = Object;
  GenerateAlarm[0] = 0;
  v12 = 0;
  v64 = 999;
  v13 = 0LL;
  P = 0LL;
  v14 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v72 = 0LL;
  v67 = 0;
  v66 = 999;
  if ( !AccessMode )
    return;
  ClientToken = AccessState->SubjectSecurityContext.ClientToken;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  AuxData = (char *)AccessState->AuxData;
  v71 = AuxData;
  if ( !ClientToken )
    ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
  v18 = AccessGranted;
  if ( !SecurityDescriptor )
    goto LABEL_24;
  v10 = 118;
  v64 = 118;
  if ( !AccessGranted )
    LOBYTE(v14) = 1;
  v66 = 118;
  v19 = AccessGranted != 0 ? 3 : 0;
  if ( (_BYTE)v14 )
    v19 |= 0x30u;
  if ( !dword_1403486A8 )
    goto LABEL_12;
  if ( (dword_1403486A8 & v19) != 0 )
  {
LABEL_62:
    v64 = SepAdtClassifyObjectIntoSubCategory(v11, ObjectTypeName, v18, (unsigned __int8)v14);
    v66 = v64;
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(
                            (unsigned __int16)v64,
                            v18,
                            (unsigned __int8)v14,
                            p_SubjectSecurityContext) )
    {
      v39 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
      v40 = *((_WORD *)v77 + 1);
      v41 = (unsigned __int16)v40;
      LOWORD(v41) = ~v40;
      v42 = (v41 >> 4) & 1;
      if ( v42 )
      {
        v43 = 0LL;
      }
      else if ( v40 >= 0 )
      {
        v43 = (ACL *)*((_QWORD *)v77 + 3);
      }
      else
      {
        v44 = v77[3];
        if ( (_DWORD)v44 )
          v43 = (ACL *)((char *)v77 + v44);
        else
          v43 = 0LL;
      }
      if ( v42 )
      {
        v45 = 0LL;
      }
      else if ( v40 >= 0 )
      {
        v45 = (ACL *)*((_QWORD *)v77 + 3);
      }
      else
      {
        v46 = v77[3];
        if ( (_DWORD)v46 )
          v45 = (ACL *)((char *)v77 + v46);
        else
          v45 = 0LL;
      }
      SeExamineSacl(v45, v43, ClientToken, v39, v18, GenerateAudit, GenerateAlarm);
      v47 = *((_WORD *)v77 + 1);
      if ( (~(_BYTE)v47 & 0x10) != 0 )
      {
        v48 = 0LL;
      }
      else if ( v47 >= 0 )
      {
        v48 = (ACL *)*((_QWORD *)v77 + 3);
      }
      else
      {
        v49 = v77[3];
        if ( (_DWORD)v49 )
          v48 = (ACL *)((char *)v77 + v49);
        else
          v48 = 0LL;
      }
      SeExamineGlobalSacl(ObjectType, v48, ClientToken, v39, v18, GenerateAudit, GenerateAlarm);
      v21 = GenerateAudit[0];
      if ( GenerateAudit[0] )
      {
        *GenerateOnClose = 1;
        if ( v18 )
        {
          v50 = *((_WORD *)v77 + 1);
          if ( (~(_BYTE)v50 & 0x10) != 0 )
          {
            v51 = 0LL;
          }
          else if ( v50 >= 0 )
          {
            v51 = *((_QWORD *)v77 + 3);
          }
          else
          {
            v52 = v77[3];
            if ( (_DWORD)v52 )
              v51 = (__int64)v77 + v52;
            else
              v51 = 0LL;
          }
          SeMaximumAuditMask(v51, v39, (__int64)ClientToken, (_DWORD *)AuxData + 7);
          SeMaximumAuditMaskFromGlobalSacl(ObjectType, v39, ClientToken, (PACCESS_MASK)AuxData + 7);
        }
      }
    }
    else
    {
      v21 = GenerateAudit[0];
    }
    v10 = v64;
    SecurityDescriptor = v77;
    goto LABEL_13;
  }
  v20 = 0;
  if ( !dword_1403487E8 )
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
    v10 = v64;
    v12 = 0;
    SecurityDescriptor = v77;
    ObjectTypeName = ObjectType;
    v11 = Object;
  }
  PrimaryToken = p_SubjectSecurityContext->ClientToken;
  if ( p_SubjectSecurityContext->ClientToken || (PrimaryToken = p_SubjectSecurityContext->PrimaryToken) != 0LL )
  {
    if ( PrimaryToken[118] != 2 )
      goto LABEL_59;
    v31 = 2LL;
    v32 = 0;
    v33 = 0;
    v34 = AdtpPerCategoryCount;
    do
    {
      v35 = *v34++;
      v12 += v35;
      --v31;
    }
    while ( v31 );
    for ( i = v12 + 14; v12 < i; ++v12 )
    {
      v37 = (unsigned __int64)v12 >> 1;
      v38 = 4 * (v12 & 1);
      if ( (((unsigned __int8)PrimaryToken[v37 + 88] >> v38) & 1) != 0 )
      {
        if ( (v19 & 2) != 0 )
          goto LABEL_56;
        ++v32;
      }
      if ( (((unsigned __int8)PrimaryToken[v37 + 88] >> v38) & 4) != 0 )
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
  SecurityDescriptor = v77;
  v10 = v64;
LABEL_59:
  v22 = &AccessState->SubjectSecurityContext;
  if ( AccessState == (PACCESS_STATE)-32LL )
  {
    SeReleaseSubjectContext(p_SubjectSecurityContext);
    v10 = v64;
    SecurityDescriptor = v77;
    ObjectTypeName = ObjectType;
    v11 = Object;
  }
  if ( v20 )
  {
    AuxData = v71;
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
  v10 = v64;
  SecurityDescriptor = v77;
LABEL_22:
  AuxData = v71;
  v71[216] = v26;
  if ( v21 )
    goto LABEL_98;
  v13 = v68;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  v14 = 0LL;
LABEL_24:
  if ( v18 )
  {
    v27 = *(unsigned int **)AuxData;
    if ( *(_QWORD *)AuxData )
    {
      if ( *v27 )
      {
        v29 = SepAdtAuditPrivilegeUseWithContext(v27, v18, 0, p_SubjectSecurityContext, &v66);
        v10 = v66;
        SecurityDescriptor = v77;
        v64 = v66;
        if ( v29 )
        {
          AccessState->AuditPrivileges = 1;
          goto LABEL_98;
        }
      }
    }
  }
  if ( GenerateAlarm[0] )
  {
LABEL_98:
    v13 = v68;
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    v14 = v72;
    v28 = 1;
    goto LABEL_29;
  }
  v28 = 0;
LABEL_29:
  AccessState->GenerateAudit = v28;
  if ( !v28 && !AuxData[216] )
    return;
  v53 = AbsoluteObjectName;
  if ( AbsoluteObjectName && AbsoluteObjectName->Length )
  {
LABEL_101:
    v54 = Object;
    goto LABEL_109;
  }
  v54 = Object;
  if ( Object )
  {
    v55 = SepQueryNameString((__int64)Object, &P);
    v67 = v55;
    if ( v55 < 0 )
      goto LABEL_133;
    v53 = v69;
    v10 = v64;
    SecurityDescriptor = v77;
    if ( P )
    {
      if ( *((_WORD *)P + 1) != (_WORD)v69 )
        v53 = (const UNICODE_STRING *)P;
      v54 = Object;
      goto LABEL_109;
    }
    goto LABEL_101;
  }
  v53 = v69;
LABEL_109:
  if ( ObjectType && ObjectType->Length )
  {
    v14 = ObjectType;
LABEL_116:
    if ( v18 )
    {
      if ( v53 )
      {
        Buffer = AccessState->ObjectName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          *(_DWORD *)&AccessState->ObjectName.Length = 0;
        }
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v53->MaximumLength, 0x20206553u);
        AccessState->ObjectName.Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          AccessState->ObjectName.MaximumLength = v53->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectName, v53);
        }
      }
      if ( v14 )
      {
        v60 = AccessState->ObjectTypeName.Buffer;
        if ( v60 )
        {
          ExFreePoolWithTag(v60, 0);
          *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
        }
        v61 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14->MaximumLength, 0x20206553u);
        AccessState->ObjectTypeName.Buffer = v61;
        if ( v61 )
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
      v56 = TransactionId;
      if ( !TransactionId )
        v56 = (GUID *)(AuxData + 32);
      SepAdtOpenObjectAuditAlarm(
        v10,
        (int)&SeSubsystemName,
        0,
        (int)v14,
        (__int64)v53,
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
        (__int64)v56,
        (__int64)AccessState);
      LOBYTE(v62) = 0;
      SepAdtStagingEvent(
        v64,
        v57,
        0LL,
        v14,
        v53,
        p_SubjectSecurityContext->ClientToken,
        AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        v62,
        0LL,
        AccessState);
    }
    v55 = v67;
    goto LABEL_133;
  }
  if ( !v54 )
    goto LABEL_116;
  v55 = SepQueryTypeString(v54, &v68);
  v13 = v68;
  v67 = v55;
  if ( v55 >= 0 )
  {
    v10 = v64;
    SecurityDescriptor = v77;
    if ( v68 )
      v14 = (const UNICODE_STRING *)v68;
    goto LABEL_116;
  }
LABEL_133:
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    v55 = v67;
  }
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    v55 = v67;
  }
  if ( v55 < 0 )
    SepAuditFailed((unsigned int)v55);
}
