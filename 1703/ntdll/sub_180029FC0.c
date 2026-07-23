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

__int64 __fastcall sub_180029FC0(_DWORD *BaseAddress, size_t a2, int a3, __int16 a4)
{
  size_t v5; // r15
  unsigned __int64 v6; // rbx
  int v7; // edx
  int v8; // esi
  unsigned __int64 v9; // r13
  int v10; // edi
  __int64 v11; // r13
  unsigned __int64 v12; // rdi
  _RTL_SRWLOCK *v13; // rcx
  int v14; // r9d
  __int64 v15; // r14
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  int v19; // edi
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // edi
  int v25; // esi
  __int64 v26; // rax
  unsigned int v27; // edi
  int v28; // ecx
  int v29; // esi
  size_t v30; // rdi
  unsigned __int64 v31; // rax
  size_t v32; // rdx
  int v33; // ecx
  _DWORD *v34; // r11
  int v35; // eax
  unsigned __int64 v36; // rcx
  _DWORD *v37; // r14
  _RTL_SRWLOCK *v38; // rdi
  char CurrentProcessorNumber; // al
  unsigned int v40; // ecx
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned __int8 *Ptr; // rax
  __int64 v44; // rdx
  int v45; // ecx
  _QWORD *v46; // rax
  __int64 v47; // rsi
  volatile signed __int64 *v48; // r14
  signed __int64 v49; // rdi
  _QWORD *v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rsi
  unsigned int v53; // edx
  unsigned __int16 v54; // cx
  unsigned int v55; // eax
  unsigned __int64 v56; // rdi
  signed __int64 v57; // rax
  signed __int64 v58; // rdx
  __int64 v59; // r10
  unsigned __int64 v60; // r14
  unsigned int v61; // r11d
  unsigned int v62; // eax
  int v63; // eax
  unsigned int v64; // r9d
  bool v65; // cf
  struct _TEB *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  unsigned int v69; // r8d
  volatile signed __int64 *v70; // rdi
  unsigned __int64 v71; // rcx
  signed __int64 v72; // r10
  __int64 v73; // rax
  unsigned __int64 v74; // rcx
  bool v75; // zf
  signed __int64 v76; // rax
  unsigned int v77; // r9d
  unsigned __int16 v78; // r11
  int v79; // eax
  __int64 v80; // rdi
  int v81; // r8d
  unsigned int v82; // r8d
  char v83; // cl
  unsigned __int16 v84; // di
  __int64 v85; // rdx
  __int64 v86; // r10
  signed __int16 *v87; // r14
  signed __int16 *v88; // rdx
  unsigned __int64 v89; // r12
  __int64 v90; // rdi
  unsigned int v91; // r15d
  signed __int16 v92; // ax
  signed __int16 v93; // tt
  unsigned int v94; // ecx
  __int64 v95; // rdi
  int v96; // r9d
  unsigned __int64 v97; // rcx
  __int64 v98; // rsi
  void *v99; // rax
  unsigned int v100; // r8d
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // rdi
  size_t v103; // rdi
  unsigned __int64 v104; // rdx
  unsigned __int64 v105; // r8
  unsigned __int64 v106; // rcx
  int v107; // esi
  PSILO_USER_SHARED_DATA v108; // rcx
  __int64 v109; // rcx
  unsigned __int64 v110; // rdx
  __int64 *v111; // rcx
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // rdi
  __int64 v114; // rax
  signed __int64 v115; // rax
  __int64 v116; // rdx
  signed __int64 v117; // rcx
  signed __int64 v118; // rdx
  signed __int64 v119; // rtt
  __int64 *v120; // rax
  int v121; // eax
  __int64 v122; // r10
  unsigned int v123; // r9d
  int v124; // r11d
  unsigned int v125; // r14d
  _RTL_SRWLOCK *v126; // rcx
  unsigned __int64 v127; // rdx
  int v128; // r8d
  unsigned int v129; // ecx
  int v130; // eax
  _RTL_SRWLOCK v131; // rax
  __int64 v132; // r14
  unsigned __int64 v133; // rcx
  int v134; // eax
  _RTL_SRWLOCK *v135; // rdx
  int v136; // eax
  int v137; // ecx
  unsigned __int64 v138; // rdx
  __int64 v139; // rcx
  volatile signed __int64 *v140; // rcx
  signed __int64 v141; // rax
  _RTL_SRWLOCK *v142; // r9
  __int64 **v143; // rdi
  unsigned int v144; // r8d
  unsigned int v145; // ecx
  unsigned int v146; // edi
  bool v147; // dl
  char v148; // cl
  char v149; // dl
  char v150; // cl
  int v151; // edx
  unsigned int v152; // edi
  unsigned int v153; // r8d
  unsigned __int64 v154; // rdx
  _SLIST_HEADER *v155; // rcx
  _BYTE *v156; // rdi
  unsigned int v157; // edx
  char v158; // al
  unsigned int v159; // r9d
  unsigned int v160; // r8d
  unsigned int v161; // ecx
  unsigned int v162; // edi
  unsigned int v163; // ecx
  unsigned int v164; // r8d
  int v165; // esi
  unsigned int v166; // edi
  _WORD *v167; // r8
  unsigned __int64 v168; // rdx
  signed __int32 v169; // eax
  __int64 v170; // rcx
  _WORD *v171; // rcx
  _WORD *v172; // rdi
  _WORD *v173; // rdx
  unsigned __int64 v174; // rcx
  char *v175; // rsi
  unsigned int HeapData_high; // esi
  unsigned __int64 v177; // rdi
  _RTL_SRWLOCK *v178; // rdi
  __int64 *v179; // r8
  int v180; // ecx
  __int64 v181; // rcx
  _QWORD *v182; // rdx
  __int64 **v183; // rax
  __int64 **v184; // rcx
  __int64 v185; // r10
  __int64 v186; // r9
  signed __int64 v187; // rax
  unsigned __int64 v188; // rcx
  unsigned __int64 v189; // rcx
  volatile signed __int64 *v190; // rcx
  signed __int64 v191; // rax
  __int64 v192; // rdx
  signed __int64 v193; // rdi
  signed __int64 v194; // rdx
  signed __int64 v195; // rtt
  char v196; // cl
  NTSTATUS (__fastcall *v197)(volatile signed __int64 *, __int64, unsigned int); // rax
  __int64 v198; // r14
  __int64 v199; // rdx
  __int64 v200; // r8
  volatile signed __int64 *v201; // rcx
  NTSTATUS v202; // eax
  unsigned __int64 v203; // rax
  _WORD *v204; // rdx
  unsigned __int64 v205; // rdi
  int v206; // edi
  volatile signed __int64 *v207; // rcx
  signed __int64 v208; // rax
  volatile signed __int64 *v209; // rcx
  NTSTATUS (__fastcall *v210)(volatile signed __int64 *, __int64, unsigned int); // rax
  NTSTATUS v211; // eax
  void *v212; // rcx
  __int64 (__fastcall *v213)(void *, unsigned int); // rax
  void *v214; // rax
  signed __int64 v215; // rcx
  signed __int64 v216; // rcx
  signed __int64 v217; // rax
  __int64 v218; // r8
  __int64 v219; // rax
  signed __int64 v220; // rcx
  signed __int64 v221; // rax
  __int64 v222; // rdx
  signed __int64 v223; // r8
  signed __int64 v224; // rdx
  signed __int64 v225; // rtt
  _QWORD *v226; // rcx
  _QWORD *v227; // r9
  unsigned __int64 v228; // rax
  PVOID v229; // rax
  void *v230; // r9
  int v231; // r10d
  bool v232; // cl
  char *v233; // rdx
  signed __int64 v234; // rax
  __int64 v235; // rdx
  signed __int64 v236; // r8
  signed __int64 v237; // rdx
  signed __int64 v238; // rtt
  int i; // ecx
  struct _TEB *v240; // rdi
  _QWORD *v241; // rax
  __int64 k; // rcx
  size_t v243; // rcx
  _BYTE *v244; // rdx
  __int64 *v245; // rdi
  __int64 **v246; // rcx
  __int64 v247; // rcx
  __int64 v248; // rdx
  int v249; // r8d
  int v250; // eax
  struct _TEB *v251; // rdi
  __int64 v252; // rax
  _BYTE *v253; // rdx
  __int64 v254; // rcx
  signed __int32 v255[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v256; // [rsp+20h] [rbp-E0h]
  int v257; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v258; // [rsp+38h] [rbp-C8h]
  unsigned int v259; // [rsp+40h] [rbp-C0h]
  void *v260; // [rsp+48h] [rbp-B8h]
  unsigned int v261; // [rsp+50h] [rbp-B0h]
  int v262; // [rsp+54h] [rbp-ACh]
  _RTL_SRWLOCK *v263; // [rsp+58h] [rbp-A8h]
  int v264; // [rsp+60h] [rbp-A0h]
  unsigned int v265; // [rsp+64h] [rbp-9Ch]
  unsigned int v266; // [rsp+68h] [rbp-98h]
  int v267; // [rsp+6Ch] [rbp-94h]
  __int64 j; // [rsp+70h] [rbp-90h]
  __int64 v269; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v270; // [rsp+80h] [rbp-80h]
  size_t Size; // [rsp+88h] [rbp-78h]
  unsigned int v272; // [rsp+90h] [rbp-70h] BYREF
  size_t v273; // [rsp+98h] [rbp-68h]
  __int64 v274; // [rsp+A0h] [rbp-60h]
  int v275; // [rsp+A8h] [rbp-58h] BYREF
  int v276; // [rsp+ACh] [rbp-54h]
  __int64 v277; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v278; // [rsp+B8h] [rbp-48h] BYREF
  int v279; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v280; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 *v281; // [rsp+D8h] [rbp-28h]
  __int64 v282; // [rsp+E0h] [rbp-20h]
  HANDLE UniqueThread; // [rsp+E8h] [rbp-18h]
  int v284; // [rsp+F0h] [rbp-10h]
  signed __int32 v285[23]; // [rsp+F4h] [rbp-Ch] BYREF
  int v287; // [rsp+160h] [rbp+60h]
  int v288; // [rsp+160h] [rbp+60h]
  NTSTATUS v289; // [rsp+160h] [rbp+60h]

  v5 = a2;
  v6 = (unsigned __int64)BaseAddress;
  if ( BaseAddress[4] != -571548178 )
  {
    v7 = BaseAddress[29];
    v8 = v7 | a3;
    LODWORD(v269) = 0;
    v278 = 0LL;
    v9 = 0LL;
    if ( v5 > 0x7FFFFFFFFFFFFFFFLL )
    {
      LODWORD(v269) = 5;
    }
    else
    {
      v10 = BaseAddress[36];
      v287 = v10;
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
          v13 = *(_RTL_SRWLOCK **)(v6 + 376);
          LODWORD(v269) = 2;
          v15 = sub_18002BA00(v13);
          if ( v15 )
          {
LABEL_10:
            if ( !v287 )
              goto LABEL_11;
            v5 -= v278;
            v252 = sub_18008AB60(v6, v8, v15, v14, v278, v287);
            v256 = v15;
            v15 = v252;
            if ( (int)sub_180095A28(v287, v6, v252, 2, v256) >= 0 )
              goto LABEL_11;
            RtlFreeHeap((PVOID)v6, 0, (PVOID)v15);
            goto LABEL_400;
          }
        }
        v111 = *(__int64 **)(v6 + 312);
        if ( v12 >= *((unsigned int *)v111 + 2) )
        {
          while ( 1 )
          {
            v120 = (__int64 *)*v111;
            if ( !*v111 )
              break;
            v111 = (__int64 *)*v111;
            if ( v12 < *((unsigned int *)v120 + 2) )
              goto LABEL_152;
          }
          v12 = (unsigned int)(*((_DWORD *)v111 + 2) - 1);
        }
LABEL_152:
        v112 = (unsigned int)(*((_DWORD *)v111 + 2) - 1);
        if ( v12 < v112 || *v111 && v12 == v112 )
        {
          v113 = v12 - *((unsigned int *)v111 + 6);
          if ( *((_DWORD *)v111 + 3) )
            v113 *= 2LL;
          v114 = v111[6] + 8 * v113;
        }
        else
        {
LABEL_157:
          v114 = 0LL;
        }
        v15 = sub_18002CC00((PVOID)v6, v114, (__int64)&v269);
        if ( !v15 )
        {
LABEL_401:
          NtCurrentTeb()->LastStatusValue = -1073741801;
          v240 = NtCurrentTeb();
          v240->LastErrorValue = RtlNtStatusToDosError(-1073741801);
          if ( (v8 & 4) != 0 )
          {
            if ( !v9 )
              v9 = v5;
            sub_1800F2264(v9);
          }
LABEL_11:
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && SharedData->ServiceSessionId )
            UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          else
            UserModeGlobalLogger = 2147353472LL;
          if ( *(_BYTE *)UserModeGlobalLogger
            && (NtCurrentPeb()->TracingFlags & 1) != 0
            && (*(_DWORD *)(v6 + 116) & 0x1000000) == 0
            && ((v8 & 0x61000000) == 0 || (v8 & 0x10000000) != 0)
            && (_DWORD)v269 != 5 )
          {
            if ( !v15 )
              goto LABEL_511;
            v253 = (_BYTE *)(v15 - 16);
            _m_prefetchw((const void *)(v15 - 16));
            v254 = v15 - 16;
            if ( *(_BYTE *)(v15 - 16 + 15) == 5 )
              v254 -= 16LL * (unsigned __int8)v253[14];
            if ( *(char *)(v254 + 15) < 0 )
              goto LABEL_511;
            _m_prefetchw(v253);
            if ( v253[15] == 5 )
              v253 -= 16 * (unsigned __int8)v253[14];
            if ( ((v253[10] ^ (unsigned __int8)(*(_BYTE *)(v6 + 138) & (*(_DWORD *)(v6 + 124) >> 17))) & 8) == 0 )
LABEL_511:
              sub_1800FF7B0(v6, v15, v5, (unsigned int)v269);
          }
          if ( (dword_18015C2A8 & 1) != 0
            && (dword_18015C2A8 & 2) != 0
            && (PVOID)v6 != qword_18015BFE0
            && NtCurrentPeb()->ProcessHeap
            && v15
            && (v8 & 0x10000000) == 0 )
          {
            goto LABEL_517;
          }
          return v15;
        }
        goto LABEL_10;
      }
      if ( (v8 & 0x3C000102) != 0 || (v7 & 0x1000000) != 0 )
      {
        v287 = 0;
        goto LABEL_4;
      }
      if ( (int)sub_180095A28(v10, (_DWORD)BaseAddress, 0, 1, (__int64)&v278) >= 0 )
      {
        v278 = ((v278 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
        v5 += v278;
        goto LABEL_4;
      }
    }
LABEL_400:
    v15 = 0LL;
    goto LABEL_401;
  }
  v19 = a3 & 1 | 2;
  if ( (a3 & 8) == 0 )
    v19 = a3 & 1;
  v20 = v19 | 0x80000000;
  if ( (a3 & 4) == 0 )
    v20 = v19;
  v21 = v20 | 0x100;
  if ( (a3 & 0x100) == 0 )
    v21 = v20;
  v22 = a3 & 0xE00 | v21;
  if ( (a3 & 0xE00) == 0 )
    v22 = v21;
  if ( (a3 & 0x10) != 0 )
    v22 |= 0x2000000u;
  if ( (a3 & 2) != 0 )
    v22 |= 0x1000000u;
  v23 = *(_DWORD *)(v6 + 40);
  v24 = 0;
  if ( v23 )
    LOBYTE(v24) = v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v25 = v22 | 1;
  if ( !v24 )
    v25 = v22;
  v264 = v25;
  if ( (dword_180158684 & 2) != 0 )
  {
    v243 = v5;
    if ( v5 + 16 >= v5 )
      v243 = v5 + 16;
    Size = v243;
  }
  else
  {
    Size = v5;
  }
  v26 = 0LL;
  v27 = (v25 | *(_DWORD *)(v6 + 20)) & 0x93000F0B;
  v272 = 0;
  v276 = 0;
  if ( (v27 & 0x1000000) == 0 )
  {
    v28 = *(_DWORD *)(v6 + 32);
    v276 = v28;
    if ( v28 )
    {
      v27 |= 8u;
      if ( (int)sub_180095A28(v28, v6, 0, 1, (__int64)&v272) < 0 )
      {
        v15 = 0LL;
        v32 = 0LL;
        v100 = 0;
        goto LABEL_124;
      }
      v26 = v272;
    }
  }
  v29 = v27 | 8;
  if ( !a4 )
    v29 = v27;
  v30 = Size;
  v31 = Size + v26;
  v267 = v29;
  if ( (v29 & 0x10000000) != 0 )
    v31 += 16LL;
  if ( (v29 & 0x20000F08) != 0 )
    v31 = ((v31 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v32 = 1LL;
  if ( v31 )
    v32 = v31;
  v273 = v32;
  if ( v32 < Size || Size > 0x7FFFFFFFFFFFFFFFLL )
  {
    v15 = 0LL;
    v100 = 0;
    goto LABEL_123;
  }
  v277 = 3LL;
  v33 = v29 & 0x13000003;
  v257 = v29 & 0x13000003;
  if ( v32 > 0x3FF0 )
    goto LABEL_171;
  v34 = (_DWORD *)(v6 + 288);
  v35 = v32;
  if ( (_DWORD)Size != (_DWORD)v32 )
    v35 = v32 + 2;
  v36 = (unsigned __int64)(unsigned int)(v35 + 15) >> 4;
  v37 = &v34[2 * (unsigned __int8)byte_1801196F0[v36]];
  if ( (*((_QWORD *)v37 + 24) & 1) != 0 )
  {
    v185 = (unsigned __int8)byte_1801196F0[v36];
    v186 = v185;
    j = v185;
    if ( (*(_QWORD *)&v34[2 * v185 + 48] & 1) != 0 )
    {
      do
      {
        v187 = *(_QWORD *)&v34[2 * v185 + 48];
        v263 = (_RTL_SRWLOCK *)v187;
        v188 = v187;
        if ( (v187 & 1) == 0 )
          break;
        if ( (BYTE2(v187) & 0x1Fu) > 0x10 )
          break;
        if ( WORD1(v187) > 0xFF00u )
          break;
        WORD1(v263) = WORD1(v187) + 33;
        v188 = (unsigned __int64)v263;
      }
      while ( v187 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&v34[2 * v185 + 48],
                        (signed __int64)v263,
                        v187) );
      v189 = v188 >> 16;
      if ( (v189 & 0x1F) > 0x10 || (unsigned __int16)v189 > 0xFF00u )
      {
        sub_18000C7C0(v6 + 288, v185);
        v186 = j;
        v34 = (_DWORD *)(v6 + 288);
      }
    }
    if ( (*(_QWORD *)&v34[2 * v186 + 48] & 1) != 0 )
    {
      v33 = v257;
      v15 = -1LL;
      goto LABEL_97;
    }
  }
  v38 = (_RTL_SRWLOCK *)*((_QWORD *)v37 + 24);
  v263 = v38;
  CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
  v40 = *(unsigned __int8 *)(v6 + 344);
  v41 = CurrentProcessorNumber & 0x3F;
  if ( v41 >= v40 )
  {
    if ( v41 == v40 || (_BYTE)v40 == 1 )
      v41 = 0;
    else
      v41 = *(unsigned __int8 *)(v41 - v40 - 1 + *(_QWORD *)(v6 + 352));
  }
  v42 = v41;
  Ptr = (unsigned __int8 *)v38[12].Ptr;
  v266 = 0;
  v260 = 0LL;
  v275 = 0;
  v44 = Ptr[v42];
  v45 = 1;
  v46 = v38[13].Ptr;
  LODWORD(v258) = 1;
  v47 = v46[v44];
  v270 = v47;
  v48 = (volatile signed __int64 *)(v47 + 16);
  v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 16), 17LL, 0LL);
  if ( v49 )
  {
    while ( 1 )
    {
      if ( (v49 & 1) != 0 && ((j = v49 & 2, (v49 & 2) != 0) || (v49 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( sub_18000BFBC() )
        {
          ZwTerminateProcess(v230, -1073741749);
          LODWORD(v230) = -1;
          v231 = -1;
        }
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v232 = 0;
        v285[0] = 2;
        v282 = 0LL;
        if ( j )
        {
          v281 = 0LL;
          v284 = (int)v230;
          v280 = v49 & 0xFFFFFFFFFFFFFFF0uLL;
          v233 = (char *)((unsigned __int64)&v280 | v49 & 8 | 7);
          v232 = (v49 & 4) == 0;
        }
        else
        {
          v284 = -2;
          v281 = &v280;
          v233 = (char *)&v280 + 3;
        }
        v234 = _InterlockedCompareExchange64(v48, (signed __int64)v233, v49);
        v75 = v49 == v234;
        v49 = v234;
        if ( !v75 )
          goto LABEL_374;
        if ( v232 )
        {
          sub_1800774C8(v47 + 16);
          v231 = -1;
        }
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( i = dword_180159D60; i; i += v231 )
          {
            if ( (v285[0] & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        v65 = _interlockedbittestandreset(v285, 1u);
        if ( v65 )
        {
          do
            ZwWaitForAlertByThreadId((PVOID)(v47 + 16), 0LL);
          while ( (v285[0] & 4) == 0 );
        }
      }
      else
      {
        v215 = v49 | 1;
        if ( (v49 & 2) == 0 )
          v215 += 16LL;
        v274 = _InterlockedCompareExchange64(v48, v215, v49);
        if ( v49 == v274 )
        {
          v45 = 1;
          break;
        }
LABEL_374:
        sub_1800662B0(&v275);
        v49 = *v48;
        _m_prefetchw((const void *)v48);
      }
    }
  }
  v50 = (_QWORD *)(v47 + 8);
  for ( j = v47 + 8; ; v50 = (_QWORD *)j )
  {
    while ( !*v50 )
    {
      if ( v45 == 2 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v48);
      else
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)v48);
      v142 = v263;
      v143 = (__int64 **)&v263[3];
      if ( *v143 != (__int64 *)v143 )
      {
        RtlAcquireSRWLockExclusive(v263 + 2);
        if ( *v143 == (__int64 *)v143 )
          v260 = 0LL;
        else
          v260 = sub_1800217D0((__int64)v263, *v143, 2);
        RtlReleaseSRWLockExclusive(v263 + 2);
        if ( v260 )
          goto LABEL_257;
        v142 = v263;
      }
      v144 = (unsigned __int16)word_1801194D0[BYTE1(v142->Ptr)];
      v145 = BYTE2(v142->Ptr);
      v259 = v144;
      v146 = (LODWORD(v142[7].Ptr) >> 3) / v145;
      if ( v146 == 0xFFFFFFFFLL )
        v146 = -1;
      v147 = v145 > 1;
      v148 = (v145 > 1) - 1;
      if ( (unsigned __int16)v144 >= 0x100u )
        v148 = v147;
      v149 = v148;
      v150 = v148 - 1;
      if ( !v142[8].Ptr )
        v150 = v149;
      if ( v146 < 1 << (3 - v150) )
        v146 = 1 << (3 - v150);
      if ( v146 < 4 )
      {
        v146 = 4;
      }
      else if ( v146 > 0x400 )
      {
        v146 = 1024;
      }
      v151 = v144 * v146 + ((8 * (((unsigned __int64)(2 * v146) + 63) >> 6) + 63) & 0xFFFFFFF0);
      v152 = 7;
      v153 = v151 + 2 * ((unsigned int)(v151 + 4095) >> 12);
      if ( v153 > 0xF0000 )
      {
        v153 = 983040;
      }
      else if ( v153 < 0x80 )
      {
        goto LABEL_222;
      }
      do
        ++v152;
      while ( v153 >> v152 );
      if ( v152 > 0x12 )
        v152 = 18;
LABEL_222:
      if ( v152 <= 0xC )
        v152 = 12;
      LODWORD(v258) = 1 << v152;
      v261 = v257 & 1;
      if ( (v257 & 1) == 0 )
        RtlAcquireSRWLockShared((PRTL_SRWLOCK)(v6 + 336));
      v154 = v6 + 288;
      v155 = (_SLIST_HEADER *)(v6 + 288 + 16 * (v152 - 12 + 5LL));
      if ( !LOWORD(v155->Alignment) || (v260 = RtlInterlockedPopEntrySList(v155), v156 = v260, v154 = v6 + 288, !v260) )
      {
        v260 = 0LL;
        v156 = 0LL;
      }
      if ( v156 )
      {
        v157 = 1 << v156[44];
      }
      else
      {
        v212 = *(void **)v154;
        v213 = (__int64 (__fastcall *)(void *, unsigned int))(qword_18015BFA8 ^ v154 ^ *(_QWORD *)(v154 + 8));
        if ( v213 == sub_18001E760 )
          v214 = (void *)sub_18001E760(v212, v258);
        else
          v214 = (void *)((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD))v213)(
                           v212,
                           (unsigned int)v258,
                           0LL,
                           (unsigned int)v257);
        v260 = v214;
        v156 = v214;
        if ( !v214 )
        {
          v99 = 0LL;
          v260 = 0LL;
          goto LABEL_253;
        }
        v157 = 0;
      }
      v158 = dword_180158684;
      v159 = v259;
      if ( (dword_180158684 & 4) != 0 )
      {
        v160 = v258;
      }
      else
      {
        v160 = 2 * v259;
        if ( ((v160 - 1) & v160) != 0 )
        {
          _BitScanReverse(&v161, v160);
          v285[3] = v161 + 1;
          v160 = 1 << (v161 + 1);
        }
        if ( v160 <= 0x1000 )
          v160 = 4096;
        if ( v160 >= (unsigned int)v258 )
          v160 = v258;
      }
      if ( v157 >= v160 )
        goto LABEL_238;
      v209 = *(volatile signed __int64 **)(v6 + 288);
      v210 = (NTSTATUS (__fastcall *)(volatile signed __int64 *, __int64, unsigned int))(qword_18015BFA8 ^ (v6 + 288) ^ *(_QWORD *)(v6 + 312));
      if ( v210 == sub_180020D20 )
        v211 = sub_180020D20(v209, (__int64)v156, v160);
      else
        v211 = ((__int64 (__fastcall *)(volatile signed __int64 *, _BYTE *))v210)(v209, v156);
      if ( v211 >= 0 )
      {
        v158 = dword_180158684;
        v159 = v259;
LABEL_238:
        if ( (v158 & 4) != 0 )
        {
          v164 = v258;
          v162 = v258;
        }
        else
        {
          v162 = 2 * v159;
          if ( ((2 * v159 - 1) & (2 * v159)) != 0 )
          {
            _BitScanReverse(&v163, v162);
            v285[4] = v163 + 1;
            v162 = 1 << (v163 + 1);
          }
          v164 = v258;
          if ( v162 <= 0x1000 )
            v162 = 4096;
          if ( v162 >= (unsigned int)v258 )
            v162 = v258;
        }
        v265 = v162;
        v165 = v164 / v162;
        v166 = (v164
              - ((2
                * (v165
                 + 4
                 * (unsigned int)(((unsigned __int64)(2 * ((8 * (v164 - 2 * v165) - 384) / (8 * v159 + 1))) + 63) >> 6))
                + 63) & 0xFFFFFFF0))
             / v159;
        memset(v260, 0, 0x30uLL);
        v167 = v260;
        v258 = 2 * v166;
        v168 = (v258 + 63) >> 6;
        *((_WORD *)v260 + 16) = v166;
        v167[17] = v166;
        *((_QWORD *)v167 + 3) = 0LL;
        *((_BYTE *)v167 + 38) = 2;
        HIWORD(v262) = (2 * (v165 + 4 * v168) + 63) & 0xFFF0;
        LOWORD(v262) = v259;
        *((_DWORD *)v167 + 10) = qword_18015BFE8 ^ v262 ^ ((unsigned int)v167 >> 12);
        _BitScanForward((unsigned int *)&v169, v265);
        v170 = (unsigned __int16)(8 * (v168 + 6));
        v167[23] = v170;
        v171 = (_WORD *)((char *)v167 + v170);
        *((_BYTE *)v167 + 44) = v169;
        v285[5] = v169;
        v172 = v171 + 1;
        *((_BYTE *)v167 + 45) = v165;
        *v171 = 0;
        v173 = &v171[(unsigned __int8)v165];
        v174 = (2 * (unsigned __int64)(unsigned __int8)v165 - 2 + 1) >> 1;
        if ( v172 > v173 )
          v174 = 0LL;
        if ( v174 )
        {
          while ( v174 )
          {
            *v172++ = -1;
            --v174;
          }
        }
        v175 = (char *)(v167 + 24);
        memset(v167 + 24, 0, (v258 + 7) >> 3);
        if ( (v258 & 0x3F) != 0 )
          *(_QWORD *)&v175[8 * (v258 >> 6)] |= ~((1LL << (v258 & 0x3F)) - 1);
        HeapData_high = HIWORD(NtCurrentTeb()->HeapData);
        v177 = (unsigned __int64)(unsigned int)sub_180028C10() << 32;
        qword_180159900[(unsigned __int64)HeapData_high >> 3] = (v177 | (unsigned int)sub_180028C10()) & 0x7F7F7F7F7F7F7F7FLL;
        _InterlockedIncrement64((volatile signed __int64 *)&v263[8]);
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v263[7], *((unsigned __int16 *)v260 + 17));
        v47 = v270;
        v99 = v260;
LABEL_253:
        v178 = (_RTL_SRWLOCK *)(v6 + 288);
        goto LABEL_254;
      }
      v260 = 0LL;
      v244 = v156;
      v178 = (_RTL_SRWLOCK *)(v6 + 288);
      ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD))(qword_18015BFA8 ^ (v6 + 288) ^ *(_QWORD *)(v6 + 304)))(
        *(_QWORD *)(v6 + 288),
        v244,
        (unsigned int)v257);
      v99 = 0LL;
LABEL_254:
      if ( !v261 )
      {
        RtlReleaseSRWLockShared(v178 + 6);
        v99 = v260;
      }
      if ( !v99 )
      {
        v30 = Size;
        v98 = v6 + 288;
        v15 = 0LL;
        goto LABEL_90;
      }
LABEL_257:
      LODWORD(v258) = 2;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v48);
      v179 = (__int64 *)v260;
      if ( *((_WORD *)v260 + 16) == *((_WORD *)v260 + 17) )
      {
        *((_QWORD *)v260 + 2) = v47;
      }
      else
      {
        v228 = _InterlockedExchange64((volatile __int64 *)v260 + 2, v47);
        if ( (v228 & 1) != 0 )
          _InterlockedExchangeAdd((volatile signed __int32 *)v260 + 8, v228 >> 1);
      }
      v50 = (_QWORD *)(v47 + 8);
      if ( *(_QWORD *)(v47 + 8) && *((_WORD *)v179 + 16) == *((_WORD *)v179 + 17) )
      {
LABEL_383:
        v179[2] = 0LL;
        goto LABEL_272;
      }
      v180 = *((unsigned __int8 *)v179 + 38);
      if ( v180 == 2 )
      {
        v181 = 0LL;
LABEL_262:
        v182 = 0LL;
        goto LABEL_263;
      }
      if ( *((_BYTE *)v179 + 38) )
      {
        if ( v180 != 1 )
          goto LABEL_272;
        v181 = v47 + 40;
        goto LABEL_262;
      }
      v181 = v47 + 24;
      v182 = (_QWORD *)(v47 + 8);
LABEL_263:
      v183 = (__int64 **)(v47 + 24);
      if ( v181 )
      {
        v245 = (__int64 *)*v179;
        v246 = (__int64 **)v179[1];
        if ( *(__int64 **)(*v179 + 8) != v179 || *v246 != v179 )
          __fastfail(3u);
        *v246 = v245;
        v245[1] = (__int64)v246;
        v50 = (_QWORD *)(v47 + 8);
        if ( v182 )
          --*v182;
      }
      *((_BYTE *)v179 + 38) = 0;
      if ( v47 != -24 )
      {
        v184 = *(__int64 ***)(v47 + 32);
        if ( *v184 != (__int64 *)v183 )
          __fastfail(3u);
        *v179 = (__int64)v183;
        v179[1] = (__int64)v184;
        *v184 = v179;
        *(_QWORD *)(v47 + 32) = v179;
        if ( v50 )
          ++*v50;
        v179 = 0LL;
      }
      if ( (*(_BYTE *)v47 & 1) == 0 && *v50 > 8uLL )
      {
        v179 = *v183;
        v247 = **v183;
        if ( (__int64 **)(*v183)[1] != v183 || *(__int64 **)(v247 + 8) != v179 )
          __fastfail(3u);
        *v183 = (__int64 *)v247;
        *(_QWORD *)(v247 + 8) = v183;
        --*v50;
        *((_BYTE *)v179 + 38) = 2;
      }
      if ( v179 && *((_BYTE *)v179 + 38) == 2 )
        goto LABEL_383;
LABEL_272:
      v260 = v179;
      v45 = v258;
    }
    v51 = v47 + 24;
    v52 = *(_QWORD *)(v47 + 24);
    if ( v52 != v51 )
    {
      while ( 2 )
      {
        LOWORD(v53) = *(_WORD *)(v52 + 32);
        v266 = 0;
        while ( (_WORD)v53 != 1 || v45 != 1 )
        {
          v54 = v53 - 1;
          v53 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v52 + 32), v53 - 1, v53);
          v55 = v54 + 1;
          if ( v53 == v55 )
          {
            v56 = v270;
            if ( !*(_WORD *)(v52 + 32) )
              sub_1800217D0(v270, (__int64 *)v52, 1);
            goto LABEL_60;
          }
          v45 = v258;
          if ( v53 < v55 )
            v266 = 1;
        }
        v52 = *(_QWORD *)v52;
        if ( v52 != v51 )
          continue;
        break;
      }
    }
    v56 = v270;
    v52 = 0LL;
LABEL_60:
    if ( (_DWORD)v258 == 2 )
    {
      v115 = _InterlockedCompareExchange64(v48, 0LL, 1LL);
      if ( v115 != 1 )
      {
        do
        {
          v116 = 3LL;
          v117 = v115 & 6;
          if ( v117 != 2 )
            v116 = -1LL;
          v118 = v115 + v116;
          v119 = v115;
          v115 = _InterlockedCompareExchange64(v48, v118, v115);
        }
        while ( v119 != v115 );
        if ( v117 == 2 )
          goto LABEL_166;
      }
    }
    else
    {
      v57 = _InterlockedCompareExchange64(v48, 0LL, 17LL);
      v58 = v57;
      if ( v57 == 17 )
        goto LABEL_62;
      if ( (v57 & 1) == 0 )
        RtlRaiseStatus(-1073741212);
      if ( (v57 & 2) != 0 )
      {
LABEL_332:
        if ( (v58 & 8) != 0 )
        {
          v241 = (_QWORD *)(v58 & 0xFFFFFFFFFFFFFFF0uLL);
          for ( k = *(_QWORD *)((v58 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !k; k = v241[1] )
            v241 = (_QWORD *)*v241;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(k + 32), 0xFFFFFFFF) > 1 )
            goto LABEL_62;
          v218 = -9LL;
        }
        else
        {
          v218 = -1LL;
        }
        while ( 1 )
        {
          v219 = (v58 & 6) == 2 ? v218 + 4 : v218;
          v220 = v219 + v58;
          v221 = _InterlockedCompareExchange64(v48, v219 + v58, v58);
          if ( v58 == v221 )
            break;
          v58 = v221;
        }
        if ( (v58 & 6) == 2 )
        {
          v118 = v220;
LABEL_166:
          sub_180077520(v48, v118, 0LL);
        }
      }
      else
      {
        while ( 1 )
        {
          v216 = v58 - 16;
          if ( (v58 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
            v216 = 0LL;
          v217 = _InterlockedCompareExchange64(v48, v216, v58);
          v75 = v58 == v217;
          v58 = v217;
          if ( v75 )
            break;
          if ( (v217 & 2) != 0 )
            goto LABEL_332;
        }
      }
    }
LABEL_62:
    if ( v52 )
      break;
    LODWORD(v258) = 2;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v48);
    v47 = v270;
    v45 = 2;
  }
  v59 = v52 + 48;
  v60 = 2LL * *(unsigned __int16 *)(v52 + 34);
  v61 = byte_180123520[*(unsigned __int8 *)(v56 + 1)];
  v62 = ((unsigned int)v52 >> 12) ^ *(_DWORD *)(v52 + 40);
  LODWORD(v258) = (unsigned int)v52 >> 12;
  v63 = qword_18015BFE8 ^ v62;
  v64 = (unsigned __int16)v63;
  v262 = v63;
  v65 = (unsigned int)Size < (unsigned __int16)v63;
  v66 = NtCurrentTeb();
  v67 = 1LL;
  if ( v65 )
    v67 = 3LL;
  v261 = v64;
  j = v67;
  v68 = HIWORD(v66->HeapData);
  HIWORD(v66->HeapData) = (unsigned __int8)(v68 + 1);
  v69 = *((unsigned __int8 *)qword_180159900 + v68);
  v70 = (volatile signed __int64 *)(v59 + 8 * ((2 * (unsigned __int64)*(unsigned __int16 *)(v52 + 36)) >> 6));
  v71 = v59 + 8 * ((v60 - 1) >> 6);
  v270 = v71;
LABEL_66:
  if ( v60 < 0x40 )
  {
    v72 = *v70;
    if ( (unsigned int)v60 < v61 )
      v61 = v60;
  }
  else
  {
    while ( 1 )
    {
      v72 = *v70;
      if ( (*v70 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      if ( v70 == (volatile signed __int64 *)v71 )
        v70 = (volatile signed __int64 *)(v52 + 48);
      else
        ++v70;
    }
    if ( v70 == (volatile signed __int64 *)v71 && (v60 & 0x3F) != 0 && (v60 & 0x3F) < v61 )
      v61 = v60 & 0x3F;
  }
  v69 = ((v61 * v69) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    if ( v61 < 0x40 )
    {
      _BitScanForward64(&v110, ~v72 & 0x5555555555555555LL);
      v69 += v110;
      v73 = (((1LL << v61) - 1) << v110) & 0x5555555555555555LL;
    }
    else
    {
      v73 = 0x5555555555555555LL;
    }
    _BitScanForward64(&v74, __ROR8__(v73 & ~v72, v69));
    v279 = ((_BYTE)v69 + (_BYTE)v74) & 0x3F;
    v76 = _InterlockedCompareExchange64(v70, v72 | (j << v279), v72);
    v75 = v72 == v76;
    v72 = v76;
    if ( v75 )
      break;
    if ( (v76 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      v71 = v270;
      if ( (unsigned __int64)++v70 > v270 )
        v70 = (volatile signed __int64 *)(v52 + 48);
      goto LABEL_66;
    }
  }
  v77 = v261;
  v78 = v258;
  v79 = HIWORD(v262);
  v80 = (v279 + ((unsigned int)(((__int64)v70 - v52 - 48) >> 3) << 6)) >> 1;
  v81 = v80 * v261;
  v274 = v80;
  *(_WORD *)(v52 + 36) = v80;
  v82 = v79 + v81;
  v259 = v82;
  if ( *(_BYTE *)(v52 + 45) > 1u )
  {
    v83 = *(_BYTE *)(v52 + 44);
    v84 = qword_18015BFE8 ^ v78 ^ *(_WORD *)(v52 + 40);
    v85 = v82 >> v83;
    v86 = v52 + *(unsigned __int16 *)(v52 + 46);
    v265 = 0;
    v87 = (signed __int16 *)(v86 + 2 * v85);
    _m_prefetchw(v87);
    LODWORD(v270) = v84;
    LODWORD(j) = 0;
    v88 = &v87[((v82 + v84 - 1) >> v83) - (unsigned int)v85 + 1];
    if ( v87 < v88 )
    {
      v89 = (unsigned __int64)v88;
      v90 = (__int64)v87 - v86;
      v91 = -1;
      do
      {
        while ( 1 )
        {
          v92 = *v87;
          while ( v92 > 0 )
          {
            v93 = v92;
            v92 = _InterlockedCompareExchange16(v87, v92 + 1, v92);
            if ( v93 == v92 )
            {
              v94 = v265;
              goto LABEL_80;
            }
          }
          v94 = v265;
          if ( v265 )
            break;
          v265 = 1;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v52 + 24));
        }
        if ( v92 == -1 )
        {
          j = v90 >> 1;
          if ( v91 == -1 )
            v91 = v90 >> 1;
        }
        *v87 = v92 + 1;
LABEL_80:
        ++v87;
        v90 += 2LL;
      }
      while ( (unsigned __int64)v87 < v89 );
      v95 = v91;
      v6 = (unsigned __int64)BaseAddress;
      v5 = a2;
      if ( (_DWORD)v95 == -1 )
      {
        if ( v94 )
        {
          v190 = (volatile signed __int64 *)(v52 + 24);
          v191 = _InterlockedCompareExchange64((volatile signed __int64 *)(v52 + 24), 0LL, 1LL);
          if ( v191 != 1 )
          {
            do
            {
              v192 = 3LL;
              v193 = v191 & 6;
              if ( v193 != 2 )
                v192 = -1LL;
              v194 = v191 + v192;
              v195 = v191;
              v191 = _InterlockedCompareExchange64(v190, v194, v191);
            }
            while ( v195 != v191 );
            if ( v193 == 2 )
              sub_180077520(v190, v194, 0LL);
          }
        }
        goto LABEL_83;
      }
      v196 = *(_BYTE *)(v52 + 44);
      v197 = (NTSTATUS (__fastcall *)(volatile signed __int64 *, __int64, unsigned int))(qword_18015BFA8 ^ (unsigned __int64)(BaseAddress + 72) ^ *((_QWORD *)BaseAddress + 39));
      v198 = (unsigned int)(j - v95 + 1);
      v199 = v52 + (unsigned int)((_DWORD)v95 << v196);
      v200 = (unsigned int)(((_DWORD)j - (_DWORD)v95 + 1) << v196);
      v201 = (volatile signed __int64 *)*((_QWORD *)BaseAddress + 36);
      if ( v197 == sub_180020D20 )
        v202 = sub_180020D20(v201, v199, v200);
      else
        v202 = v197(v201, v199, v200);
      v289 = v202;
      if ( v202 < 0 )
      {
        sub_18001E4DC(v52, v259, v270);
        v206 = v289;
      }
      else
      {
        v203 = (unsigned __int64)(2 * v198 + 1) >> 1;
        v204 = (_WORD *)(v52 + *(unsigned __int16 *)(v52 + 46) + 2 * v95);
        v205 = 0LL;
        if ( v204 > &v204[v198] )
          v203 = 0LL;
        if ( v203 )
        {
          do
          {
            if ( !*v204 )
              *v204 = 1;
            ++v204;
            ++v205;
          }
          while ( v205 < v203 );
        }
        v206 = 0;
      }
      v207 = (volatile signed __int64 *)(v52 + 24);
      v208 = _InterlockedCompareExchange64((volatile signed __int64 *)(v52 + 24), 0LL, 1LL);
      if ( v208 != 1 )
      {
        do
        {
          v235 = 3LL;
          v236 = v208 & 6;
          if ( v236 != 2 )
            v235 = -1LL;
          v237 = v208 + v235;
          v238 = v208;
          v208 = _InterlockedCompareExchange64(v207, v237, v208);
        }
        while ( v238 != v208 );
        if ( v236 == 2 )
          sub_180077520(v207, v237, 0LL);
      }
      if ( v206 < 0 )
      {
        v15 = 0LL;
        if ( (_DWORD)v274 != -1 )
          _InterlockedAnd64(
            (volatile signed __int64 *)(v52 + 8 * ((unsigned __int64)(unsigned int)(2 * v274) >> 6) + 48),
            ~(3LL << ((2 * v274) & 0x3F)));
        v30 = Size;
        goto LABEL_87;
      }
LABEL_83:
      v78 = v258;
      v82 = v259;
      v77 = v261;
    }
  }
  v30 = Size;
  v15 = v52 + v82;
  if ( (unsigned int)Size < v77 )
  {
    v96 = v77 - Size;
    v97 = (unsigned __int16)qword_18015BFE8 ^ v78 ^ (unsigned __int64)*(unsigned __int16 *)(v52 + 40);
    *(_BYTE *)(v97 + v15 - 1) = 0;
    if ( v96 == 1 )
    {
      *(_WORD *)(v97 + v15 - 2) |= 0x8000u;
    }
    else
    {
      *(_WORD *)(v97 + v15 - 2) &= 0xC000u;
      *(_WORD *)(v97 + v15 - 2) |= v96 & 0x3FFF;
    }
  }
LABEL_87:
  if ( v15 )
  {
    v98 = v6 + 288;
  }
  else
  {
    v248 = v52;
    v98 = v6 + 288;
    sub_18001E250((_QWORD *)(v6 + 288), v248, 0LL, v257);
  }
  v99 = v260;
LABEL_90:
  if ( v266 )
  {
    sub_180080558(v98, v263);
    v99 = v260;
  }
  if ( v99 )
    sub_18001F6A8(v98, v263, (__int64)v99, v257);
  if ( v15 )
  {
    v33 = v257;
    if ( (v257 & 2) == 0 )
    {
      v29 = v267;
      goto LABEL_97;
    }
    memset((void *)v15, 0, (unsigned int)v30);
  }
  v29 = v267;
  v33 = v257;
LABEL_97:
  if ( v15 == -1 )
  {
    v32 = v273;
LABEL_171:
    if ( v32 > 0x20000 )
    {
      if ( v32 > 0x7F000 )
        v229 = sub_180009164((char *)v6, v30, v32, v33);
      else
        v229 = sub_18001EFB4((PVOID)v6, v30, v32, v33);
      v15 = (__int64)v229;
      goto LABEL_199;
    }
    v267 = v32;
    v121 = v32;
    v122 = v6 + 176;
    if ( (_DWORD)v30 != (_DWORD)v32 )
    {
      v121 = v32 + 2;
      v267 = v32 + 2;
    }
    v123 = ((unsigned int)(v121 + 15) >> 4) + 1;
    v124 = v33 & 1;
    v266 = v123;
    v288 = v124;
    if ( (v33 & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 176));
      v123 = v266;
      v122 = v6 + 176;
      v124 = 0;
    }
    v125 = v123 << 16;
    while ( 1 )
    {
      v126 = 0LL;
      v127 = *(_QWORD *)(v122 + 8);
      v128 = *(_BYTE *)(v122 + 16) & 1;
      v263 = 0LL;
      while ( v127 )
      {
        v129 = qword_18015BFA8 ^ (v127 - 8) ^ *(_DWORD *)(v127 - 8);
        if ( v125 < v129 )
          v130 = -1;
        else
          v130 = v125 > v129;
        if ( !v130 )
          goto LABEL_187;
        if ( v130 < 0 )
        {
          v131.Ptr = *(PVOID *)v127;
          v126 = (_RTL_SRWLOCK *)v127;
          v263 = (_RTL_SRWLOCK *)v127;
          if ( v128 && v131.Ptr )
          {
            v127 ^= (unsigned __int64)v131.Ptr;
            continue;
          }
        }
        else
        {
          v131.Ptr = *(PVOID *)(v127 + 8);
          if ( v128 && v131.Ptr )
          {
            v126 = v263;
            v127 ^= (unsigned __int64)v131.Ptr;
            continue;
          }
          v126 = v263;
        }
        v127 = (unsigned __int64)v131.Ptr;
      }
      v127 = (unsigned __int64)v126;
LABEL_187:
      if ( v127 )
        break;
      if ( !v124 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v122);
        v122 = v6 + 176;
      }
      v274 = sub_180009E2C(v122, v267, v257);
      v226 = (_QWORD *)v274;
      if ( !v274 )
      {
        v15 = 0LL;
        goto LABEL_199;
      }
      if ( !v288 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 176));
        v226 = (_QWORD *)v274;
      }
      if ( (*(_DWORD *)(v6 + 280) & 0x8000000) == 0 )
      {
        v227 = *(_QWORD **)(v6 + 208);
        if ( *v227 != v6 + 200 )
          __fastfail(3u);
        *v226 = v6 + 200;
        v226[1] = v227;
        *v227 = v226;
        *(_QWORD *)(v6 + 208) = v226;
      }
      sub_180009BD0(v6 + 176, (__int64)v226, (__int64)(v226 + 6));
      v124 = v288;
      v122 = v6 + 176;
    }
    v132 = v127 - 8;
    v133 = HIDWORD(*(_QWORD *)(v127 - 8));
    v134 = HIDWORD(qword_18015BFA8) ^ HIDWORD(*(_QWORD *)(v127 - 8));
    v274 = v127 - 8;
    v135 = (_RTL_SRWLOCK *)(v127 - 8);
    v136 = HIDWORD(v135) ^ v134;
    if ( (v136 & 0xFF0000) != 0 )
    {
      v137 = (unsigned __int8)(qword_18015BFA8 ^ v132 ^ *(_BYTE *)(v132 + 8));
    }
    else if ( (_WORD)v136 )
    {
      v135 -= 2 * (unsigned __int16)(WORD2(v135) ^ WORD2(qword_18015BFA8) ^ v133);
      v137 = (unsigned __int8)(qword_18015BFA8 ^ (unsigned __int8)v135 ^ LOBYTE(v135[1].Ptr));
    }
    else
    {
      v137 = 0;
    }
    v138 = ((unsigned __int64)v135 - (unsigned int)(v137 << 12)) & 0xFFFFFFFFFFFFF000uLL;
    if ( (*(_WORD *)(v138 + 34) ^ 0xABED) == *(_WORD *)(v138 + 32) )
    {
      if ( (unsigned int)sub_180029050(v122, v138, v132, v266, v257) )
      {
        v15 = v132 + 16;
        v139 = 16 * ((WORD1(qword_18015BFA8) ^ WORD1(v274) ^ *(unsigned __int16 *)(v274 + 2)) - 1);
        if ( (unsigned int)v30 >= (unsigned int)v139 )
        {
          *(_DWORD *)(v274 + 8) &= ~0x100u;
        }
        else
        {
          *(_DWORD *)(v274 + 8) |= 0x100u;
          *(_BYTE *)(v139 + v15 - 1) = 0;
          if ( (_DWORD)v139 - (_DWORD)v30 == 1 )
          {
            *(_WORD *)((unsigned int)v139 + v15 - 2) |= 0x8000u;
          }
          else
          {
            *(_WORD *)((unsigned int)v139 + v15 - 2) &= 0xE000u;
            *(_WORD *)((unsigned int)v139 + v15 - 2) |= (v139 - v30) & 0x1FFF;
          }
        }
        if ( !v288 )
        {
          v140 = (volatile signed __int64 *)(v6 + 176);
          v141 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 176), 0LL, 1LL);
          if ( v141 != 1 )
          {
            do
            {
              v222 = 3LL;
              v223 = v141 & 6;
              if ( v223 != 2 )
                v222 = -1LL;
              v224 = v141 + v222;
              v225 = v141;
              v141 = _InterlockedCompareExchange64(v140, v224, v141);
            }
            while ( v225 != v141 );
            v5 = a2;
            if ( v223 == 2 )
              sub_180077520(v140, v224, 0LL);
          }
        }
        if ( (v257 & 2) != 0 )
        {
          memset((void *)v15, 0, (unsigned int)v30);
          v100 = 3;
          goto LABEL_99;
        }
        goto LABEL_199;
      }
    }
    else
    {
      sub_1800A4DFC(17, *(_QWORD *)(v122 + 56), v138, v132, 0LL, 0LL);
    }
    v15 = 0LL;
    if ( !v288 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v6 + 176));
LABEL_199:
    v100 = 3;
    goto LABEL_99;
  }
  v100 = 2;
  v277 = 2LL;
LABEL_99:
  if ( v15 && (v29 & 0x30000F08) != 0 )
  {
    v101 = v272;
    if ( (v29 & 0x10000000) != 0 )
    {
      *(_QWORD *)(v15 + v30) = 0xABABABABABABABABuLL;
      *(_QWORD *)(v15 + v30 + 8) = 0xABABABABABABABABuLL;
    }
    v102 = 0LL;
    if ( (v29 & 0x20000F08) != 0 )
    {
      v103 = v15 + Size;
      if ( (v29 & 0x10000000) != 0 )
        v103 += 16LL;
      v102 = (v103 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)v102 = 0LL;
      *(_QWORD *)(v102 + 8) = 0LL;
      *(_BYTE *)(v102 + 2) &= 0xFu;
      *(_BYTE *)(v102 + 2) |= 16 * (BYTE1(v29) & 0xFE);
      *(_BYTE *)(v102 + 3) = v101 >> 4;
      *(_WORD *)v102 = a4;
      _InterlockedOr(v255, 0);
      if ( !(_WORD)v15 && (unsigned int)sub_1800588D4(&stru_180159600) )
      {
        sub_180008F44((_RTL_SRWLOCK *)v6, v15, v29);
        goto LABEL_120;
      }
      if ( (dword_180158684 & 1) != 0 )
      {
        v104 = sub_180100D30(v6, v15);
      }
      else if ( (v6 ^ qword_18015BFA8 ^ *(_QWORD *)((v15 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((v15 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
      {
        v104 = (v15 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((v15 - (v15 & 0xFFFFFFFFFFF00000uLL)) >> 12);
      }
      else
      {
        v104 = 0LL;
      }
      if ( v104 && (*(_BYTE *)(v104 + 24) & 4) != 0 )
      {
        if ( (*(_BYTE *)(v104 + 24) & 8) != 0 )
        {
          if ( (*(_BYTE *)(v104 + 24) & 0x21) != 0
            || v15 == (v104 & 0xFFFFFFFFFFF00000uLL) + (((unsigned int)(v104 >> 5) & 0x7FFF) << 12) )
          {
            goto LABEL_116;
          }
        }
        else
        {
          v104 += -32LL * *(unsigned __int8 *)(v104 + 27);
          if ( (*(_BYTE *)(v104 + 24) & 4) != 0
            && (*(_BYTE *)(v104 + 24) & 8) != 0
            && (*(_BYTE *)(v104 + 24) & 0x21) != 0 )
          {
            goto LABEL_116;
          }
        }
      }
      v104 = 0LL;
LABEL_116:
      if ( (*(_BYTE *)(v104 + 24) & 0x21) != 0 )
      {
        if ( (*(_BYTE *)(v104 + 24) & 1) != 0 )
        {
          v105 = (v104 & 0xFFFFFFFFFFF00000uLL)
               + ((unsigned int)((__int64)(v104 - (v104 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
          v106 = (unsigned __int16)qword_18015BFE8 ^ *(unsigned __int16 *)(v105 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v105 >> 12);
        }
        else
        {
          v106 = 16 * (WORD1(qword_18015BFA8) ^ ((unsigned int)(v15 - 16) >> 16) ^ *(unsigned __int16 *)(v15 - 14)) - 16;
        }
        *(_WORD *)(v106 + v15 - 2) |= 0x4000u;
      }
      else
      {
        *(_WORD *)(v104 + 4) |= 1u;
      }
    }
LABEL_120:
    v107 = v276;
    if ( v276 )
    {
      *(_BYTE *)(v102 + 2) &= 0xF0u;
      *(_BYTE *)(v102 + 2) |= v107 & 0xF;
      if ( (dword_180158684 & 2) != 0 )
      {
        if ( (_WORD)v15 || (v250 = sub_1800588D4(&stru_180159600), v249 = v15, !v250) )
          v249 = v15 + 16;
      }
      else
      {
        v249 = v15;
      }
      if ( (int)sub_180095A28(v107, v6, v249, 2, v102 + 16) < 0 )
      {
        RtlFreeHeap((PVOID)v6, 0, (PVOID)v15);
        v15 = 0LL;
      }
    }
    v100 = v277;
  }
  v32 = v273;
LABEL_123:
  v25 = v264;
LABEL_124:
  v108 = NtCurrentPeb()->SharedData;
  if ( v108 && v108->ServiceSessionId )
    v109 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v109 = 2147353472LL;
  if ( *(_BYTE *)v109 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FF7B0(v6, v15, v32, v100);
  if ( v15 )
  {
    if ( (dword_180158684 & 2) != 0 && ((_WORD)v15 || !(unsigned int)sub_1800588D4(&stru_180159600)) )
      v15 += 16LL;
    if ( (dword_18015C2A8 & 1) != 0
      && (dword_18015C2A8 & 2) != 0
      && (PVOID)v6 != qword_18015BFE0
      && NtCurrentPeb()->ProcessHeap )
    {
LABEL_517:
      sub_1800FE3D0(v6, v15);
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v251 = NtCurrentTeb();
    v251->LastErrorValue = RtlNtStatusToDosError(-1073741801);
    if ( (v25 | *(_DWORD *)(v6 + 20)) < 0 )
      sub_1800F2264(v5);
  }
  return v15;
}
