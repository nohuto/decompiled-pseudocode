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

void *__fastcall sub_18001BDD0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
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
  __int64 v28; // r8
  int v29; // edx
  int v30; // edi
  __int64 v31; // rdi
  unsigned int v32; // r9d
  unsigned int *v33; // r8
  unsigned int v34; // edx
  int v35; // ecx
  __int64 v36; // rdi
  __int64 v37; // r14
  int v38; // edx
  unsigned __int64 v39; // rcx
  __int64 v40; // r13
  __int64 *v41; // r8
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 *v44; // rdi
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // rcx
  unsigned int v47; // ecx
  unsigned int v48; // r15d
  __int64 v49; // rax
  __int64 v50; // r11
  __int64 v51; // r10
  __int64 *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // r9
  __int64 v55; // rdx
  int v56; // edx
  int v57; // esi
  char *v58; // rdi
  char v59; // r15
  int v60; // r8d
  SIZE_T v61; // rdi
  unsigned __int64 v62; // r12
  ULONG_PTR v63; // rcx
  bool v64; // r12
  unsigned __int8 v65; // al
  unsigned __int64 v66; // r9
  __int64 v67; // rsi
  __int64 v68; // rdx
  unsigned __int64 v69; // r15
  __int64 v70; // r15
  unsigned __int64 v71; // rdx
  _QWORD *v72; // rax
  __int64 *v73; // r15
  unsigned __int64 v74; // rax
  unsigned int v75; // r9d
  __int64 v76; // r9
  _QWORD *v77; // rdi
  _QWORD *v78; // r13
  _QWORD *v79; // rax
  int v80; // edx
  int v81; // r12d
  int v82; // eax
  __int64 v83; // r10
  int v84; // r8d
  int v85; // r12d
  __int64 v86; // rdi
  unsigned int v87; // r10d
  unsigned int *v88; // r8
  unsigned int v89; // edx
  int v90; // ecx
  __int64 v91; // rdi
  int v92; // ecx
  int v93; // eax
  _QWORD *v94; // r15
  __int64 *v95; // rax
  __int64 *v96; // rdi
  unsigned __int16 *v97; // r13
  unsigned __int64 v98; // rax
  int v99; // edx
  unsigned int v100; // r12d
  __int64 v101; // rax
  __int64 v102; // r8
  __int64 v103; // rcx
  unsigned __int16 *v104; // rsi
  unsigned __int64 v105; // rdx
  __int64 v106; // r13
  unsigned int v107; // ecx
  unsigned __int64 v108; // rdx
  int v109; // r9d
  __int64 *k; // r14
  int v111; // edx
  int v112; // edi
  int v113; // edx
  __int64 v114; // rsi
  __int64 *v115; // r15
  __int64 v116; // rax
  __int64 v117; // r9
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // rax
  unsigned int v121; // eax
  _QWORD *m; // r12
  int v123; // r9d
  _QWORD *v124; // rax
  _QWORD *v125; // r8
  __int64 v126; // rsi
  __int64 *v127; // r15
  __int64 v128; // rax
  __int64 v129; // r9
  __int64 **v130; // rdx
  unsigned __int64 v131; // rcx
  unsigned __int64 v132; // rax
  unsigned int v133; // eax
  int v134; // r9d
  ULONG_PTR v135; // rcx
  __int64 v136; // rcx
  unsigned __int16 v137; // ax
  __int64 v138; // rdi
  ULONG Protect; // esi
  __int64 v140; // rdi
  __int64 UserModeGlobalLogger; // rcx
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rdi
  __int64 v145; // rcx
  _DWORD *v146; // rcx
  unsigned __int64 v147; // r8
  __int64 *v148; // rax
  SIZE_T v149; // rsi
  SIZE_T v150; // r12
  __int64 v151; // r15
  __int64 v152; // rdx
  _QWORD *v153; // rdi
  unsigned __int64 v154; // r15
  _QWORD *v155; // rdi
  _QWORD *v156; // r8
  int v157; // ecx
  int v158; // eax
  _QWORD *v159; // rdi
  __int64 *v160; // rax
  __int64 **v161; // rdx
  unsigned __int64 v162; // rcx
  unsigned __int64 v163; // r8
  int v164; // eax
  unsigned int v165; // eax
  int v166; // edx
  __int64 v167; // r8
  __int64 v168; // r13
  __int64 *v169; // rcx
  __int64 v170; // rax
  __int64 v171; // r9
  __int64 **v172; // rdx
  unsigned __int64 v173; // r9
  unsigned __int64 v174; // rcx
  __int64 v175; // rax
  unsigned __int64 v176; // r8
  unsigned __int64 v177; // r15
  _QWORD *v178; // rdi
  _QWORD *v179; // r8
  __int64 *v180; // rax
  int v181; // ecx
  int v182; // eax
  struct _TEB *v183; // rdi
  _QWORD *v184; // rdi
  _QWORD *v185; // r8
  __int64 *v186; // rax
  char v187; // al
  SIZE_T v188; // r13
  struct _TEB *v189; // rdi
  struct _TEB *v190; // rdi
  _DWORD *v191; // r8
  unsigned __int64 v192; // rdx
  _DWORD *v193; // r8
  unsigned __int64 v194; // rdx
  int v195; // ecx
  int v196; // eax
  char *v197; // r8
  char *v198; // rax
  __int16 v199; // ax
  __int16 v200; // ax
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v202; // rcx
  void *v203; // rdi
  __int64 v205; // rax
  ULONG_PTR v206; // r13
  char v207; // [rsp+30h] [rbp-228h]
  int v208; // [rsp+34h] [rbp-224h]
  PVOID v209; // [rsp+38h] [rbp-220h] BYREF
  char v210; // [rsp+40h] [rbp-218h]
  int v211; // [rsp+44h] [rbp-214h]
  int v212; // [rsp+48h] [rbp-210h]
  void *v213; // [rsp+50h] [rbp-208h]
  __int64 v214; // [rsp+58h] [rbp-200h]
  ULONG_PTR v215; // [rsp+60h] [rbp-1F8h]
  unsigned __int64 v216; // [rsp+68h] [rbp-1F0h]
  SIZE_T v217; // [rsp+70h] [rbp-1E8h]
  unsigned int v218; // [rsp+78h] [rbp-1E0h]
  unsigned int v219; // [rsp+7Ch] [rbp-1DCh]
  __int64 v220; // [rsp+80h] [rbp-1D8h]
  unsigned int v221; // [rsp+88h] [rbp-1D0h]
  char *v222; // [rsp+90h] [rbp-1C8h]
  int v223; // [rsp+98h] [rbp-1C0h]
  __int64 v224; // [rsp+A0h] [rbp-1B8h]
  unsigned __int64 j; // [rsp+A8h] [rbp-1B0h]
  unsigned __int64 v226; // [rsp+B0h] [rbp-1A8h]
  unsigned __int64 v227; // [rsp+B8h] [rbp-1A0h]
  unsigned __int64 v228; // [rsp+C0h] [rbp-198h]
  unsigned __int64 v229; // [rsp+C8h] [rbp-190h]
  PVOID BaseAddress; // [rsp+D0h] [rbp-188h] BYREF
  ULONG_PTR RegionSize; // [rsp+D8h] [rbp-180h] BYREF
  __int64 v232; // [rsp+E0h] [rbp-178h]
  __int64 v233; // [rsp+E8h] [rbp-170h]
  unsigned int *v234; // [rsp+F0h] [rbp-168h]
  __int64 v235; // [rsp+F8h] [rbp-160h]
  __int64 v236; // [rsp+100h] [rbp-158h]
  SIZE_T v237; // [rsp+108h] [rbp-150h]
  unsigned int *v238; // [rsp+110h] [rbp-148h]
  __int64 v239; // [rsp+118h] [rbp-140h]
  __int64 v240; // [rsp+120h] [rbp-138h]
  __int64 *v241; // [rsp+128h] [rbp-130h]
  int v242; // [rsp+130h] [rbp-128h]
  __int64 v243; // [rsp+138h] [rbp-120h]
  SIZE_T v244; // [rsp+140h] [rbp-118h]
  __int64 v245; // [rsp+148h] [rbp-110h]
  __int64 v246; // [rsp+150h] [rbp-108h]
  __int64 v247; // [rsp+158h] [rbp-100h]
  __int64 v248; // [rsp+160h] [rbp-F8h]
  void *v249; // [rsp+168h] [rbp-F0h]
  _QWORD *v250; // [rsp+170h] [rbp-E8h]
  int v251; // [rsp+178h] [rbp-E0h]
  unsigned __int16 *v252; // [rsp+180h] [rbp-D8h]
  unsigned __int64 v253; // [rsp+188h] [rbp-D0h]
  int v254; // [rsp+198h] [rbp-C0h]
  int v255; // [rsp+1A8h] [rbp-B0h]
  int v256; // [rsp+1B8h] [rbp-A0h]
  int v257; // [rsp+1C8h] [rbp-90h]
  int v258; // [rsp+1D8h] [rbp-80h]
  int v259; // [rsp+1E8h] [rbp-70h]
  int v260; // [rsp+1F8h] [rbp-60h]
  int v261; // [rsp+208h] [rbp-50h]
  int v262; // [rsp+218h] [rbp-40h]
  unsigned int v263; // [rsp+268h] [rbp+10h]
  unsigned __int64 v264; // [rsp+270h] [rbp+18h]
  ULONG_PTR v265; // [rsp+278h] [rbp+20h] BYREF

  v265 = a4;
  v264 = a3;
  v263 = a2;
  v7 = a3;
  v8 = a2;
  v208 = 1;
  v207 = 0;
  v10 = 0LL;
  v213 = 0LL;
  v209 = 0LL;
  v212 = 0;
  v11 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v208 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return (void *)sub_1800FF610((void *)a1);
    if ( a3 )
      v205 = a3;
    else
      v205 = 1LL;
    v206 = *(_QWORD *)(a1 + 264) & (v205 + *(_QWORD *)(a1 + 256));
    if ( v206 < 0x20 )
      v206 = 32LL;
    v265 = v206;
    v6 = (unsigned int)a2 >> 4;
    LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    LODWORD(v215) = v6;
    if ( (a2 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) )
    {
      LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      LODWORD(v215) = v6;
      v206 += 16LL;
      v265 = v206;
    }
    v12 = v206 >> 4;
    v214 = v12;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v215) = v6;
    v12 = a4 >> 4;
    v214 = a4 >> 4;
    if ( v11 < 2 )
    {
      v265 += 16LL;
      v12 = 2LL;
      v214 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v215) = v6;
  }
  if ( (a2 & 1) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 352);
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
          v189 = NtCurrentTeb();
          v189->LastErrorValue = RtlNtStatusToDosError(-1073741420);
          goto LABEL_475;
        }
        v212 = 1;
        RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
        sub_18007C6F0(a1, 1LL);
        goto LABEL_11;
      }
      ++*(_DWORD *)(v10 + 12);
    }
    ++*(_DWORD *)(a1 + 584);
LABEL_11:
    v207 = 1;
    if ( (*(_DWORD *)(a1 + 120) & 0x30000000) != 0 )
      sub_180059D74(a1);
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    {
      v265 += 56LL;
      v138 = (sub_18001EBF0(v10, a2) & 0xF) << 12;
      BaseAddress = 0LL;
      RegionSize = v138 + v265 + 4096;
      Protect = sub_18002AE30(a1, 1LL);
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
        goto LABEL_475;
      v209 = (char *)BaseAddress + v138;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v209, 0LL, &v265, 0x1000u, Protect) >= 0 )
      {
        *((_WORD *)v209 + 28) = v265 - v7;
        *((_BYTE *)v209 + 58) = v6 | 2;
        *((_QWORD *)v209 + 4) = v265;
        *((_QWORD *)v209 + 5) = RegionSize;
        *((_BYTE *)v209 + 63) = 4;
        *(_QWORD *)(a1 + 560) += v265;
        v140 = 2147353472LL;
        if ( RtlGetCurrentServiceSessionId() )
          UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          UserModeGlobalLogger = 2147353472LL;
        if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FE0A4(a1, v209, v265, 9LL);
        if ( RtlGetCurrentServiceSessionId() )
          v142 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          v142 = 2147353472LL;
        if ( *(_BYTE *)v142 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v140 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          sub_1800FE318(a1, (int)v209, v265, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v140);
        }
        v144 = 2147353482LL;
        if ( RtlGetCurrentServiceSessionId() )
          v145 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
        else
          v145 = 2147353482LL;
        if ( *(_BYTE *)v145 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v144 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
          sub_1800FE318(a1, (int)v209, v265, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v144);
        }
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
        {
          v199 = sub_1800244C4(1LL, v143);
          *((_WORD *)v209 + 8) = v199;
        }
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v200 = sub_1800ED320(a1, (unsigned __int8)(v8 >> 18), 0, *((_QWORD *)v209 + 4) >> 4, 1);
          *((_WORD *)v209 + 9) = v200;
        }
        v146 = v209;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v209 + 59) = *((_BYTE *)v209 + 56) ^ *((_BYTE *)v209 + 57) ^ *((_BYTE *)v209 + 58);
          v146[14] ^= *(_DWORD *)(a1 + 136);
          v146 = v209;
        }
        v147 = a1 + 272;
        v148 = *(__int64 **)(a1 + 280);
        if ( *v148 == a1 + 272 )
        {
          *(_QWORD *)v146 = v147;
          *((_QWORD *)v146 + 1) = v148;
          *v148 = (__int64)v146;
          *(_QWORD *)(a1 + 280) = v146;
        }
        else
        {
          sub_18009A5F0(13, 0, v147, 0, *v148, 0LL);
        }
        v213 = (char *)v209 + 64;
        goto LABEL_475;
      }
      v209 = 0LL;
      ++*(_DWORD *)(a1 + 600);
    }
    goto LABEL_474;
  }
  if ( (v8 & 0x800000) == 0 )
  {
    if ( v11 >= *(unsigned __int16 *)(a1 + 400) )
    {
      if ( v7 <= qword_180159758 && (*(_BYTE *)(a1 + 386) != 2 || !*(_QWORD *)(a1 + 376)) && *(_BYTE *)(a1 + 387) == 2 )
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
    }
    else if ( v7 <= qword_180159758 && ((unsigned __int8)(1 << (v11 & 7)) & *(_BYTE *)((v11 >> 3) + a1 + 402)) == 0 )
    {
      v16 = (unsigned __int16 *)(*(_QWORD *)(a1 + 392) + 2 * v11);
      v252 = v16;
      v17 = *v16 + 33;
      *v16 = v17;
      if ( v212 || (v17 & 0x1Fu) > 0x10 || v17 > 0xFF00u )
      {
        if ( *(_BYTE *)(a1 + 386) == 2 )
          v136 = *(_QWORD *)(a1 + 376);
        else
          v136 = 0LL;
        v137 = sub_1800747E4(v136);
        if ( v137 == 0xFFFF )
        {
          if ( *(_BYTE *)(a1 + 386) != 2 || !*(_QWORD *)(a1 + 376) )
            *(_DWORD *)(a1 + 120) |= 0x20000000u;
        }
        else
        {
          *v16 = v137;
          *(_BYTE *)((v11 >> 3) + a1 + 402) |= 1 << (v11 & 7);
          ++*(_DWORD *)(a1 + 624);
        }
      }
    }
  }
  if ( a5 )
  {
    v18 = *a5;
    if ( *a5 )
    {
      v37 = (__int64)(v18 - 2);
      v222 = (char *)(v18 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v113 = *(_DWORD *)(v37 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v37 + 8) = v113;
        if ( HIBYTE(v113) != ((unsigned __int8)v113 ^ (unsigned __int8)(BYTE1(v113) ^ BYTE2(v113))) )
          sub_1800FC010(a1, v18 - 2);
      }
      v114 = *v18;
      v115 = *(__int64 **)(v37 + 24);
      v116 = *v115;
      v117 = *(_QWORD *)(*v18 + 8);
      if ( *v115 == v117 && (__int64 *)v116 == v18 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v37 + 8);
        v118 = *(_QWORD *)(a1 + 312);
        if ( v118 )
        {
          v119 = *(unsigned __int16 *)(v37 + 8);
          while ( 1 )
          {
            v120 = *(unsigned int *)(v118 + 8);
            if ( v119 < v120 )
            {
              v121 = *(unsigned __int16 *)(v37 + 8);
              v233 = *(unsigned __int16 *)(v37 + 8);
              goto LABEL_212;
            }
            a3 = *(_QWORD *)v118;
            if ( !*(_QWORD *)v118 )
              break;
            v118 = *(_QWORD *)v118;
          }
          v121 = v120 - 1;
          v233 = v121;
LABEL_212:
          LOBYTE(a3) = 1;
          sub_18005C30C(a1, v118, a3, (_DWORD)v18, v121, v119);
        }
        *v115 = v114;
        *(_QWORD *)(v114 + 8) = v115;
        v58 = (char *)(v37 + 10);
        if ( (*(_BYTE *)(v37 + 10) & 8) == 0 || (unsigned __int8)sub_18005CA3C((PVOID)a1) )
          goto LABEL_81;
        sub_1800128F0(a1, v37, *(unsigned __int16 *)(v37 + 8), 1);
      }
      else
      {
        sub_18009A5F0(13, a1, (_DWORD)v18, v117, v116, 0LL);
      }
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v190 = NtCurrentTeb();
      v190->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      goto LABEL_475;
    }
  }
  v241 = (__int64 *)(a1 + 336);
  for ( i = *(__int64 **)(a1 + 312); ; i = (__int64 *)*i )
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
      v26 = *((_DWORD *)v25 - 2);
      v254 = v26;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v27 = v26 ^ *(_DWORD *)(a1 + 136);
        v254 = v27;
        LOWORD(v26) = v27;
        if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
        {
          sub_18009A5F0(3, a1, (_DWORD)v25 - 16, 0, 0LL, 0LL);
          LOWORD(v26) = v27;
        }
      }
      if ( (int)(v12 - (unsigned __int16)v26) > 0 )
      {
        v23 = v24;
      }
      else
      {
        v28 = *v24 - 16;
        v29 = *(_DWORD *)(v28 + 8);
        v255 = v29;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v30 = v29 ^ *(_DWORD *)(a1 + 136);
          v255 = v30;
          LOWORD(v29) = v30;
          if ( HIBYTE(v30) != ((unsigned __int8)v30 ^ (unsigned __int8)(BYTE1(v30) ^ BYTE2(v30))) )
          {
            sub_18009A5F0(3, a1, v28, 0, 0LL, 0LL);
            LOWORD(v29) = v30;
          }
        }
        if ( (int)(v12 - (unsigned __int16)v29) <= 0 )
        {
          v23 = (__int64 *)*v24;
        }
        else if ( !*i && (_DWORD)j == *((_DWORD *)i + 2) - 1 )
        {
          if ( *((_DWORD *)i + 3) )
            v22 = (unsigned int)(2 * v22);
          for ( k = *(__int64 **)(i[6] + 8 * v22); v24 != k; k = (__int64 *)*k )
          {
            v111 = *((_DWORD *)k - 2);
            v256 = v111;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v112 = v111 ^ *(_DWORD *)(a1 + 136);
              v256 = v112;
              LOWORD(v111) = v112;
              if ( HIBYTE(v112) != ((unsigned __int8)v112 ^ (unsigned __int8)(BYTE1(v112) ^ BYTE2(v112))) )
              {
                sub_18009A5F0(3, a1, (_DWORD)k - 16, 0, 0LL, 0LL);
                LOWORD(v111) = v112;
              }
            }
            if ( (int)(v12 - (unsigned __int16)v111) <= 0 )
            {
              v23 = k;
              break;
            }
          }
        }
        else
        {
          v31 = (unsigned int)v22 >> 5;
          v218 = (unsigned int)v22 >> 5;
          v32 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
          v33 = (unsigned int *)(i[5] + 4 * v31);
          v234 = v33;
          v34 = *v33 & ~((1 << (v22 & 0x1F)) - 1);
          while ( !v34 )
          {
            if ( (unsigned int)v31 > v32 )
              goto LABEL_196;
            v234 = ++v33;
            v34 = *v33;
            LODWORD(v31) = v31 + 1;
            v218 = v31;
          }
          if ( (_WORD)v34 )
          {
            if ( (_BYTE)v34 )
              v35 = (unsigned __int8)byte_180119500[(unsigned __int8)v34];
            else
              v35 = (unsigned __int8)byte_180119500[BYTE1(v34)] + 8;
          }
          else if ( (v34 & 0xFF0000) != 0 )
          {
            v35 = (unsigned __int8)byte_180119500[BYTE2(v34)] + 16;
          }
          else
          {
            v35 = (unsigned __int8)byte_180119500[(unsigned __int64)v34 >> 24] + 24;
          }
          v36 = (unsigned int)(v35 + 32 * v31);
          v218 = v36;
          if ( *((_DWORD *)i + 3) )
            v36 = (unsigned int)(2 * v36);
          v23 = *(__int64 **)(i[6] + 8 * v36);
        }
      }
    }
    if ( v23 )
      break;
LABEL_196:
    i = (__int64 *)*i;
    v21 = *((_DWORD *)i + 6);
  }
  if ( v241 != v23 )
  {
    v37 = (__int64)(v23 - 2);
    v222 = (char *)(v23 - 2);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v38 = *(_DWORD *)(v37 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v37 + 8) = v38;
      if ( HIBYTE(v38) != ((unsigned __int8)v38 ^ (unsigned __int8)(BYTE1(v38) ^ BYTE2(v38))) )
        sub_1800FC010(a1, v23 - 2);
    }
    v39 = *(unsigned __int16 *)(v37 + 8);
    if ( v39 >= v12 )
    {
      v40 = *v23;
      v41 = *(__int64 **)(v37 + 24);
      v216 = (unsigned __int64)v41;
      v42 = *v41;
      v43 = *(_QWORD *)(v40 + 8);
      if ( *v41 != v43 || (__int64 *)v42 != v23 )
      {
        sub_18009A5F0(13, a1, (_DWORD)v23, v43, v42, 0LL);
        goto LABEL_475;
      }
      *(_QWORD *)(a1 + 192) -= v39;
      v44 = *(__int64 **)(a1 + 312);
      if ( v44 )
      {
        v45 = *(unsigned __int16 *)(v37 + 8);
        while ( 1 )
        {
          v46 = *((unsigned int *)v44 + 2);
          if ( v45 < v46 )
          {
            v235 = *(unsigned __int16 *)(v37 + 8);
            v47 = v45;
            goto LABEL_63;
          }
          if ( !*v44 )
            break;
          v44 = (__int64 *)*v44;
        }
        v47 = v46 - 1;
        v235 = v47;
LABEL_63:
        v232 = v45;
        v48 = v47 - *((_DWORD *)v44 + 6);
        if ( *((_DWORD *)v44 + 3) )
          v49 = 2 * v48;
        else
          v49 = v48;
        v50 = 8 * v49;
        v217 = 8 * v49;
        v51 = v44[6];
        v52 = *(__int64 **)(v51 + 8 * v49);
        --*((_DWORD *)v44 + 4);
        v53 = *((_DWORD *)v44 + 2);
        if ( v47 == v53 - 1 )
          --*((_DWORD *)v44 + 5);
        if ( v52 == v23 )
        {
          v221 = v53;
          if ( !*v44 )
            --v53;
          v221 = v53;
          v54 = *v23;
          v232 = *v23;
          v55 = v44[4];
          if ( v47 >= v53 )
          {
            if ( v54 == v55 )
            {
              *(_QWORD *)(v51 + v50) = 0LL;
              goto LABEL_78;
            }
            *(_QWORD *)(v51 + v50) = v54;
          }
          else
          {
            if ( v54 == v55 )
            {
LABEL_77:
              *(_QWORD *)(v50 + v44[6]) = 0LL;
LABEL_78:
              *(_DWORD *)(v44[5] + 4LL * (v48 >> 5)) &= ~(1 << (v48 & 0x1F));
              goto LABEL_79;
            }
            v56 = *(_DWORD *)(v54 - 16 + 8);
            v257 = v56;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v57 = v56 ^ *(_DWORD *)(a1 + 136);
              v257 = v57;
              LOWORD(v56) = v57;
              if ( HIBYTE(v57) != ((unsigned __int8)v57 ^ (unsigned __int8)(BYTE1(v57) ^ BYTE2(v57))) )
              {
                sub_18009A5F0(3, a1, v54 - 16, 0, 0LL, 0LL);
                LOWORD(v56) = v57;
                v41 = (__int64 *)v216;
                v54 = v232;
                v50 = v217;
              }
            }
            if ( (_DWORD)v45 != (unsigned __int16)v56 )
            {
              v37 = (__int64)v222;
              goto LABEL_77;
            }
            *(_QWORD *)(v50 + v44[6]) = v54;
            v37 = (__int64)v222;
          }
        }
      }
LABEL_79:
      *v41 = v40;
      *(_QWORD *)(v40 + 8) = v41;
      v58 = (char *)(v37 + 10);
      if ( (*(_BYTE *)(v37 + 10) & 8) == 0 )
      {
        v12 = v214;
        LOBYTE(v6) = v215;
        goto LABEL_81;
      }
      if ( (unsigned __int8)sub_18005CA3C((PVOID)a1) )
      {
        v12 = v214;
        LOBYTE(v6) = v215;
        goto LABEL_81;
      }
LABEL_402:
      sub_1800128F0(a1, v37, *(unsigned __int16 *)(v37 + 8), 1);
      goto LABEL_475;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v37 + 11) = v39 ^ BYTE1(v39) ^ *(_BYTE *)(v37 + 10);
      *(_DWORD *)(v37 + 8) ^= *(_DWORD *)(a1 + 136);
    }
  }
  v124 = (_QWORD *)sub_18002A508(a1);
  v37 = (__int64)v124;
  v222 = (char *)v124;
  if ( !v124 )
  {
LABEL_474:
    v213 = 0LL;
    goto LABEL_475;
  }
  v125 = v124 + 2;
  v126 = v124[2];
  v127 = (__int64 *)v124[3];
  v128 = *v127;
  v129 = *(_QWORD *)(v126 + 8);
  if ( *v127 != v129 || (_QWORD *)v128 != v125 )
  {
    sub_18009A5F0(13, a1, (_DWORD)v125, v129, v128, 0LL);
    goto LABEL_475;
  }
  *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v37 + 8);
  v130 = *(__int64 ***)(a1 + 312);
  if ( v130 )
  {
    v131 = *(unsigned __int16 *)(v37 + 8);
    while ( 1 )
    {
      v132 = *((unsigned int *)v130 + 2);
      if ( v131 < v132 )
        break;
      if ( !*v130 )
      {
        v133 = v132 - 1;
        v236 = v133;
        goto LABEL_242;
      }
      v130 = (__int64 **)*v130;
    }
    v133 = *(unsigned __int16 *)(v37 + 8);
    v236 = *(unsigned __int16 *)(v37 + 8);
LABEL_242:
    v134 = (int)v125;
    LOBYTE(v125) = 1;
    sub_18005C30C(a1, (_DWORD)v130, (_DWORD)v125, v134, v133, v131);
  }
  *v127 = v126;
  *(_QWORD *)(v126 + 8) = v127;
  v58 = (char *)(v37 + 10);
  if ( (*(_BYTE *)(v37 + 10) & 8) != 0 && !(unsigned __int8)sub_18005CA3C((PVOID)a1) )
    goto LABEL_402;
  LOBYTE(v6) = v215;
LABEL_81:
  v59 = *v58;
  v210 = *v58;
  v60 = v208;
  if ( !v208 && (v59 & 4) != 0 )
  {
    v149 = 16LL * *(unsigned __int16 *)(v37 + 8) - 32;
    v237 = v149;
    if ( (v59 & 2) != 0 && v149 > 4 )
    {
      v149 -= 4LL;
      v237 = v149;
    }
    v150 = RtlCompareMemoryUlong((PVOID)(v37 + 32), v149, 0xFEEEFEEE);
    if ( v150 != v149 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v37 = (__int64)v222;
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v222, &v222[v150 + 32]);
      sub_1801011EC();
      v59 = v210;
    }
    v60 = 0;
    LOBYTE(v6) = v215;
  }
  v220 = v37;
  if ( (*v58 & 1) == 0 )
  {
    *v58 = v6;
    v61 = *(unsigned __int16 *)(v37 + 8) - v12;
    v253 = v61;
    *(_WORD *)(v37 + 8) = v12;
    v62 = v264;
    v63 = v265 - v264;
    v214 = v265 - v264;
    if ( v265 - v264 >= 0x3F )
    {
      *(_QWORD *)(v37 + 16 * v12) = v63;
      *(_BYTE *)(v37 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v37 + 15) = v63;
    }
    *(_BYTE *)(v37 + 11) = 0;
    if ( v61 )
    {
      if ( v61 != 1 )
      {
        v64 = v60 == 0;
        v211 = v60 == 0;
        v65 = *(_BYTE *)(v37 + 14);
        if ( v65 )
          v66 = (v37 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v65 << 16) + 0x10000;
        else
          v66 = a1;
        v217 = v61;
        v67 = v37 + 16 * v12;
        v212 = 0;
        *(_BYTE *)(v67 + 10) = v59;
        *(_BYTE *)(v67 + 15) = 0;
        *(_WORD *)(v67 + 12) = v12 ^ *(_WORD *)(a1 + 140);
        v68 = *(_QWORD *)(v66 + 40);
        if ( v68 == v66 )
        {
          LOBYTE(v69) = 0;
        }
        else
        {
          v69 = ((v67 - v66) >> 16) + 1;
          v253 = v69;
          if ( v69 >= 0xFE )
            sub_18009A5F0(3, v68, v37 + 16 * v12, v66, 0LL, 0LL);
        }
        *(_BYTE *)(v67 + 14) = v69;
        *(_BYTE *)(v67 + 11) = 0;
        *(_WORD *)(v67 + 8) = v61;
        while ( 1 )
        {
          v70 = v67 + 16 * v61;
          if ( ((*(_BYTE *)(v70 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
            break;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v166 = *(_DWORD *)(v70 + 8) ^ *(_DWORD *)(a1 + 136);
            *(_DWORD *)(v70 + 8) = v166;
            if ( HIBYTE(v166) != ((unsigned __int8)v166 ^ (unsigned __int8)(BYTE1(v166) ^ BYTE2(v166))) )
              sub_1800FC010(a1, v67 + 16 * v61);
          }
          v167 = v70 + 16;
          v168 = *(_QWORD *)(v70 + 16);
          v169 = *(__int64 **)(v70 + 24);
          v226 = (unsigned __int64)v169;
          v170 = *v169;
          v171 = *(_QWORD *)(v168 + 8);
          if ( *v169 == v171 && v170 == v167 )
          {
            *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v70 + 8);
            v172 = *(__int64 ***)(a1 + 312);
            if ( v172 )
            {
              v173 = *(unsigned __int16 *)(v70 + 8);
              while ( 1 )
              {
                v174 = *((unsigned int *)v172 + 2);
                if ( v173 < v174 )
                  break;
                if ( !*v172 )
                {
                  v175 = (unsigned int)(v174 - 1);
                  goto LABEL_341;
                }
                v172 = (__int64 **)*v172;
              }
              v175 = *(unsigned __int16 *)(v70 + 8);
LABEL_341:
              v243 = v175;
              LOBYTE(v167) = 1;
              sub_18005C30C(a1, (_DWORD)v172, v167, v70 + 16, v175, v173);
              v169 = (__int64 *)v226;
            }
            *v169 = v168;
            *(_QWORD *)(v168 + 8) = v169;
            if ( (*(_BYTE *)(v70 + 10) & 8) == 0 || (unsigned __int8)sub_18005CA3C((PVOID)a1) )
            {
              if ( v64 )
              {
                v187 = *(_BYTE *)(v70 + 10);
                if ( (v187 & 4) != 0 )
                {
                  v188 = 16LL * *(unsigned __int16 *)(v70 + 8) - 32;
                  v244 = v188;
                  if ( (v187 & 2) != 0 && v188 > 4 )
                  {
                    v188 -= 4LL;
                    v244 = v188;
                  }
                  v217 = RtlCompareMemoryUlong((PVOID)(v70 + 32), v188, 0xFEEEFEEE);
                  if ( v217 != v188 )
                  {
                    if ( NtCurrentPeb()->Ldr )
                      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                    else
                      DbgPrint("HEAP: ");
                    DbgPrint(
                      "HEAP: Free Heap block %p modified at %p after it was freed\n",
                      (const void *)(v67 + 16 * v61),
                      (const void *)(v70 + v217 + 32));
                    sub_1801011EC();
                    v64 = v211;
                  }
                }
              }
              *(_BYTE *)(v67 + 10) = *(_BYTE *)(v70 + 10);
              v176 = v61 + *(unsigned __int16 *)(v70 + 8);
              v217 = v176;
              if ( v176 > 0xFF00 )
              {
                sub_180012F50(a1, v67, v176);
                v60 = v208;
                goto LABEL_143;
              }
              *(_WORD *)(v67 + 8) = v176;
              *(_WORD *)(16 * v176 + v67 + 12) = v176 ^ *(_WORD *)(a1 + 140);
              v177 = (unsigned __int16)v176;
              if ( !v64 )
              {
                *(_BYTE *)(v67 + 10) = 0;
                *(_BYTE *)(v67 + 15) = 0;
                v178 = (_QWORD *)(a1 + 336);
                if ( *(_QWORD *)(a1 + 312) )
                  v179 = (_QWORD *)sub_18005C238(a1, (unsigned __int16)v176);
                else
                  v179 = (_QWORD *)*v178;
                while ( v178 != v179 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v181 = *((_DWORD *)v179 - 2);
                    v223 = v181;
                    if ( (v181 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v182 = v181 ^ *(_DWORD *)(a1 + 136);
                      v223 = v182;
                    }
                    else
                    {
                      LOWORD(v182) = v181;
                    }
                  }
                  else
                  {
                    LOWORD(v182) = *((_WORD *)v179 - 4);
                  }
                  if ( v177 <= (unsigned __int16)v182 )
                    break;
                  v179 = (_QWORD *)*v179;
                }
                v159 = (_QWORD *)(v67 + 16);
                v180 = (__int64 *)v179[1];
                if ( (_QWORD *)*v180 == v179 )
                {
                  *v159 = v179;
                  *(_QWORD *)(v67 + 24) = v180;
                  *v180 = (__int64)v159;
                  v179[1] = v159;
                }
                else
                {
                  sub_18009A5F0(13, 0, (_DWORD)v179, 0, *v180, 0LL);
                }
                *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v67 + 8);
                v161 = *(__int64 ***)(a1 + 312);
                if ( v161 )
                {
                  v162 = *(unsigned __int16 *)(v67 + 8);
                  while ( 1 )
                  {
                    v163 = *((unsigned int *)v161 + 2);
                    if ( v162 < v163 )
                      break;
                    if ( !*v161 )
                    {
                      v164 = v163 - 1;
                      v245 = (unsigned int)(v163 - 1);
                      goto LABEL_314;
                    }
                    v161 = (__int64 **)*v161;
                  }
                  v164 = *(unsigned __int16 *)(v67 + 8);
                  v245 = *(unsigned __int16 *)(v67 + 8);
                  goto LABEL_314;
                }
                goto LABEL_141;
              }
              *(_BYTE *)(v67 + 10) &= 0xF0u;
              *(_BYTE *)(v67 + 15) = 0;
              if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
              {
LABEL_371:
                v184 = (_QWORD *)(a1 + 336);
                if ( *(_QWORD *)(a1 + 312) )
                  v185 = (_QWORD *)sub_18005C238(a1, v177);
                else
                  v185 = (_QWORD *)*v184;
                while ( v184 != v185 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v195 = *((_DWORD *)v185 - 2);
                    v262 = v195;
                    if ( (v195 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v196 = v195 ^ *(_DWORD *)(a1 + 136);
                      v262 = v196;
                    }
                    else
                    {
                      LOWORD(v196) = v195;
                    }
                  }
                  else
                  {
                    LOWORD(v196) = *((_WORD *)v185 - 4);
                  }
                  if ( v177 <= (unsigned __int16)v196 )
                    break;
                  v185 = (_QWORD *)*v185;
                }
                v159 = (_QWORD *)(v67 + 16);
                v186 = (__int64 *)v185[1];
                if ( (_QWORD *)*v186 == v185 )
                {
                  *v159 = v185;
                  *(_QWORD *)(v67 + 24) = v186;
                  *v186 = (__int64)v159;
                  v185[1] = v159;
                }
                else
                {
                  sub_18009A5F0(13, 0, (_DWORD)v185, 0, *v186, 0LL);
                }
                *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v67 + 8);
                v161 = *(__int64 ***)(a1 + 312);
                if ( v161 )
                {
                  v162 = *(unsigned __int16 *)(v67 + 8);
                  while ( 1 )
                  {
                    v163 = *((unsigned int *)v161 + 2);
                    if ( v162 < v163 )
                      break;
                    if ( !*v161 )
                    {
                      v164 = v163 - 1;
                      v247 = (unsigned int)(v163 - 1);
                      goto LABEL_314;
                    }
                    v161 = (__int64 **)*v161;
                  }
                  v164 = *(unsigned __int16 *)(v67 + 8);
                  v247 = *(unsigned __int16 *)(v67 + 8);
LABEL_314:
                  LOBYTE(v163) = 1;
                  sub_18005C190(a1, (_DWORD)v161, v163, (_DWORD)v159, v164, v162);
                }
LABEL_141:
                v60 = v208;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  *(_BYTE *)(v67 + 11) = *(_BYTE *)(v67 + 8) ^ *(_BYTE *)(v67 + 9) ^ *(_BYTE *)(v67 + 10);
                  *(_DWORD *)(v67 + 8) ^= *(_DWORD *)(a1 + 136);
                }
LABEL_143:
                v62 = v264;
                goto LABEL_144;
              }
              v193 = (_DWORD *)(v67 + 32);
              v246 = v67 + 32;
              v194 = (16 * v177 - 32) >> 2;
              v228 = v194;
              if ( v194 )
              {
                if ( ((unsigned __int8)v193 & 4) != 0 )
                {
                  *v193 = -17891602;
                  v228 = --v194;
                  if ( v194 )
                  {
                    v193 = (_DWORD *)(v67 + 36);
                    v246 = v67 + 36;
                    goto LABEL_437;
                  }
                }
                else
                {
LABEL_437:
                  memset64(v193, 0xFEEEFEEEFEEEFEEEuLL, v194 >> 1);
                  if ( (v194 & 1) != 0 )
                    v193[v194 - 1] = -17891602;
                }
              }
              *(_BYTE *)(v67 + 10) |= 4u;
              goto LABEL_371;
            }
            sub_1800128F0(a1, v67 + 16 * v61, *(unsigned __int16 *)(v70 + 8), 1);
          }
          else
          {
            sub_18009A5F0(13, a1, v167, v171, v170, 0LL);
          }
          if ( v212 )
          {
            NtCurrentTeb()->LastStatusValue = -1073741764;
            v183 = NtCurrentTeb();
            v183->LastErrorValue = RtlNtStatusToDosError(-1073741764);
            goto LABEL_475;
          }
          v212 = 1;
        }
        *(_WORD *)(v70 + 12) = v61 ^ *(_WORD *)(a1 + 140);
        if ( !v64 )
        {
          v71 = (unsigned __int16)v61;
          v216 = (unsigned __int16)v61;
          *(_BYTE *)(v67 + 10) = 0;
          *(_BYTE *)(v67 + 15) = 0;
          v72 = (_QWORD *)(a1 + 336);
          v73 = *(__int64 **)(a1 + 312);
          if ( v73 )
          {
            while ( 1 )
            {
              v74 = *((unsigned int *)v73 + 2);
              if ( (unsigned __int16)v61 < v74 )
              {
                v75 = (unsigned __int16)v61;
                v224 = (unsigned __int16)v61;
                goto LABEL_97;
              }
              if ( !*v73 )
                break;
              v73 = (__int64 *)*v73;
            }
            v75 = v74 - 1;
            v224 = (unsigned int)(v74 - 1);
            while ( 1 )
            {
LABEL_97:
              v76 = v75 - *((_DWORD *)v73 + 6);
              v214 = v76;
              v77 = 0LL;
              v78 = (_QWORD *)v73[4];
              v79 = (_QWORD *)v78[1];
              if ( v78 == v79 )
              {
                v77 = (_QWORD *)v73[4];
              }
              else
              {
                v80 = *((_DWORD *)v79 - 2);
                v258 = v80;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v81 = v80 ^ *(_DWORD *)(a1 + 136);
                  v258 = v81;
                  LOWORD(v80) = v81;
                  if ( HIBYTE(v81) != ((unsigned __int8)v81 ^ (unsigned __int8)(BYTE1(v81) ^ BYTE2(v81))) )
                  {
                    sub_18009A5F0(3, a1, (_DWORD)v79 - 16, 0, 0LL, 0LL);
                    LOWORD(v80) = v81;
                    LODWORD(v76) = v214;
                  }
                }
                v82 = (unsigned __int16)v80;
                v71 = v216;
                if ( (int)v216 - v82 > 0 )
                {
                  v77 = v78;
                }
                else
                {
                  v83 = *v78;
                  v84 = *(_DWORD *)(*v78 - 8LL);
                  v259 = v84;
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v85 = v84 ^ *(_DWORD *)(a1 + 136);
                    v259 = v85;
                    LOWORD(v84) = v85;
                    if ( HIBYTE(v85) != ((unsigned __int8)v85 ^ (unsigned __int8)(BYTE1(v85) ^ BYTE2(v85))) )
                    {
                      sub_18009A5F0(3, a1, v83 - 16, 0, 0LL, 0LL);
                      LOWORD(v84) = v85;
                      LODWORD(v76) = v214;
                      v71 = v216;
                    }
                  }
                  if ( (int)(v71 - (unsigned __int16)v84) <= 0 )
                  {
                    v77 = (_QWORD *)*v78;
                  }
                  else if ( !*v73 && (_DWORD)v224 == *((_DWORD *)v73 + 2) - 1 )
                  {
                    if ( *((_DWORD *)v73 + 3) )
                      LODWORD(v76) = 2 * v76;
                    for ( m = *(_QWORD **)(v73[6] + 8LL * (unsigned int)v76); v78 != m; m = (_QWORD *)*m )
                    {
                      v123 = *((_DWORD *)m - 2);
                      v260 = v123;
                      if ( *(_DWORD *)(a1 + 124) )
                      {
                        v211 = v123 ^ *(_DWORD *)(a1 + 136);
                        v260 = v211;
                        LOWORD(v123) = v211;
                        if ( HIBYTE(v211) != ((unsigned __int8)v211 ^ (unsigned __int8)(BYTE1(v211) ^ BYTE2(v211))) )
                        {
                          sub_18009A5F0(3, a1, (_DWORD)m - 16, 0, 0LL, 0LL);
                          LOWORD(v123) = v211;
                          v71 = v216;
                        }
                      }
                      if ( (int)(v71 - (unsigned __int16)v123) <= 0 )
                      {
                        v77 = m;
                        break;
                      }
                    }
                  }
                  else
                  {
                    v86 = (unsigned int)v76 >> 5;
                    v219 = (unsigned int)v76 >> 5;
                    v87 = ((unsigned int)(*((_DWORD *)v73 + 2) - *((_DWORD *)v73 + 6)) >> 5) - 1;
                    v88 = (unsigned int *)(v73[5] + 4 * v86);
                    v238 = v88;
                    v89 = *v88 & ~((1 << (v76 & 0x1F)) - 1);
                    while ( !v89 )
                    {
                      if ( (unsigned int)v86 > v87 )
                        goto LABEL_228;
                      v238 = ++v88;
                      v89 = *v88;
                      LODWORD(v86) = v86 + 1;
                      v219 = v86;
                    }
                    if ( (_WORD)v89 )
                    {
                      if ( (_BYTE)v89 )
                        v90 = (unsigned __int8)byte_180119500[(unsigned __int8)v89];
                      else
                        v90 = (unsigned __int8)byte_180119500[BYTE1(v89)] + 8;
                    }
                    else if ( (v89 & 0xFF0000) != 0 )
                    {
                      v90 = (unsigned __int8)byte_180119500[BYTE2(v89)] + 16;
                    }
                    else
                    {
                      v90 = (unsigned __int8)byte_180119500[(unsigned __int64)v89 >> 24] + 24;
                    }
                    v91 = (unsigned int)(v90 + 32 * v86);
                    v219 = v91;
                    if ( *((_DWORD *)v73 + 3) )
                      v91 = (unsigned int)(2 * v91);
                    v77 = *(_QWORD **)(v73[6] + 8 * v91);
                    v71 = v216;
                  }
                }
              }
              if ( v77 )
                break;
LABEL_228:
              v73 = (__int64 *)*v73;
              v75 = *((_DWORD *)v73 + 6);
              v224 = v75;
              v71 = v216;
            }
            v72 = (_QWORD *)(a1 + 336);
          }
          else
          {
            v77 = (_QWORD *)*v72;
          }
          while ( v72 != v77 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v92 = *((_DWORD *)v77 - 2);
              v251 = v92;
              if ( (v92 & *(_DWORD *)(a1 + 124)) != 0 )
              {
                v93 = v92 ^ *(_DWORD *)(a1 + 136);
                v251 = v93;
              }
              else
              {
                LOWORD(v93) = v92;
              }
            }
            else
            {
              LOWORD(v93) = *((_WORD *)v77 - 4);
            }
            if ( v71 <= (unsigned __int16)v93 )
              break;
            v77 = (_QWORD *)*v77;
            v72 = (_QWORD *)(a1 + 336);
          }
          v94 = (_QWORD *)(v67 + 16);
          v95 = (__int64 *)v77[1];
          if ( (_QWORD *)*v95 == v77 )
          {
            *v94 = v77;
            *(_QWORD *)(v67 + 24) = v95;
            *v95 = (__int64)v94;
            v77[1] = v94;
          }
          else
          {
            sub_18009A5F0(13, 0, (_DWORD)v77, 0, *v95, 0LL);
          }
          *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v67 + 8);
          v96 = *(__int64 **)(a1 + 312);
          if ( v96 )
          {
            v97 = (unsigned __int16 *)*(unsigned __int16 *)(v67 + 8);
            while ( 1 )
            {
              v98 = *((unsigned int *)v96 + 2);
              if ( (unsigned __int64)v97 < v98 )
              {
                v239 = *(unsigned __int16 *)(v67 + 8);
                v99 = (int)v97;
                goto LABEL_133;
              }
              if ( !*v96 )
                break;
              v96 = (__int64 *)*v96;
            }
            v99 = v98 - 1;
            v239 = (unsigned int)(v98 - 1);
LABEL_133:
            v252 = v97;
            v100 = v99 - *((_DWORD *)v96 + 6);
            if ( *((_DWORD *)v96 + 3) )
              v101 = 2 * v100;
            else
              v101 = v100;
            ++*((_DWORD *)v96 + 4);
            v102 = 8 * v101;
            v217 = 8 * v101;
            v103 = *(_QWORD *)(8 * v101 + v96[6]);
            v214 = v103;
            if ( v99 == *((_DWORD *)v96 + 2) - 1 )
              ++*((_DWORD *)v96 + 5);
            if ( !v103 )
              goto LABEL_138;
            v109 = *(_DWORD *)(v103 - 16 + 8);
            v261 = v109;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v211 = v109 ^ *(_DWORD *)(a1 + 136);
              v261 = v211;
              LOWORD(v109) = v211;
              if ( HIBYTE(v211) != ((unsigned __int8)v211 ^ (unsigned __int8)(BYTE1(v211) ^ BYTE2(v211))) )
              {
                sub_18009A5F0(3, a1, v103 - 16, 0, 0LL, 0LL);
                LOWORD(v109) = v211;
                v102 = v217;
              }
              v103 = v214;
            }
            if ( (int)v97 - (unsigned __int16)v109 <= 0 )
LABEL_138:
              *(_QWORD *)(v102 + v96[6]) = v94;
            if ( !v103 )
              *(_DWORD *)(v96[5] + 4LL * (v100 >> 5)) |= 1 << (v100 & 0x1F);
          }
          goto LABEL_141;
        }
        v154 = (unsigned __int16)v61;
        *(_BYTE *)(v67 + 10) &= 0xF0u;
        *(_BYTE *)(v67 + 15) = 0;
        if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
        {
LABEL_301:
          v155 = (_QWORD *)(a1 + 336);
          if ( *(_QWORD *)(a1 + 312) )
            v156 = (_QWORD *)sub_18005C238(a1, v154);
          else
            v156 = (_QWORD *)*v155;
          while ( v155 != v156 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v157 = *((_DWORD *)v156 - 2);
              v242 = v157;
              if ( (v157 & *(_DWORD *)(a1 + 124)) != 0 )
              {
                v158 = v157 ^ *(_DWORD *)(a1 + 136);
                v242 = v158;
              }
              else
              {
                LOWORD(v158) = v157;
              }
            }
            else
            {
              LOWORD(v158) = *((_WORD *)v156 - 4);
            }
            if ( v154 <= (unsigned __int16)v158 )
              break;
            v156 = (_QWORD *)*v156;
          }
          v159 = (_QWORD *)(v67 + 16);
          v160 = (__int64 *)v156[1];
          if ( (_QWORD *)*v160 == v156 )
          {
            *v159 = v156;
            *(_QWORD *)(v67 + 24) = v160;
            *v160 = (__int64)v159;
            v156[1] = v159;
          }
          else
          {
            sub_18009A5F0(13, 0, (_DWORD)v156, 0, *v160, 0LL);
          }
          *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v67 + 8);
          v161 = *(__int64 ***)(a1 + 312);
          if ( v161 )
          {
            v162 = *(unsigned __int16 *)(v67 + 8);
            while ( 1 )
            {
              v163 = *((unsigned int *)v161 + 2);
              if ( v162 < v163 )
              {
                v164 = *(unsigned __int16 *)(v67 + 8);
                v226 = *(unsigned __int16 *)(v67 + 8);
                goto LABEL_314;
              }
              if ( !*v161 )
                break;
              v161 = (__int64 **)*v161;
            }
            v164 = v163 - 1;
            v226 = (unsigned int)(v163 - 1);
            goto LABEL_314;
          }
          goto LABEL_141;
        }
        v191 = (_DWORD *)(v67 + 32);
        v240 = v67 + 32;
        v192 = (16 * (unsigned __int64)(unsigned __int16)v61 - 32) >> 2;
        v227 = v192;
        if ( v192 )
        {
          if ( ((unsigned __int8)v191 & 4) == 0 )
            goto LABEL_419;
          *v191 = -17891602;
          v227 = --v192;
          if ( v192 )
          {
            v191 = (_DWORD *)(v67 + 36);
            v240 = v67 + 36;
LABEL_419:
            memset64(v191, 0xFEEEFEEEFEEEFEEEuLL, v192 >> 1);
            if ( (v192 & 1) != 0 )
              v191[v192 - 1] = -17891602;
          }
        }
        *(_BYTE *)(v67 + 10) |= 4u;
        goto LABEL_301;
      }
      ++*(_WORD *)(v37 + 8);
      v135 = v265 - v264 + 16;
      v215 = v135;
      if ( v135 >= 0x3F )
      {
        *(_QWORD *)(v37 + 16 * (v12 + 1)) = v135;
        *(_BYTE *)(v37 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v37 + 15) = v135;
      }
    }
LABEL_144:
    v213 = (void *)(v220 + 16);
    v104 = (unsigned __int16 *)(v220 + 8);
    v105 = *(unsigned __int16 *)(v220 + 8);
    v106 = 16 * v105;
    v248 = 16 * v105;
    if ( (*(_BYTE *)(v220 + 15) & 0x3F) == 0x3F )
    {
      v106 -= 8LL;
      v248 = v106;
    }
    if ( v60 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v220 + 11) = v105 ^ BYTE1(v105) ^ *(_BYTE *)(v37 + 10);
        *(_DWORD *)v104 ^= *(_DWORD *)(a1 + 136);
      }
      if ( v207 )
      {
        if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
        {
          ++*(_DWORD *)(a1 + 608);
          v107 = *(_DWORD *)(a1 + 616);
          if ( *(_DWORD *)(a1 + 608) > v107 )
          {
            *(_DWORD *)(a1 + 608) = 0;
            v108 = *(_QWORD *)(a1 + 544) - 16LL * *(_QWORD *)(a1 + 192);
            if ( v108 > *(_QWORD *)(a1 + 640) )
              *(_QWORD *)(a1 + 640) = v108;
            *(_QWORD *)(a1 + 648) = v108;
          }
          if ( ++*(_DWORD *)(a1 + 620) >= 0x1000u )
          {
            if ( *(_BYTE *)(a1 + 386) == 2 && *(_DWORD *)(a1 + 624) > 0x10u )
              v165 = 256;
            else
              v165 = 16;
            if ( *(_DWORD *)(a1 + 612) > v165 && v107 < 0x10000 )
              *(_DWORD *)(a1 + 616) = 2 * v107;
            *(_DWORD *)(a1 + 612) = 0;
            *(_DWORD *)(a1 + 620) = 0;
          }
        }
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
        v207 = 0;
      }
      if ( (v263 & 8) != 0 )
        memset(v213, 0, v106 - 8);
      goto LABEL_475;
    }
    if ( (v263 & 8) != 0 )
    {
      memset(v213, 0, v106 - 8);
    }
    else if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
    {
      v197 = (char *)v213;
      v249 = v213;
      v105 = (v62 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v229 = v105;
      if ( v105 )
      {
        if ( ((unsigned __int8)v213 & 4) == 0 )
          goto LABEL_457;
        *(_DWORD *)v213 = -1163005939;
        v229 = --v105;
        if ( v105 )
        {
          v197 += 4;
          v249 = v197;
LABEL_457:
          memset64(v197, 0xBAADF00DBAADF00DuLL, v105 >> 1);
          if ( (v105 & 1) != 0 )
            *(_DWORD *)&v197[4 * v105 - 4] = -1163005939;
        }
      }
    }
    if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
    {
      v198 = (char *)v213;
      *(_QWORD *)((char *)v213 + v62) = 0xABABABABABABABABuLL;
      *(_QWORD *)&v198[v62 + 8] = 0xABABABABABABABABuLL;
      *(_BYTE *)(v220 + 10) |= 4u;
    }
    v151 = v220;
    *(_BYTE *)(v220 + 11) = 0;
    if ( (*(_BYTE *)(v151 + 10) & 2) != 0 )
    {
      v153 = (_QWORD *)sub_180063B6C(v151, v105);
      v250 = v153;
      *v153 = 0LL;
      v153[1] = 0LL;
      if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
        *(_WORD *)v153 = sub_1800244C4(1LL, v152);
      if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        *((_WORD *)v250 + 1) = sub_1800ED320(a1, (v263 >> 18) & 0xFFF, 0, *v104, 0);
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      *(_BYTE *)(v151 + 11) = sub_1800ED320(a1, (unsigned __int8)(v263 >> 18), 0, *v104, 0);
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v151 + 11) = *(_BYTE *)v104 ^ *((_BYTE *)v104 + 1) ^ *((_BYTE *)v104 + 2);
      *(_DWORD *)v104 ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_475;
  }
  sub_18009A5F0(3, a1, v37, 0, 0LL, 0LL);
LABEL_475:
  if ( v207 )
  {
    if ( !v209 && v213 )
      sub_18008384C(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
    v202 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v202 = 2147353480LL;
  v203 = v213;
  if ( *(_BYTE *)v202 && v213 )
  {
    if ( v209 )
      sub_1800FC5C4(a1, (unsigned __int64)v209 & 0xFFFFFFFFFFFF0000uLL, *((_QWORD *)v209 + 5));
  }
  return v203;
}
