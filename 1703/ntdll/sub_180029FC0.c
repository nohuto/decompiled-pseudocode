/*
 * XREFs of sub_180029FC0 @ 0x180029FC0
 * Callers:
 *     sub_180007F98 @ 0x180007F98 (sub_180007F98.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18002C840 @ 0x18002C840 (sub_18002C840.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180008F44 @ 0x180008F44 (sub_180008F44.c)
 *     sub_180009164 @ 0x180009164 (sub_180009164.c)
 *     sub_180009BD0 @ 0x180009BD0 (sub_180009BD0.c)
 *     sub_180009E2C @ 0x180009E2C (sub_180009E2C.c)
 *     sub_18000BFBC @ 0x18000BFBC (sub_18000BFBC.c)
 *     sub_18000C7C0 @ 0x18000C7C0 (sub_18000C7C0.c)
 *     sub_18001E250 @ 0x18001E250 (sub_18001E250.c)
 *     sub_18001E4DC @ 0x18001E4DC (sub_18001E4DC.c)
 *     sub_18001E760 @ 0x18001E760 (sub_18001E760.c)
 *     sub_18001EFB4 @ 0x18001EFB4 (sub_18001EFB4.c)
 *     sub_18001F6A8 @ 0x18001F6A8 (sub_18001F6A8.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_1800217D0 @ 0x1800217D0 (sub_1800217D0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180028C10 @ 0x180028C10 (sub_180028C10.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029050 @ 0x180029050 (sub_180029050.c)
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_1800662B0 @ 0x1800662B0 (sub_1800662B0.c)
 *     sub_1800774C8 @ 0x1800774C8 (sub_1800774C8.c)
 *     sub_180077520 @ 0x180077520 (sub_180077520.c)
 *     sub_180080558 @ 0x180080558 (sub_180080558.c)
 *     sub_18008AB60 @ 0x18008AB60 (sub_18008AB60.c)
 *     sub_180095A28 @ 0x180095A28 (sub_180095A28.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A8B30 (ZwWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlInterlockedPopEntrySList @ 0x1800A8D80 (RtlInterlockedPopEntrySList.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A9950 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F2264 @ 0x1800F2264 (sub_1800F2264.c)
 *     sub_1800FE3D0 @ 0x1800FE3D0 (sub_1800FE3D0.c)
 *     sub_1800FF7B0 @ 0x1800FF7B0 (sub_1800FF7B0.c)
 *     sub_180100D30 @ 0x180100D30 (sub_180100D30.c)
 */

unsigned __int64 __fastcall sub_180029FC0(__int64 a1, size_t a2, int a3, __int16 a4)
{
  size_t v5; // r15
  __int64 v6; // rbx
  int v7; // edx
  unsigned int v8; // esi
  unsigned __int64 v9; // r13
  int v10; // edi
  __int64 v11; // r13
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r9d
  unsigned __int64 v16; // r14
  _DWORD *HotpatchInformation; // rcx
  __int64 v18; // rcx
  int v20; // edi
  unsigned int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // edi
  int v26; // esi
  __int64 v27; // rax
  unsigned int v28; // edi
  int v29; // ecx
  int v30; // esi
  size_t v31; // rdi
  unsigned __int64 v32; // rax
  size_t v33; // rdx
  int v34; // ecx
  __int64 v35; // r11
  int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r14
  volatile signed __int64 *v40; // rdi
  char CurrentProcessorNumber; // al
  unsigned int v42; // ecx
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rsi
  volatile signed __int64 *v50; // r14
  signed __int64 v51; // rdi
  _QWORD *v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rsi
  unsigned int v55; // edx
  unsigned __int16 v56; // cx
  unsigned int v57; // eax
  unsigned __int64 v58; // rdi
  signed __int64 v59; // rax
  signed __int64 v60; // rdx
  __int64 v61; // r10
  unsigned __int64 v62; // r14
  unsigned int v63; // r11d
  unsigned int v64; // eax
  int v65; // eax
  unsigned int v66; // r9d
  bool v67; // cf
  struct _TEB *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned int v71; // r8d
  volatile signed __int64 *v72; // rdi
  unsigned __int64 v73; // rcx
  signed __int64 v74; // r10
  __int64 v75; // rax
  unsigned __int64 v76; // rcx
  bool v77; // zf
  signed __int64 v78; // rax
  unsigned int v79; // r9d
  unsigned __int16 v80; // r11
  int v81; // eax
  __int64 v82; // rdi
  int v83; // r8d
  unsigned int v84; // r8d
  char v85; // cl
  unsigned __int16 v86; // di
  __int64 v87; // rdx
  __int64 v88; // r10
  signed __int16 *v89; // r14
  signed __int16 *v90; // rdx
  unsigned __int64 v91; // r12
  __int64 v92; // rdi
  unsigned int v93; // r15d
  signed __int16 v94; // ax
  signed __int16 v95; // tt
  unsigned int v96; // ecx
  __int64 v97; // rdi
  int v98; // r9d
  unsigned __int64 v99; // rcx
  __int64 v100; // rsi
  void *v101; // rax
  unsigned int v102; // r8d
  unsigned __int64 v103; // rdx
  unsigned __int64 v104; // rdi
  unsigned __int64 v105; // rdi
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // r8
  unsigned __int64 v108; // rcx
  int v109; // esi
  _DWORD *v110; // rcx
  __int64 v111; // rcx
  unsigned __int64 v112; // rdx
  __int64 *v113; // rcx
  unsigned __int64 v114; // rdx
  unsigned __int64 v115; // rdi
  __int64 v116; // rax
  signed __int64 v117; // rax
  __int64 v118; // rdx
  signed __int64 v119; // rcx
  signed __int64 v120; // rdx
  signed __int64 v121; // rtt
  __int64 *v122; // rax
  int v123; // eax
  __int64 v124; // r10
  unsigned int v125; // r9d
  int v126; // r11d
  unsigned int v127; // r14d
  volatile signed __int64 *v128; // rcx
  unsigned __int64 v129; // rdx
  int v130; // r8d
  unsigned int v131; // ecx
  int v132; // eax
  unsigned __int64 v133; // rax
  __int64 v134; // r14
  __int64 v135; // rcx
  int v136; // eax
  volatile signed __int64 *v137; // rdx
  int v138; // eax
  int v139; // ecx
  unsigned __int64 v140; // rdx
  __int64 v141; // rcx
  volatile signed __int64 *v142; // rcx
  signed __int64 v143; // rax
  volatile signed __int64 *v144; // r9
  __int64 **v145; // rdi
  unsigned int v146; // r8d
  unsigned int v147; // ecx
  unsigned int v148; // edi
  bool v149; // dl
  char v150; // cl
  char v151; // dl
  char v152; // cl
  int v153; // edx
  unsigned int v154; // edi
  unsigned int v155; // r8d
  __int64 *v156; // rdx
  union _SLIST_HEADER *v157; // rcx
  _BYTE *v158; // rdi
  unsigned int v159; // edx
  char v160; // al
  unsigned int v161; // r9d
  unsigned int v162; // r8d
  unsigned int v163; // ecx
  unsigned int v164; // edi
  unsigned int v165; // ecx
  unsigned int v166; // r8d
  int v167; // esi
  unsigned int v168; // edi
  _WORD *v169; // r8
  unsigned __int64 v170; // rdx
  signed __int32 v171; // eax
  __int64 v172; // rcx
  _WORD *v173; // rcx
  _WORD *v174; // rdi
  _WORD *v175; // rdx
  unsigned __int64 v176; // rcx
  char *v177; // rsi
  unsigned int HeapVirtualAffinity_high; // esi
  unsigned __int64 v179; // rdi
  __int64 v180; // rdi
  __int64 *v181; // r8
  int v182; // ecx
  __int64 v183; // rcx
  _QWORD *v184; // rdx
  __int64 **v185; // rax
  __int64 **v186; // rcx
  __int64 v187; // r10
  __int64 v188; // r9
  signed __int64 v189; // rax
  unsigned __int64 v190; // rcx
  volatile signed __int64 *v191; // rcx
  signed __int64 v192; // rax
  __int64 v193; // rdx
  signed __int64 v194; // rdi
  signed __int64 v195; // rdx
  signed __int64 v196; // rtt
  char v197; // cl
  __int64 (__fastcall *v198)(__int64, __int64, unsigned int); // rax
  __int64 v199; // r14
  __int64 v200; // rdx
  __int64 v201; // r8
  __int64 v202; // rcx
  int v203; // eax
  unsigned __int64 v204; // rax
  _WORD *v205; // rdx
  unsigned __int64 v206; // rdi
  int v207; // edi
  volatile signed __int64 *v208; // rcx
  signed __int64 v209; // rax
  __int64 v210; // rcx
  __int64 (__fastcall *v211)(__int64, __int64, unsigned int); // rax
  int v212; // eax
  __int64 v213; // rcx
  __int64 (__fastcall *v214)(__int64, unsigned int, __int64, char); // rax
  void *v215; // rax
  signed __int64 v216; // rcx
  signed __int64 v217; // rcx
  signed __int64 v218; // rax
  __int64 v219; // r8
  __int64 v220; // rax
  signed __int64 v221; // rcx
  signed __int64 v222; // rax
  __int64 v223; // rdx
  signed __int64 v224; // r8
  signed __int64 v225; // rdx
  signed __int64 v226; // rtt
  __int64 v227; // rcx
  __int64 *v228; // r9
  unsigned __int64 v229; // rax
  unsigned __int64 v230; // rax
  __int64 v231; // r9
  int v232; // r10d
  bool v233; // cl
  char *v234; // rdx
  signed __int64 v235; // rax
  __int64 v236; // rdx
  signed __int64 v237; // r8
  signed __int64 v238; // rdx
  signed __int64 v239; // rtt
  int i; // ecx
  struct _TEB *v241; // rdi
  _QWORD *v242; // rax
  __int64 k; // rcx
  size_t v244; // rcx
  _BYTE *v245; // rdx
  __int64 *v246; // rdi
  __int64 **v247; // rcx
  __int64 v248; // rcx
  __int64 v249; // rdx
  int v250; // r8d
  int v251; // eax
  struct _TEB *v252; // rdi
  __int64 v253; // rax
  _BYTE *v254; // rdx
  unsigned __int64 v255; // rcx
  signed __int32 v256[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int64 v257; // [rsp+20h] [rbp-E0h]
  int v258; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v259; // [rsp+38h] [rbp-C8h]
  unsigned int v260; // [rsp+40h] [rbp-C0h]
  void *v261; // [rsp+48h] [rbp-B8h]
  unsigned int v262; // [rsp+50h] [rbp-B0h]
  int v263; // [rsp+54h] [rbp-ACh]
  volatile signed __int64 *v264; // [rsp+58h] [rbp-A8h]
  int v265; // [rsp+60h] [rbp-A0h]
  unsigned int v266; // [rsp+64h] [rbp-9Ch]
  unsigned int v267; // [rsp+68h] [rbp-98h]
  int v268; // [rsp+6Ch] [rbp-94h]
  __int64 j; // [rsp+70h] [rbp-90h]
  unsigned int v270; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v271; // [rsp+80h] [rbp-80h]
  size_t Size; // [rsp+88h] [rbp-78h]
  unsigned int v273; // [rsp+90h] [rbp-70h] BYREF
  size_t v274; // [rsp+98h] [rbp-68h]
  __int64 v275; // [rsp+A0h] [rbp-60h]
  int v276; // [rsp+A8h] [rbp-58h] BYREF
  int v277; // [rsp+ACh] [rbp-54h]
  __int64 v278; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v279; // [rsp+B8h] [rbp-48h] BYREF
  int v280; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v281; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 *v282; // [rsp+D8h] [rbp-28h]
  __int64 v283; // [rsp+E0h] [rbp-20h]
  HANDLE UniqueThread; // [rsp+E8h] [rbp-18h]
  int v285; // [rsp+F0h] [rbp-10h]
  signed __int32 v286[23]; // [rsp+F4h] [rbp-Ch] BYREF
  int v288; // [rsp+160h] [rbp+60h]
  int v289; // [rsp+160h] [rbp+60h]
  int v290; // [rsp+160h] [rbp+60h]

  v5 = a2;
  v6 = a1;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v7 = *(_DWORD *)(a1 + 116);
    v8 = v7 | a3;
    v270 = 0;
    v279 = 0LL;
    v9 = 0LL;
    if ( v5 > 0x7FFFFFFFFFFFFFFFLL )
    {
      v270 = 5;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 144);
      v288 = v10;
      if ( !v10 )
      {
LABEL_4:
        if ( v5 )
          v11 = v5;
        else
          v11 = 1LL;
        v9 = (v11 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
        v12 = v9 >> 4;
        if ( (v8 & 0x7D810F61) != 0 )
          goto LABEL_157;
        if ( v5 <= qword_180158678 && ((unsigned __int8)(1 << ((v9 >> 4) & 7)) & *(_BYTE *)((v9 >> 7) + v6 + 402)) != 0 )
        {
          v13 = *(_QWORD *)(v6 + 392);
          v14 = *(_QWORD *)(v6 + 376);
          v270 = 2;
          v16 = sub_18002BA00(v14, *(unsigned __int16 *)(v13 + 2 * v12), v5, v8);
          if ( v16 )
          {
LABEL_10:
            if ( !v288 )
              goto LABEL_11;
            v5 -= v279;
            v253 = sub_18008AB60(v6, v8, v16, v15, v279, v288);
            v257 = v16;
            v16 = v253;
            if ( (int)sub_180095A28(v288, v6, v253, 2, v257) >= 0 )
              goto LABEL_11;
            RtlFreeHeap(v6, 0, v16);
            goto LABEL_401;
          }
        }
        v113 = *(__int64 **)(v6 + 312);
        if ( v12 >= *((unsigned int *)v113 + 2) )
        {
          while ( 1 )
          {
            v122 = (__int64 *)*v113;
            if ( !*v113 )
              break;
            v113 = (__int64 *)*v113;
            if ( v12 < *((unsigned int *)v122 + 2) )
              goto LABEL_152;
          }
          v12 = (unsigned int)(*((_DWORD *)v113 + 2) - 1);
        }
LABEL_152:
        v114 = (unsigned int)(*((_DWORD *)v113 + 2) - 1);
        if ( v12 < v114 || *v113 && v12 == v114 )
        {
          v115 = v12 - *((unsigned int *)v113 + 6);
          if ( *((_DWORD *)v113 + 3) )
            v115 *= 2LL;
          v116 = v113[6] + 8 * v115;
        }
        else
        {
LABEL_157:
          v116 = 0LL;
        }
        v16 = sub_18002CC00((void *)v6, v116, (__int64)&v270);
        if ( !v16 )
        {
LABEL_402:
          NtCurrentTeb()->LastStatusValue = -1073741801;
          v241 = NtCurrentTeb();
          v241->LastErrorValue = RtlNtStatusToDosError(-1073741801);
          if ( (v8 & 4) != 0 )
          {
            if ( !v9 )
              v9 = v5;
            sub_1800F2264(v9);
          }
LABEL_11:
          HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
          if ( HotpatchInformation && *HotpatchInformation )
            v18 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
          else
            v18 = 2147353472LL;
          if ( *(_BYTE *)v18
            && (NtCurrentPeb()->TracingFlags & 1) != 0
            && (*(_DWORD *)(v6 + 116) & 0x1000000) == 0
            && ((v8 & 0x61000000) == 0 || (v8 & 0x10000000) != 0)
            && v270 != 5 )
          {
            if ( !v16 )
              goto LABEL_512;
            v254 = (_BYTE *)(v16 - 16);
            _m_prefetchw((const void *)(v16 - 16));
            v255 = v16 - 16;
            if ( *(_BYTE *)(v16 - 16 + 15) == 5 )
              v255 -= 16LL * (unsigned __int8)v254[14];
            if ( *(char *)(v255 + 15) < 0 )
              goto LABEL_512;
            _m_prefetchw(v254);
            if ( v254[15] == 5 )
              v254 -= 16 * (unsigned __int8)v254[14];
            if ( ((v254[10] ^ (unsigned __int8)(*(_BYTE *)(v6 + 138) & (*(_DWORD *)(v6 + 124) >> 17))) & 8) == 0 )
LABEL_512:
              sub_1800FF7B0(v6, v16, v5, v270);
          }
          if ( (dword_18015C2A8 & 1) != 0
            && (dword_18015C2A8 & 2) != 0
            && v6 != *(_QWORD *)&qword_18015BFE0
            && NtCurrentPeb()->ProcessHeap
            && v16
            && (v8 & 0x10000000) == 0 )
          {
            goto LABEL_518;
          }
          return v16;
        }
        goto LABEL_10;
      }
      if ( (v8 & 0x3C000102) != 0 || (v7 & 0x1000000) != 0 )
      {
        v288 = 0;
        goto LABEL_4;
      }
      if ( (int)sub_180095A28(v10, a1, 0, 1, (__int64)&v279) >= 0 )
      {
        v279 = ((v279 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
        v5 += v279;
        goto LABEL_4;
      }
    }
LABEL_401:
    v16 = 0LL;
    goto LABEL_402;
  }
  v20 = a3 & 1 | 2;
  if ( (a3 & 8) == 0 )
    v20 = a3 & 1;
  v21 = v20 | 0x80000000;
  if ( (a3 & 4) == 0 )
    v21 = v20;
  v22 = v21 | 0x100;
  if ( (a3 & 0x100) == 0 )
    v22 = v21;
  v23 = a3 & 0xE00 | v22;
  if ( (a3 & 0xE00) == 0 )
    v23 = v22;
  if ( (a3 & 0x10) != 0 )
    v23 |= 0x2000000u;
  if ( (a3 & 2) != 0 )
    v23 |= 0x1000000u;
  v24 = *(_DWORD *)(v6 + 40);
  v25 = 0;
  if ( v24 )
    LOBYTE(v25) = v24 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v26 = v23 | 1;
  if ( !v25 )
    v26 = v23;
  v265 = v26;
  if ( (dword_180158684 & 2) != 0 )
  {
    v244 = v5;
    if ( v5 + 16 >= v5 )
      v244 = v5 + 16;
    Size = v244;
  }
  else
  {
    Size = v5;
  }
  v27 = 0LL;
  v28 = (v26 | *(_DWORD *)(v6 + 20)) & 0x93000F0B;
  v273 = 0;
  v277 = 0;
  if ( (v28 & 0x1000000) == 0 )
  {
    v29 = *(_DWORD *)(v6 + 32);
    v277 = v29;
    if ( v29 )
    {
      v28 |= 8u;
      if ( (int)sub_180095A28(v29, v6, 0, 1, (__int64)&v273) < 0 )
      {
        v16 = 0LL;
        v33 = 0LL;
        v102 = 0;
        goto LABEL_124;
      }
      v27 = v273;
    }
  }
  v30 = v28 | 8;
  if ( !a4 )
    v30 = v28;
  v31 = Size;
  v32 = Size + v27;
  v268 = v30;
  if ( (v30 & 0x10000000) != 0 )
    v32 += 16LL;
  if ( (v30 & 0x20000F08) != 0 )
    v32 = ((v32 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v33 = 1LL;
  if ( v32 )
    v33 = v32;
  v274 = v33;
  if ( v33 < Size || Size > 0x7FFFFFFFFFFFFFFFLL )
  {
    v16 = 0LL;
    v102 = 0;
    goto LABEL_123;
  }
  v278 = 3LL;
  v34 = v30 & 0x13000003;
  v258 = v30 & 0x13000003;
  if ( v33 > 0x3FF0 )
    goto LABEL_171;
  v35 = v6 + 288;
  v36 = v33;
  if ( (_DWORD)Size != (_DWORD)v33 )
    v36 = v33 + 2;
  v37 = (unsigned __int64)(unsigned int)(v36 + 15) >> 4;
  v38 = (__int64)byte_1801196F0;
  v39 = v35 + 8LL * (unsigned __int8)byte_1801196F0[v37];
  if ( (*(_QWORD *)(v39 + 192) & 1) != 0 )
  {
    v187 = (unsigned __int8)byte_1801196F0[v37];
    v188 = v187;
    j = v187;
    if ( (*(_QWORD *)(v35 + 8 * v187 + 192) & 1) != 0 )
    {
      v38 = 65280LL;
      do
      {
        v189 = *(_QWORD *)(v35 + 8 * v187 + 192);
        v264 = (volatile signed __int64 *)v189;
        v190 = v189;
        if ( (v189 & 1) == 0 )
          break;
        v38 = 65280LL;
        if ( (BYTE2(v189) & 0x1Fu) > 0x10 )
          break;
        if ( WORD1(v189) > 0xFF00u )
          break;
        WORD1(v264) = WORD1(v189) + 33;
        v190 = (unsigned __int64)v264;
      }
      while ( v189 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v35 + 8 * v187 + 192),
                        (signed __int64)v264,
                        v189) );
      v37 = v190 >> 16;
      if ( (v37 & 0x1F) > 0x10 || (unsigned __int16)v37 > 0xFF00u )
      {
        sub_18000C7C0(v6 + 288, v187);
        v188 = j;
        v35 = v6 + 288;
      }
    }
    if ( (*(_QWORD *)(v35 + 8 * v188 + 192) & 1) != 0 )
    {
      v34 = v258;
      v16 = -1LL;
      goto LABEL_97;
    }
  }
  v40 = *(volatile signed __int64 **)(v39 + 192);
  v264 = v40;
  CurrentProcessorNumber = RtlGetCurrentProcessorNumber(v37, v38);
  v42 = *(unsigned __int8 *)(v6 + 344);
  v43 = CurrentProcessorNumber & 0x3F;
  if ( v43 >= v42 )
  {
    if ( v43 == v42 || (_BYTE)v42 == 1 )
      v43 = 0;
    else
      v43 = *(unsigned __int8 *)(v43 - v42 - 1 + *(_QWORD *)(v6 + 352));
  }
  v44 = v43;
  v45 = *((_QWORD *)v40 + 12);
  v267 = 0;
  v261 = 0LL;
  v276 = 0;
  v46 = *(unsigned __int8 *)(v45 + v44);
  v47 = 1;
  v48 = *((_QWORD *)v40 + 13);
  LODWORD(v259) = 1;
  v49 = *(_QWORD *)(v48 + 8 * v46);
  v271 = v49;
  v50 = (volatile signed __int64 *)(v49 + 16);
  v51 = _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 16), 17LL, 0LL);
  if ( v51 )
  {
    while ( 1 )
    {
      if ( (v51 & 1) != 0 && ((j = v51 & 2, (v51 & 2) != 0) || (v51 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( sub_18000BFBC() )
        {
          ZwTerminateProcess(v231, 3221225547LL);
          LODWORD(v231) = -1;
          v232 = -1;
        }
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v233 = 0;
        v286[0] = 2;
        v283 = 0LL;
        if ( j )
        {
          v282 = 0LL;
          v285 = v231;
          v281 = v51 & 0xFFFFFFFFFFFFFFF0uLL;
          v234 = (char *)((unsigned __int64)&v281 | v51 & 8 | 7);
          v233 = (v51 & 4) == 0;
        }
        else
        {
          v285 = -2;
          v282 = &v281;
          v234 = (char *)&v281 + 3;
        }
        v235 = _InterlockedCompareExchange64(v50, (signed __int64)v234, v51);
        v77 = v51 == v235;
        v51 = v235;
        if ( !v77 )
          goto LABEL_375;
        if ( v233 )
        {
          sub_1800774C8(v49 + 16);
          v232 = -1;
        }
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( i = dword_180159D60; i; i += v232 )
          {
            if ( (v286[0] & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        v67 = _interlockedbittestandreset(v286, 1u);
        if ( v67 )
        {
          do
            ZwWaitForAlertByThreadId(v49 + 16, 0LL);
          while ( (v286[0] & 4) == 0 );
        }
      }
      else
      {
        v216 = v51 | 1;
        if ( (v51 & 2) == 0 )
          v216 += 16LL;
        v275 = _InterlockedCompareExchange64(v50, v216, v51);
        if ( v51 == v275 )
        {
          v47 = 1;
          break;
        }
LABEL_375:
        sub_1800662B0(&v276);
        v51 = *v50;
        _m_prefetchw((const void *)v50);
      }
    }
  }
  v52 = (_QWORD *)(v49 + 8);
  for ( j = v49 + 8; ; v52 = (_QWORD *)j )
  {
    while ( !*v52 )
    {
      if ( v47 == 2 )
        RtlReleaseSRWLockExclusive(v50);
      else
        RtlReleaseSRWLockShared(v50);
      v144 = v264;
      v145 = (__int64 **)(v264 + 3);
      if ( *v145 != (__int64 *)v145 )
      {
        RtlAcquireSRWLockExclusive(v264 + 2);
        if ( *v145 == (__int64 *)v145 )
          v261 = 0LL;
        else
          v261 = sub_1800217D0((__int64)v264, *v145, 2);
        RtlReleaseSRWLockExclusive(v264 + 2);
        if ( v261 )
          goto LABEL_257;
        v144 = v264;
      }
      v146 = (unsigned __int16)word_1801194D0[*((unsigned __int8 *)v144 + 1)];
      v147 = *((unsigned __int8 *)v144 + 2);
      v260 = v146;
      v148 = (*((_DWORD *)v144 + 14) >> 3) / v147;
      if ( v148 == 0xFFFFFFFFLL )
        v148 = -1;
      v149 = v147 > 1;
      v150 = (v147 > 1) - 1;
      if ( (unsigned __int16)v146 >= 0x100u )
        v150 = v149;
      v151 = v150;
      v152 = v150 - 1;
      if ( !*((_QWORD *)v144 + 8) )
        v152 = v151;
      if ( v148 < 1 << (3 - v152) )
        v148 = 1 << (3 - v152);
      if ( v148 < 4 )
      {
        v148 = 4;
      }
      else if ( v148 > 0x400 )
      {
        v148 = 1024;
      }
      v153 = v146 * v148 + ((8 * (((unsigned __int64)(2 * v148) + 63) >> 6) + 63) & 0xFFFFFFF0);
      v154 = 7;
      v155 = v153 + 2 * ((unsigned int)(v153 + 4095) >> 12);
      if ( v155 > 0xF0000 )
      {
        v155 = 983040;
      }
      else if ( v155 < 0x80 )
      {
        goto LABEL_222;
      }
      do
        ++v154;
      while ( v155 >> v154 );
      if ( v154 > 0x12 )
        v154 = 18;
LABEL_222:
      if ( v154 <= 0xC )
        v154 = 12;
      LODWORD(v259) = 1 << v154;
      v262 = v258 & 1;
      if ( (v258 & 1) == 0 )
        RtlAcquireSRWLockShared((volatile signed __int64 *)(v6 + 336));
      v156 = (__int64 *)(v6 + 288);
      v157 = (union _SLIST_HEADER *)(v6 + 288 + 16 * (v154 - 12 + 5LL));
      if ( !LOWORD(v157->Alignment)
        || (v261 = RtlInterlockedPopEntrySList(v157), v158 = v261, v156 = (__int64 *)(v6 + 288), !v261) )
      {
        v261 = 0LL;
        v158 = 0LL;
      }
      if ( v158 )
      {
        v159 = 1 << v158[44];
      }
      else
      {
        v213 = *v156;
        v214 = (__int64 (__fastcall *)(__int64, unsigned int, __int64, char))(qword_18015BFA8 ^ (unsigned __int64)v156 ^ v156[1]);
        if ( v214 == sub_18001E760 )
          v215 = (void *)sub_18001E760(v213, v259, 0LL, v258);
        else
          v215 = (void *)v214(v213, v259, 0LL, v258);
        v261 = v215;
        v158 = v215;
        if ( !v215 )
        {
          v101 = 0LL;
          v261 = 0LL;
          goto LABEL_253;
        }
        v159 = 0;
      }
      v160 = dword_180158684;
      v161 = v260;
      if ( (dword_180158684 & 4) != 0 )
      {
        v162 = v259;
      }
      else
      {
        v162 = 2 * v260;
        if ( ((v162 - 1) & v162) != 0 )
        {
          _BitScanReverse(&v163, v162);
          v286[3] = v163 + 1;
          v162 = 1 << (v163 + 1);
        }
        if ( v162 <= 0x1000 )
          v162 = 4096;
        if ( v162 >= (unsigned int)v259 )
          v162 = v259;
      }
      if ( v159 >= v162 )
        goto LABEL_238;
      v210 = *(_QWORD *)(v6 + 288);
      v211 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))(qword_18015BFA8 ^ (v6 + 288) ^ *(_QWORD *)(v6 + 312));
      if ( v211 == sub_180020D20 )
        v212 = sub_180020D20(v210, (__int64)v158, v162);
      else
        v212 = ((__int64 (__fastcall *)(__int64, _BYTE *))v211)(v210, v158);
      if ( v212 >= 0 )
      {
        v160 = dword_180158684;
        v161 = v260;
LABEL_238:
        if ( (v160 & 4) != 0 )
        {
          v166 = v259;
          v164 = v259;
        }
        else
        {
          v164 = 2 * v161;
          if ( ((2 * v161 - 1) & (2 * v161)) != 0 )
          {
            _BitScanReverse(&v165, v164);
            v286[4] = v165 + 1;
            v164 = 1 << (v165 + 1);
          }
          v166 = v259;
          if ( v164 <= 0x1000 )
            v164 = 4096;
          if ( v164 >= (unsigned int)v259 )
            v164 = v259;
        }
        v266 = v164;
        v167 = v166 / v164;
        v168 = (v166
              - ((2
                * (v167
                 + 4
                 * (unsigned int)(((unsigned __int64)(2 * ((8 * (v166 - 2 * v167) - 384) / (8 * v161 + 1))) + 63) >> 6))
                + 63) & 0xFFFFFFF0))
             / v161;
        memset(v261, 0, 0x30uLL);
        v169 = v261;
        v259 = 2 * v168;
        v170 = (v259 + 63) >> 6;
        *((_WORD *)v261 + 16) = v168;
        v169[17] = v168;
        *((_QWORD *)v169 + 3) = 0LL;
        *((_BYTE *)v169 + 38) = 2;
        HIWORD(v263) = (2 * (v167 + 4 * v170) + 63) & 0xFFF0;
        LOWORD(v263) = v260;
        *((_DWORD *)v169 + 10) = qword_18015BFE8 ^ v263 ^ ((unsigned int)v169 >> 12);
        _BitScanForward((unsigned int *)&v171, v266);
        v172 = (unsigned __int16)(8 * (v170 + 6));
        v169[23] = v172;
        v173 = (_WORD *)((char *)v169 + v172);
        *((_BYTE *)v169 + 44) = v171;
        v286[5] = v171;
        v174 = v173 + 1;
        *((_BYTE *)v169 + 45) = v167;
        *v173 = 0;
        v175 = &v173[(unsigned __int8)v167];
        v176 = (2 * (unsigned __int64)(unsigned __int8)v167 - 2 + 1) >> 1;
        if ( v174 > v175 )
          v176 = 0LL;
        if ( v176 )
        {
          while ( v176 )
          {
            *v174++ = -1;
            --v176;
          }
        }
        v177 = (char *)(v169 + 24);
        memset(v169 + 24, 0, (v259 + 7) >> 3);
        if ( (v259 & 0x3F) != 0 )
          *(_QWORD *)&v177[8 * (v259 >> 6)] |= ~((1LL << (v259 & 0x3F)) - 1);
        HeapVirtualAffinity_high = HIWORD(NtCurrentTeb()->HeapVirtualAffinity);
        v179 = (unsigned __int64)(unsigned int)sub_180028C10() << 32;
        qword_180159900[(unsigned __int64)HeapVirtualAffinity_high >> 3] = (v179 | (unsigned int)sub_180028C10()) & 0x7F7F7F7F7F7F7F7FLL;
        _InterlockedIncrement64(v264 + 8);
        _InterlockedExchangeAdd64(v264 + 7, *((unsigned __int16 *)v261 + 17));
        v49 = v271;
        v101 = v261;
LABEL_253:
        v180 = v6 + 288;
        goto LABEL_254;
      }
      v261 = 0LL;
      v245 = v158;
      v180 = v6 + 288;
      ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD))(qword_18015BFA8 ^ (v6 + 288) ^ *(_QWORD *)(v6 + 304)))(
        *(_QWORD *)(v6 + 288),
        v245,
        (unsigned int)v258);
      v101 = 0LL;
LABEL_254:
      if ( !v262 )
      {
        RtlReleaseSRWLockShared((volatile signed __int64 *)(v180 + 48));
        v101 = v261;
      }
      if ( !v101 )
      {
        v31 = Size;
        v100 = v6 + 288;
        v16 = 0LL;
        goto LABEL_90;
      }
LABEL_257:
      LODWORD(v259) = 2;
      RtlAcquireSRWLockExclusive(v50);
      v181 = (__int64 *)v261;
      if ( *((_WORD *)v261 + 16) == *((_WORD *)v261 + 17) )
      {
        *((_QWORD *)v261 + 2) = v49;
      }
      else
      {
        v229 = _InterlockedExchange64((volatile __int64 *)v261 + 2, v49);
        if ( (v229 & 1) != 0 )
          _InterlockedExchangeAdd((volatile signed __int32 *)v261 + 8, v229 >> 1);
      }
      v52 = (_QWORD *)(v49 + 8);
      if ( *(_QWORD *)(v49 + 8) && *((_WORD *)v181 + 16) == *((_WORD *)v181 + 17) )
      {
LABEL_384:
        v181[2] = 0LL;
        goto LABEL_272;
      }
      v182 = *((unsigned __int8 *)v181 + 38);
      if ( v182 == 2 )
      {
        v183 = 0LL;
LABEL_262:
        v184 = 0LL;
        goto LABEL_263;
      }
      if ( *((_BYTE *)v181 + 38) )
      {
        if ( v182 != 1 )
          goto LABEL_272;
        v183 = v49 + 40;
        goto LABEL_262;
      }
      v183 = v49 + 24;
      v184 = (_QWORD *)(v49 + 8);
LABEL_263:
      v185 = (__int64 **)(v49 + 24);
      if ( v183 )
      {
        v246 = (__int64 *)*v181;
        v247 = (__int64 **)v181[1];
        if ( *(__int64 **)(*v181 + 8) != v181 || *v247 != v181 )
          __fastfail(3u);
        *v247 = v246;
        v246[1] = (__int64)v247;
        v52 = (_QWORD *)(v49 + 8);
        if ( v184 )
          --*v184;
      }
      *((_BYTE *)v181 + 38) = 0;
      if ( v49 != -24 )
      {
        v186 = *(__int64 ***)(v49 + 32);
        if ( *v186 != (__int64 *)v185 )
          __fastfail(3u);
        *v181 = (__int64)v185;
        v181[1] = (__int64)v186;
        *v186 = v181;
        *(_QWORD *)(v49 + 32) = v181;
        if ( v52 )
          ++*v52;
        v181 = 0LL;
      }
      if ( (*(_BYTE *)v49 & 1) == 0 && *v52 > 8uLL )
      {
        v181 = *v185;
        v248 = **v185;
        if ( (__int64 **)(*v185)[1] != v185 || *(__int64 **)(v248 + 8) != v181 )
          __fastfail(3u);
        *v185 = (__int64 *)v248;
        *(_QWORD *)(v248 + 8) = v185;
        --*v52;
        *((_BYTE *)v181 + 38) = 2;
      }
      if ( v181 && *((_BYTE *)v181 + 38) == 2 )
        goto LABEL_384;
LABEL_272:
      v261 = v181;
      v47 = v259;
    }
    v53 = v49 + 24;
    v54 = *(_QWORD *)(v49 + 24);
    if ( v54 != v53 )
    {
      while ( 2 )
      {
        LOWORD(v55) = *(_WORD *)(v54 + 32);
        v267 = 0;
        while ( (_WORD)v55 != 1 || v47 != 1 )
        {
          v56 = v55 - 1;
          v55 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v54 + 32), v55 - 1, v55);
          v57 = v56 + 1;
          if ( v55 == v57 )
          {
            v58 = v271;
            if ( !*(_WORD *)(v54 + 32) )
              sub_1800217D0(v271, (__int64 *)v54, 1);
            goto LABEL_60;
          }
          v47 = v259;
          if ( v55 < v57 )
            v267 = 1;
        }
        v54 = *(_QWORD *)v54;
        if ( v54 != v53 )
          continue;
        break;
      }
    }
    v58 = v271;
    v54 = 0LL;
LABEL_60:
    if ( (_DWORD)v259 == 2 )
    {
      v117 = _InterlockedCompareExchange64(v50, 0LL, 1LL);
      if ( v117 != 1 )
      {
        do
        {
          v118 = 3LL;
          v119 = v117 & 6;
          if ( v119 != 2 )
            v118 = -1LL;
          v120 = v117 + v118;
          v121 = v117;
          v117 = _InterlockedCompareExchange64(v50, v120, v117);
        }
        while ( v121 != v117 );
        if ( v119 == 2 )
          goto LABEL_166;
      }
    }
    else
    {
      v59 = _InterlockedCompareExchange64(v50, 0LL, 17LL);
      v60 = v59;
      if ( v59 == 17 )
        goto LABEL_62;
      if ( (v59 & 1) == 0 )
        RtlRaiseStatus(-1073741212);
      if ( (v59 & 2) != 0 )
      {
LABEL_333:
        if ( (v60 & 8) != 0 )
        {
          v242 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0uLL);
          for ( k = *(_QWORD *)((v60 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !k; k = v242[1] )
            v242 = (_QWORD *)*v242;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(k + 32), 0xFFFFFFFF) > 1 )
            goto LABEL_62;
          v219 = -9LL;
        }
        else
        {
          v219 = -1LL;
        }
        while ( 1 )
        {
          v220 = (v60 & 6) == 2 ? v219 + 4 : v219;
          v221 = v220 + v60;
          v222 = _InterlockedCompareExchange64(v50, v220 + v60, v60);
          if ( v60 == v222 )
            break;
          v60 = v222;
        }
        if ( (v60 & 6) == 2 )
        {
          v120 = v221;
LABEL_166:
          sub_180077520(v50, v120, 0LL);
        }
      }
      else
      {
        while ( 1 )
        {
          v217 = v60 - 16;
          if ( (v60 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
            v217 = 0LL;
          v218 = _InterlockedCompareExchange64(v50, v217, v60);
          v77 = v60 == v218;
          v60 = v218;
          if ( v77 )
            break;
          if ( (v218 & 2) != 0 )
            goto LABEL_333;
        }
      }
    }
LABEL_62:
    if ( v54 )
      break;
    LODWORD(v259) = 2;
    RtlAcquireSRWLockExclusive(v50);
    v49 = v271;
    v47 = 2;
  }
  v61 = v54 + 48;
  v62 = 2LL * *(unsigned __int16 *)(v54 + 34);
  v63 = byte_180123520[*(unsigned __int8 *)(v58 + 1)];
  v64 = ((unsigned int)v54 >> 12) ^ *(_DWORD *)(v54 + 40);
  LODWORD(v259) = (unsigned int)v54 >> 12;
  v65 = qword_18015BFE8 ^ v64;
  v66 = (unsigned __int16)v65;
  v263 = v65;
  v67 = (unsigned int)Size < (unsigned __int16)v65;
  v68 = NtCurrentTeb();
  v69 = 1LL;
  if ( v67 )
    v69 = 3LL;
  v262 = v66;
  j = v69;
  v70 = HIWORD(v68->HeapVirtualAffinity);
  HIWORD(v68->HeapVirtualAffinity) = (unsigned __int8)(v70 + 1);
  v71 = *((unsigned __int8 *)qword_180159900 + v70);
  v72 = (volatile signed __int64 *)(v61 + 8 * ((2 * (unsigned __int64)*(unsigned __int16 *)(v54 + 36)) >> 6));
  v73 = v61 + 8 * ((v62 - 1) >> 6);
  v271 = v73;
LABEL_66:
  if ( v62 < 0x40 )
  {
    v74 = *v72;
    if ( (unsigned int)v62 < v63 )
      v63 = v62;
  }
  else
  {
    while ( 1 )
    {
      v74 = *v72;
      if ( (*v72 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      if ( v72 == (volatile signed __int64 *)v73 )
        v72 = (volatile signed __int64 *)(v54 + 48);
      else
        ++v72;
    }
    if ( v72 == (volatile signed __int64 *)v73 && (v62 & 0x3F) != 0 && (v62 & 0x3F) < v63 )
      v63 = v62 & 0x3F;
  }
  v71 = ((v63 * v71) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    if ( v63 < 0x40 )
    {
      _BitScanForward64(&v112, ~v74 & 0x5555555555555555LL);
      v71 += v112;
      v75 = (((1LL << v63) - 1) << v112) & 0x5555555555555555LL;
    }
    else
    {
      v75 = 0x5555555555555555LL;
    }
    _BitScanForward64(&v76, __ROR8__(v75 & ~v74, v71));
    v280 = ((_BYTE)v71 + (_BYTE)v76) & 0x3F;
    v78 = _InterlockedCompareExchange64(v72, v74 | (j << v280), v74);
    v77 = v74 == v78;
    v74 = v78;
    if ( v77 )
      break;
    if ( (v78 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      v73 = v271;
      if ( (unsigned __int64)++v72 > v271 )
        v72 = (volatile signed __int64 *)(v54 + 48);
      goto LABEL_66;
    }
  }
  v79 = v262;
  v80 = v259;
  v81 = HIWORD(v263);
  v82 = (v280 + ((unsigned int)(((__int64)v72 - v54 - 48) >> 3) << 6)) >> 1;
  v83 = v82 * v262;
  v275 = v82;
  *(_WORD *)(v54 + 36) = v82;
  v84 = v81 + v83;
  v260 = v84;
  if ( *(_BYTE *)(v54 + 45) > 1u )
  {
    v85 = *(_BYTE *)(v54 + 44);
    v86 = qword_18015BFE8 ^ v80 ^ *(_WORD *)(v54 + 40);
    v87 = v84 >> v85;
    v88 = v54 + *(unsigned __int16 *)(v54 + 46);
    v266 = 0;
    v89 = (signed __int16 *)(v88 + 2 * v87);
    _m_prefetchw(v89);
    LODWORD(v271) = v86;
    LODWORD(j) = 0;
    v90 = &v89[((v84 + v86 - 1) >> v85) - (unsigned int)v87 + 1];
    if ( v89 < v90 )
    {
      v91 = (unsigned __int64)v90;
      v92 = (__int64)v89 - v88;
      v93 = -1;
      do
      {
        while ( 1 )
        {
          v94 = *v89;
          while ( v94 > 0 )
          {
            v95 = v94;
            v94 = _InterlockedCompareExchange16(v89, v94 + 1, v94);
            if ( v95 == v94 )
            {
              v96 = v266;
              goto LABEL_80;
            }
          }
          v96 = v266;
          if ( v266 )
            break;
          v266 = 1;
          RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v54 + 24));
        }
        if ( v94 == -1 )
        {
          j = v92 >> 1;
          if ( v93 == -1 )
            v93 = v92 >> 1;
        }
        *v89 = v94 + 1;
LABEL_80:
        ++v89;
        v92 += 2LL;
      }
      while ( (unsigned __int64)v89 < v91 );
      v97 = v93;
      v6 = a1;
      v5 = a2;
      if ( (_DWORD)v97 == -1 )
      {
        if ( v96 )
        {
          v191 = (volatile signed __int64 *)(v54 + 24);
          v192 = _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 24), 0LL, 1LL);
          if ( v192 != 1 )
          {
            do
            {
              v193 = 3LL;
              v194 = v192 & 6;
              if ( v194 != 2 )
                v193 = -1LL;
              v195 = v192 + v193;
              v196 = v192;
              v192 = _InterlockedCompareExchange64(v191, v195, v192);
            }
            while ( v196 != v192 );
            if ( v194 == 2 )
              sub_180077520(v191, v195, 0LL);
          }
        }
        goto LABEL_83;
      }
      v197 = *(_BYTE *)(v54 + 44);
      v198 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))(qword_18015BFA8 ^ (a1 + 288) ^ *(_QWORD *)(a1 + 312));
      v199 = (unsigned int)(j - v97 + 1);
      v200 = v54 + (unsigned int)((_DWORD)v97 << v197);
      v201 = (unsigned int)(((_DWORD)j - (_DWORD)v97 + 1) << v197);
      v202 = *(_QWORD *)(a1 + 288);
      if ( v198 == sub_180020D20 )
        v203 = sub_180020D20(v202, v200, v201);
      else
        v203 = v198(v202, v200, v201);
      v290 = v203;
      if ( v203 < 0 )
      {
        sub_18001E4DC(v54, v260, v271);
        v207 = v290;
      }
      else
      {
        v204 = (unsigned __int64)(2 * v199 + 1) >> 1;
        v205 = (_WORD *)(v54 + *(unsigned __int16 *)(v54 + 46) + 2 * v97);
        v206 = 0LL;
        if ( v205 > &v205[v199] )
          v204 = 0LL;
        if ( v204 )
        {
          do
          {
            if ( !*v205 )
              *v205 = 1;
            ++v205;
            ++v206;
          }
          while ( v206 < v204 );
        }
        v207 = 0;
      }
      v208 = (volatile signed __int64 *)(v54 + 24);
      v209 = _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 24), 0LL, 1LL);
      if ( v209 != 1 )
      {
        do
        {
          v236 = 3LL;
          v237 = v209 & 6;
          if ( v237 != 2 )
            v236 = -1LL;
          v238 = v209 + v236;
          v239 = v209;
          v209 = _InterlockedCompareExchange64(v208, v238, v209);
        }
        while ( v239 != v209 );
        if ( v237 == 2 )
          sub_180077520(v208, v238, 0LL);
      }
      if ( v207 < 0 )
      {
        v16 = 0LL;
        if ( (_DWORD)v275 != -1 )
          _InterlockedAnd64(
            (volatile signed __int64 *)(v54 + 8 * ((unsigned __int64)(unsigned int)(2 * v275) >> 6) + 48),
            ~(3LL << ((2 * v275) & 0x3F)));
        v31 = Size;
        goto LABEL_87;
      }
LABEL_83:
      v80 = v259;
      v84 = v260;
      v79 = v262;
    }
  }
  v31 = Size;
  v16 = v54 + v84;
  if ( (unsigned int)Size < v79 )
  {
    v98 = v79 - Size;
    v99 = (unsigned __int16)qword_18015BFE8 ^ v80 ^ (unsigned __int64)*(unsigned __int16 *)(v54 + 40);
    *(_BYTE *)(v99 + v16 - 1) = 0;
    if ( v98 == 1 )
    {
      *(_WORD *)(v99 + v16 - 2) |= 0x8000u;
    }
    else
    {
      *(_WORD *)(v99 + v16 - 2) &= 0xC000u;
      *(_WORD *)(v99 + v16 - 2) |= v98 & 0x3FFF;
    }
  }
LABEL_87:
  if ( v16 )
  {
    v100 = v6 + 288;
  }
  else
  {
    v249 = v54;
    v100 = v6 + 288;
    sub_18001E250((_QWORD *)(v6 + 288), v249, 0LL, v258);
  }
  v101 = v261;
LABEL_90:
  if ( v267 )
  {
    sub_180080558(v100, v264);
    v101 = v261;
  }
  if ( v101 )
    sub_18001F6A8(v100, (__int64)v264, (__int64)v101, v258);
  if ( v16 )
  {
    v34 = v258;
    if ( (v258 & 2) == 0 )
    {
      v30 = v268;
      goto LABEL_97;
    }
    memset((void *)v16, 0, (unsigned int)v31);
  }
  v30 = v268;
  v34 = v258;
LABEL_97:
  if ( v16 == -1LL )
  {
    v33 = v274;
LABEL_171:
    if ( v33 > 0x20000 )
    {
      if ( v33 > 0x7F000 )
        v230 = sub_180009164(v6, v31, v33, v34);
      else
        v230 = (unsigned __int64)sub_18001EFB4(v6, v31, v33, v34);
      v16 = v230;
      goto LABEL_199;
    }
    v268 = v33;
    v123 = v33;
    v124 = v6 + 176;
    if ( (_DWORD)v31 != (_DWORD)v33 )
    {
      v123 = v33 + 2;
      v268 = v33 + 2;
    }
    v125 = ((unsigned int)(v123 + 15) >> 4) + 1;
    v126 = v34 & 1;
    v267 = v125;
    v289 = v126;
    if ( (v34 & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v6 + 176));
      v125 = v267;
      v124 = v6 + 176;
      v126 = 0;
    }
    v127 = v125 << 16;
    while ( 1 )
    {
      v128 = 0LL;
      v129 = *(_QWORD *)(v124 + 8);
      v130 = *(_BYTE *)(v124 + 16) & 1;
      v264 = 0LL;
      while ( v129 )
      {
        v131 = qword_18015BFA8 ^ (v129 - 8) ^ *(_DWORD *)(v129 - 8);
        if ( v127 < v131 )
          v132 = -1;
        else
          v132 = v127 > v131;
        if ( !v132 )
          goto LABEL_187;
        if ( v132 < 0 )
        {
          v133 = *(_QWORD *)v129;
          v128 = (volatile signed __int64 *)v129;
          v264 = (volatile signed __int64 *)v129;
          if ( v130 && v133 )
          {
            v129 ^= v133;
            continue;
          }
        }
        else
        {
          v133 = *(_QWORD *)(v129 + 8);
          if ( v130 && v133 )
          {
            v128 = v264;
            v129 ^= v133;
            continue;
          }
          v128 = v264;
        }
        v129 = v133;
      }
      v129 = (unsigned __int64)v128;
LABEL_187:
      if ( v129 )
        break;
      if ( !v126 )
      {
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v124);
        v124 = v6 + 176;
      }
      v275 = sub_180009E2C(v124, v268, v258);
      v227 = v275;
      if ( !v275 )
      {
        v16 = 0LL;
        goto LABEL_199;
      }
      if ( !v289 )
      {
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v6 + 176));
        v227 = v275;
      }
      if ( (*(_DWORD *)(v6 + 280) & 0x8000000) == 0 )
      {
        v228 = *(__int64 **)(v6 + 208);
        if ( *v228 != v6 + 200 )
          __fastfail(3u);
        *(_QWORD *)v227 = v6 + 200;
        *(_QWORD *)(v227 + 8) = v228;
        *v228 = v227;
        *(_QWORD *)(v6 + 208) = v227;
      }
      sub_180009BD0(v6 + 176, v227, (_WORD *)(v227 + 48));
      v126 = v289;
      v124 = v6 + 176;
    }
    v134 = v129 - 8;
    v135 = HIDWORD(*(_QWORD *)(v129 - 8));
    v136 = HIDWORD(qword_18015BFA8) ^ HIDWORD(*(_QWORD *)(v129 - 8));
    v275 = v129 - 8;
    v137 = (volatile signed __int64 *)(v129 - 8);
    v138 = HIDWORD(v137) ^ v136;
    if ( (v138 & 0xFF0000) != 0 )
    {
      v139 = (unsigned __int8)(qword_18015BFA8 ^ v134 ^ *(_BYTE *)(v134 + 8));
    }
    else if ( (_WORD)v138 )
    {
      v137 -= 2 * (unsigned __int16)(WORD2(v137) ^ WORD2(qword_18015BFA8) ^ v135);
      v139 = (unsigned __int8)(qword_18015BFA8 ^ (unsigned __int8)v137 ^ *((_BYTE *)v137 + 8));
    }
    else
    {
      v139 = 0;
    }
    v140 = ((unsigned __int64)v137 - (unsigned int)(v139 << 12)) & 0xFFFFFFFFFFFFF000uLL;
    if ( (*(_WORD *)(v140 + 34) ^ 0xABED) == *(_WORD *)(v140 + 32) )
    {
      if ( (unsigned int)sub_180029050(v124, v140, v134, v267, v258) )
      {
        v16 = v134 + 16;
        v141 = 16 * ((WORD1(qword_18015BFA8) ^ WORD1(v275) ^ *(unsigned __int16 *)(v275 + 2)) - 1);
        if ( (unsigned int)v31 >= (unsigned int)v141 )
        {
          *(_DWORD *)(v275 + 8) &= ~0x100u;
        }
        else
        {
          *(_DWORD *)(v275 + 8) |= 0x100u;
          *(_BYTE *)(v141 + v16 - 1) = 0;
          if ( (_DWORD)v141 - (_DWORD)v31 == 1 )
          {
            *(_WORD *)((unsigned int)v141 + v16 - 2) |= 0x8000u;
          }
          else
          {
            *(_WORD *)((unsigned int)v141 + v16 - 2) &= 0xE000u;
            *(_WORD *)((unsigned int)v141 + v16 - 2) |= (v141 - v31) & 0x1FFF;
          }
        }
        if ( !v289 )
        {
          v142 = (volatile signed __int64 *)(v6 + 176);
          v143 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 176), 0LL, 1LL);
          if ( v143 != 1 )
          {
            do
            {
              v223 = 3LL;
              v224 = v143 & 6;
              if ( v224 != 2 )
                v223 = -1LL;
              v225 = v143 + v223;
              v226 = v143;
              v143 = _InterlockedCompareExchange64(v142, v225, v143);
            }
            while ( v226 != v143 );
            v5 = a2;
            if ( v224 == 2 )
              sub_180077520(v142, v225, 0LL);
          }
        }
        if ( (v258 & 2) != 0 )
        {
          memset((void *)v16, 0, (unsigned int)v31);
          v102 = 3;
          goto LABEL_99;
        }
        goto LABEL_199;
      }
    }
    else
    {
      sub_1800A4DFC(17, *(_QWORD *)(v124 + 56), v140, v134, 0LL, 0LL);
    }
    v16 = 0LL;
    if ( !v289 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 176));
LABEL_199:
    v102 = 3;
    goto LABEL_99;
  }
  v102 = 2;
  v278 = 2LL;
LABEL_99:
  if ( v16 && (v30 & 0x30000F08) != 0 )
  {
    v103 = v273;
    if ( (v30 & 0x10000000) != 0 )
    {
      *(_QWORD *)(v16 + v31) = 0xABABABABABABABABuLL;
      *(_QWORD *)(v16 + v31 + 8) = 0xABABABABABABABABuLL;
    }
    v104 = 0LL;
    if ( (v30 & 0x20000F08) != 0 )
    {
      v105 = v16 + Size;
      if ( (v30 & 0x10000000) != 0 )
        v105 += 16LL;
      v104 = (v105 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)v104 = 0LL;
      *(_QWORD *)(v104 + 8) = 0LL;
      *(_BYTE *)(v104 + 2) &= 0xFu;
      *(_BYTE *)(v104 + 2) |= 16 * (BYTE1(v30) & 0xFE);
      *(_BYTE *)(v104 + 3) = v103 >> 4;
      *(_WORD *)v104 = a4;
      _InterlockedOr(v256, 0);
      if ( !(_WORD)v16 && (unsigned int)sub_1800588D4(&qword_180159600, v16 >> 16, 1LL) )
      {
        sub_180008F44(v6, v16, v30);
        goto LABEL_120;
      }
      if ( (dword_180158684 & 1) != 0 )
      {
        v106 = sub_180100D30(v6, v16);
      }
      else if ( (v6 ^ qword_18015BFA8 ^ *(_QWORD *)((v16 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((v16 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
      {
        v106 = (v16 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((v16 - (v16 & 0xFFFFFFFFFFF00000uLL)) >> 12);
      }
      else
      {
        v106 = 0LL;
      }
      if ( v106 && (*(_BYTE *)(v106 + 24) & 4) != 0 )
      {
        if ( (*(_BYTE *)(v106 + 24) & 8) != 0 )
        {
          if ( (*(_BYTE *)(v106 + 24) & 0x21) != 0
            || v16 == (v106 & 0xFFFFFFFFFFF00000uLL) + (((unsigned int)(v106 >> 5) & 0x7FFF) << 12) )
          {
            goto LABEL_116;
          }
        }
        else
        {
          v106 += -32LL * *(unsigned __int8 *)(v106 + 27);
          if ( (*(_BYTE *)(v106 + 24) & 4) != 0
            && (*(_BYTE *)(v106 + 24) & 8) != 0
            && (*(_BYTE *)(v106 + 24) & 0x21) != 0 )
          {
            goto LABEL_116;
          }
        }
      }
      v106 = 0LL;
LABEL_116:
      if ( (*(_BYTE *)(v106 + 24) & 0x21) != 0 )
      {
        if ( (*(_BYTE *)(v106 + 24) & 1) != 0 )
        {
          v107 = (v106 & 0xFFFFFFFFFFF00000uLL)
               + ((unsigned int)((__int64)(v106 - (v106 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
          v108 = (unsigned __int16)qword_18015BFE8 ^ *(unsigned __int16 *)(v107 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v107 >> 12);
        }
        else
        {
          v108 = 16 * (WORD1(qword_18015BFA8) ^ ((unsigned int)(v16 - 16) >> 16) ^ *(unsigned __int16 *)(v16 - 14)) - 16;
        }
        *(_WORD *)(v108 + v16 - 2) |= 0x4000u;
      }
      else
      {
        *(_WORD *)(v106 + 4) |= 1u;
      }
    }
LABEL_120:
    v109 = v277;
    if ( v277 )
    {
      *(_BYTE *)(v104 + 2) &= 0xF0u;
      *(_BYTE *)(v104 + 2) |= v109 & 0xF;
      if ( (dword_180158684 & 2) != 0 )
      {
        if ( (_WORD)v16 || (v251 = sub_1800588D4(&qword_180159600, v16 >> 16, 1LL), v250 = v16, !v251) )
          v250 = v16 + 16;
      }
      else
      {
        v250 = v16;
      }
      if ( (int)sub_180095A28(v109, v6, v250, 2, v104 + 16) < 0 )
      {
        RtlFreeHeap(v6, 0, v16);
        v16 = 0LL;
      }
    }
    v102 = v278;
  }
  v33 = v274;
LABEL_123:
  v26 = v265;
LABEL_124:
  v110 = NtCurrentPeb()->HotpatchInformation;
  if ( v110 && *v110 )
    v111 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v111 = 2147353472LL;
  if ( *(_BYTE *)v111 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FF7B0(v6, v16, v33, v102);
  if ( v16 )
  {
    if ( (dword_180158684 & 2) != 0 && ((_WORD)v16 || !(unsigned int)sub_1800588D4(&qword_180159600, v16 >> 16, 1LL)) )
      v16 += 16LL;
    if ( (dword_18015C2A8 & 1) != 0
      && (dword_18015C2A8 & 2) != 0
      && v6 != *(_QWORD *)&qword_18015BFE0
      && NtCurrentPeb()->ProcessHeap )
    {
LABEL_518:
      sub_1800FE3D0(v6, v16);
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v252 = NtCurrentTeb();
    v252->LastErrorValue = RtlNtStatusToDosError(-1073741801);
    if ( (v26 | *(_DWORD *)(v6 + 20)) < 0 )
      sub_1800F2264(v5);
  }
  return v16;
}
