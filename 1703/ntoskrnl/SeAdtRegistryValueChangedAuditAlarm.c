/*
 * XREFs of SeAdtRegistryValueChangedAuditAlarm @ 0x1406F1108
 * Callers:
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     SepAdtLogAuditRecord @ 0x140156510 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x140167950 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepQueryNameString @ 0x1404626BC (SepQueryNameString.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14056432C (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x1406C11C4 (ObNormalizeHandleValue.c)
 *     SeExamineSacl @ 0x1406F5210 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1406F9224 (SeExamineGlobalSacl.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 *     AdtpBuildRegistryValueString @ 0x1407332A0 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildReplacementString @ 0x140734628 (AdtpBuildReplacementString.c)
 */

void __fastcall SeAdtRegistryValueChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int *a7,
        int a8)
{
  unsigned __int16 *v10; // rdi
  PACCESS_TOKEN ClientToken; // r15
  PACCESS_TOKEN PrimaryToken; // r13
  PACCESS_TOKEN v13; // rdx
  __int16 v14; // cx
  unsigned int v15; // eax
  void *v16; // r8
  int v17; // eax
  ACL *v18; // rdx
  __int64 v19; // rdx
  ACL *v20; // rcx
  __int64 v21; // rax
  ACL *v22; // rdx
  void *v23; // r8
  __int64 v24; // rax
  int AllocatedFullProcessImageName; // eax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rax
  _QWORD **v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // r9d
  int v38; // eax
  unsigned int v39; // r8d
  unsigned int v40; // r10d
  BOOLEAN GenerateAudit[8]; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v42; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v43; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v44; // [rsp+70h] [rbp-98h] BYREF
  PVOID v45; // [rsp+78h] [rbp-90h] BYREF
  __int64 v46; // [rsp+80h] [rbp-88h] BYREF
  char *v47; // [rsp+88h] [rbp-80h]
  UNICODE_STRING v48; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v49; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD Src[132]; // [rsp+E8h] [rbp-20h] BYREF
  char v53; // [rsp+508h] [rbp+400h] BYREF
  char v54; // [rsp+528h] [rbp+420h] BYREF
  char v55; // [rsp+548h] [rbp+440h] BYREF

  memset(Src, 0, 0x418uLL);
  v45 = 0LL;
  v10 = 0LL;
  GenerateAudit[1] = 0;
  GenerateAudit[2] = 0;
  v44 = 0LL;
  *(_QWORD *)&v48.Length = 0LL;
  v48.Buffer = 0LL;
  *(_QWORD *)&v49.Length = 0LL;
  v49.Buffer = 0LL;
  *(_QWORD *)&v42.Length = 0LL;
  v42.Buffer = 0LL;
  *(_QWORD *)&v43.Length = 0LL;
  v43.Buffer = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v13 = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v13 = SubjectContext.ClientToken;
  GenerateAudit[0] = SeAuditingWithTokenForSubcategory(117, (__int64)v13);
  if ( !GenerateAudit[0] )
    goto LABEL_51;
  v14 = *(_WORD *)(a2 + 2);
  v15 = (unsigned __int16)v14;
  v16 = PrimaryToken;
  if ( ClientToken )
    v16 = ClientToken;
  LOWORD(v15) = ~v14;
  v17 = (v15 >> 4) & 1;
  if ( v17 )
    goto LABEL_7;
  if ( v14 >= 0 )
  {
    v18 = *(ACL **)(a2 + 24);
  }
  else
  {
    v19 = *(unsigned int *)(a2 + 12);
    if ( !(_DWORD)v19 )
    {
LABEL_7:
      v18 = 0LL;
      goto LABEL_12;
    }
    v18 = (ACL *)(a2 + v19);
  }
LABEL_12:
  if ( v17 )
  {
LABEL_13:
    v20 = 0LL;
    goto LABEL_18;
  }
  if ( v14 >= 0 )
  {
    v20 = *(ACL **)(a2 + 24);
  }
  else
  {
    v21 = *(unsigned int *)(a2 + 12);
    if ( !(_DWORD)v21 )
      goto LABEL_13;
    v20 = (ACL *)(a2 + v21);
  }
LABEL_18:
  SeExamineSacl(v20, v18, v16, 2u, 1u, GenerateAudit, &GenerateAudit[3]);
  RtlInitUnicodeString(&DestinationString, L"Key");
  v22 = 0LL;
  v23 = PrimaryToken;
  if ( ClientToken )
    v23 = ClientToken;
  if ( (~(unsigned __int8)*(_WORD *)(a2 + 2) & 0x10) == 0 )
  {
    if ( *(__int16 *)(a2 + 2) >= 0 )
    {
      v22 = *(ACL **)(a2 + 24);
    }
    else
    {
      v24 = *(unsigned int *)(a2 + 12);
      if ( (_DWORD)v24 )
        v22 = (ACL *)(a2 + v24);
    }
  }
  SeExamineGlobalSacl(&DestinationString, v22, v23, 2u, 1u, GenerateAudit, &GenerateAudit[3]);
  if ( GenerateAudit[0] )
  {
    if ( a5 )
    {
      AllocatedFullProcessImageName = SepQueryNameString(a5, &v45);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_42;
      if ( v45 )
        v10 = (unsigned __int16 *)v45;
    }
    v26 = 4096;
    if ( a8 )
    {
      v27 = 4096LL;
      if ( a7[1] < 0x1000 )
        v27 = a7[1];
      AllocatedFullProcessImageName = AdtpBuildRegistryValueString(
                                        *a7,
                                        v27,
                                        *((_QWORD *)a7 + 1),
                                        &v48,
                                        &GenerateAudit[1]);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_42;
      v28 = *a7 + 1872;
      *(_DWORD *)&v42.Length = 1703936;
      v42.Buffer = (wchar_t *)&v53;
      AllocatedFullProcessImageName = AdtpBuildReplacementString(v28, &v42);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_42;
    }
    else
    {
      RtlInitUnicodeString(&v48, L"-");
      RtlInitUnicodeString(&v42, L"-");
    }
    if ( a8 == 2 )
    {
      RtlInitUnicodeString(&v49, L"-");
      RtlInitUnicodeString(&v43, L"-");
    }
    else
    {
      if ( a7[5] < 0x1000 )
        v26 = a7[5];
      AllocatedFullProcessImageName = AdtpBuildRegistryValueString(
                                        a7[4],
                                        v26,
                                        *((_QWORD *)a7 + 3),
                                        &v49,
                                        &GenerateAudit[2]);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_42;
      v29 = a7[4] + 1872;
      *(_DWORD *)&v43.Length = 1703936;
      v43.Buffer = (wchar_t *)&v54;
      AllocatedFullProcessImageName = AdtpBuildReplacementString(v29, &v43);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_42;
    }
    LODWORD(v46) = 1703936;
    v47 = &v55;
    AllocatedFullProcessImageName = AdtpBuildReplacementString((unsigned int)(a8 + 1904), &v46);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
      AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&v44);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        LODWORD(Src[0]) = 3;
        v32 = PrimaryToken;
        LODWORD(Src[2]) = 524405;
        if ( ClientToken )
          v32 = ClientToken;
        HIDWORD(Src[0]) = 4657;
        LODWORD(Src[3]) = 4;
        Src[7] = 0x2000000001LL;
        v33 = v32[19];
        Src[11] = 0x800000005LL;
        HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(*(_QWORD *)v33 + 1LL) + 8;
        v34 = (_QWORD **)PrimaryToken;
        if ( ClientToken )
        {
          v34 = (_QWORD **)ClientToken;
          PrimaryToken = ClientToken;
        }
        v35 = *v34[19];
        Src[10] = &SeSubsystemName;
        Src[12] = *((_QWORD *)PrimaryToken + 3);
        Src[6] = v35;
        if ( v10 )
        {
          v36 = *v10;
          LODWORD(Src[15]) = 1;
          HIDWORD(Src[15]) = v36 + 16;
          Src[18] = v10;
        }
        HIDWORD(Src[19]) = *a4 + 16;
        LODWORD(Src[19]) = 1;
        Src[22] = a4;
        Src[23] = 0x80000000BLL;
        Src[24] = ObNormalizeHandleValue(a6);
        Src[54] = v44;
        HIDWORD(Src[27]) = (unsigned __int16)v46 + 16;
        Src[30] = &v46;
        LODWORD(Src[27]) = v37;
        HIDWORD(Src[31]) = v42.Length + 16;
        Src[34] = &v42;
        LODWORD(Src[31]) = v37;
        HIDWORD(Src[35]) = v48.Length + 16;
        Src[38] = &v48;
        LODWORD(Src[35]) = v37;
        HIDWORD(Src[39]) = v43.Length + 16;
        Src[42] = &v43;
        LODWORD(Src[39]) = v37;
        HIDWORD(Src[43]) = v49.Length + 16;
        Src[46] = &v49;
        v38 = *(unsigned __int16 *)v44 + 16;
        LODWORD(Src[43]) = v37;
        HIDWORD(Src[51]) = v38;
        Src[47] = __PAIR64__(v40, v39);
        Src[48] = Flink;
        LODWORD(Src[51]) = 2;
        LODWORD(Src[1]) = 13;
        SepAdtLogAuditRecord(Src);
        goto LABEL_43;
      }
    }
LABEL_42:
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_43:
    if ( GenerateAudit[1] )
      ExFreePoolWithTag(v48.Buffer, 0);
    if ( GenerateAudit[2] )
      ExFreePoolWithTag(v49.Buffer, 0);
    if ( v44 )
      ExFreePoolWithTag(v44, 0);
    if ( v45 )
      ExFreePoolWithTag(v45, 0);
  }
LABEL_51:
  SeReleaseSubjectContext(&SubjectContext);
}
