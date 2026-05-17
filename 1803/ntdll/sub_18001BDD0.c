/*
 * XREFs of sub_18001BDD0 @ 0x18001BDD0
 * Callers:
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001EBF0 @ 0x18001EBF0 (sub_18001EBF0.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     sub_18002A508 @ 0x18002A508 (sub_18002A508.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_180059D74 @ 0x180059D74 (sub_180059D74.c)
 *     sub_18005C190 @ 0x18005C190 (sub_18005C190.c)
 *     sub_18005C238 @ 0x18005C238 (sub_18005C238.c)
 *     sub_18005C30C @ 0x18005C30C (sub_18005C30C.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_180063B6C @ 0x180063B6C (sub_180063B6C.c)
 *     sub_1800747E4 @ 0x1800747E4 (sub_1800747E4.c)
 *     sub_18007C6F0 @ 0x18007C6F0 (sub_18007C6F0.c)
 *     sub_18008384C @ 0x18008384C (sub_18008384C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x18009F100 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800ED320 @ 0x1800ED320 (sub_1800ED320.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1800FC5C4 @ 0x1800FC5C4 (sub_1800FC5C4.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 *     sub_1800FE318 @ 0x1800FE318 (sub_1800FE318.c)
 *     sub_1800FF610 @ 0x1800FF610 (sub_1800FF610.c)
 *     sub_1801011EC @ 0x1801011EC (sub_1801011EC.c)
 */

__int64 __fastcall sub_18001BDD0(
        char *Src,
        __int64 a2,
        unsigned int *a3,
        unsigned __int64 a4,
        __int64 **a5,
        _DWORD *a6)
{
  unsigned int v6; // r12d
  unsigned __int64 v7; // r15
  unsigned int v8; // r14d
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r13
  struct _TEB *v13; // rax
  signed __int8 v14; // cf
  HANDLE UniqueThread; // rax
  unsigned __int16 *v16; // rdi
  unsigned __int16 v17; // cx
  __int64 *v18; // rdi
  __int64 *i; // r15
  unsigned __int64 v20; // rax
  unsigned int v21; // r14d
  __int64 v22; // r14
  __int64 *v23; // rsi
  __int64 *v24; // r12
  __int64 *v25; // rax
  int v26; // edx
  int v27; // edi
  int v28; // edx
  int v29; // edi
  __int64 v30; // rdi
  unsigned int v31; // edx
  int v32; // ecx
  __int64 v33; // rdi
  __int64 v34; // r14
  int v35; // edx
  unsigned __int64 v36; // rcx
  __int64 v37; // r13
  __int64 *v38; // r8
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 *v41; // rdi
  unsigned __int64 v42; // r12
  unsigned __int64 v43; // rcx
  unsigned int v44; // ecx
  unsigned int v45; // r15d
  __int64 v46; // rax
  __int64 v47; // r11
  __int64 v48; // r10
  __int64 *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // r9
  __int64 v52; // rdx
  int v53; // edx
  int v54; // esi
  char *v55; // rdi
  char v56; // r15
  int v57; // r8d
  __int64 v58; // rdi
  unsigned int *v59; // r12
  unsigned __int64 v60; // rcx
  bool v61; // r12
  unsigned __int8 v62; // al
  char *v63; // r9
  __int64 v64; // rsi
  char *v65; // rdx
  unsigned __int64 v66; // r15
  __int64 v67; // r15
  unsigned __int64 v68; // rdx
  _QWORD *v69; // rax
  __int64 *v70; // r15
  unsigned __int64 v71; // rax
  unsigned int v72; // r9d
  __int64 v73; // r9
  _QWORD *v74; // rdi
  _QWORD *v75; // r13
  _QWORD *v76; // rax
  int v77; // edx
  int v78; // r12d
  int v79; // eax
  __int64 v80; // r10
  int v81; // r8d
  int v82; // r12d
  __int64 v83; // rdi
  unsigned int v84; // r10d
  unsigned int *v85; // r8
  unsigned int v86; // edx
  int v87; // ecx
  __int64 v88; // rdi
  int v89; // ecx
  int v90; // eax
  _QWORD *v91; // r15
  __int64 *v92; // rax
  __int64 *v93; // rdi
  unsigned __int16 *v94; // r13
  unsigned __int64 v95; // rax
  int v96; // edx
  unsigned int v97; // r12d
  __int64 v98; // rax
  __int64 v99; // r8
  __int64 v100; // rcx
  unsigned __int16 *v101; // rsi
  unsigned __int64 v102; // rdx
  __int64 v103; // r13
  unsigned int v104; // ecx
  unsigned __int64 v105; // rdx
  int v106; // r9d
  __int64 *k; // r14
  int v108; // edx
  int v109; // edi
  int v110; // edx
  __int64 v111; // rsi
  __int64 *v112; // r15
  __int64 v113; // rax
  __int64 v114; // r9
  unsigned int *v115; // rdx
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // rax
  unsigned int v118; // eax
  _QWORD *m; // r12
  int v120; // r9d
  _QWORD *v121; // rax
  _QWORD *v122; // r8
  __int64 v123; // rsi
  __int64 *v124; // r15
  __int64 v125; // rax
  __int64 v126; // r9
  __int64 **v127; // rdx
  unsigned __int64 v128; // rcx
  unsigned __int64 v129; // rax
  unsigned int v130; // eax
  int v131; // r9d
  unsigned __int64 v132; // rcx
  __int64 v133; // rcx
  unsigned __int16 v134; // ax
  __int64 v135; // rdi
  int v136; // esi
  __int64 v137; // rdi
  __int64 v138; // rcx
  __int64 v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // rdi
  __int64 v142; // rcx
  __int64 v143; // rcx
  char *v144; // r8
  __int64 *v145; // rax
  unsigned __int64 v146; // rsi
  __int64 v147; // r12
  __int64 v148; // r15
  __int64 v149; // rdx
  _QWORD *v150; // rdi
  unsigned __int64 v151; // r15
  _QWORD *v152; // rdi
  _QWORD *v153; // r8
  int v154; // ecx
  int v155; // eax
  _QWORD *v156; // rdi
  __int64 *v157; // rax
  __int64 **v158; // rdx
  unsigned __int64 v159; // rcx
  unsigned __int64 v160; // r8
  int v161; // eax
  unsigned int v162; // eax
  int v163; // edx
  __int64 v164; // r8
  __int64 v165; // r13
  __int64 *v166; // rcx
  __int64 v167; // rax
  __int64 v168; // r9
  __int64 **v169; // rdx
  unsigned __int64 v170; // r9
  unsigned __int64 v171; // rcx
  __int64 v172; // rax
  unsigned __int64 v173; // r8
  unsigned __int64 v174; // r15
  _QWORD *v175; // rdi
  _QWORD *v176; // r8
  __int64 *v177; // rax
  int v178; // ecx
  int v179; // eax
  struct _TEB *v180; // rdi
  _QWORD *v181; // rdi
  _QWORD *v182; // r8
  __int64 *v183; // rax
  char v184; // al
  unsigned __int64 v185; // r13
  struct _TEB *v186; // rdi
  struct _TEB *v187; // rdi
  _DWORD *v188; // r8
  unsigned __int64 v189; // rdx
  _DWORD *v190; // r8
  unsigned __int64 v191; // rdx
  int v192; // ecx
  int v193; // eax
  char *v194; // r8
  char *v195; // rax
  __int16 v196; // ax
  __int16 v197; // ax
  _DWORD *HotpatchInformation; // rcx
  __int64 v199; // rcx
  void *v200; // rdi
  __int64 v202; // rax
  unsigned __int64 v203; // r13
  char v204; // [rsp+30h] [rbp-228h]
  int v205; // [rsp+34h] [rbp-224h]
  __int64 v206; // [rsp+38h] [rbp-220h] BYREF
  char v207; // [rsp+40h] [rbp-218h]
  int v208; // [rsp+44h] [rbp-214h]
  int v209; // [rsp+48h] [rbp-210h]
  void *v210; // [rsp+50h] [rbp-208h]
  __int64 v211; // [rsp+58h] [rbp-200h]
  unsigned __int64 v212; // [rsp+60h] [rbp-1F8h]
  unsigned __int64 v213; // [rsp+68h] [rbp-1F0h]
  __int64 v214; // [rsp+70h] [rbp-1E8h]
  unsigned int v215; // [rsp+78h] [rbp-1E0h]
  unsigned int v216; // [rsp+7Ch] [rbp-1DCh]
  __int64 v217; // [rsp+80h] [rbp-1D8h]
  unsigned int v218; // [rsp+88h] [rbp-1D0h]
  char *v219; // [rsp+90h] [rbp-1C8h]
  int v220; // [rsp+98h] [rbp-1C0h]
  __int64 v221; // [rsp+A0h] [rbp-1B8h]
  unsigned __int64 j; // [rsp+A8h] [rbp-1B0h]
  unsigned __int64 v223; // [rsp+B0h] [rbp-1A8h]
  unsigned __int64 v224; // [rsp+B8h] [rbp-1A0h]
  unsigned __int64 v225; // [rsp+C0h] [rbp-198h]
  unsigned __int64 v226; // [rsp+C8h] [rbp-190h]
  __int64 v227; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v228; // [rsp+D8h] [rbp-180h] BYREF
  __int64 v229; // [rsp+E0h] [rbp-178h]
  __int64 v230; // [rsp+E8h] [rbp-170h]
  unsigned int *v231; // [rsp+F0h] [rbp-168h]
  __int64 v232; // [rsp+F8h] [rbp-160h]
  __int64 v233; // [rsp+100h] [rbp-158h]
  unsigned __int64 v234; // [rsp+108h] [rbp-150h]
  unsigned int *v235; // [rsp+110h] [rbp-148h]
  __int64 v236; // [rsp+118h] [rbp-140h]
  __int64 v237; // [rsp+120h] [rbp-138h]
  __int64 *v238; // [rsp+128h] [rbp-130h]
  int v239; // [rsp+130h] [rbp-128h]
  __int64 v240; // [rsp+138h] [rbp-120h]
  unsigned __int64 v241; // [rsp+140h] [rbp-118h]
  __int64 v242; // [rsp+148h] [rbp-110h]
  __int64 v243; // [rsp+150h] [rbp-108h]
  __int64 v244; // [rsp+158h] [rbp-100h]
  __int64 v245; // [rsp+160h] [rbp-F8h]
  void *v246; // [rsp+168h] [rbp-F0h]
  _QWORD *v247; // [rsp+170h] [rbp-E8h]
  int v248; // [rsp+178h] [rbp-E0h]
  unsigned __int16 *v249; // [rsp+180h] [rbp-D8h]
  unsigned __int64 v250; // [rsp+188h] [rbp-D0h]
  int v251; // [rsp+198h] [rbp-C0h]
  int v252; // [rsp+1A8h] [rbp-B0h]
  int v253; // [rsp+1B8h] [rbp-A0h]
  int v254; // [rsp+1C8h] [rbp-90h]
  int v255; // [rsp+1D8h] [rbp-80h]
  int v256; // [rsp+1E8h] [rbp-70h]
  int v257; // [rsp+1F8h] [rbp-60h]
  int v258; // [rsp+208h] [rbp-50h]
  int v259; // [rsp+218h] [rbp-40h]
  unsigned int v260; // [rsp+268h] [rbp+10h]
  unsigned int *v261; // [rsp+270h] [rbp+18h]
  unsigned __int64 v262; // [rsp+278h] [rbp+20h] BYREF

  v262 = a4;
  v261 = a3;
  v260 = a2;
  v7 = (unsigned __int64)a3;
  v8 = a2;
  v205 = 1;
  v204 = 0;
  v10 = 0LL;
  v210 = 0LL;
  v206 = 0LL;
  v209 = 0;
  v11 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || (unsigned __int64)a3 >= 0x80000000 )
  {
    v205 = 0;
    *a6 = 4;
    if ( (unsigned __int64)a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return sub_1800FF610(Src);
    if ( a3 )
      v202 = (__int64)a3;
    else
      v202 = 1LL;
    v203 = *((_QWORD *)Src + 33) & (v202 + *((_QWORD *)Src + 32));
    if ( v203 < 0x20 )
      v203 = 32LL;
    v262 = v203;
    v6 = (unsigned int)a2 >> 4;
    LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    LODWORD(v212) = v6;
    if ( (a2 & 0x3C000100) != 0 || *((_QWORD *)Src + 41) )
    {
      LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      LODWORD(v212) = v6;
      v203 += 16LL;
      v262 = v203;
    }
    v12 = v203 >> 4;
    v211 = v12;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v212) = v6;
    v12 = a4 >> 4;
    v211 = a4 >> 4;
    if ( v11 < 2 )
    {
      v262 += 16LL;
      v12 = 2LL;
      v211 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v212) = v6;
  }
  if ( (a2 & 1) == 0 )
  {
    v10 = *((_QWORD *)Src + 44);
    v13 = NtCurrentTeb();
    v14 = _interlockedbittestandreset((volatile signed __int32 *)(v10 + 8), 0);
    UniqueThread = v13->ClientId.UniqueThread;
    if ( v14 )
    {
      *(_QWORD *)(v10 + 16) = UniqueThread;
      *(_DWORD *)(v10 + 12) = 1;
    }
    else
    {
      if ( *(HANDLE *)(v10 + 16) != UniqueThread )
      {
        if ( byte_18015C3A8 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741420;
          v186 = NtCurrentTeb();
          v186->LastErrorValue = RtlNtStatusToDosError(-1073741420);
          goto LABEL_475;
        }
        v209 = 1;
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        sub_18007C6F0(Src, 1LL);
        goto LABEL_11;
      }
      ++*(_DWORD *)(v10 + 12);
    }
    ++*((_DWORD *)Src + 146);
LABEL_11:
    v204 = 1;
    if ( (*((_DWORD *)Src + 30) & 0x30000000) != 0 )
      sub_180059D74(Src);
  }
  if ( v12 > *((unsigned int *)Src + 37) )
  {
    if ( (Src[112] & 2) != 0 )
    {
      v262 += 56LL;
      v135 = (sub_18001EBF0(v10, a2) & 0xF) << 12;
      v227 = 0LL;
      v228 = v135 + v262 + 4096;
      v136 = sub_18002AE30(Src, 1LL);
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v227, 0LL, &v228, 0x2000, v136) < 0 )
        goto LABEL_475;
      v206 = v135 + v227;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v206, 0LL, &v262, 4096, v136) >= 0 )
      {
        *(_WORD *)(v206 + 56) = v262 - v7;
        *(_BYTE *)(v206 + 58) = v6 | 2;
        *(_QWORD *)(v206 + 32) = v262;
        *(_QWORD *)(v206 + 40) = v228;
        *(_BYTE *)(v206 + 63) = 4;
        *((_QWORD *)Src + 70) += v262;
        v137 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v138 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v138 = 2147353472LL;
        if ( *(_BYTE *)v138 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FE0A4(Src, v206, v262, 9LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v139 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v139 = 2147353472LL;
        if ( *(_BYTE *)v139 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v137 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
          sub_1800FE318((_DWORD)Src, v206, v262, 16 * *((_QWORD *)Src + 24), *(unsigned __int8 *)v137);
        }
        v141 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v142 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
        else
          v142 = 2147353482LL;
        if ( *(_BYTE *)v142 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v141 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
          sub_1800FE318((_DWORD)Src, v206, v262, 16 * *((_QWORD *)Src + 24), *(unsigned __int8 *)v141);
        }
        if ( (*((_DWORD *)Src + 28) & 0x8000000) != 0 )
        {
          v196 = sub_1800244C4(1LL, v140);
          *(_WORD *)(v206 + 16) = v196;
        }
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v197 = sub_1800ED320((_DWORD)Src, (unsigned __int8)(v8 >> 18), 0, *(_QWORD *)(v206 + 32) >> 4, 1);
          *(_WORD *)(v206 + 18) = v197;
        }
        v143 = v206;
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v206 + 59) = *(_BYTE *)(v206 + 56) ^ *(_BYTE *)(v206 + 57) ^ *(_BYTE *)(v206 + 58);
          *(_DWORD *)(v143 + 56) ^= *((_DWORD *)Src + 34);
          v143 = v206;
        }
        v144 = Src + 272;
        v145 = (__int64 *)*((_QWORD *)Src + 35);
        if ( (char *)*v145 == Src + 272 )
        {
          *(_QWORD *)v143 = v144;
          *(_QWORD *)(v143 + 8) = v145;
          *v145 = v143;
          *((_QWORD *)Src + 35) = v143;
        }
        else
        {
          sub_18009A5F0(13, 0, (_DWORD)v144, 0, *v145, 0LL);
        }
        v210 = (void *)(v206 + 64);
        goto LABEL_475;
      }
      v206 = 0LL;
      ++*((_DWORD *)Src + 150);
    }
    goto LABEL_474;
  }
  if ( (v8 & 0x800000) == 0 )
  {
    if ( v11 >= *((unsigned __int16 *)Src + 200) )
    {
      if ( v7 <= qword_180159758 && (Src[386] != 2 || !*((_QWORD *)Src + 47)) && Src[387] == 2 )
        *((_DWORD *)Src + 30) |= 0x20000000u;
    }
    else if ( v7 <= qword_180159758 && ((unsigned __int8)(1 << (v11 & 7)) & (unsigned __int8)Src[(v11 >> 3) + 402]) == 0 )
    {
      v16 = (unsigned __int16 *)(*((_QWORD *)Src + 49) + 2 * v11);
      v249 = v16;
      v17 = *v16 + 33;
      *v16 = v17;
      if ( v209 || (v17 & 0x1Fu) > 0x10 || v17 > 0xFF00u )
      {
        if ( Src[386] == 2 )
          v133 = *((_QWORD *)Src + 47);
        else
          v133 = 0LL;
        v134 = sub_1800747E4(v133);
        if ( v134 == 0xFFFF )
        {
          if ( Src[386] != 2 || !*((_QWORD *)Src + 47) )
            *((_DWORD *)Src + 30) |= 0x20000000u;
        }
        else
        {
          *v16 = v134;
          Src[(v11 >> 3) + 402] |= 1 << (v11 & 7);
          ++*((_DWORD *)Src + 156);
        }
      }
    }
  }
  if ( a5 )
  {
    v18 = *a5;
    if ( *a5 )
    {
      v34 = (__int64)(v18 - 2);
      v219 = (char *)(v18 - 2);
      if ( *((_DWORD *)Src + 31) )
      {
        v110 = *(_DWORD *)(v34 + 8) ^ *((_DWORD *)Src + 34);
        *(_DWORD *)(v34 + 8) = v110;
        if ( HIBYTE(v110) != ((unsigned __int8)v110 ^ (unsigned __int8)(BYTE1(v110) ^ BYTE2(v110))) )
          sub_1800FC010(Src, v18 - 2);
      }
      v111 = *v18;
      v112 = *(__int64 **)(v34 + 24);
      v113 = *v112;
      v114 = *(_QWORD *)(*v18 + 8);
      if ( *v112 == v114 && (__int64 *)v113 == v18 )
      {
        *((_QWORD *)Src + 24) -= *(unsigned __int16 *)(v34 + 8);
        v115 = (unsigned int *)*((_QWORD *)Src + 39);
        if ( v115 )
        {
          v116 = *(unsigned __int16 *)(v34 + 8);
          while ( 1 )
          {
            v117 = v115[2];
            if ( v116 < v117 )
            {
              v118 = *(unsigned __int16 *)(v34 + 8);
              v230 = *(unsigned __int16 *)(v34 + 8);
              goto LABEL_212;
            }
            a3 = *(unsigned int **)v115;
            if ( !*(_QWORD *)v115 )
              break;
            v115 = *(unsigned int **)v115;
          }
          v118 = v117 - 1;
          v230 = v118;
LABEL_212:
          LOBYTE(a3) = 1;
          sub_18005C30C((_DWORD)Src, (_DWORD)v115, (_DWORD)a3, (_DWORD)v18, v118, v116);
        }
        *v112 = v111;
        *(_QWORD *)(v111 + 8) = v112;
        v55 = (char *)(v34 + 10);
        if ( (*(_BYTE *)(v34 + 10) & 8) == 0 || (unsigned __int8)sub_18005CA3C(Src, v34) )
          goto LABEL_81;
        sub_1800128F0((unsigned __int64)Src, v34, *(unsigned __int16 *)(v34 + 8), 1);
      }
      else
      {
        sub_18009A5F0(13, (_DWORD)Src, (_DWORD)v18, v114, v113, 0LL);
      }
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v187 = NtCurrentTeb();
      v187->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      goto LABEL_475;
    }
  }
  v238 = (__int64 *)(Src + 336);
  for ( i = (__int64 *)*((_QWORD *)Src + 39); ; i = (__int64 *)*i )
  {
    v20 = *((unsigned int *)i + 2);
    if ( v12 < v20 )
    {
      v21 = v12;
      j = v12;
      goto LABEL_26;
    }
    if ( !*i )
      break;
  }
  v21 = v20 - 1;
  for ( j = (unsigned int)(v20 - 1); ; j = v21 )
  {
LABEL_26:
    v22 = v21 - *((_DWORD *)i + 6);
    v23 = 0LL;
    v24 = (__int64 *)i[4];
    v25 = (__int64 *)v24[1];
    if ( v24 == v25 )
    {
      v23 = (__int64 *)i[4];
    }
    else
    {
      a3 = (unsigned int *)(v25 - 2);
      v26 = *((_DWORD *)v25 - 2);
      v251 = v26;
      if ( *((_DWORD *)Src + 31) )
      {
        v27 = v26 ^ *((_DWORD *)Src + 34);
        v251 = v27;
        LOWORD(v26) = v27;
        if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
        {
          sub_18009A5F0(3, (_DWORD)Src, (_DWORD)a3, 0, 0LL, 0LL);
          LOWORD(v26) = v27;
        }
      }
      if ( (int)(v12 - (unsigned __int16)v26) > 0 )
      {
        v23 = v24;
      }
      else
      {
        a3 = (unsigned int *)(*v24 - 16);
        v28 = a3[2];
        v252 = v28;
        if ( *((_DWORD *)Src + 31) )
        {
          v29 = v28 ^ *((_DWORD *)Src + 34);
          v252 = v29;
          LOWORD(v28) = v29;
          if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE1(v29) ^ BYTE2(v29))) )
          {
            sub_18009A5F0(3, (_DWORD)Src, (_DWORD)a3, 0, 0LL, 0LL);
            LOWORD(v28) = v29;
          }
        }
        if ( (int)(v12 - (unsigned __int16)v28) <= 0 )
        {
          v23 = (__int64 *)*v24;
        }
        else if ( !*i && (_DWORD)j == *((_DWORD *)i + 2) - 1 )
        {
          if ( *((_DWORD *)i + 3) )
            v22 = (unsigned int)(2 * v22);
          for ( k = *(__int64 **)(i[6] + 8 * v22); v24 != k; k = (__int64 *)*k )
          {
            a3 = (unsigned int *)(k - 2);
            v108 = *((_DWORD *)k - 2);
            v253 = v108;
            if ( *((_DWORD *)Src + 31) )
            {
              v109 = v108 ^ *((_DWORD *)Src + 34);
              v253 = v109;
              LOWORD(v108) = v109;
              if ( HIBYTE(v109) != ((unsigned __int8)v109 ^ (unsigned __int8)(BYTE1(v109) ^ BYTE2(v109))) )
              {
                sub_18009A5F0(3, (_DWORD)Src, (_DWORD)a3, 0, 0LL, 0LL);
                LOWORD(v108) = v109;
              }
            }
            if ( (int)(v12 - (unsigned __int16)v108) <= 0 )
            {
              v23 = k;
              break;
            }
          }
        }
        else
        {
          v30 = (unsigned int)v22 >> 5;
          v215 = (unsigned int)v22 >> 5;
          a4 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
          a3 = (unsigned int *)(i[5] + 4 * v30);
          v231 = a3;
          v31 = *a3 & ~((1 << (v22 & 0x1F)) - 1);
          while ( !v31 )
          {
            if ( (unsigned int)v30 > (unsigned int)a4 )
              goto LABEL_196;
            v231 = ++a3;
            v31 = *a3;
            LODWORD(v30) = v30 + 1;
            v215 = v30;
          }
          if ( (_WORD)v31 )
          {
            if ( (_BYTE)v31 )
              v32 = (unsigned __int8)byte_180119500[(unsigned __int8)v31];
            else
              v32 = (unsigned __int8)byte_180119500[BYTE1(v31)] + 8;
          }
          else if ( (v31 & 0xFF0000) != 0 )
          {
            v32 = (unsigned __int8)byte_180119500[BYTE2(v31)] + 16;
          }
          else
          {
            v32 = (unsigned __int8)byte_180119500[(unsigned __int64)v31 >> 24] + 24;
          }
          v33 = (unsigned int)(v32 + 32 * v30);
          v215 = v33;
          if ( *((_DWORD *)i + 3) )
            v33 = (unsigned int)(2 * v33);
          v23 = *(__int64 **)(i[6] + 8 * v33);
        }
      }
    }
    if ( v23 )
      break;
LABEL_196:
    i = (__int64 *)*i;
    v21 = *((_DWORD *)i + 6);
  }
  if ( v238 != v23 )
  {
    v34 = (__int64)(v23 - 2);
    v219 = (char *)(v23 - 2);
    if ( *((_DWORD *)Src + 31) )
    {
      v35 = *(_DWORD *)(v34 + 8) ^ *((_DWORD *)Src + 34);
      *(_DWORD *)(v34 + 8) = v35;
      if ( HIBYTE(v35) != ((unsigned __int8)v35 ^ (unsigned __int8)(BYTE1(v35) ^ BYTE2(v35))) )
        sub_1800FC010(Src, v23 - 2);
    }
    v36 = *(unsigned __int16 *)(v34 + 8);
    if ( v36 >= v12 )
    {
      v37 = *v23;
      v38 = *(__int64 **)(v34 + 24);
      v213 = (unsigned __int64)v38;
      v39 = *v38;
      v40 = *(_QWORD *)(v37 + 8);
      if ( *v38 != v40 || (__int64 *)v39 != v23 )
      {
        sub_18009A5F0(13, (_DWORD)Src, (_DWORD)v23, v40, v39, 0LL);
        goto LABEL_475;
      }
      *((_QWORD *)Src + 24) -= v36;
      v41 = (__int64 *)*((_QWORD *)Src + 39);
      if ( v41 )
      {
        v42 = *(unsigned __int16 *)(v34 + 8);
        while ( 1 )
        {
          v43 = *((unsigned int *)v41 + 2);
          if ( v42 < v43 )
          {
            v232 = *(unsigned __int16 *)(v34 + 8);
            v44 = v42;
            goto LABEL_63;
          }
          if ( !*v41 )
            break;
          v41 = (__int64 *)*v41;
        }
        v44 = v43 - 1;
        v232 = v44;
LABEL_63:
        v229 = v42;
        v45 = v44 - *((_DWORD *)v41 + 6);
        if ( *((_DWORD *)v41 + 3) )
          v46 = 2 * v45;
        else
          v46 = v45;
        v47 = 8 * v46;
        v214 = 8 * v46;
        v48 = v41[6];
        v49 = *(__int64 **)(v48 + 8 * v46);
        --*((_DWORD *)v41 + 4);
        v50 = *((_DWORD *)v41 + 2);
        if ( v44 == v50 - 1 )
          --*((_DWORD *)v41 + 5);
        if ( v49 == v23 )
        {
          v218 = v50;
          if ( !*v41 )
            --v50;
          v218 = v50;
          v51 = *v23;
          v229 = *v23;
          v52 = v41[4];
          if ( v44 >= v50 )
          {
            if ( v51 == v52 )
            {
              *(_QWORD *)(v48 + v47) = 0LL;
              goto LABEL_78;
            }
            *(_QWORD *)(v48 + v47) = v51;
          }
          else
          {
            if ( v51 == v52 )
            {
LABEL_77:
              *(_QWORD *)(v47 + v41[6]) = 0LL;
LABEL_78:
              *(_DWORD *)(v41[5] + 4LL * (v45 >> 5)) &= ~(1 << (v45 & 0x1F));
              goto LABEL_79;
            }
            v53 = *(_DWORD *)(v51 - 16 + 8);
            v254 = v53;
            if ( *((_DWORD *)Src + 31) )
            {
              v54 = v53 ^ *((_DWORD *)Src + 34);
              v254 = v54;
              LOWORD(v53) = v54;
              if ( HIBYTE(v54) != ((unsigned __int8)v54 ^ (unsigned __int8)(BYTE1(v54) ^ BYTE2(v54))) )
              {
                sub_18009A5F0(3, (_DWORD)Src, v51 - 16, 0, 0LL, 0LL);
                LOWORD(v53) = v54;
                v38 = (__int64 *)v213;
                v51 = v229;
                v47 = v214;
              }
            }
            if ( (_DWORD)v42 != (unsigned __int16)v53 )
            {
              v34 = (__int64)v219;
              goto LABEL_77;
            }
            *(_QWORD *)(v47 + v41[6]) = v51;
            v34 = (__int64)v219;
          }
        }
      }
LABEL_79:
      *v38 = v37;
      *(_QWORD *)(v37 + 8) = v38;
      v55 = (char *)(v34 + 10);
      if ( (*(_BYTE *)(v34 + 10) & 8) == 0 )
      {
        v12 = v211;
        LOBYTE(v6) = v212;
        goto LABEL_81;
      }
      if ( (unsigned __int8)sub_18005CA3C(Src, v34) )
      {
        v12 = v211;
        LOBYTE(v6) = v212;
        goto LABEL_81;
      }
LABEL_402:
      sub_1800128F0((unsigned __int64)Src, v34, *(unsigned __int16 *)(v34 + 8), 1);
      goto LABEL_475;
    }
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v34 + 11) = v36 ^ BYTE1(v36) ^ *(_BYTE *)(v34 + 10);
      *(_DWORD *)(v34 + 8) ^= *((_DWORD *)Src + 34);
    }
  }
  v121 = (_QWORD *)sub_18002A508(Src, v262, a3, a4);
  v34 = (__int64)v121;
  v219 = (char *)v121;
  if ( !v121 )
  {
LABEL_474:
    v210 = 0LL;
    goto LABEL_475;
  }
  v122 = v121 + 2;
  v123 = v121[2];
  v124 = (__int64 *)v121[3];
  v125 = *v124;
  v126 = *(_QWORD *)(v123 + 8);
  if ( *v124 != v126 || (_QWORD *)v125 != v122 )
  {
    sub_18009A5F0(13, (_DWORD)Src, (_DWORD)v122, v126, v125, 0LL);
    goto LABEL_475;
  }
  *((_QWORD *)Src + 24) -= *(unsigned __int16 *)(v34 + 8);
  v127 = (__int64 **)*((_QWORD *)Src + 39);
  if ( v127 )
  {
    v128 = *(unsigned __int16 *)(v34 + 8);
    while ( 1 )
    {
      v129 = *((unsigned int *)v127 + 2);
      if ( v128 < v129 )
        break;
      if ( !*v127 )
      {
        v130 = v129 - 1;
        v233 = v130;
        goto LABEL_242;
      }
      v127 = (__int64 **)*v127;
    }
    v130 = *(unsigned __int16 *)(v34 + 8);
    v233 = *(unsigned __int16 *)(v34 + 8);
LABEL_242:
    v131 = (int)v122;
    LOBYTE(v122) = 1;
    sub_18005C30C((_DWORD)Src, (_DWORD)v127, (_DWORD)v122, v131, v130, v128);
  }
  *v124 = v123;
  *(_QWORD *)(v123 + 8) = v124;
  v55 = (char *)(v34 + 10);
  if ( (*(_BYTE *)(v34 + 10) & 8) != 0 && !(unsigned __int8)sub_18005CA3C(Src, v34) )
    goto LABEL_402;
  LOBYTE(v6) = v212;
LABEL_81:
  v56 = *v55;
  v207 = *v55;
  v57 = v205;
  if ( !v205 && (v56 & 4) != 0 )
  {
    v146 = 16LL * *(unsigned __int16 *)(v34 + 8) - 32;
    v234 = v146;
    if ( (v56 & 2) != 0 && v146 > 4 )
    {
      v146 -= 4LL;
      v234 = v146;
    }
    v147 = RtlCompareMemoryUlong(v34 + 32, v146, 4277075694LL);
    if ( v147 != v146 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v34 = (__int64)v219;
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v219, &v219[v147 + 32]);
      sub_1801011EC();
      v56 = v207;
    }
    v57 = 0;
    LOBYTE(v6) = v212;
  }
  v217 = v34;
  if ( (*v55 & 1) == 0 )
  {
    *v55 = v6;
    v58 = *(unsigned __int16 *)(v34 + 8) - v12;
    v250 = v58;
    *(_WORD *)(v34 + 8) = v12;
    v59 = v261;
    v60 = v262 - (_QWORD)v261;
    v211 = v262 - (_QWORD)v261;
    if ( v262 - (unsigned __int64)v261 >= 0x3F )
    {
      *(_QWORD *)(v34 + 16 * v12) = v60;
      *(_BYTE *)(v34 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v34 + 15) = v60;
    }
    *(_BYTE *)(v34 + 11) = 0;
    if ( v58 )
    {
      if ( v58 != 1 )
      {
        v61 = v57 == 0;
        v208 = v57 == 0;
        v62 = *(_BYTE *)(v34 + 14);
        if ( v62 )
          v63 = (char *)((v34 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v62 << 16) + 0x10000);
        else
          v63 = Src;
        v214 = v58;
        v64 = v34 + 16 * v12;
        v209 = 0;
        *(_BYTE *)(v64 + 10) = v56;
        *(_BYTE *)(v64 + 15) = 0;
        *(_WORD *)(v64 + 12) = v12 ^ *((_WORD *)Src + 70);
        v65 = (char *)*((_QWORD *)v63 + 5);
        if ( v65 == v63 )
        {
          LOBYTE(v66) = 0;
        }
        else
        {
          v66 = ((unsigned __int64)(v64 - (_QWORD)v63) >> 16) + 1;
          v250 = v66;
          if ( v66 >= 0xFE )
            sub_18009A5F0(3, (_DWORD)v65, v34 + 16 * v12, (_DWORD)v63, 0LL, 0LL);
        }
        *(_BYTE *)(v64 + 14) = v66;
        *(_BYTE *)(v64 + 11) = 0;
        *(_WORD *)(v64 + 8) = v58;
        while ( 1 )
        {
          v67 = v64 + 16 * v58;
          if ( ((*(_BYTE *)(v67 + 10) ^ (unsigned __int8)(Src[138] & (*((_DWORD *)Src + 31) >> 20))) & 1) != 0 )
            break;
          if ( *((_DWORD *)Src + 31) )
          {
            v163 = *(_DWORD *)(v67 + 8) ^ *((_DWORD *)Src + 34);
            *(_DWORD *)(v67 + 8) = v163;
            if ( HIBYTE(v163) != ((unsigned __int8)v163 ^ (unsigned __int8)(BYTE1(v163) ^ BYTE2(v163))) )
              sub_1800FC010(Src, v64 + 16 * v58);
          }
          v164 = v67 + 16;
          v165 = *(_QWORD *)(v67 + 16);
          v166 = *(__int64 **)(v67 + 24);
          v223 = (unsigned __int64)v166;
          v167 = *v166;
          v168 = *(_QWORD *)(v165 + 8);
          if ( *v166 == v168 && v167 == v164 )
          {
            *((_QWORD *)Src + 24) -= *(unsigned __int16 *)(v67 + 8);
            v169 = (__int64 **)*((_QWORD *)Src + 39);
            if ( v169 )
            {
              v170 = *(unsigned __int16 *)(v67 + 8);
              while ( 1 )
              {
                v171 = *((unsigned int *)v169 + 2);
                if ( v170 < v171 )
                  break;
                if ( !*v169 )
                {
                  v172 = (unsigned int)(v171 - 1);
                  goto LABEL_341;
                }
                v169 = (__int64 **)*v169;
              }
              v172 = *(unsigned __int16 *)(v67 + 8);
LABEL_341:
              v240 = v172;
              LOBYTE(v164) = 1;
              sub_18005C30C((_DWORD)Src, (_DWORD)v169, v164, v67 + 16, v172, v170);
              v166 = (__int64 *)v223;
            }
            *v166 = v165;
            *(_QWORD *)(v165 + 8) = v166;
            if ( (*(_BYTE *)(v67 + 10) & 8) == 0 || (unsigned __int8)sub_18005CA3C(Src, v64 + 16 * v58) )
            {
              if ( v61 )
              {
                v184 = *(_BYTE *)(v67 + 10);
                if ( (v184 & 4) != 0 )
                {
                  v185 = 16LL * *(unsigned __int16 *)(v67 + 8) - 32;
                  v241 = v185;
                  if ( (v184 & 2) != 0 && v185 > 4 )
                  {
                    v185 -= 4LL;
                    v241 = v185;
                  }
                  v214 = RtlCompareMemoryUlong(v67 + 32, v185, 4277075694LL);
                  if ( v214 != v185 )
                  {
                    if ( NtCurrentPeb()->Ldr )
                      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                    else
                      DbgPrint("HEAP: ");
                    DbgPrint(
                      "HEAP: Free Heap block %p modified at %p after it was freed\n",
                      (const void *)(v64 + 16 * v58),
                      (const void *)(v67 + v214 + 32));
                    sub_1801011EC();
                    v61 = v208;
                  }
                }
              }
              *(_BYTE *)(v64 + 10) = *(_BYTE *)(v67 + 10);
              v173 = v58 + *(unsigned __int16 *)(v67 + 8);
              v214 = v173;
              if ( v173 > 0xFF00 )
              {
                sub_180012F50((unsigned __int64)Src, v64, v173);
                v57 = v205;
                goto LABEL_143;
              }
              *(_WORD *)(v64 + 8) = v173;
              *(_WORD *)(16 * v173 + v64 + 12) = v173 ^ *((_WORD *)Src + 70);
              v174 = (unsigned __int16)v173;
              if ( !v61 )
              {
                *(_BYTE *)(v64 + 10) = 0;
                *(_BYTE *)(v64 + 15) = 0;
                v175 = Src + 336;
                if ( *((_QWORD *)Src + 39) )
                  v176 = (_QWORD *)sub_18005C238(Src, (unsigned __int16)v173);
                else
                  v176 = (_QWORD *)*v175;
                while ( v175 != v176 )
                {
                  if ( *((_DWORD *)Src + 31) )
                  {
                    v178 = *((_DWORD *)v176 - 2);
                    v220 = v178;
                    if ( (v178 & *((_DWORD *)Src + 31)) != 0 )
                    {
                      v179 = v178 ^ *((_DWORD *)Src + 34);
                      v220 = v179;
                    }
                    else
                    {
                      LOWORD(v179) = v178;
                    }
                  }
                  else
                  {
                    LOWORD(v179) = *((_WORD *)v176 - 4);
                  }
                  if ( v174 <= (unsigned __int16)v179 )
                    break;
                  v176 = (_QWORD *)*v176;
                }
                v156 = (_QWORD *)(v64 + 16);
                v177 = (__int64 *)v176[1];
                if ( (_QWORD *)*v177 == v176 )
                {
                  *v156 = v176;
                  *(_QWORD *)(v64 + 24) = v177;
                  *v177 = (__int64)v156;
                  v176[1] = v156;
                }
                else
                {
                  sub_18009A5F0(13, 0, (_DWORD)v176, 0, *v177, 0LL);
                }
                *((_QWORD *)Src + 24) += *(unsigned __int16 *)(v64 + 8);
                v158 = (__int64 **)*((_QWORD *)Src + 39);
                if ( v158 )
                {
                  v159 = *(unsigned __int16 *)(v64 + 8);
                  while ( 1 )
                  {
                    v160 = *((unsigned int *)v158 + 2);
                    if ( v159 < v160 )
                      break;
                    if ( !*v158 )
                    {
                      v161 = v160 - 1;
                      v242 = (unsigned int)(v160 - 1);
                      goto LABEL_314;
                    }
                    v158 = (__int64 **)*v158;
                  }
                  v161 = *(unsigned __int16 *)(v64 + 8);
                  v242 = *(unsigned __int16 *)(v64 + 8);
                  goto LABEL_314;
                }
                goto LABEL_141;
              }
              *(_BYTE *)(v64 + 10) &= 0xF0u;
              *(_BYTE *)(v64 + 15) = 0;
              if ( (Src[112] & 0x40) == 0 )
              {
LABEL_371:
                v181 = Src + 336;
                if ( *((_QWORD *)Src + 39) )
                  v182 = (_QWORD *)sub_18005C238(Src, v174);
                else
                  v182 = (_QWORD *)*v181;
                while ( v181 != v182 )
                {
                  if ( *((_DWORD *)Src + 31) )
                  {
                    v192 = *((_DWORD *)v182 - 2);
                    v259 = v192;
                    if ( (v192 & *((_DWORD *)Src + 31)) != 0 )
                    {
                      v193 = v192 ^ *((_DWORD *)Src + 34);
                      v259 = v193;
                    }
                    else
                    {
                      LOWORD(v193) = v192;
                    }
                  }
                  else
                  {
                    LOWORD(v193) = *((_WORD *)v182 - 4);
                  }
                  if ( v174 <= (unsigned __int16)v193 )
                    break;
                  v182 = (_QWORD *)*v182;
                }
                v156 = (_QWORD *)(v64 + 16);
                v183 = (__int64 *)v182[1];
                if ( (_QWORD *)*v183 == v182 )
                {
                  *v156 = v182;
                  *(_QWORD *)(v64 + 24) = v183;
                  *v183 = (__int64)v156;
                  v182[1] = v156;
                }
                else
                {
                  sub_18009A5F0(13, 0, (_DWORD)v182, 0, *v183, 0LL);
                }
                *((_QWORD *)Src + 24) += *(unsigned __int16 *)(v64 + 8);
                v158 = (__int64 **)*((_QWORD *)Src + 39);
                if ( v158 )
                {
                  v159 = *(unsigned __int16 *)(v64 + 8);
                  while ( 1 )
                  {
                    v160 = *((unsigned int *)v158 + 2);
                    if ( v159 < v160 )
                      break;
                    if ( !*v158 )
                    {
                      v161 = v160 - 1;
                      v244 = (unsigned int)(v160 - 1);
                      goto LABEL_314;
                    }
                    v158 = (__int64 **)*v158;
                  }
                  v161 = *(unsigned __int16 *)(v64 + 8);
                  v244 = *(unsigned __int16 *)(v64 + 8);
LABEL_314:
                  LOBYTE(v160) = 1;
                  sub_18005C190((_DWORD)Src, (_DWORD)v158, v160, (_DWORD)v156, v161, v159);
                }
LABEL_141:
                v57 = v205;
                if ( *((_DWORD *)Src + 31) )
                {
                  *(_BYTE *)(v64 + 11) = *(_BYTE *)(v64 + 8) ^ *(_BYTE *)(v64 + 9) ^ *(_BYTE *)(v64 + 10);
                  *(_DWORD *)(v64 + 8) ^= *((_DWORD *)Src + 34);
                }
LABEL_143:
                v59 = v261;
                goto LABEL_144;
              }
              v190 = (_DWORD *)(v64 + 32);
              v243 = v64 + 32;
              v191 = (16 * v174 - 32) >> 2;
              v225 = v191;
              if ( v191 )
              {
                if ( ((unsigned __int8)v190 & 4) != 0 )
                {
                  *v190 = -17891602;
                  v225 = --v191;
                  if ( v191 )
                  {
                    v190 = (_DWORD *)(v64 + 36);
                    v243 = v64 + 36;
                    goto LABEL_437;
                  }
                }
                else
                {
LABEL_437:
                  memset64(v190, 0xFEEEFEEEFEEEFEEEuLL, v191 >> 1);
                  if ( (v191 & 1) != 0 )
                    v190[v191 - 1] = -17891602;
                }
              }
              *(_BYTE *)(v64 + 10) |= 4u;
              goto LABEL_371;
            }
            sub_1800128F0((unsigned __int64)Src, v64 + 16 * v58, *(unsigned __int16 *)(v67 + 8), 1);
          }
          else
          {
            sub_18009A5F0(13, (_DWORD)Src, v164, v168, v167, 0LL);
          }
          if ( v209 )
          {
            NtCurrentTeb()->LastStatusValue = -1073741764;
            v180 = NtCurrentTeb();
            v180->LastErrorValue = RtlNtStatusToDosError(-1073741764);
            goto LABEL_475;
          }
          v209 = 1;
        }
        *(_WORD *)(v67 + 12) = v58 ^ *((_WORD *)Src + 70);
        if ( !v61 )
        {
          v68 = (unsigned __int16)v58;
          v213 = (unsigned __int16)v58;
          *(_BYTE *)(v64 + 10) = 0;
          *(_BYTE *)(v64 + 15) = 0;
          v69 = Src + 336;
          v70 = (__int64 *)*((_QWORD *)Src + 39);
          if ( v70 )
          {
            while ( 1 )
            {
              v71 = *((unsigned int *)v70 + 2);
              if ( (unsigned __int16)v58 < v71 )
              {
                v72 = (unsigned __int16)v58;
                v221 = (unsigned __int16)v58;
                goto LABEL_97;
              }
              if ( !*v70 )
                break;
              v70 = (__int64 *)*v70;
            }
            v72 = v71 - 1;
            v221 = (unsigned int)(v71 - 1);
            while ( 1 )
            {
LABEL_97:
              v73 = v72 - *((_DWORD *)v70 + 6);
              v211 = v73;
              v74 = 0LL;
              v75 = (_QWORD *)v70[4];
              v76 = (_QWORD *)v75[1];
              if ( v75 == v76 )
              {
                v74 = (_QWORD *)v70[4];
              }
              else
              {
                v77 = *((_DWORD *)v76 - 2);
                v255 = v77;
                if ( *((_DWORD *)Src + 31) )
                {
                  v78 = v77 ^ *((_DWORD *)Src + 34);
                  v255 = v78;
                  LOWORD(v77) = v78;
                  if ( HIBYTE(v78) != ((unsigned __int8)v78 ^ (unsigned __int8)(BYTE1(v78) ^ BYTE2(v78))) )
                  {
                    sub_18009A5F0(3, (_DWORD)Src, (_DWORD)v76 - 16, 0, 0LL, 0LL);
                    LOWORD(v77) = v78;
                    LODWORD(v73) = v211;
                  }
                }
                v79 = (unsigned __int16)v77;
                v68 = v213;
                if ( (int)v213 - v79 > 0 )
                {
                  v74 = v75;
                }
                else
                {
                  v80 = *v75;
                  v81 = *(_DWORD *)(*v75 - 8LL);
                  v256 = v81;
                  if ( *((_DWORD *)Src + 31) )
                  {
                    v82 = v81 ^ *((_DWORD *)Src + 34);
                    v256 = v82;
                    LOWORD(v81) = v82;
                    if ( HIBYTE(v82) != ((unsigned __int8)v82 ^ (unsigned __int8)(BYTE1(v82) ^ BYTE2(v82))) )
                    {
                      sub_18009A5F0(3, (_DWORD)Src, v80 - 16, 0, 0LL, 0LL);
                      LOWORD(v81) = v82;
                      LODWORD(v73) = v211;
                      v68 = v213;
                    }
                  }
                  if ( (int)(v68 - (unsigned __int16)v81) <= 0 )
                  {
                    v74 = (_QWORD *)*v75;
                  }
                  else if ( !*v70 && (_DWORD)v221 == *((_DWORD *)v70 + 2) - 1 )
                  {
                    if ( *((_DWORD *)v70 + 3) )
                      LODWORD(v73) = 2 * v73;
                    for ( m = *(_QWORD **)(v70[6] + 8LL * (unsigned int)v73); v75 != m; m = (_QWORD *)*m )
                    {
                      v120 = *((_DWORD *)m - 2);
                      v257 = v120;
                      if ( *((_DWORD *)Src + 31) )
                      {
                        v208 = v120 ^ *((_DWORD *)Src + 34);
                        v257 = v208;
                        LOWORD(v120) = v208;
                        if ( HIBYTE(v208) != ((unsigned __int8)v208 ^ (unsigned __int8)(BYTE1(v208) ^ BYTE2(v208))) )
                        {
                          sub_18009A5F0(3, (_DWORD)Src, (_DWORD)m - 16, 0, 0LL, 0LL);
                          LOWORD(v120) = v208;
                          v68 = v213;
                        }
                      }
                      if ( (int)(v68 - (unsigned __int16)v120) <= 0 )
                      {
                        v74 = m;
                        break;
                      }
                    }
                  }
                  else
                  {
                    v83 = (unsigned int)v73 >> 5;
                    v216 = (unsigned int)v73 >> 5;
                    v84 = ((unsigned int)(*((_DWORD *)v70 + 2) - *((_DWORD *)v70 + 6)) >> 5) - 1;
                    v85 = (unsigned int *)(v70[5] + 4 * v83);
                    v235 = v85;
                    v86 = *v85 & ~((1 << (v73 & 0x1F)) - 1);
                    while ( !v86 )
                    {
                      if ( (unsigned int)v83 > v84 )
                        goto LABEL_228;
                      v235 = ++v85;
                      v86 = *v85;
                      LODWORD(v83) = v83 + 1;
                      v216 = v83;
                    }
                    if ( (_WORD)v86 )
                    {
                      if ( (_BYTE)v86 )
                        v87 = (unsigned __int8)byte_180119500[(unsigned __int8)v86];
                      else
                        v87 = (unsigned __int8)byte_180119500[BYTE1(v86)] + 8;
                    }
                    else if ( (v86 & 0xFF0000) != 0 )
                    {
                      v87 = (unsigned __int8)byte_180119500[BYTE2(v86)] + 16;
                    }
                    else
                    {
                      v87 = (unsigned __int8)byte_180119500[(unsigned __int64)v86 >> 24] + 24;
                    }
                    v88 = (unsigned int)(v87 + 32 * v83);
                    v216 = v88;
                    if ( *((_DWORD *)v70 + 3) )
                      v88 = (unsigned int)(2 * v88);
                    v74 = *(_QWORD **)(v70[6] + 8 * v88);
                    v68 = v213;
                  }
                }
              }
              if ( v74 )
                break;
LABEL_228:
              v70 = (__int64 *)*v70;
              v72 = *((_DWORD *)v70 + 6);
              v221 = v72;
              v68 = v213;
            }
            v69 = Src + 336;
          }
          else
          {
            v74 = (_QWORD *)*v69;
          }
          while ( v69 != v74 )
          {
            if ( *((_DWORD *)Src + 31) )
            {
              v89 = *((_DWORD *)v74 - 2);
              v248 = v89;
              if ( (v89 & *((_DWORD *)Src + 31)) != 0 )
              {
                v90 = v89 ^ *((_DWORD *)Src + 34);
                v248 = v90;
              }
              else
              {
                LOWORD(v90) = v89;
              }
            }
            else
            {
              LOWORD(v90) = *((_WORD *)v74 - 4);
            }
            if ( v68 <= (unsigned __int16)v90 )
              break;
            v74 = (_QWORD *)*v74;
            v69 = Src + 336;
          }
          v91 = (_QWORD *)(v64 + 16);
          v92 = (__int64 *)v74[1];
          if ( (_QWORD *)*v92 == v74 )
          {
            *v91 = v74;
            *(_QWORD *)(v64 + 24) = v92;
            *v92 = (__int64)v91;
            v74[1] = v91;
          }
          else
          {
            sub_18009A5F0(13, 0, (_DWORD)v74, 0, *v92, 0LL);
          }
          *((_QWORD *)Src + 24) += *(unsigned __int16 *)(v64 + 8);
          v93 = (__int64 *)*((_QWORD *)Src + 39);
          if ( v93 )
          {
            v94 = (unsigned __int16 *)*(unsigned __int16 *)(v64 + 8);
            while ( 1 )
            {
              v95 = *((unsigned int *)v93 + 2);
              if ( (unsigned __int64)v94 < v95 )
              {
                v236 = *(unsigned __int16 *)(v64 + 8);
                v96 = (int)v94;
                goto LABEL_133;
              }
              if ( !*v93 )
                break;
              v93 = (__int64 *)*v93;
            }
            v96 = v95 - 1;
            v236 = (unsigned int)(v95 - 1);
LABEL_133:
            v249 = v94;
            v97 = v96 - *((_DWORD *)v93 + 6);
            if ( *((_DWORD *)v93 + 3) )
              v98 = 2 * v97;
            else
              v98 = v97;
            ++*((_DWORD *)v93 + 4);
            v99 = 8 * v98;
            v214 = 8 * v98;
            v100 = *(_QWORD *)(8 * v98 + v93[6]);
            v211 = v100;
            if ( v96 == *((_DWORD *)v93 + 2) - 1 )
              ++*((_DWORD *)v93 + 5);
            if ( !v100 )
              goto LABEL_138;
            v106 = *(_DWORD *)(v100 - 16 + 8);
            v258 = v106;
            if ( *((_DWORD *)Src + 31) )
            {
              v208 = v106 ^ *((_DWORD *)Src + 34);
              v258 = v208;
              LOWORD(v106) = v208;
              if ( HIBYTE(v208) != ((unsigned __int8)v208 ^ (unsigned __int8)(BYTE1(v208) ^ BYTE2(v208))) )
              {
                sub_18009A5F0(3, (_DWORD)Src, v100 - 16, 0, 0LL, 0LL);
                LOWORD(v106) = v208;
                v99 = v214;
              }
              v100 = v211;
            }
            if ( (int)v94 - (unsigned __int16)v106 <= 0 )
LABEL_138:
              *(_QWORD *)(v99 + v93[6]) = v91;
            if ( !v100 )
              *(_DWORD *)(v93[5] + 4LL * (v97 >> 5)) |= 1 << (v97 & 0x1F);
          }
          goto LABEL_141;
        }
        v151 = (unsigned __int16)v58;
        *(_BYTE *)(v64 + 10) &= 0xF0u;
        *(_BYTE *)(v64 + 15) = 0;
        if ( (Src[112] & 0x40) == 0 )
        {
LABEL_301:
          v152 = Src + 336;
          if ( *((_QWORD *)Src + 39) )
            v153 = (_QWORD *)sub_18005C238(Src, v151);
          else
            v153 = (_QWORD *)*v152;
          while ( v152 != v153 )
          {
            if ( *((_DWORD *)Src + 31) )
            {
              v154 = *((_DWORD *)v153 - 2);
              v239 = v154;
              if ( (v154 & *((_DWORD *)Src + 31)) != 0 )
              {
                v155 = v154 ^ *((_DWORD *)Src + 34);
                v239 = v155;
              }
              else
              {
                LOWORD(v155) = v154;
              }
            }
            else
            {
              LOWORD(v155) = *((_WORD *)v153 - 4);
            }
            if ( v151 <= (unsigned __int16)v155 )
              break;
            v153 = (_QWORD *)*v153;
          }
          v156 = (_QWORD *)(v64 + 16);
          v157 = (__int64 *)v153[1];
          if ( (_QWORD *)*v157 == v153 )
          {
            *v156 = v153;
            *(_QWORD *)(v64 + 24) = v157;
            *v157 = (__int64)v156;
            v153[1] = v156;
          }
          else
          {
            sub_18009A5F0(13, 0, (_DWORD)v153, 0, *v157, 0LL);
          }
          *((_QWORD *)Src + 24) += *(unsigned __int16 *)(v64 + 8);
          v158 = (__int64 **)*((_QWORD *)Src + 39);
          if ( v158 )
          {
            v159 = *(unsigned __int16 *)(v64 + 8);
            while ( 1 )
            {
              v160 = *((unsigned int *)v158 + 2);
              if ( v159 < v160 )
              {
                v161 = *(unsigned __int16 *)(v64 + 8);
                v223 = *(unsigned __int16 *)(v64 + 8);
                goto LABEL_314;
              }
              if ( !*v158 )
                break;
              v158 = (__int64 **)*v158;
            }
            v161 = v160 - 1;
            v223 = (unsigned int)(v160 - 1);
            goto LABEL_314;
          }
          goto LABEL_141;
        }
        v188 = (_DWORD *)(v64 + 32);
        v237 = v64 + 32;
        v189 = (16 * (unsigned __int64)(unsigned __int16)v58 - 32) >> 2;
        v224 = v189;
        if ( v189 )
        {
          if ( ((unsigned __int8)v188 & 4) == 0 )
            goto LABEL_419;
          *v188 = -17891602;
          v224 = --v189;
          if ( v189 )
          {
            v188 = (_DWORD *)(v64 + 36);
            v237 = v64 + 36;
LABEL_419:
            memset64(v188, 0xFEEEFEEEFEEEFEEEuLL, v189 >> 1);
            if ( (v189 & 1) != 0 )
              v188[v189 - 1] = -17891602;
          }
        }
        *(_BYTE *)(v64 + 10) |= 4u;
        goto LABEL_301;
      }
      ++*(_WORD *)(v34 + 8);
      v132 = v262 - (_QWORD)v261 + 16;
      v212 = v132;
      if ( v132 >= 0x3F )
      {
        *(_QWORD *)(v34 + 16 * (v12 + 1)) = v132;
        *(_BYTE *)(v34 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v34 + 15) = v132;
      }
    }
LABEL_144:
    v210 = (void *)(v217 + 16);
    v101 = (unsigned __int16 *)(v217 + 8);
    v102 = *(unsigned __int16 *)(v217 + 8);
    v103 = 16 * v102;
    v245 = 16 * v102;
    if ( (*(_BYTE *)(v217 + 15) & 0x3F) == 0x3F )
    {
      v103 -= 8LL;
      v245 = v103;
    }
    if ( v57 )
    {
      if ( *((_DWORD *)Src + 31) )
      {
        *(_BYTE *)(v217 + 11) = v102 ^ BYTE1(v102) ^ *(_BYTE *)(v34 + 10);
        *(_DWORD *)v101 ^= *((_DWORD *)Src + 34);
      }
      if ( v204 )
      {
        if ( (*((_DWORD *)Src + 29) & 0x1000000) == 0 )
        {
          ++*((_DWORD *)Src + 152);
          v104 = *((_DWORD *)Src + 154);
          if ( *((_DWORD *)Src + 152) > v104 )
          {
            *((_DWORD *)Src + 152) = 0;
            v105 = *((_QWORD *)Src + 68) - 16LL * *((_QWORD *)Src + 24);
            if ( v105 > *((_QWORD *)Src + 80) )
              *((_QWORD *)Src + 80) = v105;
            *((_QWORD *)Src + 81) = v105;
          }
          if ( ++*((_DWORD *)Src + 155) >= 0x1000u )
          {
            if ( Src[386] == 2 && *((_DWORD *)Src + 156) > 0x10u )
              v162 = 256;
            else
              v162 = 16;
            if ( *((_DWORD *)Src + 153) > v162 && v104 < 0x10000 )
              *((_DWORD *)Src + 154) = 2 * v104;
            *((_DWORD *)Src + 153) = 0;
            *((_DWORD *)Src + 155) = 0;
          }
        }
        RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
        v204 = 0;
      }
      if ( (v260 & 8) != 0 )
        memset(v210, 0, v103 - 8);
      goto LABEL_475;
    }
    if ( (v260 & 8) != 0 )
    {
      memset(v210, 0, v103 - 8);
    }
    else if ( (Src[112] & 0x40) != 0 )
    {
      v194 = (char *)v210;
      v246 = v210;
      v102 = ((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v226 = v102;
      if ( v102 )
      {
        if ( ((unsigned __int8)v210 & 4) == 0 )
          goto LABEL_457;
        *(_DWORD *)v210 = -1163005939;
        v226 = --v102;
        if ( v102 )
        {
          v194 += 4;
          v246 = v194;
LABEL_457:
          memset64(v194, 0xBAADF00DBAADF00DuLL, v102 >> 1);
          if ( (v102 & 1) != 0 )
            *(_DWORD *)&v194[4 * v102 - 4] = -1163005939;
        }
      }
    }
    if ( (Src[112] & 0x20) != 0 )
    {
      v195 = (char *)v210;
      *(_QWORD *)((char *)v59 + (_QWORD)v210) = 0xABABABABABABABABuLL;
      *(_QWORD *)((char *)v59 + (_QWORD)v195 + 8) = 0xABABABABABABABABuLL;
      *(_BYTE *)(v217 + 10) |= 4u;
    }
    v148 = v217;
    *(_BYTE *)(v217 + 11) = 0;
    if ( (*(_BYTE *)(v148 + 10) & 2) != 0 )
    {
      v150 = (_QWORD *)sub_180063B6C(v148, v102);
      v247 = v150;
      *v150 = 0LL;
      v150[1] = 0LL;
      if ( (*((_DWORD *)Src + 28) & 0x8000000) != 0 )
        *(_WORD *)v150 = sub_1800244C4(1LL, v149);
      if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        *((_WORD *)v247 + 1) = sub_1800ED320((_DWORD)Src, (v260 >> 18) & 0xFFF, 0, *v101, 0);
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      *(_BYTE *)(v148 + 11) = sub_1800ED320((_DWORD)Src, (unsigned __int8)(v260 >> 18), 0, *v101, 0);
    }
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v148 + 11) = *(_BYTE *)v101 ^ *((_BYTE *)v101 + 1) ^ *((_BYTE *)v101 + 2);
      *(_DWORD *)v101 ^= *((_DWORD *)Src + 34);
    }
    goto LABEL_475;
  }
  sub_18009A5F0(3, (_DWORD)Src, v34, 0, 0LL, 0LL);
LABEL_475:
  if ( v204 )
  {
    if ( !v206 && v210 )
      sub_18008384C(Src);
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  }
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v199 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
  else
    v199 = 2147353480LL;
  v200 = v210;
  if ( *(_BYTE *)v199 && v210 )
  {
    if ( v206 )
      sub_1800FC5C4(Src, v206 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v206 + 40));
  }
  return (__int64)v200;
}
