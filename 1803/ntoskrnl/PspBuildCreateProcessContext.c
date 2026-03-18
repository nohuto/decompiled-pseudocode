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

__int64 __fastcall PspBuildCreateProcessContext(_QWORD *a1, char a2, int a3, __int64 a4)
{
  char v4; // r10
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // rdi
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
  char valid; // al
  bool v52; // zf
  int v53; // eax
  int v54; // eax
  int v55; // eax
  _DWORD *v56; // rax
  _WORD *v57; // rax
  SIZE_T v58; // rbx
  char *v59; // r15
  PVOID PoolWithQuotaTag; // rax
  SIZE_T v62; // rbx
  char *v63; // r15
  void *v64; // rcx
  int v65; // eax
  SIZE_T v66; // rbx
  unsigned __int64 v67; // r12
  PVOID v68; // rax
  unsigned __int64 v69; // r15
  unsigned __int64 i; // r13
  SIZE_T v71; // rbx
  char *v72; // r15
  PVOID v73; // rax
  _OWORD *v74; // rax
  SIZE_T v75; // r12
  const void *v76; // r15
  PVOID v77; // rax
  void **v78; // r13
  __int64 v79; // r11
  _QWORD *v80; // r15
  const void *v81; // r9
  const void *v82; // r12
  unsigned __int16 v83; // dx
  unsigned __int16 v84; // cx
  char v85; // r10
  unsigned __int64 v86; // rcx
  __int64 v87; // rdx
  _DWORD *v88; // rax
  __int64 v89; // rdx
  unsigned __int64 v90; // rdx
  char *v91; // rbx
  unsigned __int16 v92; // dx
  SIZE_T v93; // rbx
  char *v94; // r15
  PVOID v95; // rax
  _DWORD *v96; // rax
  struct _PROCESSOR_NUMBER *v97; // rax
  ULONG ProcessorIndexFromNumber; // eax
  _OWORD *v99; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int64 v101; // r9
  unsigned __int64 v102; // rcx
  __int64 v103; // rax
  unsigned __int64 *v104; // [rsp+48h] [rbp-1D0h]
  unsigned __int16 v105; // [rsp+50h] [rbp-1C8h]
  unsigned __int64 v106; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v107; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v108; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v109; // [rsp+68h] [rbp-1B0h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+74h] [rbp-1A4h] BYREF
  int v111; // [rsp+78h] [rbp-1A0h]
  __int64 v112; // [rsp+80h] [rbp-198h]
  const void *v113; // [rsp+88h] [rbp-190h]
  __int64 v114; // [rsp+90h] [rbp-188h]
  char *v115; // [rsp+98h] [rbp-180h]
  __int64 v116; // [rsp+A0h] [rbp-178h]
  int v117; // [rsp+B4h] [rbp-164h]
  _BYTE *v118; // [rsp+B8h] [rbp-160h]
  unsigned __int64 v119; // [rsp+C0h] [rbp-158h]
  unsigned __int64 v120; // [rsp+C8h] [rbp-150h]
  unsigned __int64 v121; // [rsp+D0h] [rbp-148h]
  _DWORD *v122; // [rsp+D8h] [rbp-140h]
  __int64 v123; // [rsp+E0h] [rbp-138h] BYREF
  unsigned __int64 v124; // [rsp+E8h] [rbp-130h]
  _WORD *v125; // [rsp+F0h] [rbp-128h]
  char *v126; // [rsp+F8h] [rbp-120h]
  _DWORD *v127; // [rsp+100h] [rbp-118h]
  _DWORD *v128; // [rsp+108h] [rbp-110h]
  _OWORD *v129; // [rsp+110h] [rbp-108h]
  _DWORD *v130; // [rsp+118h] [rbp-100h]
  const void *v131; // [rsp+120h] [rbp-F8h]
  int v132; // [rsp+128h] [rbp-F0h]
  _DWORD *v133; // [rsp+138h] [rbp-E0h]
  struct _PROCESSOR_NUMBER *v134; // [rsp+140h] [rbp-D8h]
  _OWORD *v135; // [rsp+148h] [rbp-D0h]
  unsigned __int64 v136; // [rsp+150h] [rbp-C8h]
  char *v137; // [rsp+158h] [rbp-C0h]
  char *v138; // [rsp+160h] [rbp-B8h]
  PVOID v139; // [rsp+168h] [rbp-B0h]
  char *v140; // [rsp+170h] [rbp-A8h]
  _QWORD *v141; // [rsp+178h] [rbp-A0h]
  const void *v142; // [rsp+180h] [rbp-98h]
  const void *v143; // [rsp+188h] [rbp-90h]
  char *v144; // [rsp+190h] [rbp-88h]
  unsigned __int64 v145; // [rsp+198h] [rbp-80h]
  __int128 v146; // [rsp+1A0h] [rbp-78h] BYREF
  __int128 v147; // [rsp+1B0h] [rbp-68h] BYREF
  int v149; // [rsp+230h] [rbp+18h]

  v149 = a3;
  v114 = a4;
  v4 = a2;
  v111 = a3;
  v116 = a4;
  v6 = a4;
  v112 = a4;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = *a1;
  if ( *a1 < 0x28uLL )
    return 3221225485LL;
  if ( v4 && v7 != 40 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v7 > 0x7FFFFFFF0000LL || (_QWORD *)((char *)a1 + v7) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v8 = v7 - 8;
  if ( (v8 & 0x1F) != 0 )
    return 3221225485LL;
  v9 = v8 >> 5;
  v109 = v9;
  v10 = a1 + 1;
  v104 = a1 + 1;
  v11 = 0x7FFFFFFF8LL;
  while ( 1 )
  {
    if ( !v9 )
    {
      v18 = 0;
      goto LABEL_319;
    }
    v12 = *v10;
    v136 = *v10;
    if ( a3 && (v12 & 0x10000) == 0
      || (v12 & 0x20000) != 0 && v10[3]
      || (v117 = 1 << v12, v13 = *(_DWORD *)(a4 + 4), ((1 << v12) & v13) != 0)
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
        if ( v10[1] != 4 )
          goto LABEL_131;
        v44 = (_DWORD *)v10[2];
        v128 = v44;
        if ( v4 )
        {
          if ( ((unsigned __int8)v44 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = v104;
          v44 = v128;
        }
        *(_DWORD *)(a4 + 408) = *v44;
        goto LABEL_30;
      }
      if ( (unsigned int)v12 > 0x20009 )
      {
        v33 = v12 - 131082;
        if ( !v33 )
        {
          if ( v10[1] != 8 )
            goto LABEL_131;
          v34 = (_DWORD *)v10[2];
          v127 = v34;
          if ( v4 )
          {
            if ( ((unsigned __int8)v34 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v10 = v104;
            v34 = v127;
          }
          if ( (*v34 & 0x1C) != 0 )
          {
            v18 = -1073741637;
            goto LABEL_319;
          }
          v35 = *v34 & 3;
          v132 = v35;
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
          v58 = v10[1];
          if ( !v58 || (v58 & 7) != 0 || (v58 & 0xFFFFFFFFFFFFFFF8uLL) > v11 )
            goto LABEL_131;
          v59 = (char *)v10[2];
          v126 = v59;
          if ( v4 )
          {
            if ( ((unsigned __int8)v59 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v59[v58] > 0x7FFFFFFF0000LL || &v59[v58] < v59 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v58, 0x6C487350u);
          *(_QWORD *)(a4 + 296) = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
LABEL_185:
            v18 = -1073741670;
            goto LABEL_319;
          }
          memmove(PoolWithQuotaTag, v59, v58);
          *(_DWORD *)(a4 + 292) = v58 >> 3;
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
            v147 = 0uLL;
            v42 = v10[2];
            if ( v4 && v42 >= 0x7FFFFFFF0000LL )
              v42 = 0x7FFFFFFF0000LL;
            memmove(&v147, (const void *)v42, v41);
            v43 = v147;
            v146 = v147;
            v18 = PspValidateMitigationOptions(&v146, 0LL);
            if ( v18 < 0 )
              goto LABEL_319;
            *(_OWORD *)(a4 + 360) = v43;
            goto LABEL_66;
          }
          v65 = v40 - 2;
          if ( v65 )
          {
            if ( v65 != 1 )
              goto LABEL_131;
            v66 = v10[1];
            if ( !v66 || (v66 & 7) != 0 || (v66 & 0xFFFFFFFFFFFFFFF8uLL) > v11 )
              goto LABEL_131;
            v67 = v10[2];
            v126 = (char *)v67;
            if ( v4 )
            {
              if ( (v67 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v67 + v66 > 0x7FFFFFFF0000LL || v67 + v66 < v67 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v68 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v66, 0x6C4A7350u);
            *(_QWORD *)(a4 + 392) = v68;
            if ( !v68 )
              goto LABEL_185;
            memset(v68, 0, v66);
            *(_DWORD *)(a4 + 404) = v66 >> 3;
            v69 = 0LL;
            v124 = 0LL;
            for ( i = 0LL; i < *(unsigned int *)(a4 + 404); ++i )
            {
              v18 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)(v67 + 8 * v69), 0x6C4A7350u, (__int64)&v123, 0LL, 0LL);
              if ( v18 < 0 )
                goto LABEL_319;
              *(_QWORD *)(*(_QWORD *)(a4 + 392) + 8 * v69) = v123;
              v69 = i + 1;
              v124 = i + 1;
            }
            goto LABEL_273;
          }
          v71 = v10[1];
          if ( !v71 || (v71 & 7) != 0 || v71 > 0x88 )
            goto LABEL_131;
          v72 = (char *)v10[2];
          v140 = v72;
          if ( v4 )
          {
            if ( ((unsigned __int8)v72 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v72[v71] > 0x7FFFFFFF0000LL || &v72[v71] < v72 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v73 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v71, 0x61547350u);
          *(_QWORD *)(a4 + 384) = v73;
          if ( !v73 )
            goto LABEL_185;
          memmove(v73, v72, v71);
          *(_DWORD *)(a4 + 400) = v71;
          if ( !IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 384), v71) )
            goto LABEL_131;
LABEL_66:
          v4 = a2;
          v11 = 0x7FFFFFFF8LL;
LABEL_67:
          a3 = v149;
          goto LABEL_30;
        }
        if ( v10[1] != 2 )
          goto LABEL_131;
        v57 = (_WORD *)v10[2];
        v125 = v57;
        if ( v4 )
        {
          if ( ((unsigned __int8)v57 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v57 = v125;
        }
        v105 = *v57;
        if ( *v57 >= (unsigned __int16)KeNumberNodes )
          goto LABEL_131;
        _mm_lfence();
        if ( !*(_QWORD *)(KeNodeBlock[v105] + 136) )
          goto LABEL_131;
        *(_WORD *)(a4 + 250) = v105;
        goto LABEL_157;
      }
      if ( (_DWORD)v12 == 131081 )
      {
        if ( v10[1] != 4 )
          goto LABEL_131;
        v50 = (_DWORD *)v10[2];
        v122 = v50;
        if ( v4 )
        {
          if ( ((unsigned __int8)v50 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = v104;
          v50 = v122;
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
                v138 = v29;
                if ( v4 && ((unsigned __int64)&v29[v28] > 0x7FFFFFFF0000LL || &v29[v28] < v29) )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v30 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v28, 0x6E467350u);
                v139 = v30;
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
                v62 = v10[1];
                if ( !v62 || (v62 & 0xF) != 0 )
                  goto LABEL_131;
                v63 = (char *)v10[2];
                v137 = v63;
                if ( v4 )
                {
                  if ( ((unsigned __int8)v63 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( (unsigned __int64)&v63[v62] > 0x7FFFFFFF0000LL || &v63[v62] < v63 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                if ( v62 > 0x10 )
                {
                  *(_QWORD *)(v6 + 280) = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v62, 0x6C527350u);
                  v64 = *(void **)(a4 + 280);
                  if ( !v64 )
                    goto LABEL_185;
                }
                else
                {
                  v64 = (void *)(a4 + 264);
                  *(_QWORD *)(v6 + 280) = a4 + 264;
                }
                memmove(v64, v63, v62);
                *(_QWORD *)(a4 + 256) = v62 >> 4;
                goto LABEL_66;
              }
              if ( v36 != 1 || v10[1] != 1 )
                goto LABEL_131;
              v37 = (_BYTE *)v10[2];
              v118 = v37;
              if ( v4 )
              {
                v10 = v104;
                v37 = v118;
              }
              *(_BYTE *)(a4 + 248) = *v37;
            }
            else
            {
              if ( v10[1] != 8 )
                goto LABEL_131;
              v20 = v10[2];
              v119 = v20;
              if ( v4 )
              {
                if ( (v20 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v20 >= 0x7FFFFFFF0000LL )
                  v20 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v20 = *(_BYTE *)v20;
                *(_BYTE *)(v20 + 7) = *(_BYTE *)(v20 + 7);
                v10 = v104;
                v20 = v119;
              }
              *(_QWORD *)(a4 + 24) = v20;
              v21 = v10[3];
              v107 = v21;
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
                  v10 = v104;
                  v21 = v107;
                }
                *(_QWORD *)v21 = 8LL;
              }
            }
          }
          else
          {
            if ( v10[1] != 16 )
              goto LABEL_131;
            v16 = v10[2];
            v120 = v16;
            if ( v4 )
            {
              if ( (v16 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v16 >= 0x7FFFFFFF0000LL )
                v16 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v16 = *(_BYTE *)v16;
              *(_BYTE *)(v16 + 15) = *(_BYTE *)(v16 + 15);
              v10 = v104;
              v16 = v120;
            }
            *(_QWORD *)(a4 + 16) = v16;
            v17 = v10[3];
            v106 = v17;
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
                v10 = v104;
                v17 = v106;
              }
              *(_QWORD *)v17 = 16LL;
            }
          }
        }
        else
        {
          if ( v10[1] != 64 )
            goto LABEL_131;
          v31 = v10[2];
          v121 = v31;
          if ( v4 )
          {
            if ( (v31 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v31 >= 0x7FFFFFFF0000LL )
              v31 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v31 = *(_BYTE *)v31;
            *(_BYTE *)(v31 + 63) = *(_BYTE *)(v31 + 63);
            v10 = v104;
            v31 = v121;
          }
          *(_QWORD *)(a4 + 32) = v31;
          v32 = v10[3];
          v108 = v32;
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
              v10 = v104;
              v32 = v108;
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
      if ( !a3 || !v4 || v10[1] != 24 )
        goto LABEL_131;
      v135 = (_OWORD *)v10[2];
      if ( ((unsigned __int8)v135 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v99 = v135;
      *(_OWORD *)(a4 + 336) = *v135;
      *(_QWORD *)(a4 + 352) = *((_QWORD *)v99 + 2);
      if ( *(_DWORD *)(a4 + 336) != 256 )
        goto LABEL_131;
      UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
      v102 = *(_QWORD *)(a4 + 344);
      if ( (unsigned __int64)(UmsContextExtendedSize - 1) > 0xFFFE )
      {
        if ( UmsContextExtendedSize )
        {
          if ( (v102 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v102 + UmsContextExtendedSize > v101 || v102 + UmsContextExtendedSize < v102 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else if ( (v102 & 3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      v103 = *(_QWORD *)(a4 + 352);
      if ( (v103 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_157:
      v10 = v104;
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
            if ( v10[1] != 1 )
              goto LABEL_131;
            *(_BYTE *)(a4 + 376) = *((_BYTE *)v10 + 16);
            valid = RtlValidProcessProtection();
            goto LABEL_139;
          }
          if ( v26 != 9 || v10[1] != 1 )
            goto LABEL_131;
          *(_BYTE *)(a4 + 9) = *(_BYTE *)(a4 + 9) & 0x7F | (v10[2] != 0 ? 0x80 : 0);
        }
        else
        {
          if ( v10[1] != 8 )
            goto LABEL_131;
          *(_QWORD *)(a4 + 144) = v10[2];
        }
      }
      else
      {
        if ( v10[1] != 8 )
          goto LABEL_131;
        *(_QWORD *)(a4 + 136) = v10[2];
      }
    }
    else
    {
      if ( v10[1] != 8 )
        goto LABEL_131;
      *(_QWORD *)(a4 + 120) = v10[2];
    }
LABEL_30:
    v10 += 4;
    v104 = v10;
    v9 = --v109;
  }
  if ( (_DWORD)v12 == 196622 )
  {
    if ( !a3 || v10[1] != 4 )
      goto LABEL_131;
    v97 = (struct _PROCESSOR_NUMBER *)v10[2];
    v134 = v97;
    if ( v4 )
    {
      if ( ((unsigned __int8)v97 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = v104;
      v97 = v134;
    }
    ProcNumber = *v97;
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
    *(_DWORD *)(a4 + 252) = ProcessorIndexFromNumber;
    v52 = ProcessorIndexFromNumber == -1;
    goto LABEL_140;
  }
  v45 = v12 - 131093;
  if ( !v45 )
  {
    if ( v10[1] != 4 )
      goto LABEL_131;
    v96 = (_DWORD *)v10[2];
    v133 = v96;
    if ( v4 )
    {
      if ( ((unsigned __int8)v96 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = v104;
      v96 = v133;
    }
    *(_DWORD *)(a4 + 412) = *v96;
    goto LABEL_30;
  }
  v46 = v45 - 1;
  if ( v46 )
  {
    v53 = v46 - 1;
    if ( !v53 )
    {
      v93 = v10[1];
      if ( v93 > 0xFFFF )
        goto LABEL_131;
      v94 = (char *)v10[2];
      v144 = v94;
      if ( v4 && v93 && ((unsigned __int64)&v94[v93] > 0x7FFFFFFF0000LL || &v94[v93] < v94) )
        MEMORY[0x7FFFFFFF0000] = 0;
      v95 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v93, 0x634F7350u);
      *(_QWORD *)(a4 + 416) = v95;
      if ( !v95 )
        goto LABEL_185;
      memmove(v95, v94, v93);
      *(_DWORD *)(a4 + 424) = v93;
      goto LABEL_66;
    }
    v54 = v53 - 1;
    if ( !v54 )
    {
      v75 = v10[1];
      if ( v75 != 40 )
        goto LABEL_131;
      v76 = (const void *)v10[2];
      v131 = v76;
      if ( v4 )
      {
        if ( ((unsigned __int8)v76 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v10 = v104;
        v75 = 40LL;
        v76 = v131;
      }
      v77 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v75, 0x70426E50u);
      v78 = (void **)(a4 + 432);
      v113 = (const void *)(a4 + 432);
      *(_QWORD *)(a4 + 432) = v77;
      if ( !v77 )
        goto LABEL_185;
      memset(v77, 0, 0x28uLL);
      memmove(*v78, v76, v75);
      v79 = v114;
      v80 = *v78;
      v141 = v80;
      v81 = (const void *)v80[1];
      v113 = v81;
      v142 = v81;
      v82 = (const void *)v80[3];
      v143 = v82;
      v80[1] = 0LL;
      *((_QWORD *)*v78 + 3) = 0LL;
      v83 = *(_WORD *)v80;
      if ( *(_WORD *)v80 )
      {
        v84 = *((_WORD *)v80 + 1);
        if ( v83 > v84 || ((v83 | v84) & 1) != 0 || v84 == 0xFFFF || !v81 )
          goto LABEL_131;
        v85 = a2;
        if ( a2 )
        {
          if ( v84 )
          {
            v86 = (unsigned __int64)v81 + v84;
            if ( v86 > 0x7FFFFFFF0000LL || v86 < (unsigned __int64)v81 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
      }
      else
      {
        v85 = a2;
      }
      v87 = *((unsigned int *)*v78 + 4);
      v88 = *v78;
      if ( (_DWORD)v87 )
      {
        if ( !v82 || (unsigned int)v87 > 0xFFFF )
          goto LABEL_131;
        if ( v85 )
        {
          v89 = 8 * v87;
          if ( v89 )
          {
            if ( ((unsigned __int8)v82 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v90 = (unsigned __int64)v82 + v89;
            if ( v90 > 0x7FFFFFFF0000LL || v90 < (unsigned __int64)v82 )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v88 = *(_DWORD **)(v79 + 432);
            }
          }
        }
      }
      v91 = 0LL;
      v115 = 0LL;
      v92 = *((_WORD *)v80 + 1);
      if ( v92 || v88[4] )
      {
        v91 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v92 + 8LL * (unsigned int)v88[4], 0x70426E50u);
        v115 = v91;
        v92 = *((_WORD *)v80 + 1);
        v81 = v113;
      }
      if ( v92 )
      {
        v80[1] = v91;
        memmove(v91, v81, *((unsigned __int16 *)v80 + 1));
        v91 += *((unsigned __int16 *)v80 + 1);
        v115 = v91;
      }
      if ( *((_DWORD *)*v78 + 4) )
      {
        *((_QWORD *)*v78 + 3) = v91;
        memmove(*((void **)*v78 + 3), v82, 8LL * *((unsigned int *)*v78 + 4));
      }
LABEL_273:
      v6 = v112;
      goto LABEL_66;
    }
    v55 = v54 - 1;
    if ( v55 )
    {
      if ( v55 != 65523 || !a3 || v10[1] != 16 )
        goto LABEL_131;
      v74 = (_OWORD *)v10[2];
      v129 = v74;
      if ( v4 )
      {
        if ( ((unsigned __int8)v74 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v10 = v104;
        v74 = v129;
      }
      *(_OWORD *)(a4 + 320) = *v74;
      valid = KeVerifyGroupAffinity(a4 + 320, 1);
LABEL_139:
      v52 = valid == 0;
LABEL_140:
      if ( v52 )
        goto LABEL_131;
      goto LABEL_66;
    }
    if ( v10[1] != 4 )
      goto LABEL_131;
    v56 = (_DWORD *)v10[2];
    v130 = v56;
    if ( v4 )
    {
      if ( ((unsigned __int8)v56 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = v104;
      v56 = v130;
    }
    *(_DWORD *)(a4 + 440) = *v56;
    goto LABEL_30;
  }
  if ( v10[1] != 8 )
    goto LABEL_131;
  v47 = v10[2];
  v145 = v47;
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
    *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0xFE | (v111 != 0);
  }
  if ( v18 < 0 )
LABEL_326:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v18;
}
