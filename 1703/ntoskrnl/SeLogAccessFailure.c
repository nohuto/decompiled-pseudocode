/*
 * XREFs of SeLogAccessFailure @ 0x14001BD60
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     SepFlattenAcl @ 0x14024815C (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x1402482D8 (SepGetLearningModeObjectInformation.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x14050B1D0 (PsReferenceEffectiveToken.c)
 */

void __fastcall SeLogAccessFailure(__int64 a1, __int64 a2, __int64 a3, ULONGLONG a4, ULONGLONG a5, char a6, char a7)
{
  ULONGLONG v7; // rsi
  void *v8; // r14
  char v9; // r12
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // al
  const wchar_t *v13; // rax
  __int64 LearningModeObjectInformation; // rax
  __int64 v15; // r13
  unsigned __int16 *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int16 *v19; // rdx
  const size_t *v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  int *v25; // rax
  unsigned int v26; // edi
  _DWORD *PoolWithTag; // rax
  unsigned int v28; // r8d
  __int64 v29; // rax
  bool v30; // zf
  ULONGLONG v31; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v32; // rdx
  int v33; // eax
  ULONG v34; // edi
  unsigned int v35; // eax
  __int64 *v36; // rdx
  __int64 v37; // r9
  __int64 v38; // rax
  PVOID v39; // rax
  unsigned int v40; // ecx
  unsigned int v41; // esi
  _DWORD *v42; // r13
  __int64 v43; // rdi
  unsigned __int8 *v44; // rdx
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  struct _EVENT_DATA_DESCRIPTOR *v50; // rcx
  unsigned int v51; // eax
  __int16 v52; // r8
  unsigned __int8 *v53; // r9
  __int64 v54; // rax
  unsigned int v55; // edi
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int8 *v58; // rdx
  __int64 v59; // rax
  unsigned int v60; // edi
  _QWORD *v61; // rcx
  __int64 v62; // rax
  unsigned __int8 *v63; // rdx
  __int64 v64; // rax
  unsigned int v65; // edi
  char *v66; // rcx
  __int64 v67; // rax
  ULONGLONG v68; // r15
  bool v69; // sf
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v73; // edi
  struct _EVENT_DATA_DESCRIPTOR *v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int16 v77; // cx
  unsigned int v78; // r15d
  __int64 v79; // rax
  ULONGLONG v80; // rdi
  unsigned int v81; // r9d
  __int64 v82; // rax
  __int64 v83; // rax
  PVOID v84; // rdi
  __int64 v85; // rax
  struct _EVENT_DATA_DESCRIPTOR *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  char v89; // [rsp+30h] [rbp-D0h] BYREF
  char v90[3]; // [rsp+31h] [rbp-CFh] BYREF
  _WORD v91[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v92[2]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v93[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  int v94; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v95; // [rsp+44h] [rbp-BCh] BYREF
  char v96; // [rsp+48h] [rbp-B8h] BYREF
  int v97; // [rsp+4Ch] [rbp-B4h] BYREF
  int v98; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v99; // [rsp+54h] [rbp-ACh]
  int v100; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v101; // [rsp+60h] [rbp-A0h] BYREF
  int v102; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v103; // [rsp+6Ch] [rbp-94h]
  unsigned int v104; // [rsp+70h] [rbp-90h]
  unsigned int v105; // [rsp+74h] [rbp-8Ch] BYREF
  int v106; // [rsp+78h] [rbp-88h] BYREF
  PVOID v107; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  __int64 v109; // [rsp+90h] [rbp-70h]
  __int64 v110; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  const size_t *v112; // [rsp+B0h] [rbp-50h]
  __int64 v113; // [rsp+B8h] [rbp-48h]
  const size_t *v114; // [rsp+C0h] [rbp-40h]
  __int64 v115; // [rsp+C8h] [rbp-38h]
  const size_t *v116; // [rsp+D0h] [rbp-30h]
  __int64 v117; // [rsp+D8h] [rbp-28h]
  const size_t *v118; // [rsp+E0h] [rbp-20h]
  __int64 v119; // [rsp+E8h] [rbp-18h]
  char *v120; // [rsp+F0h] [rbp-10h]
  __int64 v121; // [rsp+F8h] [rbp-8h]
  int *v122; // [rsp+100h] [rbp+0h]
  __int64 v123; // [rsp+108h] [rbp+8h]
  int *v124; // [rsp+110h] [rbp+10h]
  __int64 v125; // [rsp+118h] [rbp+18h]
  __int64 v126; // [rsp+120h] [rbp+20h]
  __int64 v127; // [rsp+128h] [rbp+28h]
  int *v128; // [rsp+130h] [rbp+30h]
  __int64 v129; // [rsp+138h] [rbp+38h]
  int *v130; // [rsp+140h] [rbp+40h]
  __int64 v131; // [rsp+148h] [rbp+48h]
  PVOID v132; // [rsp+150h] [rbp+50h]
  unsigned int v133; // [rsp+158h] [rbp+58h]
  int v134; // [rsp+15Ch] [rbp+5Ch]

  v7 = a5;
  v109 = a5;
  v8 = 0LL;
  v9 = 0;
  v107 = 0LL;
  v92[0] = 0;
  v101 = 0LL;
  v11 = a1;
  v93[0] = 0;
  v90[0] = 0;
  v94 = 0;
  v89 = 0;
  v91[0] = 0;
  v100 = 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( !byte_14036EEC4 || CurrentIrql >= 2u || !EtwKernelProvRegHandle )
    return;
  if ( a1 )
  {
    v97 = *(_DWORD *)(a1 + 192);
    v98 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v11 = PsReferenceEffectiveToken(
            (unsigned int)KeGetCurrentThread(),
            (unsigned int)&v97,
            (unsigned int)&v96,
            (unsigned int)&v98,
            0LL);
    if ( !v11 )
      return;
    v9 = 1;
  }
  if ( a7 )
  {
    v13 = L"Permissive";
    *(_QWORD *)&UserData.Size = 22LL;
  }
  else
  {
    v13 = L"Normal";
    *(_QWORD *)&UserData.Size = 14LL;
  }
  UserData.Ptr = (ULONGLONG)v13;
  LearningModeObjectInformation = SepGetLearningModeObjectInformation(v90);
  v110 = LearningModeObjectInformation;
  v15 = LearningModeObjectInformation;
  if ( LearningModeObjectInformation && (v16 = *(unsigned __int16 **)(LearningModeObjectInformation + 16)) != 0LL )
  {
    v17 = v16[1];
    v18 = *v16 + 2LL;
    v112 = (const size_t *)*((_QWORD *)v16 + 1);
    HIDWORD(v113) = 0;
    if ( v18 < v17 )
      LODWORD(v17) = v18;
    LODWORD(v113) = v17;
  }
  else
  {
    v112 = &cchOriginalDestLength;
    v113 = 2LL;
  }
  if ( v15 && (v19 = *(unsigned __int16 **)(v15 + 24)) != 0LL )
  {
    if ( *(_QWORD *)(v15 + 32) && (v20 = *(const size_t **)(v15 + 48)) != 0LL )
    {
      v115 = *(unsigned __int16 *)(v15 + 42);
      v114 = v20;
    }
    else
    {
      v21 = v19[1];
      if ( (unsigned __int64)*v19 + 2 < v21 )
        LODWORD(v21) = *v19 + 2;
      v114 = (const size_t *)*((_QWORD *)v19 + 1);
      v115 = (unsigned int)v21;
    }
  }
  else
  {
    v114 = &cchOriginalDestLength;
    v115 = 2LL;
  }
  v22 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[15];
  if ( v22 )
  {
    v23 = *(unsigned __int16 *)(v22 + 2);
    v116 = *(const size_t **)(v22 + 8);
    v117 = v23;
  }
  else
  {
    v116 = &cchOriginalDestLength;
    v117 = 2LL;
  }
  v118 = &cchOriginalDestLength;
  v120 = &a6;
  v122 = &v97;
  v124 = &v98;
  v126 = v11 + 120;
  v119 = 2LL;
  v121 = 4LL;
  v123 = 4LL;
  v125 = 4LL;
  v127 = 4LL;
  v24 = *(_QWORD *)(v11 + 1080);
  v129 = 4LL;
  if ( v24 )
    v25 = (int *)(v24 + 40);
  else
    v25 = &v94;
  v128 = v25;
  v102 = 1;
  v26 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v11 + 152) + 1LL) + 12;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x69536553u);
  P = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = *(_DWORD *)(*(_QWORD *)(v11 + 152) + 8LL);
    memmove(
      PoolWithTag + 1,
      **(const void ***)(v11 + 152),
      4LL * *(unsigned __int8 *)(**(_QWORD **)(v11 + 152) + 1LL) + 8);
    v133 = v26;
    v130 = &v102;
    v28 = 12;
    v132 = P;
    v134 = 0;
  }
  else
  {
    v28 = 11;
    v130 = &v94;
  }
  v131 = 4LL;
  v29 = 2LL * v28;
  v30 = *(_QWORD *)(v11 + 784) == 0LL;
  *((_QWORD *)&UserData.Size + 2 * v28) = 4LL;
  if ( v30 )
  {
    *(&UserData.Ptr + 2 * v28) = (ULONGLONG)&v94;
  }
  else
  {
    ++v28;
    *(&UserData.Ptr + v29) = (ULONGLONG)&v100;
    v31 = *(_QWORD *)(v11 + 784);
    v32 = &UserData + v28;
    v33 = *(unsigned __int8 *)(v31 + 1);
    v32->Ptr = v31;
    v32->Reserved = 0;
    v32->Size = 4 * v33 + 8;
  }
  v104 = v28 + 1;
  if ( *(_DWORD *)(v11 + 800) )
  {
    v34 = 0;
    v95 = 0;
    v35 = *(_DWORD *)(v11 + 800);
    v99 = 0;
    if ( v35 )
    {
      v36 = *(__int64 **)(v11 + 792);
      v37 = v35;
      do
      {
        v38 = *v36;
        v36 += 2;
        v34 += 4 * *(unsigned __int8 *)(v38 + 1) + 12;
        --v37;
      }
      while ( v37 );
      v99 = v34;
    }
    v39 = ExAllocatePoolWithTag(PagedPool, v34, 0x69536553u);
    v8 = v39;
    if ( v39 )
    {
      v40 = *(_DWORD *)(v11 + 800);
      v95 = v40;
      v103 = 0;
      if ( v40 )
      {
        v41 = v103;
        v42 = v39;
        do
        {
          v43 = 2LL * v41;
          *v42 = *(_DWORD *)(*(_QWORD *)(v11 + 792) + 16LL * v41 + 8);
          v44 = *(unsigned __int8 **)(*(_QWORD *)(v11 + 792) + 16LL * v41);
          memmove(v42 + 1, v44, 4LL * v44[1] + 8);
          ++v41;
          v40 = v95;
          v42 += *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 792) + 8 * v43) + 1LL) + 3;
        }
        while ( v41 < v95 );
        v7 = v109;
        v15 = v110;
        v34 = v99;
      }
    }
    else
    {
      v40 = v95;
    }
    v45 = 2LL * v104;
    v46 = v104 + 1;
    *(&UserData.Ptr + v45) = (ULONGLONG)&v95;
    *((_QWORD *)&UserData.Size + v45) = 4LL;
    if ( v40 )
    {
      v47 = 2LL * v46++;
      *(&UserData.Ptr + v47) = (ULONGLONG)v8;
      *(&UserData.Size + 2 * v47) = v34;
      *(&UserData.Reserved + 2 * v47) = 0;
    }
  }
  else
  {
    v48 = 2LL * (v28 + 1);
    *(&UserData.Ptr + v48) = (ULONGLONG)&v94;
    v46 = v28 + 2;
    *((_QWORD *)&UserData.Size + v48) = 4LL;
  }
  v49 = 2LL * v46;
  *((_QWORD *)&UserData.Size + 2 * v46) = 4LL;
  if ( a4 )
  {
    ++v46;
    *(&UserData.Ptr + v49) = (ULONGLONG)&v100;
    v50 = &UserData + v46;
    v51 = 4 * *(unsigned __int8 *)(a4 + 1) + 8;
    v50->Ptr = a4;
    *(_QWORD *)&v50->Size = v51;
  }
  else
  {
    *(&UserData.Ptr + 2 * v46) = (ULONGLONG)&v94;
  }
  v52 = *(_WORD *)(v7 + 2);
  v53 = (unsigned __int8 *)SeNullSid;
  v54 = 2LL * (v46 + 1);
  *(&UserData.Ptr + v54) = v7;
  *((_QWORD *)&UserData.Size + v54) = 1LL;
  v55 = v46 + 3;
  v56 = 2LL * (v46 + 2);
  *(&UserData.Ptr + v56) = v7 + 2;
  *((_QWORD *)&UserData.Size + v56) = 2LL;
  if ( v52 >= 0 )
  {
    v58 = *(unsigned __int8 **)(v7 + 8);
LABEL_60:
    if ( v58 )
      goto LABEL_62;
    goto LABEL_61;
  }
  v57 = *(unsigned int *)(v7 + 4);
  if ( (_DWORD)v57 )
  {
    v58 = (unsigned __int8 *)(v7 + v57);
    goto LABEL_60;
  }
LABEL_61:
  v58 = v53;
LABEL_62:
  v59 = 16LL * v55;
  v60 = v55 + 1;
  v61 = (ULONGLONG *)((char *)&UserData.Ptr + v59);
  LODWORD(v59) = v58[1];
  *v61 = v58;
  v61[1] = (unsigned int)(4 * v59 + 8);
  if ( v52 >= 0 )
  {
    v63 = *(unsigned __int8 **)(v7 + 8);
LABEL_66:
    if ( v63 )
      goto LABEL_68;
    goto LABEL_67;
  }
  v62 = *(unsigned int *)(v7 + 4);
  if ( (_DWORD)v62 )
  {
    v63 = (unsigned __int8 *)(v7 + v62);
    goto LABEL_66;
  }
LABEL_67:
  v63 = v53;
LABEL_68:
  v64 = 16LL * v60;
  v65 = v60 + 1;
  v66 = (char *)&UserData + v64;
  LODWORD(v64) = 4 * v63[1] + 8;
  *(_QWORD *)v66 = v63;
  *((_DWORD *)v66 + 2) = v64;
  *((_DWORD *)v66 + 3) = 0;
  if ( (~(_BYTE)v52 & 4) != 0 )
    goto LABEL_76;
  if ( v52 < 0 )
  {
    v67 = *(unsigned int *)(v7 + 16);
    if ( (_DWORD)v67 )
    {
      v68 = v7 + v67;
      goto LABEL_73;
    }
LABEL_76:
    v70 = v65;
    goto LABEL_77;
  }
  v68 = *(_QWORD *)(v7 + 32);
LABEL_73:
  if ( !v68 )
    goto LABEL_76;
  v69 = (int)SepFlattenAcl(v68, &v107, &v105, v92) < 0;
  v70 = v65;
  if ( !v69 )
  {
    v71 = 2LL * v65;
    *(&UserData.Ptr + v71) = v68;
    *((_QWORD *)&UserData.Size + v71) = 1LL;
    v72 = v65 + 1;
    v73 = v65 + 2;
    v72 *= 2LL;
    *(&UserData.Ptr + v72) = (ULONGLONG)v92;
    *((_QWORD *)&UserData.Size + v72) = 2LL;
    v74 = &UserData + v73;
    v74->Ptr = (ULONGLONG)v107;
    *(_QWORD *)&v74->Size = v105;
    goto LABEL_78;
  }
LABEL_77:
  v75 = 2 * v70;
  v73 = v65 + 1;
  *(&UserData.Ptr + v75) = (ULONGLONG)&v89;
  *((_QWORD *)&UserData.Size + v75) = 1LL;
  v76 = 2LL * v73;
  *((_QWORD *)&UserData.Size + v76) = 2LL;
  *(&UserData.Ptr + v76) = (ULONGLONG)v91;
LABEL_78:
  v77 = *(_WORD *)(v7 + 2);
  v78 = v73 + 1;
  if ( (~(_BYTE)v77 & 0x10) != 0 )
    goto LABEL_86;
  if ( v77 < 0 )
  {
    v79 = *(unsigned int *)(v7 + 12);
    if ( (_DWORD)v79 )
    {
      v80 = v7 + v79;
      goto LABEL_83;
    }
LABEL_86:
    v82 = v78;
    v81 = v78 + 1;
    goto LABEL_87;
  }
  v80 = *(_QWORD *)(v7 + 24);
LABEL_83:
  if ( !v80 )
    goto LABEL_86;
  v69 = (int)SepFlattenAcl(v80, &v101, &v106, v93) < 0;
  v81 = v78 + 1;
  v82 = v78;
  if ( v69 )
  {
LABEL_87:
    v84 = v101;
    v87 = 2 * v82;
    *(&UserData.Ptr + v87) = (ULONGLONG)&v89;
    *((_QWORD *)&UserData.Size + v87) = 1LL;
    v88 = 2LL * v81;
    *((_QWORD *)&UserData.Size + v88) = 2LL;
    *(&UserData.Ptr + v88) = (ULONGLONG)v91;
    goto LABEL_88;
  }
  v83 = 2LL * v78;
  *(&UserData.Ptr + v83) = v80;
  v84 = v101;
  *((_QWORD *)&UserData.Size + v83) = 1LL;
  v85 = v81;
  v81 = v78 + 2;
  v85 *= 2LL;
  *(&UserData.Ptr + v85) = (ULONGLONG)v93;
  *((_QWORD *)&UserData.Size + v85) = 2LL;
  v86 = &UserData + v78 + 2;
  LODWORD(v85) = v106;
  v86->Ptr = (ULONGLONG)v84;
  *(_QWORD *)&v86->Size = (unsigned int)v85;
LABEL_88:
  EtwWrite(EtwKernelProvRegHandle, &AccessCheckLog, 0LL, v81 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v107 )
    ExFreePoolWithTag(v107, 0);
  if ( v84 )
    ExFreePoolWithTag(v84, 0);
  if ( v9 )
    ObfDereferenceObject((PVOID)v11);
  if ( v90[0] )
  {
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v15 + 16) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v15 + 16), 0);
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v15 + 24) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v15 + 24), 0);
    ExFreePoolWithTag((PVOID)v15, 0);
  }
}
