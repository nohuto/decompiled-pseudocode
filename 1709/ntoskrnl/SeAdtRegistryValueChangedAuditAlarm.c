/*
 * XREFs of SeAdtRegistryValueChangedAuditAlarm @ 0x140728B88
 * Callers:
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     SepAdtLogAuditRecord @ 0x1401338F0 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x14015C0D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14053A2B0 (SeAuditingWithTokenForSubcategory.c)
 *     SepQueryNameString @ 0x140564610 (SepQueryNameString.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14057D374 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x1406EFC08 (ObNormalizeHandleValue.c)
 *     SeExamineSacl @ 0x14072CC70 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140730C80 (SeExamineGlobalSacl.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 *     AdtpBuildRegistryValueString @ 0x140777414 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildReplacementString @ 0x140778790 (AdtpBuildReplacementString.c)
 */

void __fastcall SeAdtRegistryValueChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        char *a5,
        unsigned __int64 a6,
        unsigned int *a7,
        int a8)
{
  unsigned __int16 *v10; // rdi
  PACCESS_TOKEN ClientToken; // r15
  PACCESS_TOKEN PrimaryToken; // r13
  PACCESS_TOKEN v13; // rdx
  __int16 v14; // ax
  void *v15; // r8
  __int16 v16; // cx
  ACL *v17; // rdx
  __int64 v18; // rdx
  ACL *v19; // rcx
  __int64 v20; // rax
  __int16 v21; // ax
  void *v22; // r8
  ACL *v23; // rdx
  __int64 v24; // rax
  int AllocatedFullProcessImageName; // eax
  unsigned int v26; // ebx
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD **v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  int v38; // r10d
  int v39; // r9d
  int v40; // eax
  unsigned int v41; // r8d
  unsigned int v42; // r11d
  BOOLEAN GenerateAudit[8]; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v44; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v45; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v46; // [rsp+70h] [rbp-98h] BYREF
  PVOID v47; // [rsp+78h] [rbp-90h] BYREF
  __int64 v48; // [rsp+80h] [rbp-88h] BYREF
  char *v49; // [rsp+88h] [rbp-80h]
  UNICODE_STRING v50; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v51; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD Src[132]; // [rsp+E8h] [rbp-20h] BYREF
  char v55; // [rsp+508h] [rbp+400h] BYREF
  char v56; // [rsp+528h] [rbp+420h] BYREF
  char v57; // [rsp+548h] [rbp+440h] BYREF

  memset(Src, 0, 0x418uLL);
  v47 = 0LL;
  v10 = 0LL;
  GenerateAudit[1] = 0;
  GenerateAudit[2] = 0;
  v46 = 0LL;
  *(_QWORD *)&v50.Length = 0LL;
  v50.Buffer = 0LL;
  *(_QWORD *)&v51.Length = 0LL;
  v51.Buffer = 0LL;
  *(_QWORD *)&v44.Length = 0LL;
  v44.Buffer = 0LL;
  *(_QWORD *)&v45.Length = 0LL;
  v45.Buffer = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v13 = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v13 = SubjectContext.ClientToken;
  GenerateAudit[0] = SeAuditingWithTokenForSubcategory(117, (__int64)v13);
  if ( GenerateAudit[0] )
  {
    v14 = *(_WORD *)(a2 + 2);
    v15 = PrimaryToken;
    if ( ClientToken )
      v15 = ClientToken;
    v16 = *(_WORD *)(a2 + 2) & 0x10;
    if ( !v16 )
      goto LABEL_7;
    if ( v14 >= 0 )
    {
      v17 = *(ACL **)(a2 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v18 )
      {
LABEL_7:
        v17 = 0LL;
        goto LABEL_12;
      }
      v17 = (ACL *)(a2 + v18);
    }
LABEL_12:
    if ( !v16 )
    {
LABEL_13:
      v19 = 0LL;
      goto LABEL_18;
    }
    if ( v14 >= 0 )
    {
      v19 = *(ACL **)(a2 + 24);
    }
    else
    {
      v20 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v20 )
        goto LABEL_13;
      v19 = (ACL *)(a2 + v20);
    }
LABEL_18:
    SeExamineSacl(v19, v17, v15, 2u, 1u, GenerateAudit, &GenerateAudit[3]);
    RtlInitUnicodeString(&DestinationString, L"Key");
    v21 = *(_WORD *)(a2 + 2);
    v22 = PrimaryToken;
    if ( ClientToken )
      v22 = ClientToken;
    if ( (v21 & 0x10) == 0 )
      goto LABEL_21;
    if ( v21 >= 0 )
    {
      v23 = *(ACL **)(a2 + 24);
    }
    else
    {
      v24 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v24 )
      {
LABEL_21:
        v23 = 0LL;
        goto LABEL_26;
      }
      v23 = (ACL *)(a2 + v24);
    }
LABEL_26:
    SeExamineGlobalSacl(&DestinationString, v23, v22, 2u, 1u, GenerateAudit, &GenerateAudit[3]);
    if ( !GenerateAudit[0] )
      goto LABEL_52;
    if ( a5 )
    {
      AllocatedFullProcessImageName = SepQueryNameString(a5, &v47);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
      if ( v47 )
        v10 = (unsigned __int16 *)v47;
    }
    v26 = 4096;
    if ( a8 )
    {
      v27 = a7[1];
      v28 = 4096LL;
      if ( v27 < 0x1000 )
        v28 = v27;
      AllocatedFullProcessImageName = AdtpBuildRegistryValueString(
                                        *a7,
                                        v28,
                                        *((_QWORD *)a7 + 1),
                                        &v50,
                                        &GenerateAudit[1]);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
      v29 = *a7 + 1872;
      *(_DWORD *)&v44.Length = 1703936;
      v44.Buffer = (wchar_t *)&v55;
      AllocatedFullProcessImageName = AdtpBuildReplacementString(v29, &v44);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
    }
    else
    {
      RtlInitUnicodeString(&v50, L"-");
      RtlInitUnicodeString(&v44, L"-");
    }
    if ( a8 == 2 )
    {
      RtlInitUnicodeString(&v51, L"-");
      RtlInitUnicodeString(&v45, L"-");
    }
    else
    {
      if ( a7[5] < 0x1000 )
        v26 = a7[5];
      AllocatedFullProcessImageName = AdtpBuildRegistryValueString(
                                        a7[4],
                                        v26,
                                        *((_QWORD *)a7 + 3),
                                        &v51,
                                        &GenerateAudit[2]);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
      v30 = a7[4] + 1872;
      *(_DWORD *)&v45.Length = 1703936;
      v45.Buffer = (wchar_t *)&v56;
      AllocatedFullProcessImageName = AdtpBuildReplacementString(v30, &v45);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
    }
    LODWORD(v48) = 1703936;
    v49 = &v57;
    AllocatedFullProcessImageName = AdtpBuildReplacementString((unsigned int)(a8 + 1904), &v48);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
      AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&v46);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        LODWORD(Src[0]) = 3;
        v33 = PrimaryToken;
        LODWORD(Src[2]) = 524405;
        if ( ClientToken )
          v33 = ClientToken;
        HIDWORD(Src[0]) = 4657;
        LODWORD(Src[3]) = 4;
        Src[7] = 0x2000000001LL;
        v34 = v33[19];
        Src[11] = 0x800000005LL;
        HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(*(_QWORD *)v34 + 1LL) + 8;
        v35 = (_QWORD **)PrimaryToken;
        if ( ClientToken )
        {
          v35 = (_QWORD **)ClientToken;
          PrimaryToken = ClientToken;
        }
        v36 = *v35[19];
        Src[10] = &SeSubsystemName;
        Src[12] = *((_QWORD *)PrimaryToken + 3);
        Src[6] = v36;
        if ( v10 )
        {
          v37 = *v10;
          LODWORD(Src[15]) = 1;
          HIDWORD(Src[15]) = v37 + 16;
          Src[18] = v10;
        }
        HIDWORD(Src[19]) = *a4 + 16;
        LODWORD(Src[19]) = 1;
        Src[22] = a4;
        Src[23] = 0x80000000BLL;
        Src[24] = ObNormalizeHandleValue(a6);
        Src[54] = v46;
        HIDWORD(Src[27]) = v38 + (unsigned __int16)v48;
        Src[30] = &v48;
        LODWORD(Src[27]) = v39;
        HIDWORD(Src[31]) = v38 + v44.Length;
        Src[34] = &v44;
        LODWORD(Src[31]) = v39;
        HIDWORD(Src[35]) = v38 + v50.Length;
        Src[38] = &v50;
        LODWORD(Src[35]) = v39;
        HIDWORD(Src[39]) = v38 + v45.Length;
        Src[42] = &v45;
        LODWORD(Src[39]) = v39;
        HIDWORD(Src[43]) = v38 + v51.Length;
        Src[46] = &v51;
        v40 = v38 + *(unsigned __int16 *)v46;
        LODWORD(Src[43]) = v39;
        HIDWORD(Src[51]) = v40;
        Src[47] = __PAIR64__(v42, v41);
        Src[48] = Flink;
        LODWORD(Src[51]) = 2;
        LODWORD(Src[1]) = 13;
        SepAdtLogAuditRecord(Src);
        goto LABEL_44;
      }
    }
LABEL_43:
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_44:
    if ( GenerateAudit[1] )
      ExFreePoolWithTag(v50.Buffer, 0);
    if ( GenerateAudit[2] )
      ExFreePoolWithTag(v51.Buffer, 0);
    if ( v46 )
      ExFreePoolWithTag(v46, 0);
    if ( v47 )
      ExFreePoolWithTag(v47, 0);
  }
LABEL_52:
  SeReleaseSubjectContext(&SubjectContext);
}
