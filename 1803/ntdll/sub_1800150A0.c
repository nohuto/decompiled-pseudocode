/*
 * XREFs of sub_1800150A0 @ 0x1800150A0
 * Callers:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     sub_18004AE34 @ 0x18004AE34 (sub_18004AE34.c)
 *     sub_18005C190 @ 0x18005C190 (sub_18005C190.c)
 *     sub_18005C238 @ 0x18005C238 (sub_18005C238.c)
 *     sub_18005C2AC @ 0x18005C2AC (sub_18005C2AC.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     sub_18007C6F0 @ 0x18007C6F0 (sub_18007C6F0.c)
 *     sub_18008384C @ 0x18008384C (sub_18008384C.c)
 *     sub_18009A320 @ 0x18009A320 (sub_18009A320.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     RtlCompareMemoryUlong @ 0x18009F100 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E2150 (RtlpNotOwnerCriticalSection.c)
 *     sub_1800ED320 @ 0x1800ED320 (sub_1800ED320.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1800FC524 @ 0x1800FC524 (sub_1800FC524.c)
 *     sub_1800FE14C @ 0x1800FE14C (sub_1800FE14C.c)
 *     sub_1800FE3BC @ 0x1800FE3BC (sub_1800FE3BC.c)
 *     sub_180100000 @ 0x180100000 (sub_180100000.c)
 *     sub_1801011EC @ 0x1801011EC (sub_1801011EC.c)
 */

__int64 __fastcall sub_1800150A0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v6; // r12
  int v8; // edi
  __int64 v9; // r8
  _DWORD *HotpatchInformation; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rcx
  struct _TEB *v15; // rax
  signed __int8 v16; // cf
  HANDLE UniqueThread; // rax
  int v18; // edx
  __int64 **v19; // rcx
  int v20; // edx
  _BYTE *v21; // r8
  char v22; // al
  unsigned __int16 *v23; // rsi
  unsigned __int16 v24; // ax
  _WORD *v25; // rdx
  bool v26; // zf
  int v27; // r8d
  int v28; // edx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rcx
  __int64 v31; // r12
  int v32; // edx
  __int64 *v33; // r11
  __int64 v34; // rax
  __int64 *v35; // rdi
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rcx
  unsigned int v38; // ecx
  unsigned int v39; // esi
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 *v42; // r10
  unsigned int v43; // eax
  __int64 v44; // r14
  __int64 v45; // rdx
  int v46; // edx
  int v47; // r12d
  __int64 *v48; // rax
  __int64 *v49; // rcx
  char v50; // al
  unsigned __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // r14
  int v54; // edx
  __int64 *v55; // r11
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 *v58; // rdi
  unsigned __int64 v59; // r13
  unsigned __int64 v60; // rcx
  unsigned int v61; // ecx
  unsigned int v62; // esi
  __int64 v63; // rax
  __int64 v64; // r10
  __int64 v65; // r8
  __int64 *v66; // rax
  unsigned int v67; // edx
  __int64 v68; // r14
  __int64 v69; // rax
  int v70; // edx
  int v71; // r12d
  __int64 *v72; // rax
  char v73; // al
  unsigned __int64 v74; // rdi
  __int64 v75; // rsi
  unsigned int v76; // edi
  unsigned __int64 v77; // rdx
  _QWORD *v78; // rax
  __int64 *v79; // r12
  unsigned __int64 v80; // rcx
  unsigned int v81; // r14d
  __int64 v82; // r14
  _QWORD *v83; // rsi
  _QWORD *v84; // r13
  _QWORD *v85; // rax
  int v86; // edx
  int v87; // edi
  int v88; // eax
  __int64 v89; // r8
  int v90; // edx
  int v91; // edi
  int v92; // eax
  _QWORD *v93; // rdi
  __int64 v94; // rdi
  unsigned int *v95; // r8
  unsigned int v96; // edx
  int v97; // ecx
  __int64 v98; // rdi
  int v99; // ecx
  int v100; // eax
  _QWORD *v101; // r14
  __int64 *v102; // rax
  __int64 *v103; // rdi
  __int64 *v104; // r12
  unsigned __int64 v105; // rcx
  unsigned int v106; // ecx
  unsigned int v107; // esi
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // r13
  int v111; // ecx
  int v112; // r14d
  unsigned __int64 v113; // rsi
  _DWORD *v114; // r8
  unsigned __int64 v115; // rdx
  _QWORD *v116; // rdi
  _QWORD *v117; // r8
  int v118; // ecx
  int v119; // eax
  _QWORD *v120; // rsi
  __int64 *v121; // rax
  __int64 **v122; // rdx
  unsigned __int64 v123; // rcx
  unsigned __int64 v124; // rdi
  int v125; // eax
  int v126; // edx
  unsigned __int16 v127; // cx
  __int64 v128; // rdx
  __int64 v129; // rdi
  __int64 v130; // r15
  __int64 v131; // rax
  __int64 *v132; // rcx
  __int64 v133; // rdx
  __int64 v134; // r9
  __int64 v135; // r8
  __int64 v136; // rdi
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // rdx
  __int64 v142; // r8
  __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 v146; // rdi
  __int64 v147; // rcx
  unsigned int v148; // edx
  unsigned __int64 v149; // rcx
  __int64 v150; // rdi
  signed __int32 v151; // ebx
  __int64 v152; // r8
  int v153; // edx
  signed __int32 v154; // eax
  char v155; // [rsp+48h] [rbp-1B0h]
  char v156; // [rsp+49h] [rbp-1AFh]
  __int16 v157; // [rsp+4Ch] [rbp-1ACh]
  __int64 v158; // [rsp+50h] [rbp-1A8h]
  __int64 v159; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v160; // [rsp+50h] [rbp-1A8h]
  __int64 v161; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v162; // [rsp+58h] [rbp-1A0h] BYREF
  __int64 v163; // [rsp+60h] [rbp-198h]
  _QWORD *v164; // [rsp+68h] [rbp-190h]
  unsigned __int8 v165; // [rsp+70h] [rbp-188h]
  __int16 v166; // [rsp+72h] [rbp-186h]
  __int16 v167; // [rsp+74h] [rbp-184h]
  __int64 *v168; // [rsp+78h] [rbp-180h]
  __int64 *v169; // [rsp+80h] [rbp-178h]
  unsigned int v170; // [rsp+88h] [rbp-170h]
  unsigned int v171; // [rsp+8Ch] [rbp-16Ch]
  unsigned int v172; // [rsp+90h] [rbp-168h]
  unsigned int v173; // [rsp+98h] [rbp-160h]
  unsigned __int64 v174; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v175; // [rsp+A8h] [rbp-150h]
  unsigned __int64 v176; // [rsp+B0h] [rbp-148h]
  __int64 v177; // [rsp+B8h] [rbp-140h]
  unsigned int v178; // [rsp+C0h] [rbp-138h]
  unsigned int NtGlobalFlag; // [rsp+C4h] [rbp-134h]
  __int64 v180; // [rsp+C8h] [rbp-130h]
  unsigned __int64 v181; // [rsp+D0h] [rbp-128h]
  __int64 v182; // [rsp+D8h] [rbp-120h]
  __int64 v183; // [rsp+F0h] [rbp-108h]
  unsigned __int64 v184; // [rsp+F8h] [rbp-100h]
  unsigned int *v185; // [rsp+100h] [rbp-F8h]
  __int64 v186; // [rsp+108h] [rbp-F0h]
  __int64 v187; // [rsp+110h] [rbp-E8h]
  __int64 v188; // [rsp+118h] [rbp-E0h]
  __int64 v189; // [rsp+120h] [rbp-D8h]
  struct _TEB *v190; // [rsp+128h] [rbp-D0h]
  unsigned __int64 v191; // [rsp+130h] [rbp-C8h]
  int v192; // [rsp+140h] [rbp-B8h]
  int v193; // [rsp+150h] [rbp-A8h]
  int v194; // [rsp+170h] [rbp-88h]
  int v195; // [rsp+180h] [rbp-78h]
  int v196; // [rsp+190h] [rbp-68h]
  int v197; // [rsp+1A0h] [rbp-58h]
  int v198; // [rsp+1B0h] [rbp-48h]
  int v199; // [rsp+1C0h] [rbp-38h]
  __int64 v200; // [rsp+210h] [rbp+18h]

  v200 = a3;
  v6 = 1;
  v156 = 1;
  v155 = 0;
  v171 = 1;
  v174 = 0LL;
  v157 = 0;
  if ( a1 == a3 )
  {
    sub_18009A5F0(9, a1, a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v8 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v8 & 0x7D010F60) != 0 )
  {
    v6 = 0;
    v156 = 0;
    v9 = 4LL;
    if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
      return sub_180100000((void *)a1);
  }
  else
  {
    v9 = 3LL;
  }
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
  {
    v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    v12 = 2147353472LL;
  }
  else
  {
    v12 = 2147353472LL;
    v11 = 2147353472LL;
  }
  if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v13 = v200;
    if ( ((*(_BYTE *)(v200 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
      sub_1800FE3BC(a1, a4, v9);
  }
  else
  {
    v13 = v200;
  }
  if ( (v8 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v20 = *(_DWORD *)(v13 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v13 + 8) = v20;
      if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
        sub_1800FC010(a1, v13);
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 352);
    v15 = NtCurrentTeb();
    v16 = _interlockedbittestandreset((volatile signed __int32 *)(v14 + 8), 0);
    UniqueThread = v15->ClientId.UniqueThread;
    if ( v16 )
    {
      *(_QWORD *)(v14 + 16) = UniqueThread;
      *(_DWORD *)(v14 + 12) = 1;
      ++*(_DWORD *)(a1 + 584);
    }
    else if ( *(HANDLE *)(v14 + 16) == UniqueThread )
    {
      ++*(_DWORD *)(v14 + 12);
      ++*(_DWORD *)(a1 + 584);
    }
    else
    {
      if ( byte_18015C3A8 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v190 = NtCurrentTeb();
        v190->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        v171 = 0;
LABEL_317:
        v76 = 256;
        goto LABEL_318;
      }
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      sub_18007C6F0(a1, 1LL);
    }
    v155 = 1;
    v13 = v200;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v18 = *(_DWORD *)(v200 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v200 + 8) = v18;
      if ( HIBYTE(v18) != ((unsigned __int8)v18 ^ (unsigned __int8)(BYTE1(v18) ^ BYTE2(v18))) )
        sub_1800FC010(a1, v200);
    }
    v19 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(v200 + 8) < (unsigned __int64)*((unsigned int *)v19 + 2) )
        break;
      v19 = (__int64 **)*v19;
    }
    while ( v19 );
  }
  v21 = (_BYTE *)(v13 + 10);
  v22 = *(_BYTE *)(v13 + 10);
  if ( (v22 & 8) != 0 )
    *v21 = v22 & 0xF7;
  if ( *(_BYTE *)(v13 + 15) == 4 )
  {
    v130 = v13 - 48;
    v164 = (_QWORD *)v130;
    v177 = *(_QWORD *)(v130 + 32);
    v174 = v130 & 0xFFFFFFFFFFFF0000uLL;
    *(_QWORD *)(a1 + 560) -= v177;
    v131 = *(_QWORD *)v130;
    v132 = *(__int64 **)(v130 + 8);
    v133 = *v132;
    v134 = *(_QWORD *)(*(_QWORD *)v130 + 8LL);
    if ( *v132 == v134 && v133 == v130 )
    {
      *v132 = v131;
      *(_QWORD *)(v131 + 8) = v132;
    }
    else
    {
      sub_18009A5F0(13, 0, v130, v134, v133, 0LL);
    }
    if ( !v6 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      v132 = (__int64 *)NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v135 = *(_QWORD *)(v130 + 32) >> 4;
        v130 = (__int64)v164;
        sub_1800ED320(a1, *((unsigned __int16 *)v164 + 9), v135, 0, 3);
      }
      else
      {
        v130 = (__int64)v164;
      }
    }
    if ( v155 )
    {
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v155 = 0;
    }
    v136 = *(_QWORD *)(v130 + 40);
    v189 = v136;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v132, v133, v21) )
    {
      v137 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
      LODWORD(v130) = (_DWORD)v164;
      v136 = v189;
    }
    else
    {
      v137 = 2147353480LL;
    }
    if ( *(_BYTE *)v137 )
      sub_1800FC524(a1, v174, v136);
    v162 = 0LL;
    sub_18005CD8C(v137, &v174, &v162, 0x8000LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v139, v138, v140) )
    {
      v143 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      LODWORD(v130) = (_DWORD)v164;
    }
    else
    {
      v143 = 2147353472LL;
    }
    if ( *(_BYTE *)v143 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v143, v141, v142) )
          v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        LODWORD(v130) = (_DWORD)v164;
        sub_1800FE14C(a1, (_DWORD)v164, v177, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, *(unsigned __int8 *)v12);
      }
      else
      {
        LODWORD(v130) = (_DWORD)v164;
      }
    }
    v146 = 2147353482LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v143, v141, v142) )
    {
      v147 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
      LODWORD(v130) = (_DWORD)v164;
    }
    else
    {
      v147 = 2147353482LL;
    }
    if ( *(_BYTE *)v147 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v147, v144, v145) )
      {
        v146 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
        LODWORD(v130) = (_DWORD)v164;
      }
      sub_1800FE14C(a1, v130, v177, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, *(unsigned __int8 *)v146);
    }
    goto LABEL_317;
  }
  v23 = (unsigned __int16 *)(v13 + 8);
  v24 = *(_WORD *)(v13 + 8);
  if ( v24 < *(_WORD *)(a1 + 400) )
  {
    if ( ((unsigned __int8)(1 << (v24 & 7)) & *(_BYTE *)(((unsigned __int64)v24 >> 3) + a1 + 402)) == 0 )
    {
      v25 = (_WORD *)(*(_QWORD *)(a1 + 392) + 2LL * *v23);
      if ( *v25 > 1u )
        --*v25;
    }
    v13 = v200;
  }
  if ( !v6 )
  {
    v178 = NtCurrentPeb()->NtGlobalFlag;
    v13 = v200;
    if ( (v178 & 0x800) != 0 )
    {
      v26 = (*v21 & 2) == 0;
      v27 = *(unsigned __int16 *)(a3 + 8);
      if ( v26 )
      {
        v165 = *(_BYTE *)(v200 + 11);
        v28 = v165;
      }
      else
      {
        v28 = *(unsigned __int16 *)(v200 + 16LL * *(unsigned __int16 *)(a3 + 8) - 14);
      }
      v157 = sub_1800ED320(a1, v28, v27, 0, 2);
    }
  }
  v29 = *v23;
  v162 = v29;
  if ( *(char *)(a1 + 112) >= 0 )
  {
    v182 = v13;
    v30 = 16 * (*(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140));
    v31 = v13 - v30;
    v158 = v13 - v30;
    if ( v13 - v30 == v13
      || ((*(_BYTE *)(v31 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    {
      goto LABEL_100;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v32 = *(_DWORD *)(v31 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v31 + 8) = v32;
      if ( HIBYTE(v32) != ((unsigned __int8)v32 ^ (unsigned __int8)(BYTE1(v32) ^ BYTE2(v32))) )
        sub_1800FC010(a1, v31);
    }
    v33 = (__int64 *)(v31 + 16);
    v168 = *(__int64 **)(v31 + 16);
    v169 = *(__int64 **)(v31 + 24);
    v34 = *v169;
    a4 = v168[1];
    if ( *v169 != a4 || (__int64 *)v34 != v33 )
    {
      sub_18009A5F0(13, a1, v31 + 16, a4, v34, 0LL);
LABEL_99:
      v29 = v162;
LABEL_100:
      v53 = v13 + 16 * v29;
      v159 = v53;
      if ( !*(_DWORD *)(a1 + 124) )
        goto LABEL_104;
      v193 = *(_DWORD *)(v53 + 8) ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v193) != ((unsigned __int8)v193 ^ (unsigned __int8)(BYTE1(v193) ^ BYTE2(v193))) )
        sub_18009A5F0(3, a1, v13 + 16 * v29, 0, 0LL, 0LL);
      while ( 1 )
      {
        while ( 1 )
        {
          v29 = v162;
LABEL_104:
          if ( ((*(_BYTE *)(v53 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
          {
LABEL_151:
            v200 = v13;
            v6 = v156;
            goto LABEL_152;
          }
          if ( *(_DWORD *)(a1 + 124) )
          {
            v54 = *(_DWORD *)(v53 + 8) ^ *(_DWORD *)(a1 + 136);
            *(_DWORD *)(v53 + 8) = v54;
            if ( HIBYTE(v54) != ((unsigned __int8)v54 ^ (unsigned __int8)(BYTE1(v54) ^ BYTE2(v54))) )
              sub_1800FC010(a1, v53);
          }
          v55 = (__int64 *)(v53 + 16);
          v56 = *(_QWORD *)(v53 + 16);
          v163 = v56;
          v168 = *(__int64 **)(v53 + 24);
          v57 = *v168;
          a4 = *(_QWORD *)(v56 + 8);
          if ( *v168 == a4 && (__int64 *)v57 == v55 )
            break;
          sub_18009A5F0(13, a1, v53 + 16, a4, v57, 0LL);
        }
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v53 + 8);
        v58 = *(__int64 **)(a1 + 312);
        if ( v58 )
        {
          v59 = *(unsigned __int16 *)(v53 + 8);
          while ( 1 )
          {
            v60 = *((unsigned int *)v58 + 2);
            if ( v59 < v60 )
            {
              v183 = *(unsigned __int16 *)(v53 + 8);
              v61 = v59;
              goto LABEL_116;
            }
            if ( !*v58 )
              break;
            v58 = (__int64 *)*v58;
          }
          v61 = v60 - 1;
          v183 = v61;
LABEL_116:
          v191 = v59;
          v62 = v61 - *((_DWORD *)v58 + 6);
          if ( *((_DWORD *)v58 + 3) )
            v63 = 2 * v62;
          else
            v63 = v62;
          v64 = 8 * v63;
          v169 = (__int64 *)(8 * v63);
          v65 = v58[6];
          v66 = *(__int64 **)(v65 + 8 * v63);
          --*((_DWORD *)v58 + 4);
          v67 = *((_DWORD *)v58 + 2);
          a4 = v67 - 1;
          if ( v61 == (_DWORD)a4 )
            --*((_DWORD *)v58 + 5);
          if ( v66 == v55 )
          {
            v173 = v67;
            if ( !*v58 )
              --v67;
            v173 = v67;
            v68 = *v55;
            v69 = v58[4];
            if ( v61 >= v67 )
            {
              if ( v68 != v69 )
              {
                *(_QWORD *)(v65 + v64) = v68;
                v53 = v159;
                goto LABEL_132;
              }
              *(_QWORD *)(v65 + v64) = 0LL;
              goto LABEL_136;
            }
            if ( v68 == v69 )
              goto LABEL_135;
            v70 = *(_DWORD *)(v68 - 16 + 8);
            v194 = v70;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v71 = v70 ^ *(_DWORD *)(a1 + 136);
              v194 = v71;
              LOWORD(v70) = v71;
              if ( HIBYTE(v71) != ((unsigned __int8)v71 ^ (unsigned __int8)(BYTE1(v71) ^ BYTE2(v71))) )
              {
                sub_18009A5F0(3, a1, v68 - 16, 0, 0LL, 0LL);
                LOWORD(v70) = v71;
                v64 = (__int64)v169;
              }
              v56 = v163;
            }
            if ( (_DWORD)v59 != (unsigned __int16)v70 )
            {
LABEL_135:
              *(_QWORD *)(v64 + v58[6]) = 0LL;
LABEL_136:
              *(_DWORD *)(v58[5] + 4LL * (v62 >> 5)) &= ~(1 << (v62 & 0x1F));
              v53 = v159;
              goto LABEL_132;
            }
            *(_QWORD *)(v64 + v58[6]) = v68;
            v53 = v159;
          }
        }
LABEL_132:
        v72 = v168;
        *v168 = v56;
        *(_QWORD *)(v56 + 8) = v72;
        if ( (*(_BYTE *)(v53 + 10) & 8) == 0 || (unsigned __int8)sub_18005CA3C(a1, v53) )
        {
          v73 = *(_BYTE *)(v53 + 10);
          if ( (v73 & 4) != 0 )
          {
            v74 = 16LL * *(unsigned __int16 *)(v53 + 8) - 32;
            v184 = v74;
            if ( (v73 & 2) != 0 && v74 > 4 )
            {
              v74 -= 4LL;
              v184 = v74;
            }
            v75 = RtlCompareMemoryUlong(v53 + 32, v74, 4277075694LL);
            if ( v75 != v74 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v53,
                (const void *)(v75 + v53 + 32));
              sub_1801011EC();
            }
          }
          *(_BYTE *)(v13 + 10) = 0;
          *(_BYTE *)(v13 + 15) = 0;
          v162 += *(unsigned __int16 *)(v53 + 8);
          *(_WORD *)(v13 + 8) = v162;
          *(_WORD *)(v13 + 16 * v162 + 12) = v162 ^ *(_WORD *)(a1 + 140);
          v29 = v162;
          goto LABEL_151;
        }
        sub_1800128F0(a1, v53, *(unsigned __int16 *)(v53 + 8), 1);
      }
    }
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v31 + 8);
    v35 = *(__int64 **)(a1 + 312);
    if ( v35 )
    {
      v36 = *(unsigned __int16 *)(v31 + 8);
      while ( 1 )
      {
        v37 = *((unsigned int *)v35 + 2);
        if ( v36 < v37 )
        {
          v180 = *(unsigned __int16 *)(v31 + 8);
          v38 = v36;
          goto LABEL_63;
        }
        if ( !*v35 )
          break;
        v35 = (__int64 *)*v35;
      }
      v38 = v37 - 1;
      v180 = v38;
LABEL_63:
      v163 = v36;
      v39 = v38 - *((_DWORD *)v35 + 6);
      if ( *((_DWORD *)v35 + 3) )
        v40 = 2 * v39;
      else
        v40 = v39;
      a4 = 8 * v40;
      v163 = 8 * v40;
      v41 = v35[6];
      v42 = *(__int64 **)(v41 + 8 * v40);
      --*((_DWORD *)v35 + 4);
      v43 = *((_DWORD *)v35 + 2);
      if ( v38 == v43 - 1 )
        --*((_DWORD *)v35 + 5);
      if ( v42 == v33 )
      {
        v172 = v43;
        if ( !*v35 )
          --v43;
        v172 = v43;
        v44 = *v33;
        v45 = v35[4];
        if ( v38 >= v43 )
        {
          if ( v44 != v45 )
          {
            *(_QWORD *)(v41 + a4) = v44;
            goto LABEL_79;
          }
          *(_QWORD *)(v41 + a4) = 0LL;
        }
        else
        {
          if ( v44 != v45 )
          {
            v46 = *(_DWORD *)(v44 - 16 + 8);
            v192 = v46;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v47 = v46 ^ *(_DWORD *)(a1 + 136);
              v192 = v47;
              LOWORD(v46) = v47;
              if ( HIBYTE(v47) != ((unsigned __int8)v47 ^ (unsigned __int8)(BYTE1(v47) ^ BYTE2(v47))) )
              {
                sub_18009A5F0(3, a1, v44 - 16, 0, 0LL, 0LL);
                LOWORD(v46) = v47;
                a4 = v163;
              }
              v31 = v158;
            }
            if ( (_DWORD)v36 == (unsigned __int16)v46 )
            {
              *(_QWORD *)(a4 + v35[6]) = v44;
              goto LABEL_79;
            }
          }
          *(_QWORD *)(a4 + v35[6]) = 0LL;
        }
        *(_DWORD *)(v35[5] + 4LL * (v39 >> 5)) &= ~(1 << (v39 & 0x1F));
      }
    }
LABEL_79:
    v48 = v168;
    v49 = v169;
    *v169 = (__int64)v168;
    v48[1] = (__int64)v49;
    if ( (*(_BYTE *)(v31 + 10) & 8) == 0 || (unsigned __int8)sub_18005CA3C(a1, v31) )
    {
      v50 = *(_BYTE *)(v31 + 10);
      if ( (v50 & 4) != 0 )
      {
        v51 = 16LL * *(unsigned __int16 *)(v31 + 8) - 32;
        v181 = v51;
        if ( (v50 & 2) != 0 && v51 > 4 )
        {
          v51 -= 4LL;
          v181 = v51;
        }
        v52 = RtlCompareMemoryUlong(v31 + 32, v51, 4277075694LL);
        if ( v52 != v51 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v31,
            (const void *)(v52 + v31 + 32));
          sub_1801011EC();
        }
      }
      *(_BYTE *)(v31 + 10) = 0;
      *(_BYTE *)(v31 + 15) = 0;
      v13 = v31;
      v182 = v31;
      v162 += *(unsigned __int16 *)(v31 + 8);
      *(_WORD *)(v31 + 8) = v162;
      *(_WORD *)(v31 + 16 * v162 + 12) = v162 ^ *(_WORD *)(a1 + 140);
    }
    else
    {
      sub_1800128F0(a1, v31, *(unsigned __int16 *)(v31 + 8), 1);
    }
    goto LABEL_99;
  }
LABEL_152:
  if ( v29 < *(_QWORD *)(a1 + 176) || v29 + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( v29 + *(_QWORD *)(a1 + 192) > *(_QWORD *)(a1 + 184) )
    {
      v76 = 256;
      if ( v29 >= 0x100 && *(_WORD *)(a1 + 140) == *(_WORD *)(v13 + 12) )
      {
        sub_1800128F0(a1, v13, v29, 0);
        goto LABEL_318;
      }
    }
    if ( v29 > 0xFF00 )
    {
      sub_180012F50(a1, v13, v29);
LABEL_277:
      if ( !v157 )
        goto LABEL_285;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v126 = *(_DWORD *)(v13 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v13 + 8) = v126;
        if ( HIBYTE(v126) != ((unsigned __int8)v126 ^ (unsigned __int8)(BYTE1(v126) ^ BYTE2(v126))) )
          sub_1800FC010(a1, v13);
      }
      *(_BYTE *)(v13 + 10) |= 2u;
      v127 = *(_WORD *)(v13 + 8);
      v128 = v127;
      v129 = 16LL * v127 + v13;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v13 + 11) = v127 ^ HIBYTE(v127) ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      *(_WORD *)(v129 - 4) = v157;
      *(_WORD *)(v129 - 2) = 0;
      if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
      {
        LOWORD(v128) = HIBYTE(v127);
        *(_WORD *)(v129 - 2) = sub_1800244C4(1LL, v128);
        v76 = 256;
      }
      else
      {
LABEL_285:
        v76 = 256;
      }
      goto LABEL_318;
    }
    if ( v6 )
    {
      v77 = (unsigned __int16)v29;
      v160 = (unsigned __int16)v29;
      *(_BYTE *)(v13 + 10) = 0;
      *(_BYTE *)(v13 + 15) = 0;
      v78 = (_QWORD *)(a1 + 336);
      v79 = *(__int64 **)(a1 + 312);
      if ( v79 )
      {
        while ( 1 )
        {
          v80 = *((unsigned int *)v79 + 2);
          if ( (unsigned __int16)v29 < v80 )
          {
            v81 = (unsigned __int16)v29;
            v175 = (unsigned __int16)v29;
            goto LABEL_167;
          }
          if ( !*v79 )
            break;
          v79 = (__int64 *)*v79;
        }
        v81 = v80 - 1;
        v175 = (unsigned int)(v80 - 1);
        while ( 1 )
        {
LABEL_167:
          v82 = v81 - *((_DWORD *)v79 + 6);
          v83 = 0LL;
          v84 = (_QWORD *)v79[4];
          v85 = (_QWORD *)v84[1];
          if ( v84 == v85 )
          {
            v83 = (_QWORD *)v79[4];
          }
          else
          {
            v86 = *((_DWORD *)v85 - 2);
            v195 = v86;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v87 = v86 ^ *(_DWORD *)(a1 + 136);
              v195 = v87;
              LOWORD(v86) = v87;
              if ( HIBYTE(v87) != ((unsigned __int8)v87 ^ (unsigned __int8)(BYTE1(v87) ^ BYTE2(v87))) )
              {
                sub_18009A5F0(3, a1, (_DWORD)v85 - 16, 0, 0LL, 0LL);
                LOWORD(v86) = v87;
              }
            }
            v88 = (unsigned __int16)v86;
            v77 = v160;
            if ( (int)v160 - v88 <= 0 )
            {
              v89 = *v84 - 16LL;
              v90 = *(_DWORD *)(v89 + 8);
              v196 = v90;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v91 = v90 ^ *(_DWORD *)(a1 + 136);
                v196 = v91;
                LOWORD(v90) = v91;
                if ( HIBYTE(v91) != ((unsigned __int8)v91 ^ (unsigned __int8)(BYTE1(v91) ^ BYTE2(v91))) )
                {
                  sub_18009A5F0(3, a1, v89, 0, 0LL, 0LL);
                  LOWORD(v90) = v91;
                }
              }
              v92 = (unsigned __int16)v90;
              v77 = v160;
              if ( (int)v160 - v92 > 0 )
              {
                if ( *v79 || (_DWORD)v175 != *((_DWORD *)v79 + 2) - 1 )
                {
                  v94 = (unsigned int)v82 >> 5;
                  v170 = (unsigned int)v82 >> 5;
                  a4 = ((unsigned int)(*((_DWORD *)v79 + 2) - *((_DWORD *)v79 + 6)) >> 5) - 1;
                  v95 = (unsigned int *)(v79[5] + 4 * v94);
                  v185 = v95;
                  v96 = *v95 & ~((1 << (v82 & 0x1F)) - 1);
                  while ( !v96 )
                  {
                    if ( (unsigned int)v94 > (unsigned int)a4 )
                    {
                      v13 = v200;
                      goto LABEL_207;
                    }
                    v185 = ++v95;
                    v96 = *v95;
                    LODWORD(v94) = v94 + 1;
                    v170 = v94;
                  }
                  if ( (_WORD)v96 )
                  {
                    if ( (_BYTE)v96 )
                      v97 = (unsigned __int8)byte_180119500[(unsigned __int8)v96];
                    else
                      v97 = (unsigned __int8)byte_180119500[BYTE1(v96)] + 8;
                  }
                  else if ( (v96 & 0xFF0000) != 0 )
                  {
                    v97 = (unsigned __int8)byte_180119500[BYTE2(v96)] + 16;
                  }
                  else
                  {
                    v97 = (unsigned __int8)byte_180119500[(unsigned __int64)v96 >> 24] + 24;
                  }
                  v98 = (unsigned int)(v97 + 32 * v94);
                  v170 = v98;
                  if ( *((_DWORD *)v79 + 3) )
                    v98 = (unsigned int)(2 * v98);
                  v83 = *(_QWORD **)(v79[6] + 8 * v98);
LABEL_203:
                  v77 = v160;
                }
                else
                {
                  if ( *((_DWORD *)v79 + 3) )
                    v82 = (unsigned int)(2 * v82);
                  v93 = *(_QWORD **)(v79[6] + 8 * v82);
                  while ( v84 != v93 )
                  {
                    LOBYTE(a4) = 1;
                    if ( (int)sub_18005C2AC(a1, v93, v77, a4) <= 0 )
                    {
                      v83 = v93;
                      goto LABEL_203;
                    }
                    v93 = (_QWORD *)*v93;
                    v77 = v160;
                  }
                }
              }
              else
              {
                v83 = (_QWORD *)*v84;
              }
            }
            else
            {
              v83 = v84;
            }
            v13 = v200;
          }
          if ( v83 )
            break;
LABEL_207:
          v79 = (__int64 *)*v79;
          v81 = *((_DWORD *)v79 + 6);
          v175 = v81;
          v77 = v160;
        }
        v78 = (_QWORD *)(a1 + 336);
      }
      else
      {
        v83 = (_QWORD *)*v78;
      }
      while ( v78 != v83 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v99 = *((_DWORD *)v83 - 2);
          v197 = v99;
          if ( (v99 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v100 = v99 ^ *(_DWORD *)(a1 + 136);
            v197 = v100;
          }
          else
          {
            LOWORD(v100) = v99;
          }
          v13 = v200;
        }
        else
        {
          LOWORD(v100) = *((_WORD *)v83 - 4);
        }
        v166 = v100;
        if ( v77 <= (unsigned __int16)v100 )
          break;
        v83 = (_QWORD *)*v83;
        v78 = (_QWORD *)(a1 + 336);
      }
      v101 = (_QWORD *)(v13 + 16);
      v163 = v13 + 16;
      v102 = (__int64 *)v83[1];
      if ( (_QWORD *)*v102 == v83 )
      {
        *v101 = v83;
        *(_QWORD *)(v13 + 24) = v102;
        *v102 = (__int64)v101;
        v83[1] = v101;
      }
      else
      {
        sub_18009A5F0(13, 0, (_DWORD)v83, 0, *v102, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v13 + 8);
      v103 = *(__int64 **)(a1 + 312);
      if ( v103 )
      {
        v104 = (__int64 *)*(unsigned __int16 *)(v13 + 8);
        while ( 1 )
        {
          v105 = *((unsigned int *)v103 + 2);
          if ( (unsigned __int64)v104 < v105 )
          {
            v186 = *(unsigned __int16 *)(v13 + 8);
            v106 = (unsigned int)v104;
            goto LABEL_228;
          }
          if ( !*v103 )
            break;
          v103 = (__int64 *)*v103;
        }
        v106 = v105 - 1;
        v186 = v106;
LABEL_228:
        v168 = v104;
        v107 = v106 - *((_DWORD *)v103 + 6);
        if ( *((_DWORD *)v103 + 3) )
          v108 = 2 * v107;
        else
          v108 = v107;
        ++*((_DWORD *)v103 + 4);
        v109 = 8 * v108;
        v161 = 8 * v108;
        v110 = *(_QWORD *)(8 * v108 + v103[6]);
        if ( v106 == *((_DWORD *)v103 + 2) - 1 )
          ++*((_DWORD *)v103 + 5);
        if ( !v110 )
          goto LABEL_239;
        v111 = *(_DWORD *)(v110 - 16 + 8);
        v198 = v111;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v112 = v111 ^ *(_DWORD *)(a1 + 136);
          v198 = v112;
          LOWORD(v111) = v112;
          if ( HIBYTE(v112) != ((unsigned __int8)v112 ^ (unsigned __int8)(BYTE1(v112) ^ BYTE2(v112))) )
          {
            sub_18009A5F0(3, a1, v110 - 16, 0, 0LL, 0LL);
            LOWORD(v111) = v112;
          }
          v101 = (_QWORD *)v163;
          v109 = v161;
        }
        v13 = v200;
        if ( (int)v104 - (unsigned __int16)v111 <= 0 )
LABEL_239:
          *(_QWORD *)(v109 + v103[6]) = v101;
        if ( !v110 )
          *(_DWORD *)(v103[5] + 4LL * (v107 >> 5)) |= 1 << (v107 & 0x1F);
      }
LABEL_242:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_277;
    }
    v113 = (unsigned __int16)v29;
    *(_BYTE *)(v13 + 10) &= 0xF0u;
    *(_BYTE *)(v13 + 15) = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_253:
      v116 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v117 = (_QWORD *)sub_18005C238(a1, v113);
      else
        v117 = (_QWORD *)*v116;
      while ( v116 != v117 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v118 = *((_DWORD *)v117 - 2);
          v199 = v118;
          if ( (v118 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v119 = v118 ^ *(_DWORD *)(a1 + 136);
            v199 = v119;
          }
          else
          {
            LOWORD(v119) = v118;
          }
          v13 = v200;
        }
        else
        {
          LOWORD(v119) = *((_WORD *)v117 - 4);
        }
        v167 = v119;
        if ( v113 <= (unsigned __int16)v119 )
          break;
        v117 = (_QWORD *)*v117;
      }
      v120 = (_QWORD *)(v13 + 16);
      v121 = (__int64 *)v117[1];
      if ( (_QWORD *)*v121 == v117 )
      {
        *v120 = v117;
        *(_QWORD *)(v13 + 24) = v121;
        *v121 = (__int64)v120;
        v117[1] = v120;
      }
      else
      {
        sub_18009A5F0(13, 0, (_DWORD)v117, 0, *v121, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v13 + 8);
      v122 = *(__int64 ***)(a1 + 312);
      if ( v122 )
      {
        v123 = *(unsigned __int16 *)(v13 + 8);
        while ( 1 )
        {
          v124 = *((unsigned int *)v122 + 2);
          if ( v123 < v124 )
          {
            v125 = *(unsigned __int16 *)(v13 + 8);
            v188 = *(unsigned __int16 *)(v13 + 8);
            goto LABEL_274;
          }
          if ( !*v122 )
            break;
          v122 = (__int64 **)*v122;
        }
        v125 = v124 - 1;
        v188 = (unsigned int)(v124 - 1);
LABEL_274:
        LOBYTE(v117) = 1;
        sub_18005C190(a1, (_DWORD)v122, (_DWORD)v117, v13 + 16, v125, v123);
      }
      goto LABEL_242;
    }
    v114 = (_DWORD *)(v13 + 32);
    v187 = v13 + 32;
    v115 = (16 * (unsigned __int64)(unsigned int)v113 - 32) >> 2;
    v176 = v115;
    if ( v115 )
    {
      if ( ((unsigned __int8)v114 & 4) == 0 )
        goto LABEL_250;
      *v114 = -17891602;
      v176 = --v115;
      if ( v115 )
      {
        v114 = (_DWORD *)(v13 + 36);
        v187 = v13 + 36;
LABEL_250:
        memset64(v114, 0xFEEEFEEEFEEEFEEEuLL, v115 >> 1);
        if ( (v115 & 1) != 0 )
          v114[v115 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v13 + 10) |= 4u;
    goto LABEL_253;
  }
  sub_1800128F0(a1, v13, v29, 0);
  v76 = 256;
LABEL_318:
  if ( v155 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      ++*(_DWORD *)(a1 + 608);
      v148 = *(_DWORD *)(a1 + 616);
      if ( *(_DWORD *)(a1 + 608) > v148 )
      {
        *(_DWORD *)(a1 + 608) = 0;
        v149 = *(_QWORD *)(a1 + 544) - 16LL * *(_QWORD *)(a1 + 192);
        if ( v149 > *(_QWORD *)(a1 + 640) )
          *(_QWORD *)(a1 + 640) = v149;
        *(_QWORD *)(a1 + 648) = v149;
      }
      if ( ++*(_DWORD *)(a1 + 620) >= 0x1000u )
      {
        if ( *(_BYTE *)(a1 + 386) != 2 || *(_DWORD *)(a1 + 624) <= 0x10u )
          v76 = 16;
        if ( *(_DWORD *)(a1 + 612) > v76 && v148 < 0x10000 )
          *(_DWORD *)(a1 + 616) = 2 * v148;
        *(_DWORD *)(a1 + 612) = 0;
        *(_DWORD *)(a1 + 620) = 0;
      }
    }
    v150 = *(_QWORD *)(a1 + 352);
    v26 = (*(_DWORD *)(v150 + 12))-- == 1;
    if ( v26 )
    {
      *(_QWORD *)(v150 + 16) = 0LL;
      v151 = _InterlockedCompareExchange((volatile signed __int32 *)(v150 + 8), -1, -2);
      if ( v151 != -2 )
      {
        if ( (*(_BYTE *)(v150 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v150);
        v152 = *(_QWORD *)(v150 + 24);
        if ( !v152 )
          v152 = sub_18004AE34(v150);
        do
        {
          v153 = v151 & 2 | 1;
          v154 = _InterlockedCompareExchange((volatile signed __int32 *)(v150 + 8), v151 + v153, v151);
          v26 = v151 == v154;
          v151 = v154;
        }
        while ( !v26 );
        if ( (v153 & 2) != 0 )
          sub_18009A320(v150, v152);
      }
    }
  }
  return v171;
}
