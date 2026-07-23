/*
 * XREFs of PspBuildCreateProcessContext @ 0x1404BA110
 * Callers:
 *     NtCreateThreadEx @ 0x1404B9CEC (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 * Callees:
 *     KeVerifyGroupAffinity @ 0x140004C4C (KeVerifyGroupAffinity.c)
 *     KeGetProcessorIndexFromNumber @ 0x140038470 (KeGetProcessorIndexFromNumber.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x140284FA0 (IsTrustletCreateAttributeWellFormed.c)
 *     RtlGetUmsContextExtendedSize @ 0x140292E40 (RtlGetUmsContextExtendedSize.c)
 *     PspDeleteCreateProcessContext @ 0x1404B9F44 (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationOptions @ 0x140573C2C (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x140584870 (RtlValidProcessProtection.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(__int64 *a1, char a2, int a3, __int64 a4)
{
  char v4; // r10
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // ebx
  int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  SIZE_T v28; // rbx
  char *v29; // r15
  PVOID v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  int v33; // eax
  _DWORD *v34; // rdx
  int v35; // r8d
  int v36; // eax
  _BYTE *v37; // rax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  size_t v41; // r8
  unsigned __int64 v42; // rdx
  __int128 v43; // xmm6
  _DWORD *v44; // rax
  int v45; // eax
  int v46; // eax
  unsigned __int64 v47; // rbx
  _QWORD *v48; // rax
  _DWORD *v49; // rcx
  _DWORD *v50; // rax
  PS_PROTECTION v51; // cl
  char valid; // al
  bool v53; // zf
  int v54; // eax
  int v55; // eax
  int v56; // eax
  _DWORD *v57; // rax
  _WORD *v58; // rax
  SIZE_T v59; // rbx
  char *v60; // r15
  PVOID PoolWithQuotaTag; // rax
  SIZE_T v63; // rbx
  char *v64; // r15
  void *v65; // rcx
  int v66; // eax
  SIZE_T v67; // rbx
  SIZE_T v68; // r12
  PVOID v69; // rax
  unsigned __int64 v70; // r15
  unsigned __int64 i; // r13
  SIZE_T v72; // rbx
  char *v73; // r15
  PVOID v74; // rax
  _OWORD *v75; // rax
  SIZE_T v76; // r12
  const void *v77; // r15
  PVOID v78; // rax
  void **v79; // r13
  __int64 v80; // r11
  _QWORD *v81; // r15
  const void *v82; // r9
  const void *v83; // r12
  unsigned __int16 v84; // dx
  unsigned __int16 v85; // cx
  char v86; // r10
  unsigned __int64 v87; // rcx
  __int64 v88; // rdx
  _DWORD *v89; // rax
  __int64 v90; // rdx
  unsigned __int64 v91; // rdx
  char *v92; // rbx
  unsigned __int16 v93; // dx
  SIZE_T v94; // rbx
  char *v95; // r15
  PVOID v96; // rax
  _DWORD *v97; // rax
  _PROCESSOR_NUMBER *v98; // rax
  ULONG ProcessorIndexFromNumber; // eax
  _OWORD *v100; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int64 v102; // r9
  unsigned __int64 v103; // rcx
  __int64 v104; // rax
  _QWORD *v105; // [rsp+48h] [rbp-1D0h]
  unsigned __int16 v106; // [rsp+50h] [rbp-1C8h]
  unsigned __int64 v107; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v108; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v109; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v110; // [rsp+68h] [rbp-1B0h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+74h] [rbp-1A4h] BYREF
  int v112; // [rsp+78h] [rbp-1A0h]
  __int64 v113; // [rsp+80h] [rbp-198h]
  const void *v114; // [rsp+88h] [rbp-190h]
  __int64 v115; // [rsp+90h] [rbp-188h]
  char *v116; // [rsp+98h] [rbp-180h]
  __int64 v117; // [rsp+A0h] [rbp-178h]
  int v118; // [rsp+B4h] [rbp-164h]
  _BYTE *v119; // [rsp+B8h] [rbp-160h]
  unsigned __int64 v120; // [rsp+C0h] [rbp-158h]
  unsigned __int64 v121; // [rsp+C8h] [rbp-150h]
  unsigned __int64 v122; // [rsp+D0h] [rbp-148h]
  _DWORD *v123; // [rsp+D8h] [rbp-140h]
  __int64 v124; // [rsp+E0h] [rbp-138h] BYREF
  unsigned __int64 v125; // [rsp+E8h] [rbp-130h]
  _WORD *v126; // [rsp+F0h] [rbp-128h]
  char *v127; // [rsp+F8h] [rbp-120h]
  _DWORD *v128; // [rsp+100h] [rbp-118h]
  _DWORD *v129; // [rsp+108h] [rbp-110h]
  _OWORD *v130; // [rsp+110h] [rbp-108h]
  _DWORD *v131; // [rsp+118h] [rbp-100h]
  const void *v132; // [rsp+120h] [rbp-F8h]
  int v133; // [rsp+128h] [rbp-F0h]
  _DWORD *v134; // [rsp+138h] [rbp-E0h]
  _PROCESSOR_NUMBER *v135; // [rsp+140h] [rbp-D8h]
  _OWORD *v136; // [rsp+148h] [rbp-D0h]
  unsigned __int64 v137; // [rsp+150h] [rbp-C8h]
  char *v138; // [rsp+158h] [rbp-C0h]
  char *v139; // [rsp+160h] [rbp-B8h]
  PVOID v140; // [rsp+168h] [rbp-B0h]
  char *v141; // [rsp+170h] [rbp-A8h]
  _QWORD *v142; // [rsp+178h] [rbp-A0h]
  const void *v143; // [rsp+180h] [rbp-98h]
  const void *v144; // [rsp+188h] [rbp-90h]
  char *v145; // [rsp+190h] [rbp-88h]
  unsigned __int64 v146; // [rsp+198h] [rbp-80h]
  __int128 v147; // [rsp+1A0h] [rbp-78h] BYREF
  __int128 v148; // [rsp+1B0h] [rbp-68h] BYREF
  int v150; // [rsp+230h] [rbp+18h]

  v150 = a3;
  v115 = a4;
  v4 = a2;
  v112 = a3;
  v117 = a4;
  v6 = a4;
  v113 = a4;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = *a1;
  if ( (unsigned __int64)*a1 < 0x28 )
    return 3221225485LL;
  if ( v4 && v7 != 40 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v7 > 0x7FFFFFFF0000LL || (__int64 *)((char *)a1 + v7) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v8 = v7 - 8;
  if ( (v8 & 0x1F) != 0 )
    return 3221225485LL;
  v9 = v8 >> 5;
  v110 = v9;
  v10 = a1 + 1;
  v105 = a1 + 1;
  v11 = 0x7FFFFFFF8LL;
  while ( 1 )
  {
    if ( !v9 )
    {
      v18 = 0;
      goto LABEL_319;
    }
    v12 = *v10;
    v137 = *v10;
    if ( a3 && (v12 & 0x10000) == 0
      || (v12 & 0x20000) != 0 && v10[3]
      || (v118 = 1 << v12, v13 = *(_DWORD *)(a4 + 4), ((1 << v12) & v13) != 0)
      || (*(_DWORD *)(a4 + 4) = v13 | (1 << v12), v12 > 0x6001A) )
    {
LABEL_131:
      v18 = -1073741811;
      goto LABEL_319;
    }
    if ( (unsigned int)v12 <= 0x20014 )
    {
      if ( (_DWORD)v12 == 131092 )
      {
        if ( v10[1] != 4LL )
          goto LABEL_131;
        v44 = (_DWORD *)v10[2];
        v129 = v44;
        if ( v4 )
        {
          if ( ((unsigned __int8)v44 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = v105;
          v44 = v129;
        }
        *(_DWORD *)(a4 + 408) = *v44;
        goto LABEL_30;
      }
      if ( (unsigned int)v12 > 0x20009 )
      {
        v33 = v12 - 131082;
        if ( !v33 )
        {
          if ( v10[1] != 8LL )
            goto LABEL_131;
          v34 = (_DWORD *)v10[2];
          v128 = v34;
          if ( v4 )
          {
            if ( ((unsigned __int8)v34 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v10 = v105;
            v34 = v128;
          }
          if ( (*v34 & 0x1C) != 0 )
          {
            v18 = -1073741637;
            goto LABEL_319;
          }
          v35 = *v34 & 3;
          v133 = v35;
          if ( (unsigned __int8)v35 >= 3u )
            goto LABEL_131;
          *(_BYTE *)(a4 + 9) = *(_BYTE *)(a4 + 9) & 0xF3 | (4 * v35);
          if ( v35 == 1 )
            *(_DWORD *)(a4 + 288) = v34[1];
          goto LABEL_67;
        }
        v38 = v33 - 1;
        if ( !v38 )
        {
          v59 = v10[1];
          if ( !v59 || (v59 & 7) != 0 || (v59 & 0xFFFFFFFFFFFFFFF8uLL) > v11 )
            goto LABEL_131;
          v60 = (char *)v10[2];
          v127 = v60;
          if ( v4 )
          {
            if ( ((unsigned __int8)v60 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v60[v59] > 0x7FFFFFFF0000LL || &v60[v59] < v60 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v59, 0x6C487350u);
          *(_QWORD *)(a4 + 296) = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
LABEL_185:
            v18 = -1073741670;
            goto LABEL_319;
          }
          memmove(PoolWithQuotaTag, v60, v59);
          *(_DWORD *)(a4 + 292) = v59 >> 3;
          goto LABEL_66;
        }
        v39 = v38 - 2;
        if ( v39 )
        {
          v40 = v39 - 3;
          if ( !v40 )
          {
            v41 = v10[1];
            if ( v41 > 0x10 )
              goto LABEL_131;
            v148 = 0uLL;
            v42 = v10[2];
            if ( v4 && v42 >= 0x7FFFFFFF0000LL )
              v42 = 0x7FFFFFFF0000LL;
            memmove(&v148, (const void *)v42, v41);
            v43 = v148;
            v147 = v148;
            v18 = PspValidateMitigationOptions(&v147, 0LL);
            if ( v18 < 0 )
              goto LABEL_319;
            *(_OWORD *)(a4 + 360) = v43;
            goto LABEL_66;
          }
          v66 = v40 - 2;
          if ( v66 )
          {
            if ( v66 != 1 )
              goto LABEL_131;
            v67 = v10[1];
            if ( !v67 || (v67 & 7) != 0 || (v67 & 0xFFFFFFFFFFFFFFF8uLL) > v11 )
              goto LABEL_131;
            v68 = v10[2];
            v127 = (char *)v68;
            if ( v4 )
            {
              if ( (v68 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v68 + v67 > 0x7FFFFFFF0000LL || v68 + v67 < v68 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v69 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v67, 0x6C4A7350u);
            *(_QWORD *)(a4 + 392) = v69;
            if ( !v69 )
              goto LABEL_185;
            memset(v69, 0, v67);
            *(_DWORD *)(a4 + 404) = v67 >> 3;
            v70 = 0LL;
            v125 = 0LL;
            for ( i = 0LL; i < *(unsigned int *)(a4 + 404); ++i )
            {
              v18 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)(v68 + 8 * v70), 0x6C4A7350u, (__int64)&v124, 0LL, 0LL);
              if ( v18 < 0 )
                goto LABEL_319;
              *(_QWORD *)(*(_QWORD *)(a4 + 392) + 8 * v70) = v124;
              v70 = i + 1;
              v125 = i + 1;
            }
            goto LABEL_273;
          }
          v72 = v10[1];
          if ( !v72 || (v72 & 7) != 0 || v72 > 0x88 )
            goto LABEL_131;
          v73 = (char *)v10[2];
          v141 = v73;
          if ( v4 )
          {
            if ( ((unsigned __int8)v73 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v73[v72] > 0x7FFFFFFF0000LL || &v73[v72] < v73 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v74 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v72, 0x61547350u);
          *(_QWORD *)(a4 + 384) = v74;
          if ( !v74 )
            goto LABEL_185;
          memmove(v74, v73, v72);
          *(_DWORD *)(a4 + 400) = v72;
          if ( !IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 384), v72) )
            goto LABEL_131;
LABEL_66:
          v4 = a2;
          v11 = 0x7FFFFFFF8LL;
LABEL_67:
          a3 = v150;
          goto LABEL_30;
        }
        if ( v10[1] != 2LL )
          goto LABEL_131;
        v58 = (_WORD *)v10[2];
        v126 = v58;
        if ( v4 )
        {
          if ( ((unsigned __int8)v58 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v58 = v126;
        }
        v106 = *v58;
        if ( *v58 >= (unsigned __int16)KeNumberNodes )
          goto LABEL_131;
        _mm_lfence();
        if ( !*(_QWORD *)(KeNodeBlock[v106] + 136) )
          goto LABEL_131;
        *(_WORD *)(a4 + 250) = v106;
        goto LABEL_157;
      }
      if ( (_DWORD)v12 == 131081 )
      {
        if ( v10[1] != 4LL )
          goto LABEL_131;
        v50 = (_DWORD *)v10[2];
        v123 = v50;
        if ( v4 )
        {
          if ( ((unsigned __int8)v50 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = v105;
          v50 = v123;
        }
        *(_DWORD *)(a4 + 316) = *v50;
      }
      else
      {
        v14 = v12 - 6;
        if ( v14 )
        {
          v15 = v14 - 65533;
          if ( v15 )
          {
            v19 = v15 - 1;
            if ( v19 )
            {
              v27 = v19 - 65537;
              if ( !v27 )
              {
                v28 = v10[1];
                if ( !v28 || (v28 & 1) != 0 || v28 > 0xFFFF )
                  goto LABEL_131;
                v29 = (char *)v10[2];
                v139 = v29;
                if ( v4 && ((unsigned __int64)&v29[v28] > 0x7FFFFFFF0000LL || &v29[v28] < v29) )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v30 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v28, 0x6E467350u);
                v140 = v30;
                if ( !v30 )
                  goto LABEL_185;
                *(_WORD *)(a4 + 232) = 0;
                *(_WORD *)(a4 + 234) = v28;
                *(_QWORD *)(a4 + 240) = v30;
                memmove(v30, v29, v28);
                *(_WORD *)(a4 + 232) = v28;
                goto LABEL_66;
              }
              v36 = v27 - 2;
              if ( !v36 )
              {
                v63 = v10[1];
                if ( !v63 || (v63 & 0xF) != 0 )
                  goto LABEL_131;
                v64 = (char *)v10[2];
                v138 = v64;
                if ( v4 )
                {
                  if ( ((unsigned __int8)v64 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( (unsigned __int64)&v64[v63] > 0x7FFFFFFF0000LL || &v64[v63] < v64 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                if ( v63 > 0x10 )
                {
                  *(_QWORD *)(v6 + 280) = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v63, 0x6C527350u);
                  v65 = *(void **)(a4 + 280);
                  if ( !v65 )
                    goto LABEL_185;
                }
                else
                {
                  v65 = (void *)(a4 + 264);
                  *(_QWORD *)(v6 + 280) = a4 + 264;
                }
                memmove(v65, v64, v63);
                *(_QWORD *)(a4 + 256) = v63 >> 4;
                goto LABEL_66;
              }
              if ( v36 != 1 || v10[1] != 1LL )
                goto LABEL_131;
              v37 = (_BYTE *)v10[2];
              v119 = v37;
              if ( v4 )
              {
                v10 = v105;
                v37 = v119;
              }
              *(_BYTE *)(a4 + 248) = *v37;
            }
            else
            {
              if ( v10[1] != 8LL )
                goto LABEL_131;
              v20 = v10[2];
              v120 = v20;
              if ( v4 )
              {
                if ( (v20 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v20 >= 0x7FFFFFFF0000LL )
                  v20 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v20 = *(_BYTE *)v20;
                *(_BYTE *)(v20 + 7) = *(_BYTE *)(v20 + 7);
                v10 = v105;
                v20 = v120;
              }
              *(_QWORD *)(a4 + 24) = v20;
              v21 = v10[3];
              v108 = v21;
              if ( v21 )
              {
                if ( v4 )
                {
                  if ( (v21 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v21 >= 0x7FFFFFFF0000LL )
                    v21 = 0x7FFFFFFF0000LL;
                  *(_BYTE *)v21 = *(_BYTE *)v21;
                  *(_BYTE *)(v21 + 7) = *(_BYTE *)(v21 + 7);
                  v10 = v105;
                  v21 = v108;
                }
                *(_QWORD *)v21 = 8LL;
              }
            }
          }
          else
          {
            if ( v10[1] != 16LL )
              goto LABEL_131;
            v16 = v10[2];
            v121 = v16;
            if ( v4 )
            {
              if ( (v16 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v16 >= 0x7FFFFFFF0000LL )
                v16 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v16 = *(_BYTE *)v16;
              *(_BYTE *)(v16 + 15) = *(_BYTE *)(v16 + 15);
              v10 = v105;
              v16 = v121;
            }
            *(_QWORD *)(a4 + 16) = v16;
            v17 = v10[3];
            v107 = v17;
            if ( v17 )
            {
              if ( v4 )
              {
                if ( (v17 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v17 >= 0x7FFFFFFF0000LL )
                  v17 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v17 = *(_BYTE *)v17;
                *(_BYTE *)(v17 + 7) = *(_BYTE *)(v17 + 7);
                v10 = v105;
                v17 = v107;
              }
              *(_QWORD *)v17 = 16LL;
            }
          }
        }
        else
        {
          if ( v10[1] != 64LL )
            goto LABEL_131;
          v31 = v10[2];
          v122 = v31;
          if ( v4 )
          {
            if ( (v31 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v31 >= 0x7FFFFFFF0000LL )
              v31 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v31 = *(_BYTE *)v31;
            *(_BYTE *)(v31 + 63) = *(_BYTE *)(v31 + 63);
            v10 = v105;
            v31 = v122;
          }
          *(_QWORD *)(a4 + 32) = v31;
          v32 = v10[3];
          v109 = v32;
          if ( v32 )
          {
            if ( v4 )
            {
              if ( (v32 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v32 >= 0x7FFFFFFF0000LL )
                v32 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v32 = *(_BYTE *)v32;
              *(_BYTE *)(v32 + 7) = *(_BYTE *)(v32 + 7);
              v10 = v105;
              v32 = v109;
            }
            *(_QWORD *)v32 = 64LL;
          }
        }
      }
      goto LABEL_30;
    }
    if ( (unsigned int)v12 <= 0x3000E )
      break;
    v22 = v12 - 196623;
    if ( !v22 )
    {
      if ( !a3 || !v4 || v10[1] != 24LL )
        goto LABEL_131;
      v136 = (_OWORD *)v10[2];
      if ( ((unsigned __int8)v136 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v100 = v136;
      *(_OWORD *)(a4 + 336) = *v136;
      *(_QWORD *)(a4 + 352) = *((_QWORD *)v100 + 2);
      if ( *(_DWORD *)(a4 + 336) != 256 )
        goto LABEL_131;
      UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
      v103 = *(_QWORD *)(a4 + 344);
      if ( (unsigned __int64)(UmsContextExtendedSize - 1) > 0xFFFE )
      {
        if ( UmsContextExtendedSize )
        {
          if ( (v103 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v103 + UmsContextExtendedSize > v102 || v103 + UmsContextExtendedSize < v103 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else if ( (v103 & 3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      v104 = *(_QWORD *)(a4 + 352);
      if ( (v104 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_157:
      v10 = v105;
      goto LABEL_30;
    }
    v23 = v22 - 196593;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 15;
          if ( !v26 )
          {
            if ( v10[1] != 1LL )
              goto LABEL_131;
            v51.Level = *((_BYTE *)v10 + 16);
            *(PS_PROTECTION *)(a4 + 376) = v51;
            valid = RtlValidProcessProtection(v51);
            goto LABEL_139;
          }
          if ( v26 != 9 || v10[1] != 1LL )
            goto LABEL_131;
          *(_BYTE *)(a4 + 9) = *(_BYTE *)(a4 + 9) & 0x7F | (v10[2] != 0LL ? 0x80 : 0);
        }
        else
        {
          if ( v10[1] != 8LL )
            goto LABEL_131;
          *(_QWORD *)(a4 + 144) = v10[2];
        }
      }
      else
      {
        if ( v10[1] != 8LL )
          goto LABEL_131;
        *(_QWORD *)(a4 + 136) = v10[2];
      }
    }
    else
    {
      if ( v10[1] != 8LL )
        goto LABEL_131;
      *(_QWORD *)(a4 + 120) = v10[2];
    }
LABEL_30:
    v10 += 4;
    v105 = v10;
    v9 = --v110;
  }
  if ( (_DWORD)v12 == 196622 )
  {
    if ( !a3 || v10[1] != 4LL )
      goto LABEL_131;
    v98 = (_PROCESSOR_NUMBER *)v10[2];
    v135 = v98;
    if ( v4 )
    {
      if ( ((unsigned __int8)v98 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = v105;
      v98 = v135;
    }
    ProcNumber = *v98;
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
    *(_DWORD *)(a4 + 252) = ProcessorIndexFromNumber;
    v53 = ProcessorIndexFromNumber == -1;
    goto LABEL_140;
  }
  v45 = v12 - 131093;
  if ( !v45 )
  {
    if ( v10[1] != 4LL )
      goto LABEL_131;
    v97 = (_DWORD *)v10[2];
    v134 = v97;
    if ( v4 )
    {
      if ( ((unsigned __int8)v97 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = v105;
      v97 = v134;
    }
    *(_DWORD *)(a4 + 412) = *v97;
    goto LABEL_30;
  }
  v46 = v45 - 1;
  if ( v46 )
  {
    v54 = v46 - 1;
    if ( !v54 )
    {
      v94 = v10[1];
      if ( v94 > 0xFFFF )
        goto LABEL_131;
      v95 = (char *)v10[2];
      v145 = v95;
      if ( v4 && v94 && ((unsigned __int64)&v95[v94] > 0x7FFFFFFF0000LL || &v95[v94] < v95) )
        MEMORY[0x7FFFFFFF0000] = 0;
      v96 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v94, 0x634F7350u);
      *(_QWORD *)(a4 + 416) = v96;
      if ( !v96 )
        goto LABEL_185;
      memmove(v96, v95, v94);
      *(_DWORD *)(a4 + 424) = v94;
      goto LABEL_66;
    }
    v55 = v54 - 1;
    if ( !v55 )
    {
      v76 = v10[1];
      if ( v76 != 40 )
        goto LABEL_131;
      v77 = (const void *)v10[2];
      v132 = v77;
      if ( v4 )
      {
        if ( ((unsigned __int8)v77 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v10 = v105;
        v76 = 40LL;
        v77 = v132;
      }
      v78 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v76, 0x70426E50u);
      v79 = (void **)(a4 + 432);
      v114 = (const void *)(a4 + 432);
      *(_QWORD *)(a4 + 432) = v78;
      if ( !v78 )
        goto LABEL_185;
      memset(v78, 0, 0x28uLL);
      memmove(*v79, v77, v76);
      v80 = v115;
      v81 = *v79;
      v142 = v81;
      v82 = (const void *)v81[1];
      v114 = v82;
      v143 = v82;
      v83 = (const void *)v81[3];
      v144 = v83;
      v81[1] = 0LL;
      *((_QWORD *)*v79 + 3) = 0LL;
      v84 = *(_WORD *)v81;
      if ( *(_WORD *)v81 )
      {
        v85 = *((_WORD *)v81 + 1);
        if ( v84 > v85 || ((v84 | v85) & 1) != 0 || v85 == 0xFFFF || !v82 )
          goto LABEL_131;
        v86 = a2;
        if ( a2 )
        {
          if ( v85 )
          {
            v87 = (unsigned __int64)v82 + v85;
            if ( v87 > 0x7FFFFFFF0000LL || v87 < (unsigned __int64)v82 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
      }
      else
      {
        v86 = a2;
      }
      v88 = *((unsigned int *)*v79 + 4);
      v89 = *v79;
      if ( (_DWORD)v88 )
      {
        if ( !v83 || (unsigned int)v88 > 0xFFFF )
          goto LABEL_131;
        if ( v86 )
        {
          v90 = 8 * v88;
          if ( v90 )
          {
            if ( ((unsigned __int8)v83 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v91 = (unsigned __int64)v83 + v90;
            if ( v91 > 0x7FFFFFFF0000LL || v91 < (unsigned __int64)v83 )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v89 = *(_DWORD **)(v80 + 432);
            }
          }
        }
      }
      v92 = 0LL;
      v116 = 0LL;
      v93 = *((_WORD *)v81 + 1);
      if ( v93 || v89[4] )
      {
        v92 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v93 + 8LL * (unsigned int)v89[4], 0x70426E50u);
        v116 = v92;
        v93 = *((_WORD *)v81 + 1);
        v82 = v114;
      }
      if ( v93 )
      {
        v81[1] = v92;
        memmove(v92, v82, *((unsigned __int16 *)v81 + 1));
        v92 += *((unsigned __int16 *)v81 + 1);
        v116 = v92;
      }
      if ( *((_DWORD *)*v79 + 4) )
      {
        *((_QWORD *)*v79 + 3) = v92;
        memmove(*((void **)*v79 + 3), v83, 8LL * *((unsigned int *)*v79 + 4));
      }
LABEL_273:
      v6 = v113;
      goto LABEL_66;
    }
    v56 = v55 - 1;
    if ( v56 )
    {
      if ( v56 != 65523 || !a3 || v10[1] != 16LL )
        goto LABEL_131;
      v75 = (_OWORD *)v10[2];
      v130 = v75;
      if ( v4 )
      {
        if ( ((unsigned __int8)v75 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v10 = v105;
        v75 = v130;
      }
      *(_OWORD *)(a4 + 320) = *v75;
      valid = KeVerifyGroupAffinity(a4 + 320, 1);
LABEL_139:
      v53 = valid == 0;
LABEL_140:
      if ( v53 )
        goto LABEL_131;
      goto LABEL_66;
    }
    if ( v10[1] != 4LL )
      goto LABEL_131;
    v57 = (_DWORD *)v10[2];
    v131 = v57;
    if ( v4 )
    {
      if ( ((unsigned __int8)v57 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = v105;
      v57 = v131;
    }
    *(_DWORD *)(a4 + 440) = *v57;
    goto LABEL_30;
  }
  if ( v10[1] != 8LL )
    goto LABEL_131;
  v47 = v10[2];
  v146 = v47;
  if ( v4 )
  {
    if ( (v47 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v47 + 8 > 0x7FFFFFFF0000LL || v47 + 8 < v47 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v48 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8uLL, 0x77736350u);
  *(_QWORD *)(a4 + 464) = v48;
  if ( v48 )
  {
    *v48 = *(_QWORD *)v47;
    v49 = *(_DWORD **)(a4 + 464);
    if ( (*v49 & 3) == 0 || (unsigned int)(v49[1] - 1) > 5 )
      goto LABEL_131;
    goto LABEL_66;
  }
  v18 = -1073741801;
LABEL_319:
  if ( v18 < 0 )
    goto LABEL_326;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 296), *(unsigned int *)(a4 + 292), 8uLL, PspSortHandleList);
    if ( **(int **)(a4 + 296) < 0 )
      v18 = -1073741811;
    *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0xFE | (v112 != 0);
  }
  if ( v18 < 0 )
LABEL_326:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v18;
}
