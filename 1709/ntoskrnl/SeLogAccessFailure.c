/*
 * XREFs of SeLogAccessFailure @ 0x140113BC0
 * Callers:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     SepFlattenAcl @ 0x14025F87C (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x14025F9F8 (SepGetLearningModeObjectInformation.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x14049D4B0 (PsReferenceEffectiveToken.c)
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
  __int64 v53; // rax
  unsigned int v54; // edi
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int8 *v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // edi
  _QWORD *v60; // rcx
  __int64 v61; // rax
  unsigned __int8 *v62; // rdx
  __int64 v63; // rax
  unsigned int v64; // edi
  _QWORD *v65; // rcx
  __int64 v66; // rax
  ULONGLONG v67; // r15
  bool v68; // sf
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned int v72; // edi
  struct _EVENT_DATA_DESCRIPTOR *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int16 v76; // ax
  unsigned int v77; // r15d
  __int64 v78; // rax
  ULONGLONG v79; // rdi
  unsigned int v80; // edx
  __int64 v81; // rax
  __int64 v82; // rax
  PVOID v83; // rdi
  __int64 v84; // rax
  struct _EVENT_DATA_DESCRIPTOR *v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  char v88; // [rsp+40h] [rbp-C0h] BYREF
  char v89[3]; // [rsp+41h] [rbp-BFh] BYREF
  _WORD v90[2]; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v91[2]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v92[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v93; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v94; // [rsp+54h] [rbp-ACh] BYREF
  char v95; // [rsp+58h] [rbp-A8h] BYREF
  int v96; // [rsp+5Ch] [rbp-A4h] BYREF
  int v97; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v98; // [rsp+64h] [rbp-9Ch]
  int v99; // [rsp+68h] [rbp-98h] BYREF
  PVOID v100; // [rsp+70h] [rbp-90h] BYREF
  int v101; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v102; // [rsp+7Ch] [rbp-84h]
  unsigned int v103; // [rsp+80h] [rbp-80h]
  unsigned int v104; // [rsp+84h] [rbp-7Ch] BYREF
  int v105; // [rsp+88h] [rbp-78h] BYREF
  PVOID v106; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h]
  __int64 v108; // [rsp+A0h] [rbp-60h]
  __int64 v109; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  const size_t *v111; // [rsp+C0h] [rbp-40h]
  __int64 v112; // [rsp+C8h] [rbp-38h]
  const size_t *v113; // [rsp+D0h] [rbp-30h]
  __int64 v114; // [rsp+D8h] [rbp-28h]
  const size_t *v115; // [rsp+E0h] [rbp-20h]
  __int64 v116; // [rsp+E8h] [rbp-18h]
  const size_t *v117; // [rsp+F0h] [rbp-10h]
  __int64 v118; // [rsp+F8h] [rbp-8h]
  char *v119; // [rsp+100h] [rbp+0h]
  __int64 v120; // [rsp+108h] [rbp+8h]
  int *v121; // [rsp+110h] [rbp+10h]
  __int64 v122; // [rsp+118h] [rbp+18h]
  int *v123; // [rsp+120h] [rbp+20h]
  __int64 v124; // [rsp+128h] [rbp+28h]
  __int64 v125; // [rsp+130h] [rbp+30h]
  __int64 v126; // [rsp+138h] [rbp+38h]
  int *v127; // [rsp+140h] [rbp+40h]
  __int64 v128; // [rsp+148h] [rbp+48h]
  int *v129; // [rsp+150h] [rbp+50h]
  __int64 v130; // [rsp+158h] [rbp+58h]
  PVOID v131; // [rsp+160h] [rbp+60h]
  unsigned int v132; // [rsp+168h] [rbp+68h]
  int v133; // [rsp+16Ch] [rbp+6Ch]

  v7 = a5;
  v108 = a5;
  v8 = 0LL;
  v9 = 0;
  v106 = 0LL;
  v91[0] = 0;
  v100 = 0LL;
  v11 = a1;
  v92[0] = 0;
  v89[0] = 0;
  v93 = 0;
  v88 = 0;
  v90[0] = 0;
  v99 = 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( !byte_14038D5C4 || CurrentIrql >= 2u || !EtwKernelProvRegHandle )
    return;
  if ( a1 )
  {
    v96 = *(_DWORD *)(a1 + 192);
    v97 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v11 = PsReferenceEffectiveToken(
            (unsigned int)KeGetCurrentThread(),
            (unsigned int)&v96,
            (unsigned int)&v95,
            (unsigned int)&v97,
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
  LearningModeObjectInformation = SepGetLearningModeObjectInformation(v89);
  v109 = LearningModeObjectInformation;
  v15 = LearningModeObjectInformation;
  if ( LearningModeObjectInformation && (v16 = *(unsigned __int16 **)(LearningModeObjectInformation + 16)) != 0LL )
  {
    v17 = v16[1];
    v18 = *v16 + 2LL;
    v111 = (const size_t *)*((_QWORD *)v16 + 1);
    HIDWORD(v112) = 0;
    if ( v18 < v17 )
      LODWORD(v17) = v18;
    LODWORD(v112) = v17;
  }
  else
  {
    v111 = &pwsz;
    v112 = 2LL;
  }
  if ( v15 && (v19 = *(unsigned __int16 **)(v15 + 24)) != 0LL )
  {
    if ( *(_QWORD *)(v15 + 32) && (v20 = *(const size_t **)(v15 + 48)) != 0LL )
    {
      v114 = *(unsigned __int16 *)(v15 + 42);
      v113 = v20;
    }
    else
    {
      v21 = v19[1];
      if ( (unsigned __int64)*v19 + 2 < v21 )
        LODWORD(v21) = *v19 + 2;
      v113 = (const size_t *)*((_QWORD *)v19 + 1);
      v114 = (unsigned int)v21;
    }
  }
  else
  {
    v113 = &pwsz;
    v114 = 2LL;
  }
  v22 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[15];
  if ( v22 )
  {
    v23 = *(unsigned __int16 *)(v22 + 2);
    v115 = *(const size_t **)(v22 + 8);
    v116 = v23;
  }
  else
  {
    v115 = &pwsz;
    v116 = 2LL;
  }
  v117 = &pwsz;
  v119 = &a6;
  v121 = &v96;
  v123 = &v97;
  v125 = v11 + 120;
  v118 = 2LL;
  v120 = 4LL;
  v122 = 4LL;
  v124 = 4LL;
  v126 = 4LL;
  v24 = *(_QWORD *)(v11 + 1080);
  v128 = 4LL;
  if ( v24 )
    v25 = (int *)(v24 + 40);
  else
    v25 = &v93;
  v127 = v25;
  v101 = 1;
  v26 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v11 + 152) + 1LL) + 12;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x69536553u);
  P = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = *(_DWORD *)(*(_QWORD *)(v11 + 152) + 8LL);
    memmove(
      PoolWithTag + 1,
      **(const void ***)(v11 + 152),
      4 * (unsigned int)*(unsigned __int8 *)(**(_QWORD **)(v11 + 152) + 1LL) + 8);
    v132 = v26;
    v129 = &v101;
    v28 = 12;
    v131 = P;
    v133 = 0;
  }
  else
  {
    v28 = 11;
    v129 = &v93;
  }
  v130 = 4LL;
  v29 = 2LL * v28;
  v30 = *(_QWORD *)(v11 + 784) == 0LL;
  *((_QWORD *)&UserData.Size + 2 * v28) = 4LL;
  if ( v30 )
  {
    *(&UserData.Ptr + 2 * v28) = (ULONGLONG)&v93;
  }
  else
  {
    ++v28;
    *(&UserData.Ptr + v29) = (ULONGLONG)&v99;
    v31 = *(_QWORD *)(v11 + 784);
    v32 = &UserData + v28;
    v33 = *(unsigned __int8 *)(v31 + 1);
    v32->Ptr = v31;
    v32->Reserved = 0;
    v32->Size = 4 * v33 + 8;
  }
  v103 = v28 + 1;
  if ( *(_DWORD *)(v11 + 800) )
  {
    v34 = 0;
    v94 = 0;
    v35 = *(_DWORD *)(v11 + 800);
    v98 = 0;
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
      v98 = v34;
    }
    v39 = ExAllocatePoolWithTag(PagedPool, v34, 0x69536553u);
    v8 = v39;
    if ( v39 )
    {
      v40 = *(_DWORD *)(v11 + 800);
      v94 = v40;
      v102 = 0;
      if ( v40 )
      {
        v41 = v102;
        v42 = v39;
        do
        {
          v43 = 2LL * v41;
          *v42 = *(_DWORD *)(*(_QWORD *)(v11 + 792) + 16LL * v41 + 8);
          v44 = *(unsigned __int8 **)(*(_QWORD *)(v11 + 792) + 16LL * v41);
          memmove(v42 + 1, v44, 4 * (unsigned int)v44[1] + 8);
          ++v41;
          v42 += (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 792) + 8 * v43) + 1LL) + 3;
          v40 = v94;
        }
        while ( v41 < v94 );
        v7 = v108;
        v15 = v109;
        v34 = v98;
      }
    }
    else
    {
      v40 = v94;
    }
    v45 = 2LL * v103;
    v46 = v103 + 1;
    *(&UserData.Ptr + v45) = (ULONGLONG)&v94;
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
    *(&UserData.Ptr + v48) = (ULONGLONG)&v93;
    v46 = v28 + 2;
    *((_QWORD *)&UserData.Size + v48) = 4LL;
  }
  v49 = 2LL * v46;
  *((_QWORD *)&UserData.Size + 2 * v46) = 4LL;
  if ( a4 )
  {
    ++v46;
    *(&UserData.Ptr + v49) = (ULONGLONG)&v99;
    v50 = &UserData + v46;
    v51 = 4 * *(unsigned __int8 *)(a4 + 1) + 8;
    v50->Ptr = a4;
    *(_QWORD *)&v50->Size = v51;
  }
  else
  {
    *(&UserData.Ptr + 2 * v46) = (ULONGLONG)&v93;
  }
  v52 = *(_WORD *)(v7 + 2);
  v53 = 2LL * (v46 + 1);
  *(&UserData.Ptr + v53) = v7;
  *((_QWORD *)&UserData.Size + v53) = 1LL;
  v54 = v46 + 3;
  v55 = 2LL * (v46 + 2);
  *(&UserData.Ptr + v55) = v7 + 2;
  *((_QWORD *)&UserData.Size + v55) = 2LL;
  if ( v52 >= 0 )
  {
    v57 = *(unsigned __int8 **)(v7 + 8);
LABEL_60:
    if ( v57 )
      goto LABEL_62;
    goto LABEL_61;
  }
  v56 = *(unsigned int *)(v7 + 4);
  if ( (_DWORD)v56 )
  {
    v57 = (unsigned __int8 *)(v7 + v56);
    goto LABEL_60;
  }
LABEL_61:
  v57 = (unsigned __int8 *)SeNullSid;
LABEL_62:
  v58 = 16LL * v54;
  v59 = v54 + 1;
  v60 = (ULONGLONG *)((char *)&UserData.Ptr + v58);
  LODWORD(v58) = v57[1];
  *v60 = v57;
  v60[1] = (unsigned int)(4 * v58 + 8);
  if ( v52 >= 0 )
  {
    v62 = *(unsigned __int8 **)(v7 + 8);
LABEL_66:
    if ( v62 )
      goto LABEL_68;
    goto LABEL_67;
  }
  v61 = *(unsigned int *)(v7 + 4);
  if ( (_DWORD)v61 )
  {
    v62 = (unsigned __int8 *)(v7 + v61);
    goto LABEL_66;
  }
LABEL_67:
  v62 = (unsigned __int8 *)SeNullSid;
LABEL_68:
  v63 = 16LL * v59;
  v64 = v59 + 1;
  v65 = (ULONGLONG *)((char *)&UserData.Ptr + v63);
  LODWORD(v63) = v62[1];
  *v65 = v62;
  v65[1] = (unsigned int)(4 * v63 + 8);
  if ( (v52 & 4) == 0 )
    goto LABEL_76;
  if ( v52 < 0 )
  {
    v66 = *(unsigned int *)(v7 + 16);
    if ( (_DWORD)v66 )
    {
      v67 = v7 + v66;
      goto LABEL_73;
    }
LABEL_76:
    v69 = v64;
    goto LABEL_77;
  }
  v67 = *(_QWORD *)(v7 + 32);
LABEL_73:
  if ( !v67 )
    goto LABEL_76;
  v68 = (int)SepFlattenAcl(v67, &v106, &v104, v91) < 0;
  v69 = v64;
  if ( !v68 )
  {
    v70 = 2LL * v64;
    *(&UserData.Ptr + v70) = v67;
    *((_QWORD *)&UserData.Size + v70) = 1LL;
    v71 = v64 + 1;
    v72 = v64 + 2;
    v71 *= 2LL;
    *(&UserData.Ptr + v71) = (ULONGLONG)v91;
    *((_QWORD *)&UserData.Size + v71) = 2LL;
    v73 = &UserData + v72;
    v73->Ptr = (ULONGLONG)v106;
    *(_QWORD *)&v73->Size = v104;
    goto LABEL_78;
  }
LABEL_77:
  v74 = 2 * v69;
  v72 = v64 + 1;
  *(&UserData.Ptr + v74) = (ULONGLONG)&v88;
  *((_QWORD *)&UserData.Size + v74) = 1LL;
  v75 = 16LL * v72;
  *(_QWORD *)((char *)&UserData.Size + v75) = 2LL;
  *(ULONGLONG *)((char *)&UserData.Ptr + v75) = (ULONGLONG)v90;
LABEL_78:
  v76 = *(_WORD *)(v7 + 2);
  v77 = v72 + 1;
  if ( (v76 & 0x10) == 0 )
    goto LABEL_86;
  if ( v76 < 0 )
  {
    v78 = *(unsigned int *)(v7 + 12);
    if ( (_DWORD)v78 )
    {
      v79 = v7 + v78;
      goto LABEL_83;
    }
LABEL_86:
    v81 = v77;
    v80 = v77 + 1;
    goto LABEL_87;
  }
  v79 = *(_QWORD *)(v7 + 24);
LABEL_83:
  if ( !v79 )
    goto LABEL_86;
  v68 = (int)SepFlattenAcl(v79, &v100, &v105, v92) < 0;
  v80 = v77 + 1;
  v81 = v77;
  if ( v68 )
  {
LABEL_87:
    v83 = v100;
    v86 = 2 * v81;
    *(&UserData.Ptr + v86) = (ULONGLONG)&v88;
    *((_QWORD *)&UserData.Size + v86) = 1LL;
    v87 = 2LL * v80;
    *((_QWORD *)&UserData.Size + v87) = 2LL;
    *(&UserData.Ptr + v87) = (ULONGLONG)v90;
    goto LABEL_88;
  }
  v82 = 2LL * v77;
  *(&UserData.Ptr + v82) = v79;
  v83 = v100;
  *((_QWORD *)&UserData.Size + v82) = 1LL;
  v84 = v80;
  v80 = v77 + 2;
  v84 *= 2LL;
  *(&UserData.Ptr + v84) = (ULONGLONG)v92;
  *((_QWORD *)&UserData.Size + v84) = 2LL;
  v85 = &UserData + v77 + 2;
  LODWORD(v84) = v105;
  v85->Ptr = (ULONGLONG)v83;
  *(_QWORD *)&v85->Size = (unsigned int)v84;
LABEL_88:
  EtwWriteEx(EtwKernelProvRegHandle, &AccessCheckLog, 0LL, 0, 0LL, 0LL, v80 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v106 )
    ExFreePoolWithTag(v106, 0);
  if ( v83 )
    ExFreePoolWithTag(v83, 0);
  if ( v9 )
    ObfDereferenceObject((PVOID)v11);
  if ( v89[0] )
  {
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v15 + 16) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v15 + 16), 0);
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v15 + 24) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v15 + 24), 0);
    ExFreePoolWithTag((PVOID)v15, 0);
  }
}
