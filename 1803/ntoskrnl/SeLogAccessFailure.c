/*
 * XREFs of SeLogAccessFailure @ 0x1400B1D20
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     SepFlattenAcl @ 0x1402A1324 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x1402A14A0 (SepGetLearningModeObjectInformation.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x1404D42B0 (PsReferenceEffectiveToken.c)
 */

void __fastcall SeLogAccessFailure(__int64 a1, __int64 a2, __int64 a3, ULONGLONG a4, ULONGLONG a5, char a6, char a7)
{
  ULONGLONG v7; // rsi
  void *v8; // r14
  char v9; // r12
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // al
  const wchar_t *v13; // rax
  _QWORD *LearningModeObjectInformation; // rax
  _QWORD *v15; // r8
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
  _DWORD *v28; // r13
  int *v29; // rax
  unsigned int v30; // r13d
  __int64 v31; // rax
  unsigned int v32; // r13d
  bool v33; // zf
  ULONGLONG v34; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v35; // rdx
  int v36; // eax
  ULONG v37; // edi
  unsigned int v38; // eax
  __int64 *v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rax
  PVOID v42; // rax
  unsigned int v43; // ecx
  unsigned int v44; // esi
  _DWORD *v45; // r13
  __int64 v46; // rdi
  unsigned __int8 *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // r13d
  struct _EVENT_DATA_DESCRIPTOR *v53; // rcx
  unsigned int v54; // eax
  __int16 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // r13d
  __int16 v59; // r9
  __int64 v60; // rax
  unsigned __int8 *v61; // rdx
  __int64 v62; // rax
  unsigned int v63; // r13d
  _QWORD *v64; // rcx
  __int64 v65; // rax
  unsigned __int8 *v66; // rdx
  unsigned int v67; // edi
  struct _EVENT_DATA_DESCRIPTOR *v68; // rcx
  int v69; // eax
  __int64 v70; // rax
  ULONGLONG v71; // r13
  __int64 v72; // r15
  unsigned int v73; // edi
  __int64 v74; // r15
  int v75; // eax
  PVOID v76; // r15
  __int64 v77; // rax
  struct _EVENT_DATA_DESCRIPTOR *v78; // rcx
  __int64 v79; // rax
  __int64 v80; // r15
  __int64 v81; // rax
  unsigned int v82; // edi
  __int64 v83; // rsi
  unsigned int v84; // edi
  __int64 v85; // rax
  ULONGLONG v86; // r15
  __int64 v87; // rsi
  int v88; // eax
  PVOID v89; // rsi
  __int64 v90; // rax
  struct _EVENT_DATA_DESCRIPTOR *v91; // rcx
  __int64 v92; // rax
  PVOID *v93; // rbx
  char v94; // [rsp+40h] [rbp-C0h] BYREF
  char v95[3]; // [rsp+41h] [rbp-BFh] BYREF
  _WORD v96[2]; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v97[2]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v98[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v99; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v100; // [rsp+54h] [rbp-ACh] BYREF
  char v101; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v102; // [rsp+60h] [rbp-A0h] BYREF
  int v103; // [rsp+68h] [rbp-98h] BYREF
  int v104; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v105; // [rsp+70h] [rbp-90h]
  ULONG v106; // [rsp+74h] [rbp-8Ch]
  int v107; // [rsp+78h] [rbp-88h] BYREF
  PVOID v108; // [rsp+80h] [rbp-80h] BYREF
  int v109; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v110; // [rsp+8Ch] [rbp-74h]
  int v111; // [rsp+90h] [rbp-70h] BYREF
  int v112; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v113; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  PVOID v115; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  const size_t *v117; // [rsp+C0h] [rbp-40h]
  __int64 v118; // [rsp+C8h] [rbp-38h]
  const size_t *v119; // [rsp+D0h] [rbp-30h]
  __int64 v120; // [rsp+D8h] [rbp-28h]
  const size_t *v121; // [rsp+E0h] [rbp-20h]
  __int64 v122; // [rsp+E8h] [rbp-18h]
  const size_t *v123; // [rsp+F0h] [rbp-10h]
  __int64 v124; // [rsp+F8h] [rbp-8h]
  char *v125; // [rsp+100h] [rbp+0h]
  __int64 v126; // [rsp+108h] [rbp+8h]
  int *v127; // [rsp+110h] [rbp+10h]
  __int64 v128; // [rsp+118h] [rbp+18h]
  int *v129; // [rsp+120h] [rbp+20h]
  __int64 v130; // [rsp+128h] [rbp+28h]
  __int64 v131; // [rsp+130h] [rbp+30h]
  __int64 v132; // [rsp+138h] [rbp+38h]
  int *v133; // [rsp+140h] [rbp+40h]
  __int64 v134; // [rsp+148h] [rbp+48h]
  int *v135; // [rsp+150h] [rbp+50h]
  __int64 v136; // [rsp+158h] [rbp+58h]
  _DWORD *v137; // [rsp+160h] [rbp+60h]
  unsigned int v138; // [rsp+168h] [rbp+68h]
  int v139; // [rsp+16Ch] [rbp+6Ch]

  v7 = a5;
  v113 = a5;
  v8 = 0LL;
  v9 = 0;
  v102 = 0LL;
  v97[0] = 0;
  v108 = 0LL;
  v11 = a1;
  v98[0] = 0;
  v95[0] = 0;
  v99 = 0;
  v94 = 0;
  v96[0] = 0;
  v107 = 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( !byte_1403D154C || CurrentIrql >= 2u || !EtwKernelProvRegHandle )
    return;
  if ( a1 )
  {
    v103 = *(_DWORD *)(a1 + 192);
    v104 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v11 = PsReferenceEffectiveToken(
            (unsigned int)KeGetCurrentThread(),
            (unsigned int)&v103,
            (unsigned int)&v101,
            (unsigned int)&v104,
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
  LearningModeObjectInformation = (_QWORD *)SepGetLearningModeObjectInformation(v95);
  v115 = LearningModeObjectInformation;
  v15 = LearningModeObjectInformation;
  if ( LearningModeObjectInformation && (v16 = (unsigned __int16 *)LearningModeObjectInformation[2]) != 0LL )
  {
    v17 = v16[1];
    v18 = *v16 + 2LL;
    v117 = (const size_t *)*((_QWORD *)v16 + 1);
    HIDWORD(v118) = 0;
    if ( v18 < v17 )
      LODWORD(v17) = v18;
    LODWORD(v118) = v17;
  }
  else
  {
    v117 = &pwsz;
    v118 = 2LL;
  }
  if ( v15 && (v19 = (unsigned __int16 *)v15[3]) != 0LL )
  {
    if ( v15[4] && (v20 = (const size_t *)v15[6]) != 0LL )
    {
      v120 = *((unsigned __int16 *)v15 + 21);
      v119 = v20;
    }
    else
    {
      v21 = v19[1];
      if ( (unsigned __int64)*v19 + 2 < v21 )
        LODWORD(v21) = *v19 + 2;
      v119 = (const size_t *)*((_QWORD *)v19 + 1);
      v120 = (unsigned int)v21;
    }
  }
  else
  {
    v119 = &pwsz;
    v120 = 2LL;
  }
  v22 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[15];
  if ( v22 )
  {
    v23 = *(unsigned __int16 *)(v22 + 2);
    v121 = *(const size_t **)(v22 + 8);
    v122 = v23;
  }
  else
  {
    v121 = &pwsz;
    v122 = 2LL;
  }
  v123 = &pwsz;
  v125 = &a6;
  v127 = &v103;
  v129 = &v104;
  v131 = v11 + 120;
  v124 = 2LL;
  v126 = 4LL;
  v128 = 4LL;
  v130 = 4LL;
  v132 = 4LL;
  v24 = *(_QWORD *)(v11 + 1080);
  v134 = 4LL;
  if ( v24 )
    v25 = (int *)(v24 + 40);
  else
    v25 = &v99;
  v133 = v25;
  v109 = 1;
  v26 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v11 + 152) + 1LL) + 12;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x69536553u);
  P = PoolWithTag;
  v28 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = *(_DWORD *)(*(_QWORD *)(v11 + 152) + 8LL);
    memmove(
      PoolWithTag + 1,
      **(const void ***)(v11 + 152),
      4 * (unsigned int)*(unsigned __int8 *)(**(_QWORD **)(v11 + 152) + 1LL) + 8);
    v137 = v28;
    v29 = &v109;
    v30 = 12;
    v138 = v26;
    v139 = 0;
  }
  else
  {
    v29 = &v99;
    v30 = 11;
  }
  v135 = v29;
  v31 = 2LL * v30;
  v136 = 4LL;
  v32 = v30 + 1;
  v33 = *(_QWORD *)(v11 + 784) == 0LL;
  *((_QWORD *)&UserData.Size + v31) = 4LL;
  if ( v33 )
  {
    *(&UserData.Ptr + v31) = (ULONGLONG)&v99;
  }
  else
  {
    *(&UserData.Ptr + v31) = (ULONGLONG)&v107;
    v34 = *(_QWORD *)(v11 + 784);
    v35 = &UserData + v32;
    v36 = *(unsigned __int8 *)(v34 + 1);
    ++v32;
    v35->Ptr = v34;
    v35->Reserved = 0;
    v35->Size = 4 * v36 + 8;
  }
  v105 = v32;
  if ( !*(_DWORD *)(v11 + 800) )
  {
    v50 = 2LL * v32;
    *(&UserData.Ptr + v50) = (ULONGLONG)&v99;
    *((_QWORD *)&UserData.Size + v50) = 4LL;
    goto LABEL_53;
  }
  v37 = 0;
  v100 = 0;
  v38 = *(_DWORD *)(v11 + 800);
  v106 = 0;
  if ( v38 )
  {
    v39 = *(__int64 **)(v11 + 792);
    v40 = v38;
    do
    {
      v41 = *v39;
      v39 += 2;
      v37 += 4 * *(unsigned __int8 *)(v41 + 1) + 12;
      --v40;
    }
    while ( v40 );
    v106 = v37;
  }
  v42 = ExAllocatePoolWithTag(PagedPool, v37, 0x69536553u);
  v8 = v42;
  if ( v42 )
  {
    v43 = *(_DWORD *)(v11 + 800);
    v100 = v43;
    v110 = 0;
    if ( v43 )
    {
      v44 = v110;
      v45 = v42;
      do
      {
        v46 = 2LL * v44;
        *v45 = *(_DWORD *)(*(_QWORD *)(v11 + 792) + 16LL * v44 + 8);
        v47 = *(unsigned __int8 **)(*(_QWORD *)(v11 + 792) + 16LL * v44);
        memmove(v45 + 1, v47, 4 * (unsigned int)v47[1] + 8);
        ++v44;
        v45 += (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 792) + 8 * v46) + 1LL) + 3;
        v43 = v100;
      }
      while ( v44 < v100 );
      v7 = v113;
      v32 = v105;
      v37 = v106;
    }
  }
  else
  {
    v43 = v100;
  }
  v48 = 2LL * v32++;
  *(&UserData.Ptr + v48) = (ULONGLONG)&v100;
  *((_QWORD *)&UserData.Size + v48) = 4LL;
  if ( v43 )
  {
    v49 = 2LL * v32;
    *(&UserData.Ptr + v49) = (ULONGLONG)v8;
    *(&UserData.Size + 2 * v49) = v37;
    *(&UserData.Reserved + 2 * v49) = 0;
LABEL_53:
    ++v32;
  }
  v51 = 2LL * v32;
  v52 = v32 + 1;
  *((_QWORD *)&UserData.Size + v51) = 4LL;
  if ( a4 )
  {
    *(&UserData.Ptr + v51) = (ULONGLONG)&v107;
    v53 = &UserData + v52++;
    v54 = 4 * *(unsigned __int8 *)(a4 + 1) + 8;
    v53->Ptr = a4;
    *(_QWORD *)&v53->Size = v54;
  }
  else
  {
    *(&UserData.Ptr + v51) = (ULONGLONG)&v99;
  }
  v55 = *(_WORD *)(v7 + 2);
  v56 = 2LL * v52;
  *(&UserData.Ptr + v56) = v7;
  *((_QWORD *)&UserData.Size + v56) = 1LL;
  v57 = v52 + 1;
  v58 = v52 + 2;
  v57 *= 2LL;
  *(&UserData.Ptr + v57) = v7 + 2;
  *((_QWORD *)&UserData.Size + v57) = 2LL;
  v59 = v55 & 0x8000;
  if ( v55 >= 0 )
  {
    v61 = *(unsigned __int8 **)(v7 + 8);
LABEL_61:
    if ( v61 )
      goto LABEL_63;
    goto LABEL_62;
  }
  v60 = *(unsigned int *)(v7 + 4);
  if ( (_DWORD)v60 )
  {
    v61 = (unsigned __int8 *)(v7 + v60);
    goto LABEL_61;
  }
LABEL_62:
  v61 = (unsigned __int8 *)SeNullSid;
LABEL_63:
  v62 = 16LL * v58;
  v63 = v58 + 1;
  v64 = (ULONGLONG *)((char *)&UserData.Ptr + v62);
  LODWORD(v62) = v61[1];
  *v64 = v61;
  v64[1] = (unsigned int)(4 * v62 + 8);
  if ( !v59 )
  {
    v66 = *(unsigned __int8 **)(v7 + 8);
LABEL_67:
    if ( v66 )
      goto LABEL_69;
    goto LABEL_68;
  }
  v65 = *(unsigned int *)(v7 + 4);
  if ( (_DWORD)v65 )
  {
    v66 = (unsigned __int8 *)(v7 + v65);
    goto LABEL_67;
  }
LABEL_68:
  v66 = (unsigned __int8 *)SeNullSid;
LABEL_69:
  v67 = v63 + 1;
  v68 = &UserData + v63;
  v69 = v66[1];
  v68->Ptr = (ULONGLONG)v66;
  *(_QWORD *)&v68->Size = (unsigned int)(4 * v69 + 8);
  if ( (v55 & 4) == 0 )
    goto LABEL_79;
  if ( v59 )
  {
    v70 = *(unsigned int *)(v7 + 16);
    if ( (_DWORD)v70 )
    {
      v71 = v7 + v70;
      goto LABEL_74;
    }
LABEL_79:
    v72 = v67;
    v73 = v63 + 2;
    goto LABEL_80;
  }
  v71 = *(_QWORD *)(v7 + 32);
LABEL_74:
  v72 = v67;
  v73 = v67 + 1;
  if ( !v71 )
  {
LABEL_80:
    v80 = 2 * v72;
    *(&UserData.Ptr + v80) = (ULONGLONG)&v94;
    *((_QWORD *)&UserData.Size + v80) = 1LL;
    v76 = v102;
    v81 = 2LL * v73;
    *(&UserData.Ptr + v81) = (ULONGLONG)v96;
    *((_QWORD *)&UserData.Size + v81) = 2LL;
    goto LABEL_81;
  }
  v74 = 2 * v72;
  v75 = SepFlattenAcl(v71, &v102, &v111, v97);
  *((_QWORD *)&UserData.Size + v74) = 1LL;
  if ( v75 < 0 )
  {
    *(&UserData.Ptr + v74) = (ULONGLONG)&v94;
    v76 = v102;
    v79 = 2LL * v73;
    *(&UserData.Ptr + v79) = (ULONGLONG)v96;
    *((_QWORD *)&UserData.Size + v79) = 2LL;
  }
  else
  {
    *(&UserData.Ptr + v74) = v71;
    v76 = v102;
    v77 = v73++;
    v77 *= 2LL;
    *(&UserData.Ptr + v77) = (ULONGLONG)v97;
    *((_QWORD *)&UserData.Size + v77) = 2LL;
    v78 = &UserData + v73;
    LODWORD(v77) = v111;
    v78->Ptr = (ULONGLONG)v76;
    *(_QWORD *)&v78->Size = (unsigned int)v77;
  }
  v55 = *(_WORD *)(v7 + 2);
LABEL_81:
  v82 = v73 + 1;
  if ( (v55 & 0x10) == 0 )
  {
    v83 = v82;
    v84 = v82 + 1;
LABEL_93:
    v87 = 2 * v83;
    *((_QWORD *)&UserData.Size + v87) = 1LL;
    goto LABEL_94;
  }
  if ( v55 >= 0 )
  {
    v86 = *(_QWORD *)(v7 + 24);
  }
  else
  {
    v85 = *(unsigned int *)(v7 + 12);
    if ( !(_DWORD)v85 )
    {
      v83 = v82;
      v84 = v82 + 1;
      goto LABEL_93;
    }
    v86 = v7 + v85;
  }
  v83 = v82;
  v84 = v82 + 1;
  if ( !v86 )
  {
    v76 = v102;
    goto LABEL_93;
  }
  v87 = 2 * v83;
  v88 = SepFlattenAcl(v86, &v108, &v112, v98);
  *((_QWORD *)&UserData.Size + v87) = 1LL;
  if ( v88 < 0 )
  {
    v76 = v102;
LABEL_94:
    *(&UserData.Ptr + v87) = (ULONGLONG)&v94;
    v89 = v108;
    v92 = 2LL * v84;
    *((_QWORD *)&UserData.Size + v92) = 2LL;
    *(&UserData.Ptr + v92) = (ULONGLONG)v96;
    goto LABEL_95;
  }
  *(&UserData.Ptr + v87) = v86;
  v89 = v108;
  v76 = v102;
  v90 = v84++;
  v90 *= 2LL;
  *(&UserData.Ptr + v90) = (ULONGLONG)v98;
  *((_QWORD *)&UserData.Size + v90) = 2LL;
  v91 = &UserData + v84;
  LODWORD(v90) = v112;
  v91->Ptr = (ULONGLONG)v89;
  *(_QWORD *)&v91->Size = (unsigned int)v90;
LABEL_95:
  EtwWriteEx(EtwKernelProvRegHandle, &AccessCheckLog, 0LL, 0, 0LL, 0LL, v84 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v76 )
    ExFreePoolWithTag(v76, 0);
  if ( v89 )
    ExFreePoolWithTag(v89, 0);
  if ( v9 )
    ObfDereferenceObject((PVOID)v11);
  if ( v95[0] )
  {
    v93 = (PVOID *)v115;
    ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)v115 + 2) + 8LL), 0);
    ExFreePoolWithTag(v93[2], 0);
    ExFreePoolWithTag(*((PVOID *)v93[3] + 1), 0);
    ExFreePoolWithTag(v93[3], 0);
    ExFreePoolWithTag(v93, 0);
  }
}
