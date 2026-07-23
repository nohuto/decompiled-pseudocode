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
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
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
  SIZE_T v51; // rdi
  SIZE_T v52; // rsi
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
  SIZE_T v74; // rdi
  SIZE_T v75; // rsi
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
  __int64 v138; // rcx
  __int64 v139; // rdi
  __int64 v140; // rcx
  unsigned int v141; // edx
  unsigned __int64 v142; // rcx
  __int64 v143; // rdi
  signed __int32 v144; // ebx
  __int64 v145; // r8
  int v146; // edx
  signed __int32 v147; // eax
  char v148; // [rsp+48h] [rbp-1B0h]
  char v149; // [rsp+49h] [rbp-1AFh]
  __int16 v150; // [rsp+4Ch] [rbp-1ACh]
  __int64 v151; // [rsp+50h] [rbp-1A8h]
  __int64 v152; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v153; // [rsp+50h] [rbp-1A8h]
  __int64 v154; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v155; // [rsp+58h] [rbp-1A0h] BYREF
  __int64 v156; // [rsp+60h] [rbp-198h]
  int v157[2]; // [rsp+68h] [rbp-190h]
  unsigned __int8 v158; // [rsp+70h] [rbp-188h]
  __int16 v159; // [rsp+72h] [rbp-186h]
  __int16 v160; // [rsp+74h] [rbp-184h]
  __int64 *v161; // [rsp+78h] [rbp-180h]
  __int64 *v162; // [rsp+80h] [rbp-178h]
  unsigned int v163; // [rsp+88h] [rbp-170h]
  unsigned int v164; // [rsp+8Ch] [rbp-16Ch]
  unsigned int v165; // [rsp+90h] [rbp-168h]
  unsigned int v166; // [rsp+98h] [rbp-160h]
  unsigned __int64 v167; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v168; // [rsp+A8h] [rbp-150h]
  unsigned __int64 v169; // [rsp+B0h] [rbp-148h]
  int v170[2]; // [rsp+B8h] [rbp-140h]
  ULONG v171; // [rsp+C0h] [rbp-138h]
  ULONG NtGlobalFlag; // [rsp+C4h] [rbp-134h]
  __int64 v173; // [rsp+C8h] [rbp-130h]
  SIZE_T v174; // [rsp+D0h] [rbp-128h]
  __int64 v175; // [rsp+D8h] [rbp-120h]
  __int64 v176; // [rsp+F0h] [rbp-108h]
  SIZE_T v177; // [rsp+F8h] [rbp-100h]
  unsigned int *v178; // [rsp+100h] [rbp-F8h]
  __int64 v179; // [rsp+108h] [rbp-F0h]
  __int64 v180; // [rsp+110h] [rbp-E8h]
  __int64 v181; // [rsp+118h] [rbp-E0h]
  __int64 v182; // [rsp+120h] [rbp-D8h]
  struct _TEB *v183; // [rsp+128h] [rbp-D0h]
  unsigned __int64 v184; // [rsp+130h] [rbp-C8h]
  int v185; // [rsp+140h] [rbp-B8h]
  int v186; // [rsp+150h] [rbp-A8h]
  int v187; // [rsp+170h] [rbp-88h]
  int v188; // [rsp+180h] [rbp-78h]
  int v189; // [rsp+190h] [rbp-68h]
  int v190; // [rsp+1A0h] [rbp-58h]
  int v191; // [rsp+1B0h] [rbp-48h]
  int v192; // [rsp+1C0h] [rbp-38h]
  __int64 v193; // [rsp+210h] [rbp+18h]

  v193 = a3;
  v6 = 1;
  v149 = 1;
  v148 = 0;
  v164 = 1;
  v167 = 0LL;
  v150 = 0;
  if ( a1 == a3 )
  {
    sub_18009A5F0(9, a1, a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v8 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v8 & 0x7D010F60) != 0 )
  {
    v6 = 0;
    v149 = 0;
    v9 = 4LL;
    if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
      return sub_180100000((void *)a1);
  }
  else
  {
    v9 = 3LL;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
  {
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    v12 = 2147353472LL;
  }
  else
  {
    v12 = 2147353472LL;
    UserModeGlobalLogger = 2147353472LL;
  }
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v13 = v193;
    if ( ((*(_BYTE *)(v193 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
      sub_1800FE3BC(a1, a4, v9);
  }
  else
  {
    v13 = v193;
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
        v183 = NtCurrentTeb();
        v183->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        v164 = 0;
LABEL_317:
        v76 = 256;
        goto LABEL_318;
      }
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      sub_18007C6F0(a1, 1LL);
    }
    v148 = 1;
    v13 = v193;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v18 = *(_DWORD *)(v193 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v193 + 8) = v18;
      if ( HIBYTE(v18) != ((unsigned __int8)v18 ^ (unsigned __int8)(BYTE1(v18) ^ BYTE2(v18))) )
        sub_1800FC010(a1, v193);
    }
    v19 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(v193 + 8) < (unsigned __int64)*((unsigned int *)v19 + 2) )
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
    *(_QWORD *)v157 = v130;
    *(_QWORD *)v170 = *(_QWORD *)(v130 + 32);
    v167 = v130 & 0xFFFFFFFFFFFF0000uLL;
    *(_QWORD *)(a1 + 560) -= *(_QWORD *)v170;
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
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v135 = *(_QWORD *)(v130 + 32) >> 4;
        v130 = *(_QWORD *)v157;
        sub_1800ED320(a1, *(unsigned __int16 *)(*(_QWORD *)v157 + 18LL), v135, 0, 3);
      }
      else
      {
        v130 = *(_QWORD *)v157;
      }
    }
    if ( v148 )
    {
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v148 = 0;
    }
    v136 = *(_QWORD *)(v130 + 40);
    v182 = v136;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v137 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
      LODWORD(v130) = v157[0];
      v136 = v182;
    }
    else
    {
      v137 = 2147353480LL;
    }
    if ( *(_BYTE *)v137 )
      sub_1800FC524(a1, v167, v136);
    v155 = 0LL;
    sub_18005CD8C(v137, &v167, &v155, 0x8000LL);
    if ( RtlGetCurrentServiceSessionId() )
    {
      v138 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      LODWORD(v130) = v157[0];
    }
    else
    {
      v138 = 2147353472LL;
    }
    if ( *(_BYTE *)v138 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v12 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        LODWORD(v130) = v157[0];
        sub_1800FE14C(a1, v157[0], v170[0], 16 * *(_QWORD *)(a1 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v12);
      }
      else
      {
        LODWORD(v130) = v157[0];
      }
    }
    v139 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v140 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
      LODWORD(v130) = v157[0];
    }
    else
    {
      v140 = 2147353482LL;
    }
    if ( *(_BYTE *)v140 )
    {
      if ( RtlGetCurrentServiceSessionId() )
      {
        v139 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
        LODWORD(v130) = v157[0];
      }
      sub_1800FE14C(a1, v130, v170[0], 16 * *(_QWORD *)(a1 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v139);
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
    v13 = v193;
  }
  if ( !v6 )
  {
    v171 = NtCurrentPeb()->NtGlobalFlag;
    v13 = v193;
    if ( (v171 & 0x800) != 0 )
    {
      v26 = (*v21 & 2) == 0;
      v27 = *(unsigned __int16 *)(a3 + 8);
      if ( v26 )
      {
        v158 = *(_BYTE *)(v193 + 11);
        v28 = v158;
      }
      else
      {
        v28 = *(unsigned __int16 *)(v193 + 16LL * *(unsigned __int16 *)(a3 + 8) - 14);
      }
      v150 = sub_1800ED320(a1, v28, v27, 0, 2);
    }
  }
  v29 = *v23;
  v155 = v29;
  if ( *(char *)(a1 + 112) >= 0 )
  {
    v175 = v13;
    v30 = 16 * (*(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140));
    v31 = v13 - v30;
    v151 = v13 - v30;
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
    v161 = *(__int64 **)(v31 + 16);
    v162 = *(__int64 **)(v31 + 24);
    v34 = *v162;
    a4 = v161[1];
    if ( *v162 != a4 || (__int64 *)v34 != v33 )
    {
      sub_18009A5F0(13, a1, v31 + 16, a4, v34, 0LL);
LABEL_99:
      v29 = v155;
LABEL_100:
      v53 = v13 + 16 * v29;
      v152 = v53;
      if ( !*(_DWORD *)(a1 + 124) )
        goto LABEL_104;
      v186 = *(_DWORD *)(v53 + 8) ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v186) != ((unsigned __int8)v186 ^ (unsigned __int8)(BYTE1(v186) ^ BYTE2(v186))) )
        sub_18009A5F0(3, a1, v13 + 16 * v29, 0, 0LL, 0LL);
      while ( 1 )
      {
        while ( 1 )
        {
          v29 = v155;
LABEL_104:
          if ( ((*(_BYTE *)(v53 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
          {
LABEL_151:
            v193 = v13;
            v6 = v149;
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
          v156 = v56;
          v161 = *(__int64 **)(v53 + 24);
          v57 = *v161;
          a4 = *(_QWORD *)(v56 + 8);
          if ( *v161 == a4 && (__int64 *)v57 == v55 )
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
              v176 = *(unsigned __int16 *)(v53 + 8);
              v61 = v59;
              goto LABEL_116;
            }
            if ( !*v58 )
              break;
            v58 = (__int64 *)*v58;
          }
          v61 = v60 - 1;
          v176 = v61;
LABEL_116:
          v184 = v59;
          v62 = v61 - *((_DWORD *)v58 + 6);
          if ( *((_DWORD *)v58 + 3) )
            v63 = 2 * v62;
          else
            v63 = v62;
          v64 = 8 * v63;
          v162 = (__int64 *)(8 * v63);
          v65 = v58[6];
          v66 = *(__int64 **)(v65 + 8 * v63);
          --*((_DWORD *)v58 + 4);
          v67 = *((_DWORD *)v58 + 2);
          a4 = v67 - 1;
          if ( v61 == (_DWORD)a4 )
            --*((_DWORD *)v58 + 5);
          if ( v66 == v55 )
          {
            v166 = v67;
            if ( !*v58 )
              --v67;
            v166 = v67;
            v68 = *v55;
            v69 = v58[4];
            if ( v61 >= v67 )
            {
              if ( v68 != v69 )
              {
                *(_QWORD *)(v65 + v64) = v68;
                v53 = v152;
                goto LABEL_132;
              }
              *(_QWORD *)(v65 + v64) = 0LL;
              goto LABEL_136;
            }
            if ( v68 == v69 )
              goto LABEL_135;
            v70 = *(_DWORD *)(v68 - 16 + 8);
            v187 = v70;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v71 = v70 ^ *(_DWORD *)(a1 + 136);
              v187 = v71;
              LOWORD(v70) = v71;
              if ( HIBYTE(v71) != ((unsigned __int8)v71 ^ (unsigned __int8)(BYTE1(v71) ^ BYTE2(v71))) )
              {
                sub_18009A5F0(3, a1, v68 - 16, 0, 0LL, 0LL);
                LOWORD(v70) = v71;
                v64 = (__int64)v162;
              }
              v56 = v156;
            }
            if ( (_DWORD)v59 != (unsigned __int16)v70 )
            {
LABEL_135:
              *(_QWORD *)(v64 + v58[6]) = 0LL;
LABEL_136:
              *(_DWORD *)(v58[5] + 4LL * (v62 >> 5)) &= ~(1 << (v62 & 0x1F));
              v53 = v152;
              goto LABEL_132;
            }
            *(_QWORD *)(v64 + v58[6]) = v68;
            v53 = v152;
          }
        }
LABEL_132:
        v72 = v161;
        *v161 = v56;
        *(_QWORD *)(v56 + 8) = v72;
        if ( (*(_BYTE *)(v53 + 10) & 8) == 0 || (unsigned __int8)sub_18005CA3C((PVOID)a1) )
        {
          v73 = *(_BYTE *)(v53 + 10);
          if ( (v73 & 4) != 0 )
          {
            v74 = 16LL * *(unsigned __int16 *)(v53 + 8) - 32;
            v177 = v74;
            if ( (v73 & 2) != 0 && v74 > 4 )
            {
              v74 -= 4LL;
              v177 = v74;
            }
            v75 = RtlCompareMemoryUlong((PVOID)(v53 + 32), v74, 0xFEEEFEEE);
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
          v155 += *(unsigned __int16 *)(v53 + 8);
          *(_WORD *)(v13 + 8) = v155;
          *(_WORD *)(v13 + 16 * v155 + 12) = v155 ^ *(_WORD *)(a1 + 140);
          v29 = v155;
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
          v173 = *(unsigned __int16 *)(v31 + 8);
          v38 = v36;
          goto LABEL_63;
        }
        if ( !*v35 )
          break;
        v35 = (__int64 *)*v35;
      }
      v38 = v37 - 1;
      v173 = v38;
LABEL_63:
      v156 = v36;
      v39 = v38 - *((_DWORD *)v35 + 6);
      if ( *((_DWORD *)v35 + 3) )
        v40 = 2 * v39;
      else
        v40 = v39;
      a4 = 8 * v40;
      v156 = 8 * v40;
      v41 = v35[6];
      v42 = *(__int64 **)(v41 + 8 * v40);
      --*((_DWORD *)v35 + 4);
      v43 = *((_DWORD *)v35 + 2);
      if ( v38 == v43 - 1 )
        --*((_DWORD *)v35 + 5);
      if ( v42 == v33 )
      {
        v165 = v43;
        if ( !*v35 )
          --v43;
        v165 = v43;
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
            v185 = v46;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v47 = v46 ^ *(_DWORD *)(a1 + 136);
              v185 = v47;
              LOWORD(v46) = v47;
              if ( HIBYTE(v47) != ((unsigned __int8)v47 ^ (unsigned __int8)(BYTE1(v47) ^ BYTE2(v47))) )
              {
                sub_18009A5F0(3, a1, v44 - 16, 0, 0LL, 0LL);
                LOWORD(v46) = v47;
                a4 = v156;
              }
              v31 = v151;
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
    v48 = v161;
    v49 = v162;
    *v162 = (__int64)v161;
    v48[1] = (__int64)v49;
    if ( (*(_BYTE *)(v31 + 10) & 8) == 0 || (unsigned __int8)sub_18005CA3C((PVOID)a1) )
    {
      v50 = *(_BYTE *)(v31 + 10);
      if ( (v50 & 4) != 0 )
      {
        v51 = 16LL * *(unsigned __int16 *)(v31 + 8) - 32;
        v174 = v51;
        if ( (v50 & 2) != 0 && v51 > 4 )
        {
          v51 -= 4LL;
          v174 = v51;
        }
        v52 = RtlCompareMemoryUlong((PVOID)(v31 + 32), v51, 0xFEEEFEEE);
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
      v175 = v31;
      v155 += *(unsigned __int16 *)(v31 + 8);
      *(_WORD *)(v31 + 8) = v155;
      *(_WORD *)(v31 + 16 * v155 + 12) = v155 ^ *(_WORD *)(a1 + 140);
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
      if ( !v150 )
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
      *(_WORD *)(v129 - 4) = v150;
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
      v153 = (unsigned __int16)v29;
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
            v168 = (unsigned __int16)v29;
            goto LABEL_167;
          }
          if ( !*v79 )
            break;
          v79 = (__int64 *)*v79;
        }
        v81 = v80 - 1;
        v168 = (unsigned int)(v80 - 1);
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
            v188 = v86;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v87 = v86 ^ *(_DWORD *)(a1 + 136);
              v188 = v87;
              LOWORD(v86) = v87;
              if ( HIBYTE(v87) != ((unsigned __int8)v87 ^ (unsigned __int8)(BYTE1(v87) ^ BYTE2(v87))) )
              {
                sub_18009A5F0(3, a1, (_DWORD)v85 - 16, 0, 0LL, 0LL);
                LOWORD(v86) = v87;
              }
            }
            v88 = (unsigned __int16)v86;
            v77 = v153;
            if ( (int)v153 - v88 <= 0 )
            {
              v89 = *v84 - 16LL;
              v90 = *(_DWORD *)(v89 + 8);
              v189 = v90;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v91 = v90 ^ *(_DWORD *)(a1 + 136);
                v189 = v91;
                LOWORD(v90) = v91;
                if ( HIBYTE(v91) != ((unsigned __int8)v91 ^ (unsigned __int8)(BYTE1(v91) ^ BYTE2(v91))) )
                {
                  sub_18009A5F0(3, a1, v89, 0, 0LL, 0LL);
                  LOWORD(v90) = v91;
                }
              }
              v92 = (unsigned __int16)v90;
              v77 = v153;
              if ( (int)v153 - v92 > 0 )
              {
                if ( *v79 || (_DWORD)v168 != *((_DWORD *)v79 + 2) - 1 )
                {
                  v94 = (unsigned int)v82 >> 5;
                  v163 = (unsigned int)v82 >> 5;
                  a4 = ((unsigned int)(*((_DWORD *)v79 + 2) - *((_DWORD *)v79 + 6)) >> 5) - 1;
                  v95 = (unsigned int *)(v79[5] + 4 * v94);
                  v178 = v95;
                  v96 = *v95 & ~((1 << (v82 & 0x1F)) - 1);
                  while ( !v96 )
                  {
                    if ( (unsigned int)v94 > (unsigned int)a4 )
                    {
                      v13 = v193;
                      goto LABEL_207;
                    }
                    v178 = ++v95;
                    v96 = *v95;
                    LODWORD(v94) = v94 + 1;
                    v163 = v94;
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
                  v163 = v98;
                  if ( *((_DWORD *)v79 + 3) )
                    v98 = (unsigned int)(2 * v98);
                  v83 = *(_QWORD **)(v79[6] + 8 * v98);
LABEL_203:
                  v77 = v153;
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
                    v77 = v153;
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
            v13 = v193;
          }
          if ( v83 )
            break;
LABEL_207:
          v79 = (__int64 *)*v79;
          v81 = *((_DWORD *)v79 + 6);
          v168 = v81;
          v77 = v153;
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
          v190 = v99;
          if ( (v99 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v100 = v99 ^ *(_DWORD *)(a1 + 136);
            v190 = v100;
          }
          else
          {
            LOWORD(v100) = v99;
          }
          v13 = v193;
        }
        else
        {
          LOWORD(v100) = *((_WORD *)v83 - 4);
        }
        v159 = v100;
        if ( v77 <= (unsigned __int16)v100 )
          break;
        v83 = (_QWORD *)*v83;
        v78 = (_QWORD *)(a1 + 336);
      }
      v101 = (_QWORD *)(v13 + 16);
      v156 = v13 + 16;
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
            v179 = *(unsigned __int16 *)(v13 + 8);
            v106 = (unsigned int)v104;
            goto LABEL_228;
          }
          if ( !*v103 )
            break;
          v103 = (__int64 *)*v103;
        }
        v106 = v105 - 1;
        v179 = v106;
LABEL_228:
        v161 = v104;
        v107 = v106 - *((_DWORD *)v103 + 6);
        if ( *((_DWORD *)v103 + 3) )
          v108 = 2 * v107;
        else
          v108 = v107;
        ++*((_DWORD *)v103 + 4);
        v109 = 8 * v108;
        v154 = 8 * v108;
        v110 = *(_QWORD *)(8 * v108 + v103[6]);
        if ( v106 == *((_DWORD *)v103 + 2) - 1 )
          ++*((_DWORD *)v103 + 5);
        if ( !v110 )
          goto LABEL_239;
        v111 = *(_DWORD *)(v110 - 16 + 8);
        v191 = v111;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v112 = v111 ^ *(_DWORD *)(a1 + 136);
          v191 = v112;
          LOWORD(v111) = v112;
          if ( HIBYTE(v112) != ((unsigned __int8)v112 ^ (unsigned __int8)(BYTE1(v112) ^ BYTE2(v112))) )
          {
            sub_18009A5F0(3, a1, v110 - 16, 0, 0LL, 0LL);
            LOWORD(v111) = v112;
          }
          v101 = (_QWORD *)v156;
          v109 = v154;
        }
        v13 = v193;
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
          v192 = v118;
          if ( (v118 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v119 = v118 ^ *(_DWORD *)(a1 + 136);
            v192 = v119;
          }
          else
          {
            LOWORD(v119) = v118;
          }
          v13 = v193;
        }
        else
        {
          LOWORD(v119) = *((_WORD *)v117 - 4);
        }
        v160 = v119;
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
            v181 = *(unsigned __int16 *)(v13 + 8);
            goto LABEL_274;
          }
          if ( !*v122 )
            break;
          v122 = (__int64 **)*v122;
        }
        v125 = v124 - 1;
        v181 = (unsigned int)(v124 - 1);
LABEL_274:
        LOBYTE(v117) = 1;
        sub_18005C190(a1, (_DWORD)v122, (_DWORD)v117, v13 + 16, v125, v123);
      }
      goto LABEL_242;
    }
    v114 = (_DWORD *)(v13 + 32);
    v180 = v13 + 32;
    v115 = (16 * (unsigned __int64)(unsigned int)v113 - 32) >> 2;
    v169 = v115;
    if ( v115 )
    {
      if ( ((unsigned __int8)v114 & 4) == 0 )
        goto LABEL_250;
      *v114 = -17891602;
      v169 = --v115;
      if ( v115 )
      {
        v114 = (_DWORD *)(v13 + 36);
        v180 = v13 + 36;
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
  if ( v148 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      ++*(_DWORD *)(a1 + 608);
      v141 = *(_DWORD *)(a1 + 616);
      if ( *(_DWORD *)(a1 + 608) > v141 )
      {
        *(_DWORD *)(a1 + 608) = 0;
        v142 = *(_QWORD *)(a1 + 544) - 16LL * *(_QWORD *)(a1 + 192);
        if ( v142 > *(_QWORD *)(a1 + 640) )
          *(_QWORD *)(a1 + 640) = v142;
        *(_QWORD *)(a1 + 648) = v142;
      }
      if ( ++*(_DWORD *)(a1 + 620) >= 0x1000u )
      {
        if ( *(_BYTE *)(a1 + 386) != 2 || *(_DWORD *)(a1 + 624) <= 0x10u )
          v76 = 16;
        if ( *(_DWORD *)(a1 + 612) > v76 && v141 < 0x10000 )
          *(_DWORD *)(a1 + 616) = 2 * v141;
        *(_DWORD *)(a1 + 612) = 0;
        *(_DWORD *)(a1 + 620) = 0;
      }
    }
    v143 = *(_QWORD *)(a1 + 352);
    v26 = (*(_DWORD *)(v143 + 12))-- == 1;
    if ( v26 )
    {
      *(_QWORD *)(v143 + 16) = 0LL;
      v144 = _InterlockedCompareExchange((volatile signed __int32 *)(v143 + 8), -1, -2);
      if ( v144 != -2 )
      {
        if ( (*(_BYTE *)(v143 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v143);
        v145 = *(_QWORD *)(v143 + 24);
        if ( !v145 )
          v145 = sub_18004AE34(v143);
        do
        {
          v146 = v144 & 2 | 1;
          v147 = _InterlockedCompareExchange((volatile signed __int32 *)(v143 + 8), v144 + v146, v144);
          v26 = v144 == v147;
          v144 = v147;
        }
        while ( !v26 );
        if ( (v146 & 2) != 0 )
          sub_18009A320(v143, v145);
      }
    }
  }
  return v164;
}
