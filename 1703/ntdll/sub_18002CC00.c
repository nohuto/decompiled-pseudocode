/*
 * XREFs of sub_18002CC00 @ 0x18002CC00
 * Callers:
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_18000C24C @ 0x18000C24C (sub_18000C24C.c)
 *     sub_18000E614 @ 0x18000E614 (sub_18000E614.c)
 *     sub_18000E6BC @ 0x18000E6BC (sub_18000E6BC.c)
 *     sub_18000F3C8 @ 0x18000F3C8 (sub_18000F3C8.c)
 *     sub_18001BE98 @ 0x18001BE98 (sub_18001BE98.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_18001D350 @ 0x18001D350 (sub_18001D350.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_180021DA4 @ 0x180021DA4 (sub_180021DA4.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180028C10 @ 0x180028C10 (sub_180028C10.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     sub_18002F7E0 @ 0x18002F7E0 (sub_18002F7E0.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800774AC @ 0x1800774AC (sub_1800774AC.c)
 *     sub_180078D9C @ 0x180078D9C (sub_180078D9C.c)
 *     sub_1800812F8 @ 0x1800812F8 (sub_1800812F8.c)
 *     sub_18008BEF4 @ 0x18008BEF4 (sub_18008BEF4.c)
 *     sub_180090C78 @ 0x180090C78 (sub_180090C78.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x1800A97E0 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F0F1C @ 0x1800F0F1C (sub_1800F0F1C.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_1800FDF88 @ 0x1800FDF88 (sub_1800FDF88.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 *     sub_1800FFAA8 @ 0x1800FFAA8 (sub_1800FFAA8.c)
 *     sub_180102310 @ 0x180102310 (sub_180102310.c)
 */

__int64 __fastcall sub_18002CC00(
        char *Src,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 **a5,
        _DWORD *a6)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // r12
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r14
  char v13; // si
  _WORD *v14; // rdi
  unsigned __int16 v15; // cx
  __int64 *k; // r14
  unsigned __int64 v17; // rax
  unsigned int v18; // esi
  __int64 v19; // rsi
  char *v20; // r15
  char *v21; // r12
  char *v22; // rax
  int v23; // r8d
  int v24; // eax
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rdi
  unsigned int v28; // r8d
  unsigned int *v29; // r9
  unsigned int v30; // edx
  int v31; // eax
  __int64 v32; // rdi
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rax
  char *v35; // r8
  __int64 v36; // r12
  __int64 *v37; // r10
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 *v40; // rsi
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  int v43; // r15d
  unsigned int v44; // r14d
  __int64 v45; // rax
  char **v46; // r11
  char *v47; // r9
  unsigned int v48; // ecx
  char *v49; // rcx
  int v50; // eax
  char *v51; // rsi
  char v52; // r12
  int v53; // edx
  __int64 v54; // r14
  unsigned __int64 v55; // r8
  __int64 v56; // rcx
  char v57; // r15
  unsigned __int8 v58; // al
  char *v59; // r9
  __int64 v60; // rsi
  char *v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rdi
  unsigned __int64 v64; // r12
  _QWORD *v65; // rax
  __int64 *v66; // r14
  unsigned __int64 v67; // rcx
  unsigned int v68; // r15d
  __int64 v69; // r15
  _QWORD *v70; // rdi
  _QWORD *v71; // r13
  _QWORD *v72; // rax
  int v73; // r8d
  int v74; // eax
  __int64 v75; // r8
  int v76; // eax
  __int64 v77; // rdi
  unsigned int v78; // r9d
  unsigned int *v79; // r8
  unsigned int v80; // edx
  __int64 *v81; // rsi
  int v82; // eax
  __int64 v83; // rdi
  int v84; // ecx
  unsigned __int16 v85; // ax
  _QWORD *v86; // r15
  __int64 *v87; // rax
  __int64 *v88; // rdi
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // rdx
  int v91; // r12d
  unsigned int v92; // r14d
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r13
  unsigned __int16 *v96; // rsi
  __int64 v97; // r14
  unsigned int v98; // edi
  unsigned __int64 v99; // rcx
  int v100; // eax
  char *n; // rdi
  int v102; // eax
  _QWORD *j; // r15
  int v104; // eax
  __int64 v105; // r14
  __int64 *v106; // r15
  __int64 v107; // rax
  __int64 v108; // r9
  unsigned __int64 v109; // rdx
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rax
  _QWORD *v112; // rax
  __int64 *v113; // r8
  _QWORD *v114; // r10
  __int64 v115; // rsi
  __int64 *v116; // r14
  __int64 v117; // rax
  __int64 v118; // r9
  __int64 *v119; // rdx
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int16 v125; // ax
  unsigned __int64 v126; // rdi
  _QWORD *v127; // r14
  _QWORD *v128; // rdi
  _QWORD *v129; // r8
  int v130; // ecx
  unsigned __int16 v131; // ax
  _QWORD *v132; // rdi
  __int64 *v133; // rax
  __int64 v134; // rdx
  unsigned __int64 v135; // rcx
  unsigned __int64 v136; // r8
  char v137; // cl
  __int64 v138; // r13
  __int64 *v139; // r12
  __int64 v140; // rax
  __int64 v141; // r9
  __int64 **v142; // rdx
  unsigned __int64 v143; // rcx
  unsigned __int64 v144; // r8
  unsigned __int64 v145; // r14
  _QWORD *v146; // rdi
  _QWORD *v147; // r8
  __int64 *v148; // rax
  unsigned __int64 v149; // r8
  int v150; // ecx
  unsigned __int16 v151; // ax
  _QWORD *v152; // rdi
  _QWORD *v153; // r8
  __int64 *v154; // rax
  unsigned __int64 v155; // r8
  char v156; // al
  __int64 v157; // rcx
  struct _TEB *v158; // rax
  signed __int8 v159; // cf
  HANDLE UniqueThread; // rax
  __int64 v161; // rdi
  int v162; // esi
  __int64 v163; // rdi
  __int64 v164; // rcx
  __int64 v165; // rcx
  __int64 v166; // rdi
  __int64 v167; // rcx
  __int64 v168; // rdx
  char *v169; // r8
  __int64 *v170; // rax
  struct _TEB *v171; // rdi
  struct _TEB *v172; // rdi
  unsigned __int64 v173; // r14
  __int64 v174; // r15
  _DWORD *v175; // r8
  unsigned __int64 v176; // rdx
  unsigned __int64 v177; // r12
  __int64 v178; // r13
  _DWORD *v179; // r8
  unsigned __int64 v180; // rdx
  int v181; // ecx
  unsigned __int16 v182; // ax
  struct _TEB *v183; // rdi
  unsigned __int64 v184; // rdx
  char *v185; // r8
  unsigned __int64 v186; // rdx
  char *v187; // rax
  __int16 v188; // ax
  _DWORD *HotpatchInformation; // rcx
  __int64 v190; // rcx
  void *v191; // rdi
  __int64 v193; // rcx
  unsigned __int64 v194; // rax
  char v195; // [rsp+30h] [rbp-2A8h]
  int v196; // [rsp+34h] [rbp-2A4h]
  __int64 v197; // [rsp+38h] [rbp-2A0h] BYREF
  char v198; // [rsp+40h] [rbp-298h]
  int v199; // [rsp+44h] [rbp-294h]
  void *v200; // [rsp+48h] [rbp-290h]
  char v201; // [rsp+50h] [rbp-288h]
  char v202; // [rsp+51h] [rbp-287h]
  char v203; // [rsp+52h] [rbp-286h]
  char v204; // [rsp+53h] [rbp-285h]
  unsigned __int64 v205; // [rsp+58h] [rbp-280h]
  int v206; // [rsp+60h] [rbp-278h]
  unsigned int v207; // [rsp+64h] [rbp-274h]
  unsigned int v208; // [rsp+68h] [rbp-270h]
  int v209; // [rsp+6Ch] [rbp-26Ch]
  char *v210; // [rsp+70h] [rbp-268h]
  __int64 v211; // [rsp+78h] [rbp-260h]
  unsigned __int64 v212; // [rsp+80h] [rbp-258h]
  int v213; // [rsp+88h] [rbp-250h]
  unsigned int v214; // [rsp+8Ch] [rbp-24Ch]
  unsigned __int64 i; // [rsp+90h] [rbp-248h]
  unsigned __int64 m; // [rsp+98h] [rbp-240h]
  char *v217; // [rsp+A0h] [rbp-238h]
  __int64 v218; // [rsp+A8h] [rbp-230h]
  __int64 v219; // [rsp+B0h] [rbp-228h]
  unsigned __int64 v220; // [rsp+B8h] [rbp-220h]
  __int64 v221; // [rsp+C0h] [rbp-218h] BYREF
  unsigned __int64 v222; // [rsp+C8h] [rbp-210h] BYREF
  unsigned __int64 v223; // [rsp+D0h] [rbp-208h]
  unsigned __int64 v224; // [rsp+D8h] [rbp-200h]
  int v225; // [rsp+E8h] [rbp-1F0h]
  int v226; // [rsp+100h] [rbp-1D8h]
  int v227; // [rsp+118h] [rbp-1C0h]
  int v228; // [rsp+130h] [rbp-1A8h]
  int v229; // [rsp+148h] [rbp-190h]
  int v230; // [rsp+160h] [rbp-178h]
  int v231; // [rsp+178h] [rbp-160h]
  int v232; // [rsp+190h] [rbp-148h]
  unsigned __int64 v233; // [rsp+1A0h] [rbp-138h]
  unsigned __int64 v234; // [rsp+1A8h] [rbp-130h]
  unsigned int *v235; // [rsp+1B0h] [rbp-128h]
  unsigned __int64 v236; // [rsp+1B8h] [rbp-120h]
  __int64 v237; // [rsp+1C0h] [rbp-118h]
  unsigned __int64 v238; // [rsp+1C8h] [rbp-110h]
  unsigned __int64 v239; // [rsp+1D0h] [rbp-108h]
  unsigned __int64 v240; // [rsp+1D8h] [rbp-100h]
  unsigned __int64 v241; // [rsp+1E0h] [rbp-F8h]
  __int64 v242; // [rsp+1E8h] [rbp-F0h]
  unsigned __int64 v243; // [rsp+1F0h] [rbp-E8h]
  int v244; // [rsp+1F8h] [rbp-E0h]
  _QWORD *v245; // [rsp+200h] [rbp-D8h]
  _WORD *v246; // [rsp+208h] [rbp-D0h]
  unsigned __int64 v247; // [rsp+210h] [rbp-C8h]
  __int64 v248; // [rsp+218h] [rbp-C0h]
  void *v249; // [rsp+220h] [rbp-B8h]
  int v250; // [rsp+228h] [rbp-B0h]
  unsigned __int64 v252; // [rsp+230h] [rbp-A8h]
  unsigned int *v253; // [rsp+238h] [rbp-A0h]
  char *v254; // [rsp+240h] [rbp-98h]
  unsigned __int64 v255; // [rsp+248h] [rbp-90h]
  int v256; // [rsp+250h] [rbp-88h]
  int v257; // [rsp+260h] [rbp-78h]
  int v258; // [rsp+270h] [rbp-68h]
  int v259; // [rsp+280h] [rbp-58h]
  int v260; // [rsp+290h] [rbp-48h]
  unsigned __int64 v262; // [rsp+2F0h] [rbp+18h]
  unsigned __int64 v263; // [rsp+2F8h] [rbp+20h] BYREF

  v263 = a4;
  v262 = a3;
  v7 = a3;
  v219 = 0LL;
  v196 = 1;
  v195 = 0;
  v200 = 0LL;
  v197 = 0LL;
  v199 = 0;
  v10 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v196 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return sub_180090C78(Src);
    if ( a3 )
      v193 = a3;
    else
      v193 = 1LL;
    v194 = *((_QWORD *)Src + 33) & (v193 + *((_QWORD *)Src + 32));
    if ( v194 < 0x20 )
      v194 = 32LL;
    v263 = v194;
    v6 = a2 >> 4;
    LOBYTE(v6) = (a2 >> 4) & 0xE0 | 1;
    LODWORD(v205) = v6;
    if ( (a2 & 0x3C000100) != 0 || *((_QWORD *)Src + 41) )
    {
      LOBYTE(v6) = (a2 >> 4) & 0xE0 | 3;
      LODWORD(v205) = v6;
      v263 = v194 + 16;
    }
    v11 = v263 >> 4;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v205) = v6;
    v11 = a4 >> 4;
    if ( v10 < 2 )
    {
      v263 += 16LL;
      v11 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v205) = v6;
  }
  if ( (a2 & 1) == 0 )
  {
    v157 = *((_QWORD *)Src + 44);
    v158 = NtCurrentTeb();
    v159 = _interlockedbittestandreset((volatile signed __int32 *)(v157 + 8), 0);
    UniqueThread = v158->ClientId.UniqueThread;
    if ( v159 )
    {
      *(_QWORD *)(v157 + 16) = UniqueThread;
      *(_DWORD *)(v157 + 12) = 1;
    }
    else
    {
      if ( *(HANDLE *)(v157 + 16) != UniqueThread )
      {
        v206 = 0;
        if ( byte_18015B388 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741420;
          v171 = NtCurrentTeb();
          v171->LastErrorValue = RtlNtStatusToDosError(-1073741420);
          goto LABEL_485;
        }
        v199 = 1;
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        sub_1800812F8(Src, 1LL);
        goto LABEL_354;
      }
      ++*(_DWORD *)(v157 + 12);
    }
    v206 = 1;
    ++*((_DWORD *)Src + 146);
LABEL_354:
    v201 = 1;
    v195 = 1;
    if ( (*((_DWORD *)Src + 30) & 0x30000000) != 0 )
      sub_18000C24C((__int64)Src);
  }
  if ( v11 > *((unsigned int *)Src + 37) )
  {
    if ( (Src[112] & 2) != 0 )
    {
      v263 += 56LL;
      v161 = (sub_180028C10() & 0xF) << 12;
      v221 = 0LL;
      v222 = v161 + v263 + 4096;
      v162 = sub_18001E548(Src, 1);
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v221, 0LL, &v222, 0x2000, v162) < 0 )
        goto LABEL_485;
      v197 = v161 + v221;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v197, 0LL, &v263, 4096, v162) >= 0 )
      {
        *(_WORD *)(v197 + 56) = v263 - v7;
        *(_BYTE *)(v197 + 58) = v6 | 2;
        *(_QWORD *)(v197 + 32) = v263;
        *(_QWORD *)(v197 + 40) = v222;
        *(_BYTE *)(v197 + 63) = 4;
        *((_QWORD *)Src + 70) += v263;
        v163 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v164 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v164 = 2147353472LL;
        if ( *(_BYTE *)v164 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FF834(Src, v197, v263, 9LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v165 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v165 = 2147353472LL;
        if ( *(_BYTE *)v165 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v163 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
          sub_1800FFAA8((_DWORD)Src, v197, v263, 16 * *((_QWORD *)Src + 24), *(unsigned __int8 *)v163);
        }
        v166 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v167 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
        else
          v167 = 2147353482LL;
        if ( *(_BYTE *)v167 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v166 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
          sub_1800FFAA8((_DWORD)Src, v197, v263, 16 * *((_QWORD *)Src + 24), *(unsigned __int8 *)v166);
        }
        if ( (*((_DWORD *)Src + 28) & 0x8000000) != 0 )
          *(_WORD *)(v197 + 16) = sub_18000F3C8(1u);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v188 = sub_1800F0F1C((_DWORD)Src, (unsigned __int8)(a2 >> 18), 0, *(_QWORD *)(v197 + 32) >> 4, 1);
          *(_WORD *)(v197 + 18) = v188;
        }
        v168 = v197;
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v197 + 59) = *(_BYTE *)(v197 + 56) ^ *(_BYTE *)(v197 + 57) ^ *(_BYTE *)(v197 + 58);
          *(_DWORD *)(v168 + 56) ^= *((_DWORD *)Src + 34);
          v168 = v197;
        }
        v169 = Src + 272;
        v170 = (__int64 *)*((_QWORD *)Src + 35);
        if ( (char *)*v170 == Src + 272 )
        {
          *(_QWORD *)v168 = v169;
          *(_QWORD *)(v168 + 8) = v170;
          *v170 = v168;
          *((_QWORD *)Src + 35) = v168;
        }
        else
        {
          sub_1800A4DFC(12, 0, (_DWORD)v169, 0, *v170, 0LL);
        }
        v200 = (void *)(v197 + 64);
        goto LABEL_485;
      }
      v197 = 0LL;
      ++*((_DWORD *)Src + 150);
    }
    goto LABEL_287;
  }
  if ( (a2 & 0x800000) == 0 )
  {
    if ( v10 < *((unsigned __int16 *)Src + 200) )
    {
      if ( v7 <= qword_180158678 )
      {
        v12 = v10 >> 3;
        v13 = v10 & 7;
        if ( ((unsigned __int8)(1 << (v10 & 7)) & (unsigned __int8)Src[(v10 >> 3) + 402]) == 0 )
        {
          v14 = (_WORD *)(*((_QWORD *)Src + 49) + 2 * v10);
          v246 = v14;
          *v14 += 33;
          v15 = *v14;
          if ( !v199 )
          {
            if ( (v15 & 0x1Fu) <= 0x10 && v15 <= 0xFF00u )
            {
              v213 = 0;
              goto LABEL_15;
            }
            v213 = 1;
          }
          if ( v7 )
            v123 = v7;
          else
            v123 = 1LL;
          if ( Src[386] == 2 )
            v124 = *((_QWORD *)Src + 47);
          else
            v124 = 0LL;
          v125 = sub_180078D9C(v124, v123);
          if ( v125 == -1 )
          {
            if ( Src[386] != 2 || !*((_QWORD *)Src + 47) )
LABEL_285:
              *((_DWORD *)Src + 30) |= 0x20000000u;
          }
          else
          {
            *v14 = v125;
            Src[v12 + 402] |= 1 << v13;
            ++*((_DWORD *)Src + 156);
          }
        }
      }
    }
    else if ( v7 <= qword_180158678 && (Src[386] != 2 || !*((_QWORD *)Src + 47)) && Src[387] == 2 )
    {
      goto LABEL_285;
    }
  }
LABEL_15:
  if ( a5 )
  {
    v81 = *a5;
    if ( *a5 )
    {
      v33 = (unsigned __int64)(v81 - 2);
      v210 = (char *)(v81 - 2);
      if ( *((_DWORD *)Src + 31) )
      {
        *(_DWORD *)(v33 + 8) ^= *((_DWORD *)Src + 34);
        if ( *(_BYTE *)(v33 + 11) != (*(_BYTE *)(v33 + 8) ^ (unsigned __int8)(*(_BYTE *)(v33 + 9) ^ *(_BYTE *)(v33 + 10))) )
          sub_1800FDA30(Src, v81 - 2);
      }
      v105 = *v81;
      v106 = *(__int64 **)(v33 + 24);
      v107 = *v106;
      v108 = *(_QWORD *)(*v81 + 8);
      if ( *v106 != v108 || (__int64 *)v107 != v81 )
      {
        sub_1800A4DFC(12, (_DWORD)Src, (_DWORD)v81, v108, v107, 0LL);
        goto LABEL_396;
      }
      *((_QWORD *)Src + 24) -= *(unsigned __int16 *)(v33 + 8);
      v109 = *((_QWORD *)Src + 39);
      if ( v109 )
      {
        v110 = *(unsigned __int16 *)(v33 + 8);
        while ( 1 )
        {
          v111 = *(unsigned int *)(v109 + 8);
          if ( v110 < v111 )
            break;
          a3 = *(_QWORD *)v109;
          if ( !*(_QWORD *)v109 )
          {
            v110 = (unsigned int)(v111 - 1);
            break;
          }
          v109 = *(_QWORD *)v109;
        }
        v252 = v110;
        LOBYTE(a3) = 1;
        sub_18002F7E0((_DWORD)Src, v109, a3, (_DWORD)v81, v110, *(unsigned __int16 *)(v33 + 8));
      }
      *v106 = v105;
      *(_QWORD *)(v105 + 8) = v106;
      v51 = (char *)(v33 + 10);
      if ( (*(_BYTE *)(v33 + 10) & 8) != 0 && !sub_180021DA4((__int64)Src, v33) )
      {
        sub_18001C798((unsigned __int64)Src, v33, *(unsigned __int16 *)(v33 + 8), 1);
LABEL_396:
        NtCurrentTeb()->LastStatusValue = -1073741801;
        v172 = NtCurrentTeb();
        v172->LastErrorValue = RtlNtStatusToDosError(-1073741801);
        goto LABEL_485;
      }
      v202 = 1;
LABEL_72:
      v52 = *v51;
      v198 = *v51;
      v53 = v196;
      if ( !v196 && (v52 & 4) != 0 )
      {
        v173 = 16LL * *(unsigned __int16 *)(v33 + 8) - 32;
        v234 = v173;
        if ( (v52 & 2) != 0 && v173 > 4 )
        {
          v173 -= 4LL;
          v234 = v173;
        }
        v174 = RtlCompareMemoryUlong(v33 + 32, v173, 4277075694LL);
        if ( v174 != v173 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          v33 = (unsigned __int64)v210;
          DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v210, &v210[v174 + 32]);
          sub_180102310();
          v52 = v198;
        }
        v53 = 0;
      }
      v212 = v33;
      if ( (*v51 & 1) != 0 )
      {
        sub_1800A4DFC(3, (_DWORD)Src, v33, 0, 0LL, 0LL);
        goto LABEL_485;
      }
      *v51 = v205;
      v54 = *(unsigned __int16 *)(v33 + 8) - v11;
      v248 = v54;
      *(_WORD *)(v33 + 8) = v11;
      v55 = v262;
      v56 = v263 - v262;
      v217 = (char *)(v263 - v262);
      if ( v263 - v262 >= 0x3F )
      {
        *(_QWORD *)(v33 + 16 * v11) = v56;
        *(_BYTE *)(v33 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v33 + 15) = v56;
      }
      *(_BYTE *)(v33 + 11) = 0;
      if ( v54 )
      {
        if ( v54 != 1 )
        {
          if ( v53 )
          {
            v57 = 0;
            v209 = 0;
          }
          else
          {
            v57 = 1;
            v209 = 1;
          }
          v58 = *(_BYTE *)(v33 + 14);
          if ( v58 )
            v59 = (char *)((v33 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v58 << 16) + 0x10000);
          else
            v59 = Src;
          v211 = v54;
          v60 = v33 + 16 * v11;
          v199 = 0;
          *(_BYTE *)(v60 + 10) = v52;
          *(_BYTE *)(v60 + 15) = 0;
          *(_WORD *)(v60 + 12) = v11 ^ *((_WORD *)Src + 70);
          v61 = (char *)*((_QWORD *)v59 + 5);
          if ( v61 == v59 )
          {
            LOBYTE(v62) = 0;
          }
          else
          {
            v62 = ((unsigned __int64)(v60 - (_QWORD)v59) >> 16) + 1;
            v248 = v62;
            if ( (unsigned __int64)(v60 - (_QWORD)v59) >> 16 > 0xFC )
              sub_1800A4DFC(3, (_DWORD)v61, v60, (_DWORD)v59, 0LL, 0LL);
          }
          *(_BYTE *)(v60 + 14) = v62;
          *(_BYTE *)(v60 + 11) = 0;
          *(_WORD *)(v60 + 8) = v54;
          while ( 1 )
          {
            v63 = v60 + 16 * v54;
            if ( ((*(_BYTE *)(v63 + 10) ^ (unsigned __int8)((*((_DWORD *)Src + 31) >> 20) & Src[138])) & 1) != 0 )
              break;
            if ( *((_DWORD *)Src + 31) )
            {
              *(_DWORD *)(v63 + 8) ^= *((_DWORD *)Src + 34);
              if ( *(_BYTE *)(v63 + 11) != (*(_BYTE *)(v63 + 8) ^ (unsigned __int8)(*(_BYTE *)(v63 + 9) ^ *(_BYTE *)(v63 + 10))) )
                sub_1800FDA30(Src, v60 + 16 * v54);
            }
            v138 = *(_QWORD *)(v63 + 16);
            v139 = *(__int64 **)(v63 + 24);
            v140 = *v139;
            v141 = *(_QWORD *)(v138 + 8);
            if ( *v139 == v141 && v140 == v63 + 16 )
            {
              *((_QWORD *)Src + 24) -= *(unsigned __int16 *)(v63 + 8);
              v142 = (__int64 **)*((_QWORD *)Src + 39);
              if ( v142 )
              {
                v143 = *(unsigned __int16 *)(v63 + 8);
                while ( 1 )
                {
                  v144 = *((unsigned int *)v142 + 2);
                  if ( v143 < v144 )
                    break;
                  if ( !*v142 )
                  {
                    v143 = (unsigned int)(v144 - 1);
                    break;
                  }
                  v142 = (__int64 **)*v142;
                }
                v239 = v143;
                LOBYTE(v144) = 1;
                sub_18002F7E0((_DWORD)Src, (_DWORD)v142, v144, v63 + 16, v143, *(unsigned __int16 *)(v63 + 8));
              }
              *v139 = v138;
              *(_QWORD *)(v138 + 8) = v139;
              if ( (*(_BYTE *)(v63 + 10) & 8) == 0 || sub_180021DA4((__int64)Src, v60 + 16 * v54) )
              {
                if ( v57 )
                {
                  v156 = *(_BYTE *)(v63 + 10);
                  if ( (v156 & 4) != 0 )
                  {
                    v177 = 16LL * *(unsigned __int16 *)(v63 + 8) - 32;
                    v240 = v177;
                    if ( (v156 & 2) != 0 && v177 > 4 )
                    {
                      v177 -= 4LL;
                      v240 = v177;
                    }
                    v178 = RtlCompareMemoryUlong(v63 + 32, v177, 4277075694LL);
                    if ( v178 != v177 )
                    {
                      if ( NtCurrentPeb()->Ldr )
                        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                      else
                        DbgPrint("HEAP: ");
                      DbgPrint(
                        "HEAP: Free Heap block %p modified at %p after it was freed\n",
                        (const void *)(v60 + 16 * v54),
                        (const void *)(v63 + v178 + 32));
                      sub_180102310();
                      v57 = v209;
                    }
                  }
                }
                *(_BYTE *)(v60 + 10) = *(_BYTE *)(v63 + 10);
                v145 = *(unsigned __int16 *)(v63 + 8) + v54;
                v211 = v145;
                if ( v145 > 0xFF00 )
                {
                  sub_18001D350((unsigned __int64)Src, v60, v145);
                  v53 = v196;
                  goto LABEL_146;
                }
                *(_WORD *)(v60 + 8) = v145;
                *(_WORD *)(16 * v145 + v60 + 12) = v145 ^ *((_WORD *)Src + 70);
                if ( !v57 )
                {
                  *(_BYTE *)(v60 + 10) = 0;
                  *(_BYTE *)(v60 + 15) = 0;
                  v146 = Src + 336;
                  if ( *((_QWORD *)Src + 39) )
                    v147 = (_QWORD *)sub_18000E6BC((__int64)Src, (unsigned __int16)v145);
                  else
                    v147 = (_QWORD *)*v146;
                  while ( v146 != v147 )
                  {
                    if ( *((_DWORD *)Src + 31) )
                    {
                      v150 = *((_DWORD *)v147 - 2);
                      v257 = v150;
                      if ( (v150 & *((_DWORD *)Src + 31)) != 0 )
                        v257 = v150 ^ *((_DWORD *)Src + 34);
                      v151 = v257;
                    }
                    else
                    {
                      v151 = *((_WORD *)v147 - 4);
                    }
                    if ( (unsigned __int16)v145 <= (unsigned __int64)v151 )
                      break;
                    v147 = (_QWORD *)*v147;
                  }
                  v132 = (_QWORD *)(v60 + 16);
                  v148 = (__int64 *)v147[1];
                  if ( (_QWORD *)*v148 == v147 )
                  {
                    *v132 = v147;
                    *(_QWORD *)(v60 + 24) = v148;
                    *v148 = (__int64)v132;
                    v147[1] = v132;
                  }
                  else
                  {
                    sub_1800A4DFC(12, 0, (_DWORD)v147, 0, *v148, 0LL);
                  }
                  *((_QWORD *)Src + 24) += *(unsigned __int16 *)(v60 + 8);
                  v134 = *((_QWORD *)Src + 39);
                  if ( v134 )
                  {
                    v135 = *(unsigned __int16 *)(v60 + 8);
                    while ( 1 )
                    {
                      v149 = *(unsigned int *)(v134 + 8);
                      if ( v135 < v149 )
                        break;
                      if ( !*(_QWORD *)v134 )
                      {
                        v135 = (unsigned int)(v149 - 1);
                        break;
                      }
                      v134 = *(_QWORD *)v134;
                    }
                    v241 = v135;
                    goto LABEL_280;
                  }
                  goto LABEL_281;
                }
                *(_BYTE *)(v60 + 10) &= 0xF0u;
                *(_BYTE *)(v60 + 15) = 0;
                if ( (Src[112] & 0x40) == 0 )
                {
LABEL_337:
                  v152 = Src + 336;
                  if ( *((_QWORD *)Src + 39) )
                    v153 = (_QWORD *)sub_18000E6BC((__int64)Src, (unsigned __int16)v145);
                  else
                    v153 = (_QWORD *)*v152;
                  while ( v152 != v153 )
                  {
                    if ( *((_DWORD *)Src + 31) )
                    {
                      v181 = *((_DWORD *)v153 - 2);
                      v260 = v181;
                      if ( (v181 & *((_DWORD *)Src + 31)) != 0 )
                        v260 = v181 ^ *((_DWORD *)Src + 34);
                      v182 = v260;
                    }
                    else
                    {
                      v182 = *((_WORD *)v153 - 4);
                    }
                    if ( (unsigned __int16)v145 <= (unsigned __int64)v182 )
                      break;
                    v153 = (_QWORD *)*v153;
                  }
                  v132 = (_QWORD *)(v60 + 16);
                  v154 = (__int64 *)v153[1];
                  if ( (_QWORD *)*v154 == v153 )
                  {
                    *v132 = v153;
                    *(_QWORD *)(v60 + 24) = v154;
                    *v154 = (__int64)v132;
                    v153[1] = v132;
                  }
                  else
                  {
                    sub_1800A4DFC(12, 0, (_DWORD)v153, 0, *v154, 0LL);
                  }
                  *((_QWORD *)Src + 24) += *(unsigned __int16 *)(v60 + 8);
                  v134 = *((_QWORD *)Src + 39);
                  if ( v134 )
                  {
                    v135 = *(unsigned __int16 *)(v60 + 8);
                    while ( 1 )
                    {
                      v155 = *(unsigned int *)(v134 + 8);
                      if ( v135 < v155 )
                        break;
                      if ( !*(_QWORD *)v134 )
                      {
                        v135 = (unsigned int)(v155 - 1);
                        break;
                      }
                      v134 = *(_QWORD *)v134;
                    }
                    v243 = v135;
LABEL_280:
                    sub_18000E614((__int64)Src, v134, 1, (__int64)v132, v135, *(unsigned __int16 *)(v60 + 8));
                  }
LABEL_281:
                  v53 = v196;
                  if ( *((_DWORD *)Src + 31) )
                  {
                    *(_BYTE *)(v60 + 11) = *(_BYTE *)(v60 + 8) ^ *(_BYTE *)(v60 + 9) ^ *(_BYTE *)(v60 + 10);
                    *(_DWORD *)(v60 + 8) ^= *((_DWORD *)Src + 34);
                  }
LABEL_146:
                  v55 = v262;
                  goto LABEL_147;
                }
                v179 = (_DWORD *)(v60 + 32);
                v242 = v60 + 32;
                v180 = (16 * (unsigned __int64)(unsigned __int16)v145 - 32) >> 2;
                v224 = v180;
                if ( v180 )
                {
                  if ( ((unsigned __int8)v179 & 4) != 0 )
                  {
                    *v179 = -17891602;
                    v224 = --v180;
                    if ( v180 )
                    {
                      v179 = (_DWORD *)(v60 + 36);
                      v242 = v60 + 36;
                      goto LABEL_447;
                    }
                  }
                  else
                  {
LABEL_447:
                    memset64(v179, 0xFEEEFEEEFEEEFEEEuLL, v180 >> 1);
                    if ( (v180 & 1) != 0 )
                      v179[v180 - 1] = -17891602;
                  }
                }
                *(_BYTE *)(v60 + 10) |= 4u;
                goto LABEL_337;
              }
              sub_18001C798((unsigned __int64)Src, v60 + 16 * v54, *(unsigned __int16 *)(v63 + 8), 1);
            }
            else
            {
              sub_1800A4DFC(12, (_DWORD)Src, v63 + 16, v141, v140, 0LL);
            }
            if ( v199 )
            {
              NtCurrentTeb()->LastStatusValue = -1073741764;
              v183 = NtCurrentTeb();
              v183->LastErrorValue = RtlNtStatusToDosError(-1073741764);
              goto LABEL_485;
            }
            v199 = 1;
          }
          *(_WORD *)(v63 + 12) = v54 ^ *((_WORD *)Src + 70);
          if ( !v57 )
          {
            v64 = (unsigned __int16)v54;
            v247 = (unsigned __int16)v54;
            *(_BYTE *)(v60 + 10) = 0;
            *(_BYTE *)(v60 + 15) = 0;
            v65 = Src + 336;
            v66 = (__int64 *)*((_QWORD *)Src + 39);
            if ( v66 )
            {
              while ( 1 )
              {
                v67 = *((unsigned int *)v66 + 2);
                if ( v64 < v67 )
                {
                  v68 = v64;
                  i = v64;
                  goto LABEL_91;
                }
                if ( !*v66 )
                  break;
                v66 = (__int64 *)*v66;
              }
              v68 = v67 - 1;
              for ( i = (unsigned int)(v67 - 1); ; i = v68 )
              {
LABEL_91:
                v69 = v68 - *((_DWORD *)v66 + 6);
                v70 = 0LL;
                v71 = (_QWORD *)v66[4];
                v72 = (_QWORD *)v71[1];
                if ( v71 == v72 )
                {
                  v70 = (_QWORD *)v66[4];
                }
                else
                {
                  v73 = (_DWORD)v72 - 16;
                  v74 = *((_DWORD *)v72 - 2);
                  v230 = v74;
                  if ( *((_DWORD *)Src + 31) )
                  {
                    v230 = v74 ^ *((_DWORD *)Src + 34);
                    if ( HIBYTE(v230) != ((unsigned __int8)v230 ^ (unsigned __int8)(BYTE1(v230) ^ BYTE2(v230))) )
                      sub_1800A4DFC(3, (_DWORD)Src, v73, 0, 0LL, 0LL);
                  }
                  if ( (int)(v64 - (unsigned __int16)v230) > 0 )
                  {
                    v70 = v71;
                  }
                  else
                  {
                    v75 = *v71 - 16LL;
                    v76 = *(_DWORD *)(v75 + 8);
                    v231 = v76;
                    if ( *((_DWORD *)Src + 31) )
                    {
                      v231 = v76 ^ *((_DWORD *)Src + 34);
                      if ( HIBYTE(v231) != (BYTE1(v231) ^ (unsigned __int8)(v231 ^ BYTE2(v231))) )
                        sub_1800A4DFC(3, (_DWORD)Src, v75, 0, 0LL, 0LL);
                    }
                    if ( (int)(v64 - (unsigned __int16)v231) <= 0 )
                    {
                      v70 = (_QWORD *)*v71;
                    }
                    else if ( !*v66 && (_DWORD)i == *((_DWORD *)v66 + 2) - 1 )
                    {
                      if ( *((_DWORD *)v66 + 3) )
                        v69 = (unsigned int)(2 * v69);
                      for ( j = *(_QWORD **)(v66[6] + 8 * v69); v71 != j; j = (_QWORD *)*j )
                      {
                        v104 = *((_DWORD *)j - 2);
                        v232 = v104;
                        if ( *((_DWORD *)Src + 31) )
                        {
                          v232 = v104 ^ *((_DWORD *)Src + 34);
                          if ( HIBYTE(v232) != (BYTE1(v232) ^ (unsigned __int8)(v232 ^ BYTE2(v232))) )
                            sub_1800A4DFC(3, (_DWORD)Src, (_DWORD)j - 16, 0, 0LL, 0LL);
                        }
                        if ( (int)(v64 - (unsigned __int16)v232) <= 0 )
                        {
                          v70 = j;
                          break;
                        }
                      }
                    }
                    else
                    {
                      v77 = (unsigned int)v69 >> 5;
                      v208 = (unsigned int)v69 >> 5;
                      v78 = ((unsigned int)(*((_DWORD *)v66 + 2) - *((_DWORD *)v66 + 6)) >> 5) - 1;
                      v79 = (unsigned int *)(v66[5] + 4 * v77);
                      v235 = v79;
                      v80 = *v79 & ~((1 << (v69 & 0x1F)) - 1);
                      while ( !v80 )
                      {
                        if ( (unsigned int)v77 > v78 )
                          goto LABEL_218;
                        v235 = ++v79;
                        v80 = *v79;
                        LODWORD(v77) = v77 + 1;
                        v208 = v77;
                      }
                      if ( (_WORD)v80 )
                      {
                        if ( (_BYTE)v80 )
                          v82 = (unsigned __int8)byte_180119B00[(unsigned __int8)v80];
                        else
                          v82 = (unsigned __int8)byte_180119B00[BYTE1(v80)] + 8;
                      }
                      else if ( (v80 & 0xFF0000) != 0 )
                      {
                        v82 = (unsigned __int8)byte_180119B00[BYTE2(v80)] + 16;
                      }
                      else
                      {
                        v82 = (unsigned __int8)byte_180119B00[(unsigned __int64)v80 >> 24] + 24;
                      }
                      v83 = (unsigned int)(v82 + 32 * v77);
                      v208 = v83;
                      if ( *((_DWORD *)v66 + 3) )
                        v83 = (unsigned int)(2 * v83);
                      v70 = *(_QWORD **)(v66[6] + 8 * v83);
                    }
                  }
                }
                if ( v70 )
                  break;
LABEL_218:
                v66 = (__int64 *)*v66;
                v68 = *((_DWORD *)v66 + 6);
              }
              v65 = Src + 336;
            }
            else
            {
              v70 = (_QWORD *)*v65;
            }
            while ( v65 != v70 )
            {
              if ( *((_DWORD *)Src + 31) )
              {
                v84 = *((_DWORD *)v70 - 2);
                v258 = v84;
                if ( (v84 & *((_DWORD *)Src + 31)) != 0 )
                  v258 = v84 ^ *((_DWORD *)Src + 34);
                v85 = v258;
              }
              else
              {
                v85 = *((_WORD *)v70 - 4);
              }
              if ( v64 <= v85 )
                break;
              v70 = (_QWORD *)*v70;
              v65 = Src + 336;
            }
            v86 = (_QWORD *)(v60 + 16);
            v87 = (__int64 *)v70[1];
            if ( (_QWORD *)*v87 == v70 )
            {
              *v86 = v70;
              *(_QWORD *)(v60 + 24) = v87;
              *v87 = (__int64)v86;
              v70[1] = v86;
            }
            else
            {
              sub_1800A4DFC(12, 0, (_DWORD)v70, 0, *v87, 0LL);
            }
            *((_QWORD *)Src + 24) += *(unsigned __int16 *)(v60 + 8);
            v88 = (__int64 *)*((_QWORD *)Src + 39);
            if ( v88 )
            {
              v89 = *(unsigned __int16 *)(v60 + 8);
              while ( 1 )
              {
                v90 = *((unsigned int *)v88 + 2);
                if ( v89 < v90 )
                  break;
                if ( !*v88 )
                {
                  v89 = (unsigned int)(v90 - 1);
                  break;
                }
                v88 = (__int64 *)*v88;
              }
              v236 = v89;
              v91 = *(unsigned __int16 *)(v60 + 8);
              v246 = (_WORD *)*(unsigned __int16 *)(v60 + 8);
              v92 = v89 - *((_DWORD *)v88 + 6);
              if ( *((_DWORD *)v88 + 3) )
                v93 = 2 * v92;
              else
                v93 = v92;
              ++*((_DWORD *)v88 + 4);
              v94 = 8 * v93;
              v211 = 8 * v93;
              v95 = *(_QWORD *)(8 * v93 + v88[6]);
              if ( (_DWORD)v89 == *((_DWORD *)v88 + 2) - 1 )
                ++*((_DWORD *)v88 + 5);
              if ( !v95 )
                goto LABEL_141;
              v100 = *(_DWORD *)(v95 - 16 + 8);
              v225 = v100;
              if ( *((_DWORD *)Src + 31) )
              {
                v225 = v100 ^ *((_DWORD *)Src + 34);
                if ( HIBYTE(v225) != ((unsigned __int8)v225 ^ (unsigned __int8)(BYTE1(v225) ^ BYTE2(v225))) )
                {
                  sub_1800A4DFC(3, (_DWORD)Src, v95 - 16, 0, 0LL, 0LL);
                  v94 = v211;
                }
              }
              if ( v91 - (unsigned __int16)v225 <= 0 )
LABEL_141:
                *(_QWORD *)(v94 + v88[6]) = v86;
              if ( !v95 )
                *(_DWORD *)(v88[5] + 4LL * (v92 >> 5)) |= 1 << (v92 & 0x1F);
            }
            v53 = v196;
            if ( *((_DWORD *)Src + 31) )
            {
              *(_BYTE *)(v60 + 11) = *(_BYTE *)(v60 + 8) ^ *(_BYTE *)(v60 + 9) ^ *(_BYTE *)(v60 + 10);
              *(_DWORD *)(v60 + 8) ^= *((_DWORD *)Src + 34);
            }
            goto LABEL_146;
          }
          *(_BYTE *)(v60 + 10) &= 0xF0u;
          *(_BYTE *)(v60 + 15) = 0;
          if ( (Src[112] & 0x40) == 0 )
          {
LABEL_263:
            v128 = Src + 336;
            if ( *((_QWORD *)Src + 39) )
              v129 = (_QWORD *)sub_18000E6BC((__int64)Src, (unsigned __int16)v54);
            else
              v129 = (_QWORD *)*v128;
            while ( v128 != v129 )
            {
              if ( *((_DWORD *)Src + 31) )
              {
                v130 = *((_DWORD *)v129 - 2);
                v259 = v130;
                if ( (v130 & *((_DWORD *)Src + 31)) != 0 )
                  v259 = v130 ^ *((_DWORD *)Src + 34);
                v131 = v259;
              }
              else
              {
                v131 = *((_WORD *)v129 - 4);
              }
              if ( (unsigned __int16)v54 <= (unsigned __int64)v131 )
                break;
              v129 = (_QWORD *)*v129;
            }
            v132 = (_QWORD *)(v60 + 16);
            v133 = (__int64 *)v129[1];
            if ( (_QWORD *)*v133 == v129 )
            {
              *v132 = v129;
              *(_QWORD *)(v60 + 24) = v133;
              *v133 = (__int64)v132;
              v129[1] = v132;
            }
            else
            {
              sub_1800A4DFC(12, 0, (_DWORD)v129, 0, *v133, 0LL);
            }
            *((_QWORD *)Src + 24) += *(unsigned __int16 *)(v60 + 8);
            v134 = *((_QWORD *)Src + 39);
            if ( v134 )
            {
              v135 = *(unsigned __int16 *)(v60 + 8);
              while ( 1 )
              {
                v136 = *(unsigned int *)(v134 + 8);
                if ( v135 < v136 )
                  break;
                if ( !*(_QWORD *)v134 )
                {
                  v135 = (unsigned int)(v136 - 1);
                  break;
                }
                v134 = *(_QWORD *)v134;
              }
              v238 = v135;
              goto LABEL_280;
            }
            goto LABEL_281;
          }
          v175 = (_DWORD *)(v60 + 32);
          v237 = v60 + 32;
          v176 = (16 * (unsigned __int64)(unsigned __int16)v54 - 32) >> 2;
          v223 = v176;
          if ( v176 )
          {
            if ( ((unsigned __int8)v175 & 4) == 0 )
              goto LABEL_425;
            *v175 = -17891602;
            v223 = --v176;
            if ( v176 )
            {
              v175 = (_DWORD *)(v60 + 36);
              v237 = v60 + 36;
LABEL_425:
              memset64(v175, 0xFEEEFEEEFEEEFEEEuLL, v176 >> 1);
              if ( (v176 & 1) != 0 )
                v175[v176 - 1] = -17891602;
            }
          }
          *(_BYTE *)(v60 + 10) |= 4u;
          goto LABEL_263;
        }
        ++*(_WORD *)(v33 + 8);
        v122 = v263 - v262 + 16;
        v205 = v122;
        if ( v122 >= 0x3F )
        {
          *(_QWORD *)(v33 + 16 * (v11 + 1)) = v122;
          *(_BYTE *)(v33 + 15) = 63;
        }
        else
        {
          *(_BYTE *)(v33 + 15) = v122;
        }
      }
LABEL_147:
      v200 = (void *)(v212 + 16);
      v96 = (unsigned __int16 *)(v212 + 8);
      v97 = 16LL * *(unsigned __int16 *)(v212 + 8);
      v219 = v97;
      if ( (*(_BYTE *)(v212 + 15) & 0x3F) == 0x3F )
      {
        v97 -= 8LL;
        v219 = v97;
      }
      if ( v53 )
      {
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v212 + 11) = *(_BYTE *)(v212 + 8) ^ *(_BYTE *)(v212 + 9) ^ *(_BYTE *)(v212 + 10);
          *(_DWORD *)v96 ^= *((_DWORD *)Src + 34);
        }
        if ( v195 )
        {
          if ( (*((_DWORD *)Src + 29) & 0x1000000) == 0 )
          {
            ++*((_DWORD *)Src + 152);
            v98 = *((_DWORD *)Src + 154);
            if ( *((_DWORD *)Src + 152) > v98 )
            {
              *((_DWORD *)Src + 152) = 0;
              v99 = *((_QWORD *)Src + 68) - 16LL * *((_QWORD *)Src + 24);
              if ( v99 > *((_QWORD *)Src + 80) )
                *((_QWORD *)Src + 80) = v99;
              *((_QWORD *)Src + 81) = v99;
            }
            if ( ++*((_DWORD *)Src + 155) >= 0x1000u )
            {
              if ( Src[386] == 2 && *((_DWORD *)Src + 156) > 0x10u )
                v137 = 4;
              else
                v137 = 8;
              if ( *((_DWORD *)Src + 153) > (unsigned int)(4096 >> v137) && v98 < 0x10000 )
                *((_DWORD *)Src + 154) = 2 * v98;
              *((_DWORD *)Src + 153) = 0;
              *((_DWORD *)Src + 155) = 0;
            }
          }
          RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
          v195 = 0;
        }
        if ( (a2 & 8) != 0 )
          memset(v200, 0, v97 - 8);
        goto LABEL_485;
      }
      if ( (a2 & 8) != 0 )
      {
        memset(v200, 0, v97 - 8);
      }
      else if ( (Src[112] & 0x40) != 0 )
      {
        v184 = v55 & 0xFFFFFFFFFFFFFFFCuLL;
        v185 = (char *)v200;
        v249 = v200;
        v186 = v184 >> 2;
        v220 = v186;
        if ( v186 )
        {
          if ( ((unsigned __int8)v200 & 4) == 0 )
            goto LABEL_468;
          *(_DWORD *)v200 = -1163005939;
          v220 = --v186;
          if ( v186 )
          {
            v185 += 4;
            v249 = v185;
LABEL_468:
            memset64(v185, 0xBAADF00DBAADF00DuLL, v186 >> 1);
            if ( (v186 & 1) != 0 )
              *(_DWORD *)&v185[4 * v186 - 4] = -1163005939;
          }
        }
      }
      if ( (Src[112] & 0x20) != 0 )
      {
        v187 = (char *)v200;
        *(_QWORD *)((char *)v200 + v262) = 0xABABABABABABABABuLL;
        *(_QWORD *)&v187[v262 + 8] = 0xABABABABABABABABuLL;
        *(_BYTE *)(v212 + 10) |= 4u;
      }
      v126 = v212;
      *(_BYTE *)(v212 + 11) = 0;
      if ( (*(_BYTE *)(v126 + 10) & 2) != 0 )
      {
        v127 = (_QWORD *)sub_1800774AC(v126);
        v245 = v127;
        *v127 = 0LL;
        v127[1] = 0LL;
        if ( (*((_DWORD *)Src + 28) & 0x8000000) != 0 )
          *(_WORD *)v127 = sub_18000F3C8(1u);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          *((_WORD *)v245 + 1) = sub_1800F0F1C((_DWORD)Src, (a2 >> 18) & 0xFFF, 0, *v96, 0);
      }
      else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        *(_BYTE *)(v126 + 11) = sub_1800F0F1C((_DWORD)Src, (unsigned __int8)(a2 >> 18), 0, *v96, 0);
      }
      if ( *((_DWORD *)Src + 31) )
      {
        *(_BYTE *)(v126 + 11) = *(_BYTE *)v96 ^ *((_BYTE *)v96 + 1) ^ *((_BYTE *)v96 + 2);
        *(_DWORD *)v96 ^= *((_DWORD *)Src + 34);
      }
      goto LABEL_485;
    }
  }
  v254 = Src + 336;
  for ( k = (__int64 *)*((_QWORD *)Src + 39); ; k = (__int64 *)*k )
  {
    v17 = *((unsigned int *)k + 2);
    if ( v11 < v17 )
    {
      v18 = v11;
      m = v11;
      goto LABEL_19;
    }
    if ( !*k )
      break;
  }
  v18 = v17 - 1;
  for ( m = (unsigned int)(v17 - 1); ; m = v18 )
  {
LABEL_19:
    v19 = v18 - *((_DWORD *)k + 6);
    v20 = 0LL;
    v21 = (char *)k[4];
    v22 = (char *)*((_QWORD *)v21 + 1);
    if ( v21 == v22 )
    {
      v20 = (char *)k[4];
    }
    else
    {
      v23 = (_DWORD)v22 - 16;
      v24 = *((_DWORD *)v22 - 2);
      v227 = v24;
      if ( *((_DWORD *)Src + 31) )
      {
        v227 = v24 ^ *((_DWORD *)Src + 34);
        if ( HIBYTE(v227) != ((unsigned __int8)v227 ^ (unsigned __int8)(BYTE1(v227) ^ BYTE2(v227))) )
          sub_1800A4DFC(3, (_DWORD)Src, v23, 0, 0LL, 0LL);
      }
      v256 = v11 - (unsigned __int16)v227;
      if ( v256 > 0 )
      {
        v20 = v21;
      }
      else
      {
        v25 = *(_QWORD *)v21 - 16LL;
        v26 = *(_DWORD *)(v25 + 8);
        v228 = v26;
        if ( *((_DWORD *)Src + 31) )
        {
          v228 = v26 ^ *((_DWORD *)Src + 34);
          if ( HIBYTE(v228) != ((unsigned __int8)v228 ^ (unsigned __int8)(BYTE1(v228) ^ BYTE2(v228))) )
            sub_1800A4DFC(3, (_DWORD)Src, v25, 0, 0LL, 0LL);
        }
        v244 = v11 - (unsigned __int16)v228;
        if ( v244 <= 0 )
        {
          v20 = *(char **)v21;
        }
        else if ( !*k && (_DWORD)m == *((_DWORD *)k + 2) - 1 )
        {
          if ( *((_DWORD *)k + 3) )
            v19 = (unsigned int)(2 * v19);
          for ( n = *(char **)(k[6] + 8 * v19); v21 != n; n = *(char **)n )
          {
            v102 = *((_DWORD *)n - 2);
            v229 = v102;
            if ( *((_DWORD *)Src + 31) )
            {
              v229 = v102 ^ *((_DWORD *)Src + 34);
              if ( HIBYTE(v229) != ((unsigned __int8)v229 ^ (unsigned __int8)(BYTE1(v229) ^ BYTE2(v229))) )
                sub_1800A4DFC(3, (_DWORD)Src, (_DWORD)n - 16, 0, 0LL, 0LL);
            }
            v250 = v11 - (unsigned __int16)v229;
            if ( v250 <= 0 )
            {
              v20 = n;
              break;
            }
          }
        }
        else
        {
          v27 = (unsigned int)v19 >> 5;
          v207 = (unsigned int)v19 >> 5;
          v28 = ((unsigned int)(*((_DWORD *)k + 2) - *((_DWORD *)k + 6)) >> 5) - 1;
          v29 = (unsigned int *)(k[5] + 4 * v27);
          v253 = v29;
          v30 = *v29 & ~((1 << (v19 & 0x1F)) - 1);
          while ( !v30 )
          {
            if ( (unsigned int)v27 > v28 )
              goto LABEL_193;
            v253 = ++v29;
            v30 = *v29;
            LODWORD(v27) = v27 + 1;
            v207 = v27;
          }
          if ( (_WORD)v30 )
          {
            if ( (_BYTE)v30 )
              v31 = (unsigned __int8)byte_180119B00[(unsigned __int8)v30];
            else
              v31 = (unsigned __int8)byte_180119B00[BYTE1(v30)] + 8;
          }
          else if ( (v30 & 0xFF0000) != 0 )
          {
            v31 = (unsigned __int8)byte_180119B00[BYTE2(v30)] + 16;
          }
          else
          {
            v31 = (unsigned __int8)byte_180119B00[(unsigned __int64)v30 >> 24] + 24;
          }
          v32 = (unsigned int)(v31 + 32 * v27);
          v207 = v32;
          if ( *((_DWORD *)k + 3) )
            v32 = (unsigned int)(2 * v32);
          v20 = *(char **)(k[6] + 8 * v32);
        }
      }
    }
    if ( v20 )
      break;
LABEL_193:
    k = (__int64 *)*k;
    v18 = *((_DWORD *)k + 6);
  }
  v247 = (unsigned __int64)v20;
  if ( v254 != v20 )
  {
    v33 = (unsigned __int64)(v20 - 16);
    v210 = v20 - 16;
    if ( *((_DWORD *)Src + 31) )
    {
      *(_DWORD *)(v33 + 8) ^= *((_DWORD *)Src + 34);
      if ( *(_BYTE *)(v33 + 11) != (*(_BYTE *)(v33 + 8) ^ (unsigned __int8)(*(_BYTE *)(v33 + 9) ^ *(_BYTE *)(v33 + 10))) )
        sub_1800FDA30(Src, v20 - 16);
    }
    v34 = *(unsigned __int16 *)(v33 + 8);
    if ( v34 >= v11 )
    {
      v35 = v20;
      v36 = *(_QWORD *)v20;
      v37 = *(__int64 **)(v33 + 24);
      v211 = (__int64)v37;
      v38 = *v37;
      v39 = *(_QWORD *)(v36 + 8);
      if ( *v37 != v39 || (char *)v38 != v20 )
      {
        sub_1800A4DFC(12, (_DWORD)Src, (_DWORD)v20, v39, v38, 0LL);
        goto LABEL_485;
      }
      *((_QWORD *)Src + 24) -= v34;
      v40 = (__int64 *)*((_QWORD *)Src + 39);
      if ( v40 )
      {
        v41 = *(unsigned __int16 *)(v33 + 8);
        while ( 1 )
        {
          v42 = *((unsigned int *)v40 + 2);
          if ( v41 < v42 )
            break;
          if ( !*v40 )
          {
            v41 = (unsigned int)(v42 - 1);
            break;
          }
          v40 = (__int64 *)*v40;
        }
        v255 = v41;
        v43 = *(unsigned __int16 *)(v33 + 8);
        v218 = *(unsigned __int16 *)(v33 + 8);
        v44 = v41 - *((_DWORD *)v40 + 6);
        if ( *((_DWORD *)v40 + 3) )
          v45 = 2 * v44;
        else
          v45 = v44;
        v218 = 8 * v45;
        v46 = (char **)(8 * v45 + v40[6]);
        v47 = *v46;
        --*((_DWORD *)v40 + 4);
        v48 = *((_DWORD *)v40 + 2);
        if ( (_DWORD)v41 == v48 - 1 )
          --*((_DWORD *)v40 + 5);
        if ( v47 == v35 )
        {
          v214 = v48;
          if ( !*v40 )
            v214 = --v48;
          if ( (unsigned int)v41 >= v48 )
          {
            if ( *(_QWORD *)v35 != v40[4] )
            {
              *v46 = *(char **)v35;
              goto LABEL_70;
            }
            *v46 = 0LL;
          }
          else
          {
            v49 = *(char **)v35;
            v217 = v49;
            if ( v49 != (char *)v40[4] )
            {
              v50 = *((_DWORD *)v49 - 2);
              v226 = v50;
              if ( *((_DWORD *)Src + 31) )
              {
                v226 = v50 ^ *((_DWORD *)Src + 34);
                if ( HIBYTE(v226) != ((unsigned __int8)v226 ^ (unsigned __int8)(BYTE1(v226) ^ BYTE2(v226))) )
                {
                  sub_1800A4DFC(3, (_DWORD)Src, (_DWORD)v49 - 16, 0, 0LL, 0LL);
                  v37 = (__int64 *)v211;
                }
                v49 = v217;
              }
              if ( !(v43 - (unsigned __int16)v226) )
              {
                *(_QWORD *)(v218 + v40[6]) = v49;
                v33 = (unsigned __int64)v210;
                goto LABEL_70;
              }
              v33 = (unsigned __int64)v210;
            }
            *(_QWORD *)(v218 + v40[6]) = 0LL;
          }
          *(_DWORD *)(v40[5] + 4LL * (v44 >> 5)) &= ~(1 << (v44 & 0x1F));
        }
      }
LABEL_70:
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
      v51 = (char *)(v33 + 10);
      if ( (*(_BYTE *)(v33 + 10) & 8) == 0 || sub_180021DA4((__int64)Src, v33) )
      {
        v203 = 1;
        goto LABEL_72;
      }
LABEL_398:
      sub_18001C798((unsigned __int64)Src, v33, *(unsigned __int16 *)(v33 + 8), 1);
      goto LABEL_485;
    }
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v33 + 11) = *(_BYTE *)(v33 + 8) ^ *(_BYTE *)(v33 + 9) ^ *(_BYTE *)(v33 + 10);
      *(_DWORD *)(v33 + 8) ^= *((_DWORD *)Src + 34);
    }
  }
  v112 = (_QWORD *)sub_18001BE98((__int64)Src, v263);
  v33 = (unsigned __int64)v112;
  v210 = (char *)v112;
  if ( !v112 )
  {
LABEL_287:
    v200 = 0LL;
    goto LABEL_485;
  }
  v114 = v112 + 2;
  v115 = v112[2];
  v116 = (__int64 *)v112[3];
  v117 = *v116;
  v118 = *(_QWORD *)(v115 + 8);
  if ( *v116 == v118 && (_QWORD *)v117 == v114 )
  {
    *((_QWORD *)Src + 24) -= *(unsigned __int16 *)(v33 + 8);
    v119 = (__int64 *)*((_QWORD *)Src + 39);
    if ( v119 )
    {
      v120 = *(unsigned __int16 *)(v33 + 8);
      while ( 1 )
      {
        v121 = *((unsigned int *)v119 + 2);
        if ( v120 < v121 )
          break;
        v113 = (__int64 *)*v119;
        if ( !*v119 )
        {
          v120 = (unsigned int)(v121 - 1);
          break;
        }
        v119 = (__int64 *)*v119;
      }
      v233 = v120;
      LOBYTE(v113) = 1;
      sub_18002F7E0((_DWORD)Src, (_DWORD)v119, (_DWORD)v113, (_DWORD)v114, v120, *(unsigned __int16 *)(v33 + 8));
    }
    *v116 = v115;
    *(_QWORD *)(v115 + 8) = v116;
    v51 = (char *)(v33 + 10);
    if ( (*(_BYTE *)(v33 + 10) & 8) == 0 || sub_180021DA4((__int64)Src, v33) )
    {
      v204 = 1;
      goto LABEL_72;
    }
    goto LABEL_398;
  }
  sub_1800A4DFC(12, (_DWORD)Src, (_DWORD)v114, v118, v117, 0LL);
LABEL_485:
  if ( v195 )
  {
    if ( !v197 && v200 )
      sub_18008BEF4(Src);
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  }
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v190 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
  else
    v190 = 2147353480LL;
  v191 = v200;
  if ( *(_BYTE *)v190 && v200 )
  {
    if ( v197 )
      sub_1800FDF88(Src, v197 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v197 + 40));
  }
  return (__int64)v191;
}
