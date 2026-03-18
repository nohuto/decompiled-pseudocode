/*
 * XREFs of SepAdtOpenObjectAuditAlarm @ 0x14078EFAC
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14053E640 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAuditHandleCreation @ 0x140577208 (SeAuditHandleCreation.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     NtOpenObjectAuditAlarm @ 0x1405DFF70 (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140653BD0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140791310 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1400BAFE0 (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x14017FF54 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1402A0694 (SepCheckAndCopySelfRelativeSD.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x1404D5AA0 (SepAdtAuditThisEventWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14050E924 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x140759094 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x140795050 (SepAuditFailed.c)
 *     SepSDContainsAttributeACE @ 0x1407958D4 (SepSDContainsAttributeACE.c)
 *     SepSecurityDescriptorStrictLength @ 0x14079592C (SepSecurityDescriptorStrictLength.c)
 */

bool __fastcall SepAdtOpenObjectAuditAlarm(
        unsigned __int16 a1,
        const int *a2,
        unsigned __int64 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int16 *a6,
        _QWORD *a7,
        _QWORD *a8,
        unsigned int a9,
        unsigned int a10,
        int *a11,
        unsigned __int8 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        unsigned int a16,
        _DWORD *a17,
        _QWORD *a18,
        __int64 a19)
{
  __int16 *v19; // r12
  __int64 v20; // rbx
  PVOID v22; // rdi
  _QWORD *v24; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // esi
  __int64 *v27; // rax
  __int64 v28; // rdi
  unsigned __int8 v29; // r8
  int v30; // eax
  const int *v31; // rcx
  __int64 v32; // r10
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  PVOID v39; // r15
  int v40; // ecx
  size_t v41; // r13
  char *PoolWithTag; // rax
  char *v43; // rdi
  unsigned int v44; // eax
  __int64 v45; // rax
  int v46; // ebx
  __int64 v47; // rax
  int v48; // eax
  unsigned int v49; // edx
  unsigned int v50; // ecx
  __int64 v51; // rax
  unsigned __int16 v52; // r13
  _WORD *v53; // r8
  char *v54; // rax
  _OWORD *v55; // r9
  __int64 v56; // rdx
  unsigned int v57; // r8d
  _DWORD *v58; // r10
  char *v59; // r12
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rax
  unsigned __int16 *v63; // rdx
  int v64; // ecx
  unsigned int v65; // ebx
  int v66; // ecx
  int v67; // eax
  __int16 *v68; // rcx
  int v69; // eax
  __int16 v70; // [rsp+28h] [rbp-E0h] BYREF
  char v71; // [rsp+2Ah] [rbp-DEh] BYREF
  unsigned __int16 v72; // [rsp+2Ch] [rbp-DCh]
  size_t Size; // [rsp+30h] [rbp-D8h] BYREF
  PVOID Src; // [rsp+38h] [rbp-D0h] BYREF
  size_t v75; // [rsp+40h] [rbp-C8h] BYREF
  PVOID v76; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v77; // [rsp+50h] [rbp-B8h]
  __int16 *v78; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v79; // [rsp+60h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v81; // [rsp+70h] [rbp-98h]
  const int *v82; // [rsp+78h] [rbp-90h]
  __int64 v83; // [rsp+80h] [rbp-88h]
  unsigned __int64 *v84; // [rsp+88h] [rbp-80h]
  _QWORD *v85; // [rsp+90h] [rbp-78h]
  __int16 *v86; // [rsp+98h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT v87; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v88[132]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v89[2]; // [rsp+4E8h] [rbp+3E0h] BYREF

  v19 = a6;
  v20 = 0LL;
  v84 = a3;
  v82 = a2;
  v72 = a1;
  v86 = a6;
  v78 = a6;
  v77 = a8;
  v81 = a19;
  v79 = 0LL;
  P = 0LL;
  memset(&v87, 0, sizeof(v87));
  LODWORD(Size) = 0;
  v89[0] = 0LL;
  v89[1] = 0LL;
  v22 = 0LL;
  LODWORD(v75) = 0;
  Src = 0LL;
  v76 = 0LL;
  v71 = 0;
  v70 = 0;
  v87.ClientToken = a7;
  v87.PrimaryToken = a8;
  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(123LL, a12, a12 == 0, &v87) )
    return 1;
  v24 = v89;
  if ( a18 )
    v24 = a18;
  v85 = v24;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( a7 )
    {
      v20 = a7[3];
      v27 = (__int64 *)a7[19];
    }
    else
    {
      v27 = (__int64 *)v77[19];
    }
    v28 = v77[3];
    v83 = *v27;
    memset(v88, 0, 0x418uLL);
    v29 = a12;
    v30 = 8;
    HIDWORD(v88[0]) = 4656;
    LOWORD(v88[2]) = v72;
    WORD1(v88[2]) = 8;
    if ( a14 == 2 )
      v30 = 3;
    LODWORD(v88[0]) = v30;
    if ( !a12 )
      WORD1(v88[2]) = 16;
    v31 = &SeSubsystemName;
    v32 = 4LL;
    v88[6] = v83;
    if ( v82 )
      v31 = v82;
    LODWORD(v88[3]) = 4;
    LODWORD(v88[7]) = 1;
    v33 = *(unsigned __int8 *)(v83 + 1);
    v88[10] = v31;
    v88[11] = 0x800000005LL;
    v88[12] = v20;
    HIDWORD(v88[3]) = 4 * v33 + 8;
    v34 = *(unsigned __int16 *)v31 + 16;
    HIDWORD(v88[7]) = v34;
    if ( !a7 )
      v88[12] = v28;
    LODWORD(v88[15]) = 1;
    HIDWORD(v88[15]) = v34;
    v88[18] = v31;
    LODWORD(v88[1]) = 4;
    if ( !a4 )
    {
      AllocatedFullProcessImageName = -1073741811;
LABEL_19:
      v22 = Src;
      goto LABEL_41;
    }
    HIDWORD(v88[19]) = *a4 + 16;
    LODWORD(v88[19]) = 1;
    v88[22] = a4;
    if ( a5 )
    {
      if ( v72 == 116 || (LODWORD(v88[23]) = 1, v72 == 128) )
        LODWORD(v88[23]) = 2;
      v35 = *a5;
      v88[26] = a5;
      HIDWORD(v88[23]) = v35 + 16;
    }
    v88[27] = 0x80000000BLL;
    if ( v84 )
      v88[28] = ObNormalizeHandleValue(*v84);
    else
      v88[28] = 0LL;
    v88[34] = v85;
    v36 = a10;
    v88[31] = 0x100000000DLL;
    LODWORD(v88[35]) = 7;
    HIDWORD(v88[35]) = v32;
    v88[37] = v32;
    if ( !v29 )
      v36 = a9;
    v37 = v81;
    v88[36] = v36;
    LODWORD(v88[1]) = 9;
    if ( v81 && (v38 = *(_QWORD *)(v81 + 72)) != 0 )
    {
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                        *(__int16 **)(v38 + 56),
                                        &Src,
                                        (ULONG *)&Size,
                                        (_BYTE *)&v70 + 1);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_19;
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                        *(__int16 **)(*(_QWORD *)(v37 + 72) + 64LL),
                                        &v76,
                                        (ULONG *)&v75,
                                        &v71);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_19;
      v39 = Src;
      if ( Src || v76 )
      {
        v40 = 8;
        goto LABEL_39;
      }
    }
    else
    {
      v39 = Src;
    }
    v40 = 0;
LABEL_39:
    v41 = (unsigned int)(v75 - v40 + Size + 152);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v41, 0x70416553u);
    v43 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v22 = Src;
      AllocatedFullProcessImageName = -1073741670;
      goto LABEL_41;
    }
    memset(PoolWithTag, 0, v41);
    v44 = a10;
    *((_DWORD *)v43 + 34) = a12;
    if ( !a12 )
      v44 = a9;
    *((_DWORD *)v43 + 33) = 4;
    *(_DWORD *)v43 = v44 & 0xFDFFFFFF;
    if ( v81 )
    {
      v45 = *(_QWORD *)(v81 + 72);
      if ( v45 )
      {
        *(_OWORD *)(v43 + 4) = *(_OWORD *)(v45 + 88);
        *(_OWORD *)(v43 + 20) = *(_OWORD *)(v45 + 104);
        *(_OWORD *)(v43 + 36) = *(_OWORD *)(v45 + 120);
        *(_OWORD *)(v43 + 52) = *(_OWORD *)(v45 + 136);
        *(_OWORD *)(v43 + 68) = *(_OWORD *)(v45 + 152);
        *(_OWORD *)(v43 + 84) = *(_OWORD *)(v45 + 168);
        *(_OWORD *)(v43 + 100) = *(_OWORD *)(v45 + 184);
        *(_OWORD *)(v43 + 116) = *(_OWORD *)(v45 + 200);
      }
    }
    v46 = Size;
    if ( v39 )
      memmove(v43 + 144, v39, (unsigned int)Size);
    if ( v76 )
      memmove(&v43[v46 + 144], v76, (unsigned int)v75);
    v47 = a10;
    LODWORD(v88[39]) = 29;
    HIDWORD(v88[39]) = v41;
    v88[42] = v43;
    v88[43] = 0x40000000ALL;
    if ( !a12 )
      v47 = a9;
    v88[44] = v47;
    if ( a11 )
    {
      v48 = *a11;
      if ( *a11 )
      {
        LODWORD(v88[47]) = 8;
        v88[50] = a11;
        HIDWORD(v88[47]) = 12 * v48 + 8;
      }
    }
    v49 = 12;
    LODWORD(v88[1]) = 12;
    if ( a16 )
    {
      v50 = 0;
      v51 = 0LL;
      v52 = 2 - (a12 != 0);
      v53 = (_WORD *)(a15 + 2);
      do
      {
        if ( !v50 || (v52 & *v53) != 0 )
          v51 = (unsigned int)(v51 + 1);
        ++v50;
        v53 += 24;
      }
      while ( v50 < a16 );
      if ( (_DWORD)v51 )
      {
        v54 = (char *)ExAllocatePoolWithTag(PagedPool, 24 * v51, 0x70416553u);
        v79 = v54;
        if ( !v54 )
        {
          AllocatedFullProcessImageName = -1073741670;
LABEL_99:
          ExFreePoolWithTag(v43, 0);
          goto LABEL_19;
        }
        v55 = (_OWORD *)(a15 + 4);
        v56 = 0LL;
        v57 = 0;
        v58 = a17;
        v59 = v54;
        do
        {
          if ( !v57 || (v52 & *((_WORD *)v55 - 1)) != 0 )
          {
            v60 = 3 * v56;
            *(_OWORD *)&v54[8 * v60] = *v55;
            *(_WORD *)&v54[8 * v60 + 18] = *((_WORD *)v55 - 2);
            if ( v57 )
            {
              *(_WORD *)&v54[24 * v56 + 16] = 0;
              if ( a17 && a12 )
                *(_DWORD *)&v54[24 * v56 + 20] = *v58;
            }
            else
            {
              *(_WORD *)&v54[24 * v56 + 16] = 1;
              *(_DWORD *)&v54[24 * v56 + 20] = 0;
            }
            v56 = (unsigned int)(v56 + 1);
          }
          ++v57;
          v55 += 3;
          ++v58;
        }
        while ( v57 < a16 );
        v61 = 3 * v56;
        v88[54] = v59;
        v19 = v86;
        v49 = 13;
        HIDWORD(v88[51]) = 8 * v61;
        LODWORD(v88[51]) = 9;
        v88[53] = 4LL;
        LODWORD(v88[1]) = 13;
        HIDWORD(v88[0]) = 4661;
      }
    }
    v62 = v49;
    v63 = (unsigned __int16 *)P;
    LODWORD(v88[4 * v62 + 3]) = 27;
    HIDWORD(v88[4 * LODWORD(v88[1]) + 3]) = 4;
    v88[4 * LODWORD(v88[1]) + 4] = *((unsigned int *)v77 + 32);
    ++LODWORD(v88[1]);
    LODWORD(v88[4 * LODWORD(v88[1]) + 3]) = 11;
    HIDWORD(v88[4 * LODWORD(v88[1]) + 3]) = 8;
    v88[4 * LODWORD(v88[1]) + 4] = a13;
    ++LODWORD(v88[1]);
    LODWORD(v88[4 * LODWORD(v88[1]) + 3]) = 2;
    HIDWORD(v88[4 * LODWORD(v88[1]) + 3]) = *v63 + 16;
    v64 = v72;
    v88[4 * LODWORD(v88[1]) + 6] = v63;
    v65 = ++LODWORD(v88[1]);
    v66 = v64 - 116;
    if ( (!v66 || v66 == 12) && v19 && HIDWORD(v88[0]) == 4656 && (unsigned __int8)SepSDContainsAttributeACE(v19) )
    {
      v67 = SepCheckAndCopySelfRelativeSD(v19, (PVOID *)&v78, (ULONG *)&Size, &v70);
      v19 = v78;
      AllocatedFullProcessImageName = v67;
      if ( v67 < 0 )
        goto LABEL_97;
      v68 = v78;
      LODWORD(v88[4 * v65 + 3]) = 31;
      v69 = SepSecurityDescriptorStrictLength(v68);
      HIDWORD(v88[4 * LODWORD(v88[1]) + 3]) = v69;
      v88[4 * LODWORD(v88[1]) + 6] = v19;
      v88[4 * LODWORD(v88[1]) + 4] = 32LL;
      v88[4 * LODWORD(v88[1]) + 5] = 0LL;
      v65 = v88[1];
    }
    LODWORD(v88[1]) = v65 + 1;
    SepAdtLogAuditRecord(v88);
LABEL_97:
    if ( v79 )
      ExFreePoolWithTag(v79, 0);
    goto LABEL_99;
  }
LABEL_41:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (_BYTE)v70 && v19 )
    ExFreePoolWithTag(v19, 0);
  if ( HIBYTE(v70) && v22 )
    ExFreePoolWithTag(v22, 0);
  if ( v71 && v76 )
    ExFreePoolWithTag(v76, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
