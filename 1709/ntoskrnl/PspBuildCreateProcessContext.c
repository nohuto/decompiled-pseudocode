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

__int64 __fastcall PspBuildCreateProcessContext(__int64 *a1, char a2, int a3, __int64 a4)
{
  char v5; // r9
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  int v14; // ebx
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  SIZE_T v24; // rbx
  char *v25; // r15
  PVOID v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // edx
  _PROCESSOR_NUMBER *v32; // rax
  ULONG ProcessorIndexFromNumber; // eax
  int v34; // eax
  _BYTE *v35; // rax
  int v36; // eax
  int v37; // eax
  unsigned __int64 v38; // rbx
  _QWORD *v39; // rax
  _DWORD *v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  size_t v44; // r8
  unsigned __int64 v45; // rdx
  __int128 v46; // xmm6
  _DWORD *v47; // rax
  int v48; // eax
  int v49; // eax
  __int64 v50; // r15
  PVOID v51; // rax
  __int64 *v52; // r12
  __int16 *v53; // rax
  __int16 *v54; // r15
  void *v55; // r9
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
  PS_PROTECTION v66; // cl
  _WORD *v67; // rax
  _DWORD *v68; // rax
  SIZE_T v70; // rbx
  char *v71; // r15
  PVOID v72; // rax
  int v73; // eax
  SIZE_T v74; // rbx
  SIZE_T v75; // r12
  PVOID v76; // rax
  unsigned __int64 v77; // r15
  SIZE_T v78; // rbx
  char *v79; // r15
  PVOID v80; // rax
  bool AttributeWellFormed; // al
  _OWORD *v82; // rax
  SIZE_T v83; // rbx
  char *v84; // r15
  PVOID PoolWithQuotaTag; // rax
  int v86; // eax
  _DWORD *v87; // rax
  SIZE_T v88; // rbx
  char *v89; // r15
  PVOID v90; // rax
  _DWORD *v91; // rax
  _OWORD *v92; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // r11
  __int64 v96; // rax
  _QWORD *v97; // [rsp+48h] [rbp-1C0h]
  __int64 v98; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v99; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v100; // [rsp+50h] [rbp-1B8h]
  unsigned __int16 v101; // [rsp+58h] [rbp-1B0h]
  unsigned __int64 v102; // [rsp+68h] [rbp-1A0h]
  unsigned __int64 v103; // [rsp+68h] [rbp-1A0h]
  unsigned __int64 v104; // [rsp+68h] [rbp-1A0h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+74h] [rbp-194h] BYREF
  int v106; // [rsp+78h] [rbp-190h]
  void *Src; // [rsp+80h] [rbp-188h]
  char *v108; // [rsp+88h] [rbp-180h]
  __int64 v109; // [rsp+90h] [rbp-178h]
  int v110; // [rsp+A4h] [rbp-164h]
  _BYTE *v111; // [rsp+A8h] [rbp-160h]
  unsigned __int64 v112; // [rsp+B0h] [rbp-158h]
  unsigned __int64 v113; // [rsp+B8h] [rbp-150h]
  unsigned __int64 v114; // [rsp+C0h] [rbp-148h]
  _DWORD *v115; // [rsp+C8h] [rbp-140h]
  __int64 v116; // [rsp+D0h] [rbp-138h] BYREF
  unsigned __int64 v117; // [rsp+D8h] [rbp-130h]
  _WORD *v118; // [rsp+E0h] [rbp-128h]
  char *v119; // [rsp+E8h] [rbp-120h]
  _DWORD *v120; // [rsp+F0h] [rbp-118h]
  _DWORD *v121; // [rsp+F8h] [rbp-110h]
  _OWORD *v122; // [rsp+100h] [rbp-108h]
  _DWORD *v123; // [rsp+108h] [rbp-100h]
  __int64 v124; // [rsp+110h] [rbp-F8h]
  int v125; // [rsp+118h] [rbp-F0h]
  _DWORD *v126; // [rsp+120h] [rbp-E8h]
  _PROCESSOR_NUMBER *v127; // [rsp+128h] [rbp-E0h]
  _OWORD *v128; // [rsp+130h] [rbp-D8h]
  unsigned __int64 v129; // [rsp+138h] [rbp-D0h]
  char *v130; // [rsp+140h] [rbp-C8h]
  char *v131; // [rsp+148h] [rbp-C0h]
  PVOID v132; // [rsp+150h] [rbp-B8h]
  char *v133; // [rsp+158h] [rbp-B0h]
  __int16 *v134; // [rsp+160h] [rbp-A8h]
  void *v135; // [rsp+168h] [rbp-A0h]
  const void *v136; // [rsp+170h] [rbp-98h]
  char *v137; // [rsp+178h] [rbp-90h]
  unsigned __int64 v138; // [rsp+180h] [rbp-88h]
  __int128 v139; // [rsp+190h] [rbp-78h] BYREF
  __int128 v140; // [rsp+1A0h] [rbp-68h] BYREF
  int v142; // [rsp+220h] [rbp+18h]

  v142 = a3;
  v5 = a2;
  v106 = a3;
  v109 = a4;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v98 = *a1;
  if ( (unsigned __int64)*a1 < 0x28 )
    return 3221225485LL;
  if ( a2 && *a1 != 40 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v98 > 0x7FFFFFFF0000LL || (__int64 *)((char *)a1 + v98) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v99 = v98 - 8;
  if ( (v99 & 0x1F) != 0 )
    return 3221225485LL;
  v100 = v99 >> 5;
  v6 = a1 + 1;
  v97 = a1 + 1;
  v7 = 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( !v100 )
    {
      v14 = 0;
      goto LABEL_322;
    }
    v8 = *v6;
    v129 = *v6;
    if ( a3 && (v8 & 0x10000) == 0
      || (v8 & 0x20000) != 0 && v6[3]
      || (v110 = 1 << v8, v9 = *(_DWORD *)(a4 + 4), (v9 & (1 << v8)) != 0)
      || (*(_DWORD *)(a4 + 4) = (1 << v8) | v9, v8 > 0x6001A) )
    {
LABEL_123:
      v14 = -1073741811;
      goto LABEL_322;
    }
    if ( (unsigned int)v8 > 0x20014 )
      break;
    if ( (_DWORD)v8 == 131092 )
    {
      if ( v6[1] != 4LL )
        goto LABEL_123;
      v47 = (_DWORD *)v6[2];
      v121 = v47;
      if ( v5 )
      {
        if ( ((unsigned __int8)v47 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v6 = v97;
        v47 = v121;
      }
      *(_DWORD *)(a4 + 408) = *v47;
      goto LABEL_30;
    }
    if ( (unsigned int)v8 > 0x20009 )
    {
      v29 = v8 - 131082;
      if ( !v29 )
      {
        if ( v6[1] != 8LL )
          goto LABEL_123;
        v30 = (_DWORD *)v6[2];
        v120 = v30;
        if ( v5 )
        {
          if ( ((unsigned __int8)v30 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v6 = v97;
          v30 = v120;
        }
        if ( (*v30 & 0x1C) != 0 )
        {
          v14 = -1073741637;
          goto LABEL_322;
        }
        v31 = *v30 & 3;
        v125 = v31;
        if ( (unsigned __int8)v31 >= 3u )
          goto LABEL_123;
        *(_BYTE *)(a4 + 9) ^= (*(_BYTE *)(a4 + 9) ^ (4 * v31)) & 0xC;
        if ( v31 == 1 )
          *(_DWORD *)(a4 + 288) = v30[1];
        goto LABEL_30;
      }
      v41 = v29 - 1;
      if ( !v41 )
      {
        v83 = v6[1];
        if ( !v83 || (v83 & 7) != 0 || v83 >> 3 > v7 )
          goto LABEL_123;
        v84 = (char *)v6[2];
        v119 = v84;
        if ( v5 )
        {
          if ( ((unsigned __int8)v84 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v84[v83] > 0x7FFFFFFF0000LL || &v84[v83] < v84 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v83, 0x6C487350u);
        *(_QWORD *)(a4 + 296) = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
LABEL_205:
          v14 = -1073741670;
          goto LABEL_322;
        }
        memmove(PoolWithQuotaTag, v84, v83);
        *(_DWORD *)(a4 + 292) = v83 >> 3;
        goto LABEL_61;
      }
      v42 = v41 - 2;
      if ( v42 )
      {
        v43 = v42 - 3;
        if ( v43 )
        {
          v73 = v43 - 2;
          if ( v73 )
          {
            if ( v73 != 1 )
              goto LABEL_123;
            v74 = v6[1];
            if ( !v74 || (v74 & 7) != 0 || v74 >> 3 > v7 )
              goto LABEL_123;
            v75 = v6[2];
            v119 = (char *)v75;
            if ( v5 )
            {
              if ( (v75 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v75 + v74 > 0x7FFFFFFF0000LL || v75 + v74 < v75 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v76 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v74, 0x6C4A7350u);
            *(_QWORD *)(a4 + 392) = v76;
            if ( !v76 )
              goto LABEL_205;
            memset(v76, 0, v74);
            *(_DWORD *)(a4 + 404) = v74 >> 3;
            v77 = 0LL;
            v117 = 0LL;
            while ( v77 < *(unsigned int *)(a4 + 404) )
            {
              v14 = ObpReferenceObjectByHandleWithTag(
                      *(_QWORD *)(v75 + 8 * v77),
                      1,
                      (__int64)PsJobType,
                      a2,
                      1816818512,
                      &v116,
                      0LL,
                      0LL);
              if ( v14 < 0 )
                goto LABEL_322;
              *(_QWORD *)(*(_QWORD *)(a4 + 392) + 8 * v77++) = v116;
              v117 = v77;
            }
          }
          else
          {
            v78 = v6[1];
            if ( !v78 || (v78 & 7) != 0 || v78 > 0x88 )
              goto LABEL_123;
            v79 = (char *)v6[2];
            v133 = v79;
            if ( v5 )
            {
              if ( ((unsigned __int8)v79 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (unsigned __int64)&v79[v78] > 0x7FFFFFFF0000LL || &v79[v78] < v79 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v80 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v78, 0x61547350u);
            *(_QWORD *)(a4 + 384) = v80;
            if ( !v80 )
              goto LABEL_205;
            memmove(v80, v79, v78);
            *(_DWORD *)(a4 + 400) = v78;
            AttributeWellFormed = IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 384), v78);
LABEL_244:
            if ( !AttributeWellFormed )
              goto LABEL_123;
          }
        }
        else
        {
          v44 = v6[1];
          if ( v44 > 0x10 )
            goto LABEL_123;
          v140 = 0uLL;
          v45 = v6[2];
          if ( v5 && v45 >= 0x7FFFFFFF0000LL )
            v45 = 0x7FFFFFFF0000LL;
          memmove(&v140, (const void *)v45, v44);
          v46 = v140;
          v139 = v140;
          v14 = PspValidateMitigationOptions(&v139, 0LL);
          if ( v14 < 0 )
            goto LABEL_322;
          *(_OWORD *)(a4 + 360) = v46;
        }
LABEL_61:
        v7 = 0xFFFFFFFFLL;
LABEL_62:
        a3 = v142;
        v5 = a2;
        goto LABEL_30;
      }
      if ( v6[1] != 2LL )
        goto LABEL_123;
      v67 = (_WORD *)v6[2];
      v118 = v67;
      if ( v5 )
      {
        if ( ((unsigned __int8)v67 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v67 = v118;
      }
      v101 = *v67;
      if ( *v67 >= (unsigned __int16)KeNumberNodes )
        goto LABEL_123;
      _mm_lfence();
      if ( !*(_QWORD *)(KeNodeBlock[v101] + 136) )
        goto LABEL_123;
      *(_WORD *)(a4 + 250) = v101;
LABEL_176:
      v6 = v97;
      goto LABEL_30;
    }
    if ( (_DWORD)v8 == 131081 )
    {
      if ( v6[1] != 4LL )
        goto LABEL_123;
      v68 = (_DWORD *)v6[2];
      v115 = v68;
      if ( v5 )
      {
        if ( ((unsigned __int8)v68 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v6 = v97;
        v68 = v115;
      }
      *(_DWORD *)(a4 + 316) = *v68;
    }
    else
    {
      v10 = v8 - 6;
      if ( v10 )
      {
        v11 = v10 - 65533;
        if ( v11 )
        {
          v15 = v11 - 1;
          if ( v15 )
          {
            v23 = v15 - 65537;
            if ( !v23 )
            {
              v24 = v6[1];
              if ( !v24 || (v24 & 1) != 0 || v24 > 0xFFFF )
                goto LABEL_123;
              v25 = (char *)v6[2];
              v131 = v25;
              if ( v5 && ((unsigned __int64)&v25[v24] > 0x7FFFFFFF0000LL || &v25[v24] < v25) )
                MEMORY[0x7FFFFFFF0000] = 0;
              v26 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v24, 0x6E467350u);
              v132 = v26;
              if ( !v26 )
                goto LABEL_205;
              *(_WORD *)(a4 + 232) = 0;
              *(_WORD *)(a4 + 234) = v24;
              *(_QWORD *)(a4 + 240) = v26;
              memmove(v26, v25, v24);
              *(_WORD *)(a4 + 232) = v24;
              goto LABEL_61;
            }
            v34 = v23 - 2;
            if ( !v34 )
            {
              v70 = v6[1];
              if ( !v70 || (v70 & 0xF) != 0 )
                goto LABEL_123;
              v71 = (char *)v6[2];
              v130 = v71;
              if ( v5 )
              {
                if ( ((unsigned __int8)v71 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( (unsigned __int64)&v71[v70] > 0x7FFFFFFF0000LL || &v71[v70] < v71 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              if ( v70 > 0x10 )
              {
                v72 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v70, 0x6C527350u);
                *(_QWORD *)(a4 + 280) = v72;
                if ( !v72 )
                  goto LABEL_205;
              }
              else
              {
                *(_QWORD *)(a4 + 280) = a4 + 264;
              }
              memmove(*(void **)(a4 + 280), v71, v70);
              *(_QWORD *)(a4 + 256) = v70 >> 4;
              goto LABEL_61;
            }
            if ( v34 != 1 || v6[1] != 1LL )
              goto LABEL_123;
            v35 = (_BYTE *)v6[2];
            v111 = v35;
            if ( v5 )
            {
              v6 = v97;
              v35 = v111;
            }
            *(_BYTE *)(a4 + 248) = *v35;
          }
          else
          {
            if ( v6[1] != 8LL )
              goto LABEL_123;
            v16 = v6[2];
            v112 = v16;
            if ( v5 )
            {
              if ( (v16 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v16 >= 0x7FFFFFFF0000LL )
                v16 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v16 = *(_BYTE *)v16;
              *(_BYTE *)(v16 + 7) = *(_BYTE *)(v16 + 7);
              v6 = v97;
              v16 = v112;
            }
            *(_QWORD *)(a4 + 24) = v16;
            v17 = v6[3];
            v103 = v17;
            if ( v17 )
            {
              if ( v5 )
              {
                if ( (v17 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v17 >= 0x7FFFFFFF0000LL )
                  v17 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v17 = *(_BYTE *)v17;
                *(_BYTE *)(v17 + 7) = *(_BYTE *)(v17 + 7);
                v6 = v97;
                v17 = v103;
              }
              *(_QWORD *)v17 = 8LL;
            }
          }
        }
        else
        {
          if ( v6[1] != 16LL )
            goto LABEL_123;
          v12 = v6[2];
          v113 = v12;
          if ( v5 )
          {
            if ( (v12 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v12 >= 0x7FFFFFFF0000LL )
              v12 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v12 = *(_BYTE *)v12;
            *(_BYTE *)(v12 + 15) = *(_BYTE *)(v12 + 15);
            v6 = v97;
            v12 = v113;
          }
          *(_QWORD *)(a4 + 16) = v12;
          v13 = v6[3];
          v102 = v13;
          if ( v13 )
          {
            if ( v5 )
            {
              if ( (v13 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v13 >= 0x7FFFFFFF0000LL )
                v13 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v13 = *(_BYTE *)v13;
              *(_BYTE *)(v13 + 7) = *(_BYTE *)(v13 + 7);
              v6 = v97;
              v13 = v102;
            }
            *(_QWORD *)v13 = 16LL;
          }
        }
      }
      else
      {
        if ( v6[1] != 64LL )
          goto LABEL_123;
        v27 = v6[2];
        v114 = v27;
        if ( v5 )
        {
          if ( (v27 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v27 >= 0x7FFFFFFF0000LL )
            v27 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v27 = *(_BYTE *)v27;
          *(_BYTE *)(v27 + 63) = *(_BYTE *)(v27 + 63);
          v6 = v97;
          v27 = v114;
        }
        *(_QWORD *)(a4 + 32) = v27;
        v28 = v6[3];
        v104 = v28;
        if ( v28 )
        {
          if ( v5 )
          {
            if ( (v28 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v28 >= 0x7FFFFFFF0000LL )
              v28 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v28 = *(_BYTE *)v28;
            *(_BYTE *)(v28 + 7) = *(_BYTE *)(v28 + 7);
            v6 = v97;
            v28 = v104;
          }
          *(_QWORD *)v28 = 64LL;
        }
      }
    }
LABEL_30:
    v6 += 4;
    v97 = v6;
    --v100;
  }
  if ( (unsigned int)v8 > 0x3000E )
  {
    v18 = v8 - 196623;
    if ( v18 )
    {
      v19 = v18 - 196593;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 15;
            if ( v22 )
            {
              if ( v22 != 9 || v6[1] != 1LL )
                goto LABEL_123;
              *(_BYTE *)(a4 + 9) = *(_BYTE *)(a4 + 9) & 0x7F | (v6[2] != 0LL ? 0x80 : 0);
            }
            else
            {
              if ( v6[1] != 1LL )
                goto LABEL_123;
              v66.Level = *((_BYTE *)v6 + 16);
              *(PS_PROTECTION *)(a4 + 376) = v66;
              if ( !RtlValidProcessProtection(v66) )
                goto LABEL_123;
            }
          }
          else
          {
            if ( v6[1] != 8LL )
              goto LABEL_123;
            *(_QWORD *)(a4 + 144) = v6[2];
          }
        }
        else
        {
          if ( v6[1] != 8LL )
            goto LABEL_123;
          *(_QWORD *)(a4 + 136) = v6[2];
        }
      }
      else
      {
        if ( v6[1] != 8LL )
          goto LABEL_123;
        *(_QWORD *)(a4 + 120) = v6[2];
      }
      goto LABEL_30;
    }
    if ( !a3 || !v5 || v6[1] != 24LL )
      goto LABEL_123;
    v128 = (_OWORD *)v6[2];
    if ( ((unsigned __int8)v128 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v92 = v128;
    *(_OWORD *)(a4 + 336) = *v128;
    *(_QWORD *)(a4 + 352) = *((_QWORD *)v92 + 2);
    if ( *(_DWORD *)(a4 + 336) != 256 )
      goto LABEL_123;
    UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
    v94 = *(_QWORD *)(a4 + 344);
    if ( UmsContextExtendedSize - 1 > v95 )
    {
      if ( UmsContextExtendedSize )
      {
        if ( (v94 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v94 + UmsContextExtendedSize > 0x7FFFFFFF0000LL || v94 + UmsContextExtendedSize < v94 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else if ( (v94 & 3) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v96 = *(_QWORD *)(a4 + 352);
    if ( (v96 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    goto LABEL_176;
  }
  if ( (_DWORD)v8 == 196622 )
  {
    if ( !a3 || v6[1] != 4LL )
      goto LABEL_123;
    v32 = (_PROCESSOR_NUMBER *)v6[2];
    v127 = v32;
    if ( v5 )
    {
      if ( ((unsigned __int8)v32 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = v97;
      v32 = v127;
    }
    ProcNumber = *v32;
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
    *(_DWORD *)(a4 + 252) = ProcessorIndexFromNumber;
    v7 = 0xFFFFFFFFLL;
    if ( ProcessorIndexFromNumber == -1 )
      goto LABEL_123;
    goto LABEL_62;
  }
  v36 = v8 - 131093;
  if ( !v36 )
  {
    if ( v6[1] != 4LL )
      goto LABEL_123;
    v91 = (_DWORD *)v6[2];
    v126 = v91;
    if ( v5 )
    {
      if ( ((unsigned __int8)v91 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = v97;
      v91 = v126;
    }
    *(_DWORD *)(a4 + 412) = *v91;
    goto LABEL_30;
  }
  v37 = v36 - 1;
  if ( v37 )
  {
    v48 = v37 - 1;
    if ( !v48 )
    {
      v88 = v6[1];
      if ( v88 > 0xFFFF )
        goto LABEL_123;
      v89 = (char *)v6[2];
      v137 = v89;
      if ( v5 && v88 && ((unsigned __int64)&v89[v88] > 0x7FFFFFFF0000LL || &v89[v88] < v89) )
        MEMORY[0x7FFFFFFF0000] = 0;
      v90 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v88, 0x634F7350u);
      *(_QWORD *)(a4 + 416) = v90;
      if ( !v90 )
        goto LABEL_205;
      memmove(v90, v89, v88);
      *(_DWORD *)(a4 + 424) = v88;
      goto LABEL_61;
    }
    v49 = v48 - 1;
    if ( !v49 )
    {
      if ( v6[1] != 40LL )
        goto LABEL_123;
      v50 = v6[2];
      v124 = v50;
      if ( v5 )
      {
        if ( (v50 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v6 = v97;
        v50 = v124;
      }
      v51 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x70426E50u);
      v52 = (__int64 *)(a4 + 432);
      Src = (void *)(a4 + 432);
      *(_QWORD *)(a4 + 432) = v51;
      if ( !v51 )
        goto LABEL_205;
      memset(v51, 0, 0x28uLL);
      v53 = (__int16 *)*v52;
      *(_OWORD *)v53 = *(_OWORD *)v50;
      *((_OWORD *)v53 + 1) = *(_OWORD *)(v50 + 16);
      *((_QWORD *)v53 + 4) = *(_QWORD *)(v50 + 32);
      v54 = (__int16 *)*v52;
      v134 = v54;
      v55 = (void *)*((_QWORD *)v54 + 1);
      Src = v55;
      v135 = v55;
      v56 = (const void *)*((_QWORD *)v54 + 3);
      v136 = v56;
      *((_QWORD *)v54 + 1) = 0LL;
      *(_QWORD *)(*v52 + 24) = 0LL;
      v57 = *v54;
      if ( *v54 )
      {
        v58 = v54[1];
        if ( v57 > v58 || ((v57 | v58) & 1) != 0 || v58 == 0xFFFF || !v55 )
          goto LABEL_123;
        v59 = a2;
        if ( a2 )
        {
          if ( v58 )
          {
            v60 = (unsigned __int64)v55 + v58;
            if ( v60 > 0x7FFFFFFF0000LL || v60 < (unsigned __int64)v55 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
      }
      else
      {
        v59 = a2;
      }
      v61 = *(_DWORD *)(*v52 + 16);
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
      v108 = 0LL;
      v65 = v54[1];
      if ( v65 || *(_DWORD *)(*v52 + 16) )
      {
        v64 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v65 + 8LL * *(unsigned int *)(*v52 + 16), 0x70426E50u);
        v108 = v64;
        v55 = Src;
      }
      if ( v54[1] )
      {
        *((_QWORD *)v54 + 1) = v64;
        memmove(v64, v55, (unsigned __int16)v54[1]);
        v64 += (unsigned __int16)v54[1];
        v108 = v64;
      }
      if ( *(_DWORD *)(*v52 + 16) )
      {
        *(_QWORD *)(*v52 + 24) = v64;
        memmove(*(void **)(*v52 + 24), v56, 8LL * *(unsigned int *)(*v52 + 16));
      }
      goto LABEL_61;
    }
    v86 = v49 - 1;
    if ( v86 )
    {
      if ( v86 != 65523 || !a3 || v6[1] != 16LL )
        goto LABEL_123;
      v82 = (_OWORD *)v6[2];
      v122 = v82;
      if ( v5 )
      {
        if ( ((unsigned __int8)v82 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v6 = v97;
        v82 = v122;
      }
      *(_OWORD *)(a4 + 320) = *v82;
      AttributeWellFormed = KeVerifyGroupAffinity(a4 + 320, 1);
      goto LABEL_244;
    }
    if ( v6[1] != 4LL )
      goto LABEL_123;
    v87 = (_DWORD *)v6[2];
    v123 = v87;
    if ( v5 )
    {
      if ( ((unsigned __int8)v87 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = v97;
      v87 = v123;
    }
    *(_DWORD *)(a4 + 440) = *v87;
    goto LABEL_30;
  }
  if ( v6[1] != 8LL )
    goto LABEL_123;
  v38 = v6[2];
  v138 = v38;
  if ( v5 )
  {
    if ( (v38 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v38 + 8 > 0x7FFFFFFF0000LL || v38 + 8 < v38 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v39 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8uLL, 0x77736350u);
  *(_QWORD *)(a4 + 464) = v39;
  if ( v39 )
  {
    *v39 = *(_QWORD *)v38;
    v40 = *(_DWORD **)(a4 + 464);
    if ( (*v40 & 3) == 0 || (unsigned int)(v40[1] - 1) > 5 )
      goto LABEL_123;
    goto LABEL_61;
  }
  v14 = -1073741801;
LABEL_322:
  if ( v14 < 0 )
    goto LABEL_326;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 296), *(unsigned int *)(a4 + 292), 8uLL, PspSortHandleList);
    if ( **(int **)(a4 + 296) < 0 )
      v14 = -1073741811;
    *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0xFE | (v106 != 0);
  }
  if ( v14 < 0 )
LABEL_326:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v14;
}
