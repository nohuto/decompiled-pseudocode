/*
 * XREFs of SepAdtOpenObjectAuditAlarm @ 0x14072AC08
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046D7AC (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x140595FF8 (SeAuditHandleCreation.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1405E9290 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14072D060 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1401338F0 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x14015C0D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14025EBF4 (SepCheckAndCopySelfRelativeSD.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046BDC0 (SepAdtAuditThisEventWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14057D374 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x1406EFC08 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 *     SepSDContainsAttributeACE @ 0x140731FD4 (SepSDContainsAttributeACE.c)
 *     SepSecurityDescriptorStrictLength @ 0x14073202C (SepSecurityDescriptorStrictLength.c)
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
  __int16 *v19; // r13
  __int64 v20; // rbx
  void *v22; // rdi
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
  __int64 v36; // rbx
  __int64 v37; // rcx
  int v38; // ecx
  size_t v39; // rdi
  char *PoolWithTag; // rax
  char *v41; // r15
  unsigned int v42; // eax
  __int64 v43; // rax
  int v44; // ebx
  int v45; // eax
  unsigned int v46; // r8d
  unsigned int v47; // ecx
  unsigned int v48; // edx
  unsigned __int16 v49; // r12
  _WORD *v50; // r9
  char *v51; // rax
  _OWORD *v52; // r9
  __int64 v53; // rdx
  unsigned int v54; // r8d
  _DWORD *v55; // r10
  __int64 v56; // rcx
  unsigned __int16 *v57; // rdx
  int v58; // ecx
  int v59; // ecx
  unsigned int v60; // ebx
  int v61; // ecx
  int v62; // eax
  __int16 *v63; // rcx
  int v64; // eax
  __int16 v65; // [rsp+28h] [rbp-E0h] BYREF
  char v66; // [rsp+2Ah] [rbp-DEh] BYREF
  unsigned __int16 v67; // [rsp+2Ch] [rbp-DCh]
  size_t Size; // [rsp+30h] [rbp-D8h] BYREF
  void *Src; // [rsp+38h] [rbp-D0h] BYREF
  size_t v70; // [rsp+40h] [rbp-C8h] BYREF
  PVOID v71; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v72; // [rsp+50h] [rbp-B8h]
  __int16 *v73; // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h]
  PVOID v75; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+70h] [rbp-98h]
  const int *v77; // [rsp+78h] [rbp-90h]
  __int64 v78; // [rsp+80h] [rbp-88h]
  unsigned __int64 *v79; // [rsp+88h] [rbp-80h]
  _QWORD *v80; // [rsp+90h] [rbp-78h]
  __int16 *v81; // [rsp+98h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT v82; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v83[132]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v84[2]; // [rsp+4E8h] [rbp+3E0h] BYREF

  v19 = a6;
  v20 = 0LL;
  v76 = a19;
  v67 = a1;
  v22 = 0LL;
  *(_QWORD *)&v82.ImpersonationLevel = 0LL;
  v82.ProcessAuditId = 0LL;
  v84[0] = 0LL;
  v84[1] = 0LL;
  v79 = a3;
  v77 = a2;
  v72 = a8;
  v82.PrimaryToken = a8;
  v81 = a6;
  v73 = a6;
  P = 0LL;
  v75 = 0LL;
  LODWORD(Size) = 0;
  LODWORD(v70) = 0;
  Src = 0LL;
  v71 = 0LL;
  v66 = 0;
  v65 = 0;
  v82.ClientToken = a7;
  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(123LL, a12, a12 == 0, &v82) )
    return 1;
  v24 = v84;
  if ( a18 )
    v24 = a18;
  v80 = v24;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&v75);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( a7 )
    {
      v20 = a7[3];
      v27 = (__int64 *)a7[19];
    }
    else
    {
      v27 = (__int64 *)v72[19];
    }
    v28 = v72[3];
    v78 = *v27;
    memset(v83, 0, 0x418uLL);
    v29 = a12;
    v30 = 8;
    HIDWORD(v83[0]) = 4656;
    LOWORD(v83[2]) = v67;
    WORD1(v83[2]) = 8;
    if ( a14 == 2 )
      v30 = 3;
    LODWORD(v83[0]) = v30;
    if ( !a12 )
      WORD1(v83[2]) = 16;
    v31 = &SeSubsystemName;
    v32 = 4LL;
    v83[6] = v78;
    if ( v77 )
      v31 = v77;
    LODWORD(v83[3]) = 4;
    LODWORD(v83[7]) = 1;
    v33 = *(unsigned __int8 *)(v78 + 1);
    v83[10] = v31;
    v83[11] = 0x800000005LL;
    v83[12] = v20;
    HIDWORD(v83[3]) = 4 * v33 + 8;
    v34 = *(unsigned __int16 *)v31 + 16;
    HIDWORD(v83[7]) = v34;
    if ( !a7 )
      v83[12] = v28;
    LODWORD(v83[15]) = 1;
    HIDWORD(v83[15]) = v34;
    v83[18] = v31;
    LODWORD(v83[1]) = 4;
    if ( !a4 )
    {
      AllocatedFullProcessImageName = -1073741811;
LABEL_19:
      v22 = Src;
      goto LABEL_88;
    }
    HIDWORD(v83[19]) = *a4 + 16;
    LODWORD(v83[19]) = 1;
    v83[22] = a4;
    if ( a5 )
    {
      if ( v67 == 116 || v67 == 128 )
        LODWORD(v83[23]) = 2;
      else
        LODWORD(v83[23]) = 1;
      v35 = *a5;
      v83[26] = a5;
      HIDWORD(v83[23]) = v35 + 16;
    }
    v83[27] = 0x80000000BLL;
    if ( v79 )
      v83[28] = ObNormalizeHandleValue(*v79);
    else
      v83[28] = 0LL;
    v83[34] = v80;
    v83[31] = 0x100000000DLL;
    LODWORD(v83[35]) = 7;
    HIDWORD(v83[35]) = v32;
    v83[37] = v32;
    if ( v29 )
      v83[36] = a10;
    else
      v83[36] = a9;
    v36 = v76;
    LODWORD(v83[1]) = 9;
    if ( !v76 )
      goto LABEL_39;
    v37 = *(_QWORD *)(v76 + 72);
    if ( !v37 )
      goto LABEL_39;
    AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                      *(__int16 **)(v37 + 56),
                                      &Src,
                                      (ULONG *)&Size,
                                      (_BYTE *)&v65 + 1);
    if ( AllocatedFullProcessImageName < 0 )
      goto LABEL_19;
    AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                      *(__int16 **)(*(_QWORD *)(v36 + 72) + 64LL),
                                      &v71,
                                      (ULONG *)&v70,
                                      &v66);
    if ( AllocatedFullProcessImageName < 0 )
      goto LABEL_19;
    if ( Src || v71 )
      v38 = 8;
    else
LABEL_39:
      v38 = 0;
    v39 = (unsigned int)(v70 - v38 + Size + 152);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v39, 0x70416553u);
    v41 = PoolWithTag;
    if ( !PoolWithTag )
    {
      AllocatedFullProcessImageName = -1073741670;
LABEL_87:
      v22 = Src;
      goto LABEL_88;
    }
    memset(PoolWithTag, 0, v39);
    v42 = a10;
    *((_DWORD *)v41 + 34) = a12;
    if ( !a12 )
      v42 = a9;
    *((_DWORD *)v41 + 33) = 4;
    *(_DWORD *)v41 = v42 & 0xFDFFFFFF;
    if ( v76 )
    {
      v43 = *(_QWORD *)(v76 + 72);
      if ( v43 )
      {
        *(_OWORD *)(v41 + 4) = *(_OWORD *)(v43 + 88);
        *(_OWORD *)(v41 + 20) = *(_OWORD *)(v43 + 104);
        *(_OWORD *)(v41 + 36) = *(_OWORD *)(v43 + 120);
        *(_OWORD *)(v41 + 52) = *(_OWORD *)(v43 + 136);
        *(_OWORD *)(v41 + 68) = *(_OWORD *)(v43 + 152);
        *(_OWORD *)(v41 + 84) = *(_OWORD *)(v43 + 168);
        *(_OWORD *)(v41 + 100) = *(_OWORD *)(v43 + 184);
        *(_OWORD *)(v41 + 116) = *(_OWORD *)(v43 + 200);
      }
    }
    v44 = Size;
    if ( Src )
      memmove(v41 + 144, Src, (unsigned int)Size);
    if ( v71 )
      memmove(&v41[v44 + 144], v71, (unsigned int)v70);
    LODWORD(v83[39]) = 29;
    HIDWORD(v83[39]) = v39;
    v83[42] = v41;
    v83[43] = 0x40000000ALL;
    if ( a12 )
      v83[44] = a10;
    else
      v83[44] = a9;
    if ( a11 )
    {
      v45 = *a11;
      if ( *a11 )
      {
        LODWORD(v83[47]) = 8;
        v83[50] = a11;
        HIDWORD(v83[47]) = 12 * v45 + 8;
      }
    }
    v46 = 12;
    LODWORD(v83[1]) = 12;
    if ( a16 )
    {
      v47 = 0;
      v48 = 0;
      v49 = 2 - (a12 != 0);
      v50 = (_WORD *)(a15 + 2);
      do
      {
        if ( !v48 || (v49 & *v50) != 0 )
          ++v47;
        ++v48;
        v50 += 24;
      }
      while ( v48 < a16 );
      if ( v47 )
      {
        v51 = (char *)ExAllocatePoolWithTag(PagedPool, 24LL * v47, 0x70416553u);
        P = v51;
        if ( !v51 )
        {
          AllocatedFullProcessImageName = -1073741670;
LABEL_86:
          ExFreePoolWithTag(v41, 0);
          goto LABEL_87;
        }
        v52 = (_OWORD *)(a15 + 4);
        v53 = 0LL;
        v54 = 0;
        v55 = a17;
        do
        {
          if ( !v54 || (v49 & *((_WORD *)v52 - 1)) != 0 )
          {
            v56 = 3 * v53;
            *(_OWORD *)&v51[8 * v56] = *v52;
            *(_WORD *)&v51[8 * v56 + 18] = *((_WORD *)v52 - 2);
            if ( v54 )
            {
              *(_WORD *)&v51[24 * v53 + 16] = 0;
              if ( a17 && a12 )
                *(_DWORD *)&v51[24 * v53 + 20] = *v55;
            }
            else
            {
              *(_WORD *)&v51[24 * v53 + 16] = 1;
              *(_DWORD *)&v51[24 * v53 + 20] = 0;
            }
            v53 = (unsigned int)(v53 + 1);
          }
          ++v54;
          v52 += 3;
          ++v55;
        }
        while ( v54 < a16 );
        v83[54] = v51;
        v19 = v81;
        v46 = 13;
        HIDWORD(v83[51]) = 24 * v53;
        LODWORD(v83[51]) = 9;
        v83[53] = 4LL;
        LODWORD(v83[1]) = 13;
        HIDWORD(v83[0]) = 4661;
      }
    }
    v57 = (unsigned __int16 *)v75;
    LODWORD(v83[4 * v46 + 3]) = 27;
    HIDWORD(v83[4 * LODWORD(v83[1]) + 3]) = 4;
    v83[4 * LODWORD(v83[1]) + 4] = *((unsigned int *)v72 + 32);
    ++LODWORD(v83[1]);
    LODWORD(v83[4 * LODWORD(v83[1]) + 3]) = 11;
    HIDWORD(v83[4 * LODWORD(v83[1]) + 3]) = 8;
    v83[4 * LODWORD(v83[1]) + 4] = a13;
    v58 = *v57;
    ++LODWORD(v83[1]);
    LODWORD(v83[4 * LODWORD(v83[1]) + 3]) = 2;
    HIDWORD(v83[4 * LODWORD(v83[1]) + 3]) = v58 + 16;
    v59 = v67;
    v83[4 * LODWORD(v83[1]) + 6] = v57;
    v60 = ++LODWORD(v83[1]);
    v61 = v59 - 116;
    if ( (!v61 || v61 == 12) && v19 && HIDWORD(v83[0]) == 4656 && (unsigned __int8)SepSDContainsAttributeACE(v19) )
    {
      v62 = SepCheckAndCopySelfRelativeSD(v19, (PVOID *)&v73, (ULONG *)&Size, &v65);
      v19 = v73;
      AllocatedFullProcessImageName = v62;
      if ( v62 < 0 )
        goto LABEL_84;
      v63 = v73;
      LODWORD(v83[4 * v60 + 3]) = 31;
      v64 = SepSecurityDescriptorStrictLength(v63);
      HIDWORD(v83[4 * LODWORD(v83[1]) + 3]) = v64;
      v83[4 * LODWORD(v83[1]) + 6] = v19;
      v83[4 * LODWORD(v83[1]) + 4] = 32LL;
      v83[4 * LODWORD(v83[1]) + 5] = 0LL;
      v60 = v83[1];
    }
    LODWORD(v83[1]) = v60 + 1;
    SepAdtLogAuditRecord(v83);
LABEL_84:
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_86;
  }
LABEL_88:
  if ( v75 )
    ExFreePoolWithTag(v75, 0);
  if ( (_BYTE)v65 && v19 )
    ExFreePoolWithTag(v19, 0);
  if ( HIBYTE(v65) && v22 )
    ExFreePoolWithTag(v22, 0);
  if ( v66 && v71 )
    ExFreePoolWithTag(v71, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
