/*
 * XREFs of PspBuildCreateProcessContext @ 0x140542C84
 * Callers:
 *     NtCreateThreadEx @ 0x140541434 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 * Callees:
 *     KeVerifyGroupAffinity @ 0x140036394 (KeVerifyGroupAffinity.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     KeGetProcessorIndexFromNumber @ 0x140088D10 (KeGetProcessorIndexFromNumber.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x140239C40 (IsTrustletCreateAttributeWellFormed.c)
 *     RtlGetUmsContextExtendedSize @ 0x140243DEC (RtlGetUmsContextExtendedSize.c)
 *     PspValidateMitigationOptions @ 0x14044C848 (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x14045E450 (RtlValidProcessProtection.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PspDeleteCreateProcessContext @ 0x14054168C (PspDeleteCreateProcessContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(__int64 *a1, char a2, int a3, __int64 a4)
{
  char v5; // r9
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  int v13; // ebx
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int v17; // eax
  SIZE_T v18; // rbx
  char *v19; // r15
  PVOID v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // edx
  int v30; // eax
  _BYTE *v31; // rax
  _PROCESSOR_NUMBER *v32; // rax
  ULONG ProcessorIndexFromNumber; // eax
  bool v34; // zf
  PS_PROTECTION v35; // cl
  _DWORD *v36; // rax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  size_t v40; // r8
  unsigned __int64 v41; // rdx
  __m128i v42; // xmm6
  _DWORD *v43; // rax
  int v44; // eax
  int v45; // eax
  unsigned __int64 v46; // rbx
  _QWORD *v47; // rax
  _DWORD *v48; // rcx
  _WORD *v49; // rax
  SIZE_T v50; // rbx
  char *v51; // r15
  PVOID PoolWithQuotaTag; // rax
  SIZE_T v54; // rbx
  char *v55; // r15
  PVOID v56; // rax
  int v57; // eax
  SIZE_T v58; // rbx
  SIZE_T v59; // r12
  PVOID v60; // rax
  unsigned __int64 v61; // r15
  SIZE_T v62; // rbx
  char *v63; // r15
  PVOID v64; // rax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  _OWORD *v68; // rax
  _DWORD *v69; // rax
  __int64 v70; // r15
  PVOID v71; // rax
  __int64 v72; // rax
  __int16 *v73; // r15
  const void *v74; // r13
  const void *v75; // r12
  unsigned __int16 v76; // dx
  unsigned __int16 v77; // cx
  char v78; // dl
  unsigned __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  char *v82; // rbx
  unsigned __int16 v83; // r8
  __int64 v84; // rax
  SIZE_T v85; // rbx
  char *v86; // r15
  PVOID v87; // rax
  _DWORD *v88; // rax
  _OWORD *v89; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // r10
  __int64 v93; // rax
  _QWORD *v94; // [rsp+48h] [rbp-1C0h]
  __int64 v95; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v96; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v97; // [rsp+50h] [rbp-1B8h]
  unsigned __int16 v98; // [rsp+58h] [rbp-1B0h]
  unsigned __int64 v99; // [rsp+68h] [rbp-1A0h]
  unsigned __int64 v100; // [rsp+68h] [rbp-1A0h]
  unsigned __int64 v101; // [rsp+68h] [rbp-1A0h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+74h] [rbp-194h] BYREF
  int v103; // [rsp+78h] [rbp-190h]
  char *v104; // [rsp+80h] [rbp-188h]
  __int64 v105; // [rsp+90h] [rbp-178h]
  int v106; // [rsp+A0h] [rbp-168h]
  int v107; // [rsp+A8h] [rbp-160h]
  _BYTE *v108; // [rsp+B0h] [rbp-158h]
  unsigned __int64 v109; // [rsp+B8h] [rbp-150h]
  unsigned __int64 v110; // [rsp+C0h] [rbp-148h]
  unsigned __int64 v111; // [rsp+C8h] [rbp-140h]
  _DWORD *v112; // [rsp+D0h] [rbp-138h]
  __int64 v113; // [rsp+D8h] [rbp-130h] BYREF
  unsigned __int64 v114; // [rsp+E0h] [rbp-128h]
  _WORD *v115; // [rsp+E8h] [rbp-120h]
  char *v116; // [rsp+F0h] [rbp-118h]
  _DWORD *v117; // [rsp+F8h] [rbp-110h]
  _DWORD *v118; // [rsp+100h] [rbp-108h]
  _OWORD *v119; // [rsp+108h] [rbp-100h]
  _DWORD *v120; // [rsp+110h] [rbp-F8h]
  __int64 v121; // [rsp+118h] [rbp-F0h]
  _DWORD *v122; // [rsp+120h] [rbp-E8h]
  _PROCESSOR_NUMBER *v123; // [rsp+128h] [rbp-E0h]
  _OWORD *v124; // [rsp+130h] [rbp-D8h]
  unsigned __int64 v125; // [rsp+138h] [rbp-D0h]
  char *v126; // [rsp+140h] [rbp-C8h]
  char *v127; // [rsp+148h] [rbp-C0h]
  PVOID v128; // [rsp+150h] [rbp-B8h]
  char *v129; // [rsp+158h] [rbp-B0h]
  __int16 *v130; // [rsp+160h] [rbp-A8h]
  const void *v131; // [rsp+168h] [rbp-A0h]
  const void *v132; // [rsp+170h] [rbp-98h]
  char *v133; // [rsp+178h] [rbp-90h]
  unsigned __int64 v134; // [rsp+180h] [rbp-88h]
  __m128i v135; // [rsp+190h] [rbp-78h] BYREF
  __m128i v136; // [rsp+1A0h] [rbp-68h] BYREF
  int v138; // [rsp+220h] [rbp+18h]

  v138 = a3;
  v5 = a2;
  v103 = a3;
  v105 = a4;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v95 = *a1;
  if ( (unsigned __int64)*a1 < 0x28 )
    return 3221225485LL;
  if ( a2 && *a1 != 40 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v95 > 0x7FFFFFFF0000LL || (__int64 *)((char *)a1 + v95) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v96 = v95 - 8;
  if ( (v96 & 0x1F) != 0 )
    return 3221225485LL;
  v97 = v96 >> 5;
  v6 = a1 + 1;
  v94 = a1 + 1;
  while ( 1 )
  {
    if ( !v97 )
    {
      v13 = 0;
      goto LABEL_317;
    }
    v7 = *v6;
    v125 = *v6;
    if ( a3 && (v7 & 0x10000) == 0
      || (v7 & 0x20000) != 0 && v6[3]
      || (v107 = 1 << v7, v8 = *(_DWORD *)(a4 + 4), (v8 & (1 << v7)) != 0)
      || (*(_DWORD *)(a4 + 4) = (1 << v7) | v8, v7 > 0x60011) )
    {
LABEL_154:
      v13 = -1073741811;
      goto LABEL_317;
    }
    if ( (unsigned int)v7 > 0x20014 )
      break;
    if ( (_DWORD)v7 == 131092 )
    {
      if ( v6[1] != 4LL )
        goto LABEL_154;
      v43 = (_DWORD *)v6[2];
      v118 = v43;
      if ( v5 )
      {
        if ( ((unsigned __int8)v43 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v6 = v94;
        v43 = v118;
      }
      *(_DWORD *)(a4 + 408) = *v43;
      goto LABEL_30;
    }
    if ( (unsigned int)v7 > 0x20009 )
    {
      v27 = v7 - 131082;
      if ( !v27 )
      {
        if ( v6[1] != 8LL )
          goto LABEL_154;
        v28 = (_DWORD *)v6[2];
        v117 = v28;
        if ( v5 )
        {
          if ( ((unsigned __int8)v28 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v6 = v94;
          v28 = v117;
        }
        if ( (*v28 & 0x1C) != 0 )
        {
          v13 = -1073741637;
          goto LABEL_317;
        }
        v29 = *v28 & 3;
        v106 = v29;
        if ( (unsigned __int8)v29 >= 3u )
          goto LABEL_154;
        *(_BYTE *)(a4 + 9) ^= (*(_BYTE *)(a4 + 9) ^ (4 * v29)) & 0xC;
        if ( v29 == 1 )
          *(_DWORD *)(a4 + 288) = v28[1];
        goto LABEL_30;
      }
      v37 = v27 - 1;
      if ( !v37 )
      {
        v50 = v6[1];
        if ( !v50 || (v50 & 7) != 0 || v50 >> 3 > 0xFFFFFFFF )
          goto LABEL_154;
        v51 = (char *)v6[2];
        v116 = v51;
        if ( v5 )
        {
          if ( ((unsigned __int8)v51 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v51[v50] > 0x7FFFFFFF0000LL || &v51[v50] < v51 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v50, 0x6C487350u);
        *(_QWORD *)(a4 + 296) = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
LABEL_182:
          v13 = -1073741670;
          goto LABEL_317;
        }
        memmove(PoolWithQuotaTag, v51, v50);
        *(_DWORD *)(a4 + 292) = v50 >> 3;
        goto LABEL_52;
      }
      v38 = v37 - 2;
      if ( v38 )
      {
        v39 = v38 - 3;
        if ( !v39 )
        {
          v40 = v6[1];
          if ( v40 > 0x10 )
            goto LABEL_154;
          v136 = 0uLL;
          v41 = v6[2];
          if ( v5 && v41 >= 0x7FFFFFFF0000LL )
            v41 = 0x7FFFFFFF0000LL;
          memmove(&v136, (const void *)v41, v40);
          v42 = v136;
          v135 = v136;
          v13 = PspValidateMitigationOptions(&v135, 0);
          if ( v13 < 0 )
            goto LABEL_317;
          *(__m128i *)(a4 + 360) = v42;
          goto LABEL_52;
        }
        v57 = v39 - 2;
        if ( v57 )
        {
          if ( v57 != 1 )
            goto LABEL_154;
          v58 = v6[1];
          if ( !v58 || (v58 & 7) != 0 || v58 >> 3 > 0xFFFFFFFF )
            goto LABEL_154;
          v59 = v6[2];
          v116 = (char *)v59;
          if ( v5 )
          {
            if ( (v59 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v59 + v58 > 0x7FFFFFFF0000LL || v59 + v58 < v59 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v60 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v58, 0x6C4A7350u);
          *(_QWORD *)(a4 + 392) = v60;
          if ( !v60 )
            goto LABEL_182;
          memset(v60, 0, v58);
          *(_DWORD *)(a4 + 404) = v58 >> 3;
          v61 = 0LL;
          v114 = 0LL;
          while ( v61 < *(unsigned int *)(a4 + 404) )
          {
            v13 = ObpReferenceObjectByHandleWithTag(
                    *(_QWORD *)(v59 + 8 * v61),
                    1,
                    (__int64)PsJobType,
                    a2,
                    1816818512,
                    &v113,
                    0LL,
                    0LL);
            if ( v13 < 0 )
              goto LABEL_317;
            *(_QWORD *)(*(_QWORD *)(a4 + 392) + 8 * v61++) = v113;
            v114 = v61;
          }
          goto LABEL_52;
        }
        v62 = v6[1];
        if ( !v62 || (v62 & 7) != 0 || v62 > 0x88 )
          goto LABEL_154;
        v63 = (char *)v6[2];
        v129 = v63;
        if ( v5 )
        {
          if ( ((unsigned __int8)v63 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v63[v62] > 0x7FFFFFFF0000LL || &v63[v62] < v63 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v64 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v62, 0x61547350u);
        *(_QWORD *)(a4 + 384) = v64;
        if ( !v64 )
          goto LABEL_182;
        memmove(v64, v63, v62);
        *(_DWORD *)(a4 + 400) = v62;
        v34 = !IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 384), v62);
LABEL_102:
        if ( v34 )
          goto LABEL_154;
LABEL_52:
        a3 = v138;
        v5 = a2;
        goto LABEL_30;
      }
      if ( v6[1] != 2LL )
        goto LABEL_154;
      v49 = (_WORD *)v6[2];
      v115 = v49;
      if ( v5 )
      {
        if ( ((unsigned __int8)v49 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v49 = v115;
      }
      v98 = *v49;
      if ( *v49 >= (unsigned __int16)KeNumberNodes )
        goto LABEL_154;
      _mm_lfence();
      if ( !*(_QWORD *)(KeNodeBlock[v98] + 136) )
        goto LABEL_154;
      *(_WORD *)(a4 + 250) = v98;
LABEL_153:
      v6 = v94;
      goto LABEL_30;
    }
    if ( (_DWORD)v7 == 131081 )
    {
      if ( v6[1] != 4LL )
        goto LABEL_154;
      v36 = (_DWORD *)v6[2];
      v112 = v36;
      if ( v5 )
      {
        if ( ((unsigned __int8)v36 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v6 = v94;
        v36 = v112;
      }
      *(_DWORD *)(a4 + 316) = *v36;
    }
    else
    {
      v9 = v7 - 6;
      if ( v9 )
      {
        v10 = v9 - 65533;
        if ( v10 )
        {
          v14 = v10 - 1;
          if ( v14 )
          {
            v17 = v14 - 65537;
            if ( !v17 )
            {
              v18 = v6[1];
              if ( !v18 || (v18 & 1) != 0 || v18 > 0xFFFF )
                goto LABEL_154;
              v19 = (char *)v6[2];
              v127 = v19;
              if ( v5 && ((unsigned __int64)&v19[v18] > 0x7FFFFFFF0000LL || &v19[v18] < v19) )
                MEMORY[0x7FFFFFFF0000] = 0;
              v20 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v18, 0x6E467350u);
              v128 = v20;
              if ( !v20 )
                goto LABEL_182;
              *(_WORD *)(a4 + 232) = 0;
              *(_WORD *)(a4 + 234) = v18;
              *(_QWORD *)(a4 + 240) = v20;
              memmove(v20, v19, v18);
              *(_WORD *)(a4 + 232) = v18;
              goto LABEL_52;
            }
            v30 = v17 - 2;
            if ( !v30 )
            {
              v54 = v6[1];
              if ( !v54 || (v54 & 0xF) != 0 )
                goto LABEL_154;
              v55 = (char *)v6[2];
              v126 = v55;
              if ( v5 )
              {
                if ( ((unsigned __int8)v55 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( (unsigned __int64)&v55[v54] > 0x7FFFFFFF0000LL || &v55[v54] < v55 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              if ( v54 > 0x10 )
              {
                v56 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v54, 0x6C527350u);
                *(_QWORD *)(a4 + 280) = v56;
                if ( !v56 )
                  goto LABEL_182;
              }
              else
              {
                *(_QWORD *)(a4 + 280) = a4 + 264;
              }
              memmove(*(void **)(a4 + 280), v55, v54);
              *(_QWORD *)(a4 + 256) = v54 >> 4;
              goto LABEL_52;
            }
            if ( v30 != 1 || v6[1] != 1LL )
              goto LABEL_154;
            v31 = (_BYTE *)v6[2];
            v108 = v31;
            if ( v5 )
            {
              v6 = v94;
              v31 = v108;
            }
            *(_BYTE *)(a4 + 248) = *v31;
          }
          else
          {
            if ( v6[1] != 8LL )
              goto LABEL_154;
            v15 = v6[2];
            v109 = v15;
            if ( v5 )
            {
              if ( (v15 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v15 >= 0x7FFFFFFF0000LL )
                v15 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v15 = *(_BYTE *)v15;
              *(_BYTE *)(v15 + 7) = *(_BYTE *)(v15 + 7);
              v6 = v94;
              v15 = v109;
            }
            *(_QWORD *)(a4 + 24) = v15;
            v16 = v6[3];
            v100 = v16;
            if ( v16 )
            {
              if ( v5 )
              {
                if ( (v16 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v16 >= 0x7FFFFFFF0000LL )
                  v16 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v16 = *(_BYTE *)v16;
                *(_BYTE *)(v16 + 7) = *(_BYTE *)(v16 + 7);
                v6 = v94;
                v16 = v100;
              }
              *(_QWORD *)v16 = 8LL;
            }
          }
        }
        else
        {
          if ( v6[1] != 16LL )
            goto LABEL_154;
          v11 = v6[2];
          v110 = v11;
          if ( v5 )
          {
            if ( (v11 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v11 >= 0x7FFFFFFF0000LL )
              v11 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v11 = *(_BYTE *)v11;
            *(_BYTE *)(v11 + 15) = *(_BYTE *)(v11 + 15);
            v6 = v94;
            v11 = v110;
          }
          *(_QWORD *)(a4 + 16) = v11;
          v12 = v6[3];
          v99 = v12;
          if ( v12 )
          {
            if ( v5 )
            {
              if ( (v12 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v12 >= 0x7FFFFFFF0000LL )
                v12 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v12 = *(_BYTE *)v12;
              *(_BYTE *)(v12 + 7) = *(_BYTE *)(v12 + 7);
              v6 = v94;
              v12 = v99;
            }
            *(_QWORD *)v12 = 16LL;
          }
        }
      }
      else
      {
        if ( v6[1] != 64LL )
          goto LABEL_154;
        v21 = v6[2];
        v111 = v21;
        if ( v5 )
        {
          if ( (v21 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v21 >= 0x7FFFFFFF0000LL )
            v21 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v21 = *(_BYTE *)v21;
          *(_BYTE *)(v21 + 63) = *(_BYTE *)(v21 + 63);
          v6 = v94;
          v21 = v111;
        }
        *(_QWORD *)(a4 + 32) = v21;
        v22 = v6[3];
        v101 = v22;
        if ( v22 )
        {
          if ( v5 )
          {
            if ( (v22 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v22 >= 0x7FFFFFFF0000LL )
              v22 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v22 = *(_BYTE *)v22;
            *(_BYTE *)(v22 + 7) = *(_BYTE *)(v22 + 7);
            v6 = v94;
            v22 = v101;
          }
          *(_QWORD *)v22 = 64LL;
        }
      }
    }
LABEL_30:
    v6 += 4;
    v94 = v6;
    --v97;
  }
  if ( (unsigned int)v7 > 0x3000E )
  {
    v23 = v7 - 196623;
    if ( v23 )
    {
      v24 = v23 - 196593;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 != 15 )
              goto LABEL_154;
            if ( v6[1] != 1LL )
              goto LABEL_154;
            v35.Level = *((_BYTE *)v6 + 16);
            *(PS_PROTECTION *)(a4 + 376) = v35;
            if ( !RtlValidProcessProtection(v35) )
              goto LABEL_154;
          }
          else
          {
            if ( v6[1] != 8LL )
              goto LABEL_154;
            *(_QWORD *)(a4 + 144) = v6[2];
          }
        }
        else
        {
          if ( v6[1] != 8LL )
            goto LABEL_154;
          *(_QWORD *)(a4 + 136) = v6[2];
        }
      }
      else
      {
        if ( v6[1] != 8LL )
          goto LABEL_154;
        *(_QWORD *)(a4 + 120) = v6[2];
      }
      goto LABEL_30;
    }
    if ( !a3 || !v5 || v6[1] != 24LL )
      goto LABEL_154;
    v124 = (_OWORD *)v6[2];
    if ( ((unsigned __int8)v124 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v89 = v124;
    *(_OWORD *)(a4 + 336) = *v124;
    *(_QWORD *)(a4 + 352) = *((_QWORD *)v89 + 2);
    if ( *(_DWORD *)(a4 + 336) != 256 )
      goto LABEL_154;
    UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
    v91 = *(_QWORD *)(a4 + 344);
    if ( UmsContextExtendedSize - 1 > v92 )
    {
      if ( UmsContextExtendedSize )
      {
        if ( (v91 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v91 + UmsContextExtendedSize > 0x7FFFFFFF0000LL || v91 + UmsContextExtendedSize < v91 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else if ( (v91 & 3) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v93 = *(_QWORD *)(a4 + 352);
    if ( (v93 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    goto LABEL_153;
  }
  if ( (_DWORD)v7 == 196622 )
  {
    if ( !a3 || v6[1] != 4LL )
      goto LABEL_154;
    v32 = (_PROCESSOR_NUMBER *)v6[2];
    v123 = v32;
    if ( v5 )
    {
      if ( ((unsigned __int8)v32 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = v94;
      v32 = v123;
    }
    ProcNumber = *v32;
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
    *(_DWORD *)(a4 + 252) = ProcessorIndexFromNumber;
    v34 = ProcessorIndexFromNumber == -1;
    goto LABEL_102;
  }
  v44 = v7 - 131093;
  if ( !v44 )
  {
    if ( v6[1] != 4LL )
      goto LABEL_154;
    v88 = (_DWORD *)v6[2];
    v122 = v88;
    if ( v5 )
    {
      if ( ((unsigned __int8)v88 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = v94;
      v88 = v122;
    }
    *(_DWORD *)(a4 + 412) = *v88;
    goto LABEL_30;
  }
  v45 = v44 - 1;
  if ( v45 )
  {
    v65 = v45 - 1;
    if ( !v65 )
    {
      v85 = v6[1];
      if ( v85 > 0xFFFF )
        goto LABEL_154;
      v86 = (char *)v6[2];
      v133 = v86;
      if ( v5 && v85 && ((unsigned __int64)&v86[v85] > 0x7FFFFFFF0000LL || &v86[v85] < v86) )
        MEMORY[0x7FFFFFFF0000] = 0;
      v87 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v85, 0x634F7350u);
      *(_QWORD *)(a4 + 416) = v87;
      if ( !v87 )
        goto LABEL_182;
      memmove(v87, v86, v85);
      *(_DWORD *)(a4 + 424) = v85;
      goto LABEL_52;
    }
    v66 = v65 - 1;
    if ( !v66 )
    {
      if ( v6[1] != 40LL )
        goto LABEL_154;
      v70 = v6[2];
      v121 = v70;
      if ( v5 )
      {
        if ( (v70 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v6 = v94;
        v70 = v121;
      }
      v71 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x70426E50u);
      *(_QWORD *)(a4 + 432) = v71;
      if ( !v71 )
        goto LABEL_182;
      memset(v71, 0, 0x28uLL);
      v72 = *(_QWORD *)(a4 + 432);
      *(_OWORD *)v72 = *(_OWORD *)v70;
      *(_OWORD *)(v72 + 16) = *(_OWORD *)(v70 + 16);
      *(_QWORD *)(v72 + 32) = *(_QWORD *)(v70 + 32);
      v73 = *(__int16 **)(a4 + 432);
      v130 = v73;
      v74 = (const void *)*((_QWORD *)v73 + 1);
      v131 = v74;
      v75 = (const void *)*((_QWORD *)v73 + 3);
      v132 = v75;
      *((_QWORD *)v73 + 1) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a4 + 432) + 24LL) = 0LL;
      v76 = *v73;
      if ( *v73 )
      {
        v77 = v73[1];
        if ( v76 > v77 || ((v76 | v77) & 1) != 0 || v77 == 0xFFFF || !v74 )
          goto LABEL_154;
        v78 = a2;
        if ( a2 )
        {
          if ( v77 )
          {
            v79 = (unsigned __int64)v74 + v77;
            if ( v79 > 0x7FFFFFFF0000LL || v79 < (unsigned __int64)v74 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
      }
      else
      {
        v78 = a2;
      }
      v80 = *(unsigned int *)(*(_QWORD *)(a4 + 432) + 16LL);
      if ( (_DWORD)v80 )
      {
        if ( !v75 || (unsigned int)v80 > 0xFFFF )
          goto LABEL_154;
        if ( v78 )
        {
          if ( ((unsigned __int8)v75 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v81 = (unsigned __int64)v75 + 8 * v80;
          if ( v81 > 0x7FFFFFFF0000LL || v81 < (unsigned __int64)v75 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      v82 = 0LL;
      v104 = 0LL;
      v83 = v73[1];
      if ( v83 || *(_DWORD *)(*(_QWORD *)(a4 + 432) + 16LL) )
      {
        v82 = (char *)ExAllocatePoolWithQuotaTag(
                        (POOL_TYPE)520,
                        v83 + 8LL * *(unsigned int *)(*(_QWORD *)(a4 + 432) + 16LL),
                        0x70426E50u);
        v104 = v82;
      }
      if ( v73[1] )
      {
        *((_QWORD *)v73 + 1) = v82;
        memmove(v82, v74, (unsigned __int16)v73[1]);
        v82 += (unsigned __int16)v73[1];
        v104 = v82;
      }
      v84 = *(_QWORD *)(a4 + 432);
      if ( *(_DWORD *)(v84 + 16) )
      {
        *(_QWORD *)(v84 + 24) = v82;
        memmove(*(void **)(*(_QWORD *)(a4 + 432) + 24LL), v75, 8LL * *(unsigned int *)(*(_QWORD *)(a4 + 432) + 16LL));
      }
      goto LABEL_52;
    }
    v67 = v66 - 1;
    if ( v67 )
    {
      if ( v67 != 65523 || !a3 || v6[1] != 16LL )
        goto LABEL_154;
      v68 = (_OWORD *)v6[2];
      v119 = v68;
      if ( v5 )
      {
        if ( ((unsigned __int8)v68 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v6 = v94;
        v68 = v119;
      }
      *(_OWORD *)(a4 + 320) = *v68;
      if ( !KeVerifyGroupAffinity(a4 + 320, 1) )
        goto LABEL_154;
      goto LABEL_52;
    }
    if ( v6[1] != 4LL )
      goto LABEL_154;
    v69 = (_DWORD *)v6[2];
    v120 = v69;
    if ( v5 )
    {
      if ( ((unsigned __int8)v69 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = v94;
      v69 = v120;
    }
    *(_DWORD *)(a4 + 440) = *v69;
    goto LABEL_30;
  }
  if ( v6[1] != 8LL )
    goto LABEL_154;
  v46 = v6[2];
  v134 = v46;
  if ( v5 )
  {
    if ( (v46 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v46 + 8 > 0x7FFFFFFF0000LL || v46 + 8 < v46 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v47 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8uLL, 0x77736350u);
  *(_QWORD *)(a4 + 464) = v47;
  if ( v47 )
  {
    *v47 = *(_QWORD *)v46;
    v48 = *(_DWORD **)(a4 + 464);
    if ( (*v48 & 3) == 0 || (unsigned int)(v48[1] - 1) > 2 )
      goto LABEL_154;
    goto LABEL_52;
  }
  v13 = -1073741801;
LABEL_317:
  if ( v13 < 0 )
    goto LABEL_324;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(
      *(void **)(a4 + 296),
      *(unsigned int *)(a4 + 292),
      8uLL,
      (int (__cdecl *)(const void *, const void *))PspSortHandleList);
    if ( **(int **)(a4 + 296) < 0 )
      v13 = -1073741811;
    *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0xFE | (v103 != 0);
  }
  if ( v13 < 0 )
LABEL_324:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v13;
}
