/*
 * XREFs of PspBuildCreateProcessContext @ 0x14053D9A0
 * Callers:
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x14053EC18 (NtCreateThreadEx.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeGetProcessorIndexFromNumber @ 0x14008CE90 (KeGetProcessorIndexFromNumber.c)
 *     KeVerifyGroupAffinity @ 0x1400B37AC (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x14024EC10 (IsTrustletCreateAttributeWellFormed.c)
 *     RtlGetUmsContextExtendedSize @ 0x14025B084 (RtlGetUmsContextExtendedSize.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PspDeleteCreateProcessContext @ 0x14053EE70 (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationOptions @ 0x1405805E8 (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x14059EDC4 (RtlValidProcessProtection.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(_QWORD *a1, char a2, __int64 a3, unsigned int *a4)
{
  unsigned int *v4; // r14
  unsigned __int64 *v5; // rdi
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  int v15; // ebx
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  SIZE_T v25; // rbx
  char *v26; // r15
  PVOID v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // edx
  struct _PROCESSOR_NUMBER *v33; // rax
  ULONG ProcessorIndexFromNumber; // eax
  int v35; // eax
  _BYTE *v36; // rax
  int v37; // eax
  int v38; // eax
  unsigned __int64 v39; // rbx
  _QWORD *v40; // rax
  _DWORD *v41; // rcx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  size_t v45; // r8
  unsigned __int64 v46; // rdx
  __int128 v47; // xmm6
  _DWORD *v48; // rax
  int v49; // eax
  int v50; // eax
  unsigned __int64 v51; // r15
  PVOID v52; // rax
  char *v53; // r12
  __int64 v54; // rax
  __int16 *v55; // r15
  const void *v56; // r13
  unsigned __int16 v57; // dx
  unsigned __int16 v58; // cx
  char v59; // dl
  unsigned __int64 v60; // rcx
  unsigned int v61; // ecx
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  char *v64; // rbx
  unsigned __int16 v65; // r8
  _WORD *v66; // rax
  _DWORD *v67; // rax
  SIZE_T v69; // rbx
  char *v70; // r15
  PVOID v71; // rax
  int v72; // eax
  SIZE_T v73; // rbx
  unsigned __int64 v74; // r12
  PVOID v75; // rax
  unsigned __int64 v76; // r15
  SIZE_T v77; // rbx
  char *v78; // r15
  PVOID v79; // rax
  bool AttributeWellFormed; // al
  _OWORD *v81; // rax
  SIZE_T v82; // rbx
  char *v83; // r15
  PVOID PoolWithQuotaTag; // rax
  int v85; // eax
  _DWORD *v86; // rax
  SIZE_T v87; // rbx
  char *v88; // r15
  PVOID v89; // rax
  _DWORD *v90; // rax
  _OWORD *v91; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // r11
  __int64 v95; // rax
  unsigned __int64 *v96; // [rsp+48h] [rbp-1C0h]
  __int64 v97; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v98; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v99; // [rsp+50h] [rbp-1B8h]
  unsigned __int16 v100; // [rsp+58h] [rbp-1B0h]
  unsigned __int64 v101; // [rsp+68h] [rbp-1A0h]
  unsigned __int64 v102; // [rsp+68h] [rbp-1A0h]
  unsigned __int64 v103; // [rsp+68h] [rbp-1A0h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+74h] [rbp-194h] BYREF
  int v105; // [rsp+78h] [rbp-190h]
  void *Src; // [rsp+80h] [rbp-188h]
  char *v107; // [rsp+88h] [rbp-180h]
  unsigned int *v108; // [rsp+90h] [rbp-178h]
  int v109; // [rsp+A4h] [rbp-164h]
  _BYTE *v110; // [rsp+A8h] [rbp-160h]
  unsigned __int64 v111; // [rsp+B0h] [rbp-158h]
  unsigned __int64 v112; // [rsp+B8h] [rbp-150h]
  unsigned __int64 v113; // [rsp+C0h] [rbp-148h]
  _DWORD *v114; // [rsp+C8h] [rbp-140h]
  __int64 v115; // [rsp+D0h] [rbp-138h] BYREF
  unsigned __int64 v116; // [rsp+D8h] [rbp-130h]
  _WORD *v117; // [rsp+E0h] [rbp-128h]
  char *v118; // [rsp+E8h] [rbp-120h]
  _DWORD *v119; // [rsp+F0h] [rbp-118h]
  _DWORD *v120; // [rsp+F8h] [rbp-110h]
  _OWORD *v121; // [rsp+100h] [rbp-108h]
  _DWORD *v122; // [rsp+108h] [rbp-100h]
  unsigned __int64 v123; // [rsp+110h] [rbp-F8h]
  int v124; // [rsp+118h] [rbp-F0h]
  _DWORD *v125; // [rsp+120h] [rbp-E8h]
  struct _PROCESSOR_NUMBER *v126; // [rsp+128h] [rbp-E0h]
  _OWORD *v127; // [rsp+130h] [rbp-D8h]
  unsigned __int64 v128; // [rsp+138h] [rbp-D0h]
  char *v129; // [rsp+140h] [rbp-C8h]
  char *v130; // [rsp+148h] [rbp-C0h]
  PVOID v131; // [rsp+150h] [rbp-B8h]
  char *v132; // [rsp+158h] [rbp-B0h]
  __int16 *v133; // [rsp+160h] [rbp-A8h]
  unsigned int *v134; // [rsp+168h] [rbp-A0h]
  const void *v135; // [rsp+170h] [rbp-98h]
  char *v136; // [rsp+178h] [rbp-90h]
  unsigned __int64 v137; // [rsp+180h] [rbp-88h]
  __int128 v138; // [rsp+190h] [rbp-78h] BYREF
  __int128 v139; // [rsp+1A0h] [rbp-68h] BYREF
  unsigned int v141; // [rsp+220h] [rbp+18h]

  v141 = a3;
  v4 = a4;
  LOBYTE(a4) = a2;
  v105 = a3;
  v108 = v4;
  *(_BYTE *)v4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v97 = *a1;
  if ( *a1 < 0x28uLL )
    return 3221225485LL;
  if ( a2 && *a1 != 40LL )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v97 > 0x7FFFFFFF0000LL || (_QWORD *)((char *)a1 + v97) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v98 = v97 - 8;
  if ( (v98 & 0x1F) != 0 )
    return 3221225485LL;
  v99 = v98 >> 5;
  v5 = a1 + 1;
  v96 = a1 + 1;
  v6 = 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( !v99 )
    {
      v15 = 0;
      goto LABEL_322;
    }
    v7 = *v5;
    v128 = *v5;
    if ( (_DWORD)a3 && (v7 & 0x10000) == 0
      || (v7 & 0x20000) != 0 && v5[3]
      || (v8 = (unsigned int)(1 << v7), v109 = v8, v9 = v4[1], (v9 & (unsigned int)v8) != 0)
      || (v10 = (unsigned int)v8 | v9, v4[1] = v10, v7 > 0x6001A) )
    {
LABEL_123:
      v15 = -1073741811;
      goto LABEL_322;
    }
    if ( (unsigned int)v7 > 0x20014 )
      break;
    if ( (_DWORD)v7 == 131092 )
    {
      if ( v5[1] != 4 )
        goto LABEL_123;
      v48 = (_DWORD *)v5[2];
      v120 = v48;
      if ( (_BYTE)a4 )
      {
        if ( ((unsigned __int8)v48 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v5 = v96;
        v48 = v120;
      }
      v4[102] = *v48;
      goto LABEL_30;
    }
    if ( (unsigned int)v7 > 0x20009 )
    {
      v30 = v7 - 131082;
      if ( !v30 )
      {
        if ( v5[1] != 8 )
          goto LABEL_123;
        v31 = (_DWORD *)v5[2];
        v119 = v31;
        if ( (_BYTE)a4 )
        {
          if ( ((unsigned __int8)v31 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v5 = v96;
          v31 = v119;
        }
        if ( (*v31 & 0x1C) != 0 )
        {
          v15 = -1073741637;
          goto LABEL_322;
        }
        v32 = *v31 & 3;
        v124 = v32;
        if ( (unsigned __int8)v32 >= 3u )
          goto LABEL_123;
        *((_BYTE *)v4 + 9) ^= (*((_BYTE *)v4 + 9) ^ (4 * v32)) & 0xC;
        if ( v32 == 1 )
          v4[72] = v31[1];
        goto LABEL_30;
      }
      v42 = v30 - 1;
      if ( !v42 )
      {
        v82 = v5[1];
        if ( !v82 || (v82 & 7) != 0 || v82 >> 3 > v6 )
          goto LABEL_123;
        v83 = (char *)v5[2];
        v118 = v83;
        if ( (_BYTE)a4 )
        {
          if ( ((unsigned __int8)v83 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v83[v82] > 0x7FFFFFFF0000LL || &v83[v82] < v83 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v82, 0x6C487350u);
        *((_QWORD *)v4 + 37) = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
LABEL_205:
          v15 = -1073741670;
          goto LABEL_322;
        }
        memmove(PoolWithQuotaTag, v83, v82);
        v4[73] = v82 >> 3;
        goto LABEL_61;
      }
      v43 = v42 - 2;
      if ( v43 )
      {
        v44 = v43 - 3;
        if ( v44 )
        {
          v72 = v44 - 2;
          if ( v72 )
          {
            if ( v72 != 1 )
              goto LABEL_123;
            v73 = v5[1];
            if ( !v73 || (v73 & 7) != 0 || v73 >> 3 > v6 )
              goto LABEL_123;
            v74 = v5[2];
            v118 = (char *)v74;
            if ( (_BYTE)a4 )
            {
              if ( (v74 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v74 + v73 > 0x7FFFFFFF0000LL || v74 + v73 < v74 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v75 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v73, 0x6C4A7350u);
            *((_QWORD *)v4 + 49) = v75;
            if ( !v75 )
              goto LABEL_205;
            memset(v75, 0, v73);
            v4[101] = v73 >> 3;
            v76 = 0LL;
            v116 = 0LL;
            while ( v76 < v4[101] )
            {
              v15 = ObpReferenceObjectByHandleWithTag(
                      *(_QWORD *)(v74 + 8 * v76),
                      1,
                      (__int64)PsJobType,
                      a2,
                      1816818512,
                      &v115,
                      0LL,
                      0LL);
              if ( v15 < 0 )
                goto LABEL_322;
              *(_QWORD *)(*((_QWORD *)v4 + 49) + 8 * v76++) = v115;
              v116 = v76;
            }
          }
          else
          {
            v77 = v5[1];
            if ( !v77 || (v77 & 7) != 0 || v77 > 0x88 )
              goto LABEL_123;
            v78 = (char *)v5[2];
            v132 = v78;
            if ( (_BYTE)a4 )
            {
              if ( ((unsigned __int8)v78 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (unsigned __int64)&v78[v77] > 0x7FFFFFFF0000LL || &v78[v77] < v78 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v79 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v77, 0x61547350u);
            *((_QWORD *)v4 + 48) = v79;
            if ( !v79 )
              goto LABEL_205;
            memmove(v79, v78, v77);
            v4[100] = v77;
            AttributeWellFormed = IsTrustletCreateAttributeWellFormed(*((_QWORD **)v4 + 48), v77);
LABEL_244:
            if ( !AttributeWellFormed )
              goto LABEL_123;
          }
        }
        else
        {
          v45 = v5[1];
          if ( v45 > 0x10 )
            goto LABEL_123;
          v139 = 0uLL;
          v46 = v5[2];
          if ( (_BYTE)a4 && v46 >= 0x7FFFFFFF0000LL )
            v46 = 0x7FFFFFFF0000LL;
          memmove(&v139, (const void *)v46, v45);
          v47 = v139;
          v138 = v139;
          v15 = PspValidateMitigationOptions(&v138, 0LL);
          if ( v15 < 0 )
            goto LABEL_322;
          *(_OWORD *)(v4 + 90) = v47;
        }
LABEL_61:
        v6 = 0xFFFFFFFFLL;
LABEL_62:
        a3 = v141;
        LOBYTE(a4) = a2;
        goto LABEL_30;
      }
      if ( v5[1] != 2 )
        goto LABEL_123;
      v66 = (_WORD *)v5[2];
      v117 = v66;
      if ( (_BYTE)a4 )
      {
        if ( ((unsigned __int8)v66 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v66 = v117;
      }
      v100 = *v66;
      if ( *v66 >= (unsigned __int16)KeNumberNodes )
        goto LABEL_123;
      _mm_lfence();
      if ( !*(_QWORD *)(KeNodeBlock[v100] + 136) )
        goto LABEL_123;
      *((_WORD *)v4 + 125) = v100;
LABEL_176:
      v5 = v96;
      goto LABEL_30;
    }
    if ( (_DWORD)v7 == 131081 )
    {
      if ( v5[1] != 4 )
        goto LABEL_123;
      v67 = (_DWORD *)v5[2];
      v114 = v67;
      if ( (_BYTE)a4 )
      {
        if ( ((unsigned __int8)v67 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v5 = v96;
        v67 = v114;
      }
      v4[79] = *v67;
    }
    else
    {
      v11 = v7 - 6;
      if ( v11 )
      {
        v12 = v11 - 65533;
        if ( v12 )
        {
          v16 = v12 - 1;
          if ( v16 )
          {
            v24 = v16 - 65537;
            if ( !v24 )
            {
              v25 = v5[1];
              if ( !v25 || (v25 & 1) != 0 || v25 > 0xFFFF )
                goto LABEL_123;
              v26 = (char *)v5[2];
              v130 = v26;
              if ( (_BYTE)a4 && ((unsigned __int64)&v26[v25] > 0x7FFFFFFF0000LL || &v26[v25] < v26) )
                MEMORY[0x7FFFFFFF0000] = 0;
              v27 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v25, 0x6E467350u);
              v131 = v27;
              if ( !v27 )
                goto LABEL_205;
              *((_WORD *)v4 + 116) = 0;
              *((_WORD *)v4 + 117) = v25;
              *((_QWORD *)v4 + 30) = v27;
              memmove(v27, v26, v25);
              *((_WORD *)v4 + 116) = v25;
              goto LABEL_61;
            }
            v35 = v24 - 2;
            if ( !v35 )
            {
              v69 = v5[1];
              if ( !v69 || (v69 & 0xF) != 0 )
                goto LABEL_123;
              v70 = (char *)v5[2];
              v129 = v70;
              if ( (_BYTE)a4 )
              {
                if ( ((unsigned __int8)v70 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( (unsigned __int64)&v70[v69] > 0x7FFFFFFF0000LL || &v70[v69] < v70 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              if ( v69 > 0x10 )
              {
                v71 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v69, 0x6C527350u);
                *((_QWORD *)v4 + 35) = v71;
                if ( !v71 )
                  goto LABEL_205;
              }
              else
              {
                *((_QWORD *)v4 + 35) = v4 + 66;
              }
              memmove(*((void **)v4 + 35), v70, v69);
              *((_QWORD *)v4 + 32) = v69 >> 4;
              goto LABEL_61;
            }
            if ( v35 != 1 || v5[1] != 1 )
              goto LABEL_123;
            v36 = (_BYTE *)v5[2];
            v110 = v36;
            if ( (_BYTE)a4 )
            {
              v5 = v96;
              v36 = v110;
            }
            *((_BYTE *)v4 + 248) = *v36;
          }
          else
          {
            if ( v5[1] != 8 )
              goto LABEL_123;
            v17 = v5[2];
            v111 = v17;
            if ( (_BYTE)a4 )
            {
              if ( (v17 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v17 >= 0x7FFFFFFF0000LL )
                v17 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v17 = *(_BYTE *)v17;
              *(_BYTE *)(v17 + 7) = *(_BYTE *)(v17 + 7);
              v5 = v96;
              v17 = v111;
            }
            *((_QWORD *)v4 + 3) = v17;
            v18 = v5[3];
            v102 = v18;
            if ( v18 )
            {
              if ( (_BYTE)a4 )
              {
                if ( (v18 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v18 >= 0x7FFFFFFF0000LL )
                  v18 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v18 = *(_BYTE *)v18;
                *(_BYTE *)(v18 + 7) = *(_BYTE *)(v18 + 7);
                v5 = v96;
                v18 = v102;
              }
              *(_QWORD *)v18 = 8LL;
            }
          }
        }
        else
        {
          if ( v5[1] != 16 )
            goto LABEL_123;
          v13 = v5[2];
          v112 = v13;
          if ( (_BYTE)a4 )
          {
            if ( (v13 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v13 >= 0x7FFFFFFF0000LL )
              v13 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v13 = *(_BYTE *)v13;
            *(_BYTE *)(v13 + 15) = *(_BYTE *)(v13 + 15);
            v5 = v96;
            v13 = v112;
          }
          *((_QWORD *)v4 + 2) = v13;
          v14 = v5[3];
          v101 = v14;
          if ( v14 )
          {
            if ( (_BYTE)a4 )
            {
              if ( (v14 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v14 >= 0x7FFFFFFF0000LL )
                v14 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v14 = *(_BYTE *)v14;
              *(_BYTE *)(v14 + 7) = *(_BYTE *)(v14 + 7);
              v5 = v96;
              v14 = v101;
            }
            *(_QWORD *)v14 = 16LL;
          }
        }
      }
      else
      {
        if ( v5[1] != 64 )
          goto LABEL_123;
        v28 = v5[2];
        v113 = v28;
        if ( (_BYTE)a4 )
        {
          if ( (v28 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v28 >= 0x7FFFFFFF0000LL )
            v28 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v28 = *(_BYTE *)v28;
          *(_BYTE *)(v28 + 63) = *(_BYTE *)(v28 + 63);
          v5 = v96;
          v28 = v113;
        }
        *((_QWORD *)v4 + 4) = v28;
        v29 = v5[3];
        v103 = v29;
        if ( v29 )
        {
          if ( (_BYTE)a4 )
          {
            if ( (v29 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v29 >= 0x7FFFFFFF0000LL )
              v29 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v29 = *(_BYTE *)v29;
            *(_BYTE *)(v29 + 7) = *(_BYTE *)(v29 + 7);
            v5 = v96;
            v29 = v103;
          }
          *(_QWORD *)v29 = 64LL;
        }
      }
    }
LABEL_30:
    v5 += 4;
    v96 = v5;
    --v99;
  }
  if ( (unsigned int)v7 > 0x3000E )
  {
    v19 = v7 - 196623;
    if ( v19 )
    {
      v20 = v19 - 196593;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 15;
            if ( v23 )
            {
              if ( v23 != 9 || v5[1] != 1 )
                goto LABEL_123;
              *((_BYTE *)v4 + 9) = *((_BYTE *)v4 + 9) & 0x7F | (v5[2] != 0 ? 0x80 : 0);
            }
            else
            {
              if ( v5[1] != 1 )
                goto LABEL_123;
              LOBYTE(v10) = *((_BYTE *)v5 + 16);
              *((_BYTE *)v4 + 376) = v10;
              if ( !(unsigned __int8)RtlValidProcessProtection(v10, v8, a3, a4) )
                goto LABEL_123;
            }
          }
          else
          {
            if ( v5[1] != 8 )
              goto LABEL_123;
            *((_QWORD *)v4 + 18) = v5[2];
          }
        }
        else
        {
          if ( v5[1] != 8 )
            goto LABEL_123;
          *((_QWORD *)v4 + 17) = v5[2];
        }
      }
      else
      {
        if ( v5[1] != 8 )
          goto LABEL_123;
        *((_QWORD *)v4 + 15) = v5[2];
      }
      goto LABEL_30;
    }
    if ( !(_DWORD)a3 || !(_BYTE)a4 || v5[1] != 24 )
      goto LABEL_123;
    v127 = (_OWORD *)v5[2];
    if ( ((unsigned __int8)v127 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v91 = v127;
    *((_OWORD *)v4 + 21) = *v127;
    *((_QWORD *)v4 + 44) = *((_QWORD *)v91 + 2);
    if ( v4[84] != 256 )
      goto LABEL_123;
    UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
    v93 = *((_QWORD *)v4 + 43);
    if ( UmsContextExtendedSize - 1 > v94 )
    {
      if ( UmsContextExtendedSize )
      {
        if ( (v93 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v93 + UmsContextExtendedSize > 0x7FFFFFFF0000LL || v93 + UmsContextExtendedSize < v93 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else if ( (v93 & 3) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v95 = *((_QWORD *)v4 + 44);
    if ( (v95 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    goto LABEL_176;
  }
  if ( (_DWORD)v7 == 196622 )
  {
    if ( !(_DWORD)a3 || v5[1] != 4 )
      goto LABEL_123;
    v33 = (struct _PROCESSOR_NUMBER *)v5[2];
    v126 = v33;
    if ( (_BYTE)a4 )
    {
      if ( ((unsigned __int8)v33 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v5 = v96;
      v33 = v126;
    }
    ProcNumber = *v33;
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
    v4[63] = ProcessorIndexFromNumber;
    v6 = 0xFFFFFFFFLL;
    if ( ProcessorIndexFromNumber == -1 )
      goto LABEL_123;
    goto LABEL_62;
  }
  v37 = v7 - 131093;
  if ( !v37 )
  {
    if ( v5[1] != 4 )
      goto LABEL_123;
    v90 = (_DWORD *)v5[2];
    v125 = v90;
    if ( (_BYTE)a4 )
    {
      if ( ((unsigned __int8)v90 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v5 = v96;
      v90 = v125;
    }
    v4[103] = *v90;
    goto LABEL_30;
  }
  v38 = v37 - 1;
  if ( v38 )
  {
    v49 = v38 - 1;
    if ( !v49 )
    {
      v87 = v5[1];
      if ( v87 > 0xFFFF )
        goto LABEL_123;
      v88 = (char *)v5[2];
      v136 = v88;
      if ( (_BYTE)a4 && v87 && ((unsigned __int64)&v88[v87] > 0x7FFFFFFF0000LL || &v88[v87] < v88) )
        MEMORY[0x7FFFFFFF0000] = 0;
      v89 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v87, 0x634F7350u);
      *((_QWORD *)v4 + 52) = v89;
      if ( !v89 )
        goto LABEL_205;
      memmove(v89, v88, v87);
      v4[106] = v87;
      goto LABEL_61;
    }
    v50 = v49 - 1;
    if ( !v50 )
    {
      if ( v5[1] != 40 )
        goto LABEL_123;
      v51 = v5[2];
      v123 = v51;
      if ( (_BYTE)a4 )
      {
        if ( (v51 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v5 = v96;
        v51 = v123;
      }
      v52 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x70426E50u);
      v53 = (char *)(v4 + 108);
      Src = v4 + 108;
      *((_QWORD *)v4 + 54) = v52;
      if ( !v52 )
        goto LABEL_205;
      memset(v52, 0, 0x28uLL);
      v54 = *(_QWORD *)v53;
      *(_OWORD *)v54 = *(_OWORD *)v51;
      *(_OWORD *)(v54 + 16) = *(_OWORD *)(v51 + 16);
      *(_QWORD *)(v54 + 32) = *(_QWORD *)(v51 + 32);
      v55 = *(__int16 **)v53;
      v133 = v55;
      a4 = (unsigned int *)*((_QWORD *)v55 + 1);
      Src = a4;
      v134 = a4;
      v56 = (const void *)*((_QWORD *)v55 + 3);
      v135 = v56;
      *((_QWORD *)v55 + 1) = 0LL;
      *(_QWORD *)(*(_QWORD *)v53 + 24LL) = 0LL;
      v57 = *v55;
      if ( *v55 )
      {
        v58 = v55[1];
        if ( v57 > v58 || ((v57 | v58) & 1) != 0 || v58 == 0xFFFF || !a4 )
          goto LABEL_123;
        v59 = a2;
        if ( a2 )
        {
          if ( v58 )
          {
            v60 = (unsigned __int64)a4 + v58;
            if ( v60 > 0x7FFFFFFF0000LL || v60 < (unsigned __int64)a4 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
      }
      else
      {
        v59 = a2;
      }
      v61 = *(_DWORD *)(*(_QWORD *)v53 + 16LL);
      if ( v61 )
      {
        if ( !v56 || v61 > 0xFFFF )
          goto LABEL_123;
        if ( v59 )
        {
          v62 = 8LL * v61;
          if ( v62 )
          {
            if ( ((unsigned __int8)v56 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v63 = (unsigned __int64)v56 + v62;
            if ( v63 > 0x7FFFFFFF0000LL || v63 < (unsigned __int64)v56 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
      }
      v64 = 0LL;
      v107 = 0LL;
      v65 = v55[1];
      if ( v65 || *(_DWORD *)(*(_QWORD *)v53 + 16LL) )
      {
        v64 = (char *)ExAllocatePoolWithQuotaTag(
                        (POOL_TYPE)520,
                        v65 + 8LL * *(unsigned int *)(*(_QWORD *)v53 + 16LL),
                        0x70426E50u);
        v107 = v64;
        a4 = (unsigned int *)Src;
      }
      if ( v55[1] )
      {
        *((_QWORD *)v55 + 1) = v64;
        memmove(v64, a4, (unsigned __int16)v55[1]);
        v64 += (unsigned __int16)v55[1];
        v107 = v64;
      }
      if ( *(_DWORD *)(*(_QWORD *)v53 + 16LL) )
      {
        *(_QWORD *)(*(_QWORD *)v53 + 24LL) = v64;
        memmove(*(void **)(*(_QWORD *)v53 + 24LL), v56, 8LL * *(unsigned int *)(*(_QWORD *)v53 + 16LL));
      }
      goto LABEL_61;
    }
    v85 = v50 - 1;
    if ( v85 )
    {
      if ( v85 != 65523 || !(_DWORD)a3 || v5[1] != 16 )
        goto LABEL_123;
      v81 = (_OWORD *)v5[2];
      v121 = v81;
      if ( (_BYTE)a4 )
      {
        if ( ((unsigned __int8)v81 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v5 = v96;
        v81 = v121;
      }
      *((_OWORD *)v4 + 20) = *v81;
      AttributeWellFormed = KeVerifyGroupAffinity((__int64)(v4 + 80), 1);
      goto LABEL_244;
    }
    if ( v5[1] != 4 )
      goto LABEL_123;
    v86 = (_DWORD *)v5[2];
    v122 = v86;
    if ( (_BYTE)a4 )
    {
      if ( ((unsigned __int8)v86 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v5 = v96;
      v86 = v122;
    }
    v4[110] = *v86;
    goto LABEL_30;
  }
  if ( v5[1] != 8 )
    goto LABEL_123;
  v39 = v5[2];
  v137 = v39;
  if ( (_BYTE)a4 )
  {
    if ( (v39 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v39 + 8 > 0x7FFFFFFF0000LL || v39 + 8 < v39 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v40 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8uLL, 0x77736350u);
  *((_QWORD *)v4 + 58) = v40;
  if ( v40 )
  {
    *v40 = *(_QWORD *)v39;
    v41 = (_DWORD *)*((_QWORD *)v4 + 58);
    if ( (*v41 & 3) == 0 || (unsigned int)(v41[1] - 1) > 5 )
      goto LABEL_123;
    goto LABEL_61;
  }
  v15 = -1073741801;
LABEL_322:
  if ( v15 < 0 )
    goto LABEL_326;
  if ( (v4[1] & 0x800) != 0 )
  {
    qsort(*((void **)v4 + 37), v4[73], 8uLL, PspSortHandleList);
    if ( **((int **)v4 + 37) < 0 )
      v15 = -1073741811;
    *((_BYTE *)v4 + 8) = v4[2] & 0xFE | (v105 != 0);
  }
  if ( v15 < 0 )
LABEL_326:
    PspDeleteCreateProcessContext(v4);
  return (unsigned int)v15;
}
