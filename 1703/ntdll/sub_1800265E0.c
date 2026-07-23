/*
 * XREFs of sub_1800265E0 @ 0x1800265E0
 * Callers:
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 * Callees:
 *     sub_18000C1F4 @ 0x18000C1F4 (sub_18000C1F4.c)
 *     sub_18000E614 @ 0x18000E614 (sub_18000E614.c)
 *     sub_18000E6BC @ 0x18000E6BC (sub_18000E6BC.c)
 *     sub_18000F3C8 @ 0x18000F3C8 (sub_18000F3C8.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_18001D350 @ 0x18001D350 (sub_18001D350.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_180021DA4 @ 0x180021DA4 (sub_180021DA4.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800812F8 @ 0x1800812F8 (sub_1800812F8.c)
 *     sub_18008BEF4 @ 0x18008BEF4 (sub_18008BEF4.c)
 *     sub_18009100C @ 0x18009100C (sub_18009100C.c)
 *     sub_1800A4BC0 @ 0x1800A4BC0 (sub_1800A4BC0.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     RtlCompareMemoryUlong @ 0x1800A97E0 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E7490 (RtlpNotOwnerCriticalSection.c)
 *     sub_1800F0F1C @ 0x1800F0F1C (sub_1800F0F1C.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_1800FDEE8 @ 0x1800FDEE8 (sub_1800FDEE8.c)
 *     sub_1800FF8DC @ 0x1800FF8DC (sub_1800FF8DC.c)
 *     sub_1800FFB4C @ 0x1800FFB4C (sub_1800FFB4C.c)
 *     sub_180102310 @ 0x180102310 (sub_180102310.c)
 */

__int64 __fastcall sub_1800265E0(_QWORD *BaseAddress, int a2, _QWORD *a3, __int64 a4)
{
  char v5; // r15
  int v7; // edi
  __int64 v8; // r8
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  struct _TEB *v14; // rax
  signed __int8 v15; // cf
  HANDLE UniqueThread; // rax
  __int64 **v17; // rcx
  _BYTE *v18; // r8
  char v19; // al
  unsigned __int16 *v20; // rdi
  unsigned __int16 v21; // ax
  _WORD *v22; // rdx
  bool v23; // zf
  int v24; // r8d
  int v25; // edx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r15
  _QWORD *v29; // r8
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 *v32; // rdi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  int v35; // r12d
  unsigned int v36; // r14d
  __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // r9
  _QWORD *v40; // r11
  unsigned int v41; // edx
  __int64 v42; // r13
  int v43; // eax
  __int64 *v44; // rax
  __int64 *v45; // rcx
  char v46; // al
  SIZE_T v47; // rdi
  SIZE_T v48; // rsi
  unsigned __int64 v49; // r15
  _QWORD *v50; // r10
  __int64 *v51; // r11
  __int64 v52; // rax
  __int64 v53; // r9
  __int64 *v54; // rdi
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  int v57; // r12d
  unsigned int v58; // r14d
  __int64 v59; // rax
  __int64 v60; // r13
  _QWORD *v61; // r8
  _QWORD *v62; // r9
  unsigned int v63; // edx
  __int64 v64; // r15
  int v65; // eax
  __int64 *v66; // rax
  char v67; // al
  SIZE_T v68; // rdi
  SIZE_T v69; // r14
  unsigned __int64 v70; // rdi
  _QWORD *v71; // rax
  __int64 *v72; // r12
  unsigned __int64 v73; // rcx
  unsigned int v74; // r15d
  __int64 v75; // r15
  _QWORD *v76; // r14
  _QWORD *v77; // r13
  _QWORD *v78; // rax
  int v79; // r8d
  int v80; // eax
  __int64 v81; // r8
  int v82; // eax
  _QWORD *i; // rdi
  int v84; // eax
  __int64 v85; // rdi
  unsigned int v86; // r9d
  unsigned int *v87; // r8
  unsigned int v88; // edx
  int v89; // eax
  __int64 v90; // rdi
  int v91; // ecx
  unsigned __int16 v92; // ax
  _QWORD *v93; // rax
  __int64 *v94; // rcx
  __int64 *v95; // rdi
  unsigned __int64 v96; // rcx
  unsigned __int64 v97; // rdx
  int v98; // r15d
  unsigned int v99; // r14d
  __int64 v100; // rax
  __int64 v101; // r12
  __int64 v102; // r13
  int v103; // eax
  unsigned __int64 v104; // r14
  _DWORD *v105; // r8
  unsigned __int64 v106; // rdx
  _QWORD *v107; // rdi
  _QWORD *v108; // r8
  int v109; // ecx
  unsigned __int16 v110; // ax
  _QWORD *v111; // r14
  __int64 *v112; // rax
  __int64 v113; // rdx
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rdi
  unsigned __int64 v116; // rdi
  unsigned __int64 v117; // rsi
  __int64 v118; // rax
  __int64 *v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // r9
  __int64 v122; // r8
  __int64 v123; // rdi
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rdi
  __int64 v127; // rcx
  unsigned int v128; // edx
  unsigned __int64 v129; // rcx
  char v130; // cl
  __int64 v131; // rdi
  signed __int32 v132; // ebx
  HANDLE v133; // r8
  int v134; // edx
  signed __int32 v135; // eax
  char v136; // [rsp+48h] [rbp-220h]
  char v137; // [rsp+49h] [rbp-21Fh]
  __int16 v138; // [rsp+4Ch] [rbp-21Ch]
  ULONG_PTR v139; // [rsp+50h] [rbp-218h] BYREF
  __int64 v140; // [rsp+58h] [rbp-210h]
  int v141[2]; // [rsp+60h] [rbp-208h]
  unsigned __int8 v142; // [rsp+68h] [rbp-200h]
  unsigned __int16 v143; // [rsp+6Ah] [rbp-1FEh]
  unsigned __int16 v144; // [rsp+6Ch] [rbp-1FCh]
  __int64 *v145; // [rsp+70h] [rbp-1F8h]
  unsigned int v146; // [rsp+78h] [rbp-1F0h]
  unsigned int v147; // [rsp+7Ch] [rbp-1ECh]
  __int64 *v148; // [rsp+80h] [rbp-1E8h]
  int v149; // [rsp+88h] [rbp-1E0h]
  unsigned int v150; // [rsp+90h] [rbp-1D8h]
  unsigned int v151; // [rsp+98h] [rbp-1D0h]
  __int64 v152; // [rsp+A0h] [rbp-1C8h]
  unsigned __int64 v153; // [rsp+A8h] [rbp-1C0h] BYREF
  int v154[2]; // [rsp+B0h] [rbp-1B8h]
  unsigned __int64 v155; // [rsp+B8h] [rbp-1B0h]
  int v156; // [rsp+C8h] [rbp-1A0h]
  int v157; // [rsp+E0h] [rbp-188h]
  int v158; // [rsp+F8h] [rbp-170h]
  int v159; // [rsp+128h] [rbp-140h]
  int v160; // [rsp+140h] [rbp-128h]
  int v161; // [rsp+158h] [rbp-110h]
  int v162; // [rsp+170h] [rbp-F8h]
  ULONG NtGlobalFlag; // [rsp+180h] [rbp-E8h]
  int v164; // [rsp+184h] [rbp-E4h]
  SIZE_T v165; // [rsp+188h] [rbp-E0h]
  unsigned __int64 v166; // [rsp+190h] [rbp-D8h]
  unsigned __int64 v167; // [rsp+1A8h] [rbp-C0h]
  SIZE_T v168; // [rsp+1B0h] [rbp-B8h]
  unsigned int *v169; // [rsp+1B8h] [rbp-B0h]
  unsigned __int64 v170; // [rsp+1C0h] [rbp-A8h]
  unsigned __int64 v171; // [rsp+1C8h] [rbp-A0h]
  unsigned __int64 v172; // [rsp+1D0h] [rbp-98h]
  __int64 v173; // [rsp+1D8h] [rbp-90h]
  ULONG v174; // [rsp+1E0h] [rbp-88h]
  int v177; // [rsp+1F0h] [rbp-78h]
  int v178; // [rsp+1F4h] [rbp-74h]
  int v179; // [rsp+1F8h] [rbp-70h]
  unsigned __int64 v180; // [rsp+200h] [rbp-68h]
  int v181; // [rsp+210h] [rbp-58h]
  __int64 v182; // [rsp+218h] [rbp-50h]
  __int64 v183; // [rsp+228h] [rbp-40h]
  struct _TEB *v184; // [rsp+230h] [rbp-38h]
  _DWORD *v185; // [rsp+280h] [rbp+18h]

  v185 = a3;
  v5 = 1;
  v137 = 1;
  v136 = 0;
  v147 = 1;
  v153 = 0LL;
  v138 = 0;
  if ( BaseAddress == a3 )
  {
    sub_1800A4DFC(9, (_DWORD)BaseAddress, (_DWORD)a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v7 = *((_DWORD *)BaseAddress + 29) | a2;
  if ( (v7 & 0x7D010F60) != 0 )
  {
    v5 = 0;
    v137 = 0;
    v8 = 4LL;
    if ( (v7 & 0x61000000) != 0 && (v7 & 0x10000000) == 0 )
      return sub_18009100C(BaseAddress);
  }
  else
  {
    v8 = 3LL;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
  {
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    v11 = 2147353472LL;
  }
  else
  {
    v11 = 2147353472LL;
    UserModeGlobalLogger = 2147353472LL;
  }
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v12 = (unsigned __int64)v185;
    if ( ((*((unsigned __int8 *)v185 + 10) ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (*((_DWORD *)BaseAddress
                                                                                                + 31) >> 17))) & 8) == 0 )
      sub_1800FFB4C(BaseAddress, a4, v8, a4);
  }
  else
  {
    v12 = (unsigned __int64)v185;
  }
  if ( (v7 & 1) == 0 )
  {
    v13 = BaseAddress[44];
    v14 = NtCurrentTeb();
    v15 = _interlockedbittestandreset((volatile signed __int32 *)(v13 + 8), 0);
    UniqueThread = v14->ClientId.UniqueThread;
    if ( v15 )
    {
      *(_QWORD *)(v13 + 16) = UniqueThread;
      *(_DWORD *)(v13 + 12) = 1;
    }
    else
    {
      if ( *(HANDLE *)(v13 + 16) != UniqueThread )
      {
        if ( byte_18015B388 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741420;
          v184 = NtCurrentTeb();
          v184->LastErrorValue = RtlNtStatusToDosError(-1073741420);
          v147 = 0;
          goto LABEL_311;
        }
        RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)BaseAddress[44]);
        sub_1800812F8(BaseAddress, 1LL);
        goto LABEL_25;
      }
      ++*(_DWORD *)(v13 + 12);
    }
    ++*((_DWORD *)BaseAddress + 146);
LABEL_25:
    v136 = 1;
    v12 = (unsigned __int64)v185;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v185[2] ^= *((_DWORD *)BaseAddress + 34);
      if ( *((_BYTE *)v185 + 11) != (*((_BYTE *)v185 + 8) ^ (unsigned __int8)(*((_BYTE *)v185 + 9) ^ *((_BYTE *)v185 + 10))) )
        sub_1800FDA30(BaseAddress, v185);
    }
    v17 = (__int64 **)BaseAddress[39];
    do
    {
      if ( *((unsigned __int16 *)v185 + 4) < (unsigned __int64)*((unsigned int *)v17 + 2) )
        break;
      v17 = (__int64 **)*v17;
    }
    while ( v17 );
    goto LABEL_36;
  }
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v12 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
      sub_1800FDA30(BaseAddress, v12);
  }
LABEL_36:
  v18 = (_BYTE *)(v12 + 10);
  v19 = *(_BYTE *)(v12 + 10);
  if ( (v19 & 8) != 0 )
    *v18 = v19 & 0xF7;
  if ( *(_BYTE *)(v12 + 15) == 4 )
  {
    v117 = v12 - 48;
    *(_QWORD *)v141 = v117;
    *(_QWORD *)v154 = *(_QWORD *)(v117 + 32);
    v153 = v117 & 0xFFFFFFFFFFFF0000uLL;
    BaseAddress[70] -= *(_QWORD *)v154;
    v118 = *(_QWORD *)v117;
    v119 = *(__int64 **)(v117 + 8);
    v120 = *v119;
    v121 = *(_QWORD *)(*(_QWORD *)v117 + 8LL);
    if ( *v119 == v121 && v120 == v117 )
    {
      *v119 = v118;
      *(_QWORD *)(v118 + 8) = v119;
    }
    else
    {
      sub_1800A4DFC(12, 0, v117, v121, v120, 0LL);
    }
    if ( !v5 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v122 = *(_QWORD *)(v117 + 32) >> 4;
        v117 = *(_QWORD *)v141;
        sub_1800F0F1C((_DWORD)BaseAddress, *(unsigned __int16 *)(*(_QWORD *)v141 + 18LL), v122, 0, 3);
      }
      else
      {
        v117 = *(_QWORD *)v141;
      }
    }
    if ( v136 )
    {
      RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)BaseAddress[44]);
      v136 = 0;
    }
    v123 = *(_QWORD *)(v117 + 40);
    v173 = v123;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v124 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
      LODWORD(v117) = v141[0];
      v123 = v173;
    }
    else
    {
      v124 = 2147353480LL;
    }
    if ( *(_BYTE *)v124 )
      sub_1800FDEE8(BaseAddress, v153, v123);
    v139 = 0LL;
    sub_18001E5E0(v124, (PVOID *)&v153, &v139, 0x8000u);
    if ( RtlGetCurrentServiceSessionId() )
    {
      v125 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      LODWORD(v117) = v141[0];
    }
    else
    {
      v125 = 2147353472LL;
    }
    if ( *(_BYTE *)v125 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v11 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        LODWORD(v117) = v141[0];
        sub_1800FF8DC((int)BaseAddress, v141[0], v154[0], 16 * BaseAddress[24], 0, 0LL, (HANDLE)*(unsigned __int8 *)v11);
      }
      else
      {
        LODWORD(v117) = v141[0];
      }
    }
    v126 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v127 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
      LODWORD(v117) = v141[0];
    }
    else
    {
      v127 = 2147353482LL;
    }
    if ( *(_BYTE *)v127 )
    {
      if ( RtlGetCurrentServiceSessionId() )
      {
        v126 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
        LODWORD(v117) = v141[0];
      }
      sub_1800FF8DC((int)BaseAddress, v117, v154[0], 16 * BaseAddress[24], 0, 0LL, (HANDLE)*(unsigned __int8 *)v126);
    }
    goto LABEL_311;
  }
  v20 = (unsigned __int16 *)(v12 + 8);
  v21 = *(_WORD *)(v12 + 8);
  if ( v21 < *((_WORD *)BaseAddress + 200) )
  {
    if ( ((unsigned __int8)(1 << (v21 & 7)) & *((_BYTE *)BaseAddress + ((unsigned __int64)v21 >> 3) + 402)) == 0 )
    {
      v22 = (_WORD *)(BaseAddress[49] + 2LL * *v20);
      if ( *v22 > 1u )
        --*v22;
    }
    v12 = (unsigned __int64)v185;
  }
  if ( !v5 )
  {
    v174 = NtCurrentPeb()->NtGlobalFlag;
    v12 = (unsigned __int64)v185;
    if ( (v174 & 0x800) != 0 )
    {
      v23 = (*v18 & 2) == 0;
      v24 = *v20;
      if ( v23 )
      {
        v142 = *((_BYTE *)v185 + 11);
        v25 = v142;
      }
      else
      {
        v25 = *((unsigned __int16 *)&v185[4 * *v20 - 3] - 1);
      }
      v138 = sub_1800F0F1C((_DWORD)BaseAddress, v25, v24, 0, 2);
    }
  }
  v26 = *v20;
  v139 = v26;
  if ( *((char *)BaseAddress + 112) < 0 )
    goto LABEL_150;
  v166 = v12;
  v27 = 16 * (*(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*((unsigned __int16 *)BaseAddress + 70));
  v28 = v12 - v27;
  if ( v12 - v27 != v12
    && ((*(_BYTE *)(v28 + 10) ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) == 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v28 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v28 + 11) != (*(_BYTE *)(v28 + 8) ^ (unsigned __int8)(*(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10))) )
        sub_1800FDA30(BaseAddress, v28);
    }
    v29 = (_QWORD *)(v28 + 16);
    v145 = *(__int64 **)(v28 + 16);
    v148 = *(__int64 **)(v28 + 24);
    v30 = *v148;
    v31 = v145[1];
    if ( *v148 != v31 || (_QWORD *)v30 != v29 )
    {
      sub_1800A4DFC(12, (_DWORD)BaseAddress, (_DWORD)v29, v31, v30, 0LL);
LABEL_98:
      v26 = v139;
      goto LABEL_99;
    }
    BaseAddress[24] -= *(unsigned __int16 *)(v28 + 8);
    v32 = (__int64 *)BaseAddress[39];
    if ( v32 )
    {
      v33 = *(unsigned __int16 *)(v28 + 8);
      while ( 1 )
      {
        v34 = *((unsigned int *)v32 + 2);
        if ( v33 < v34 )
          break;
        if ( !*v32 )
        {
          v33 = (unsigned int)(v34 - 1);
          break;
        }
        v32 = (__int64 *)*v32;
      }
      v180 = v33;
      v35 = *(unsigned __int16 *)(v28 + 8);
      v182 = *(unsigned __int16 *)(v28 + 8);
      v36 = v33 - *((_DWORD *)v32 + 6);
      if ( *((_DWORD *)v32 + 3) )
        v37 = 2 * v36;
      else
        v37 = v36;
      v38 = 8 * v37;
      v140 = 8 * v37;
      v39 = v32[6];
      v40 = *(_QWORD **)(v39 + 8 * v37);
      --*((_DWORD *)v32 + 4);
      v41 = *((_DWORD *)v32 + 2);
      if ( (_DWORD)v33 == v41 - 1 )
        --*((_DWORD *)v32 + 5);
      if ( v40 == v29 )
      {
        v150 = v41;
        if ( !*v32 )
          v150 = --v41;
        if ( (unsigned int)v33 >= v41 )
        {
          if ( *v29 != v32[4] )
          {
            *(_QWORD *)(v39 + 8 * v37) = *v29;
            goto LABEL_84;
          }
          *(_QWORD *)(v39 + 8 * v37) = 0LL;
        }
        else
        {
          v42 = *v29;
          if ( *v29 != v32[4] )
          {
            v43 = *(_DWORD *)(v42 - 16 + 8);
            v156 = v43;
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v156 = v43 ^ *((_DWORD *)BaseAddress + 34);
              if ( HIBYTE(v156) != ((unsigned __int8)v156 ^ (unsigned __int8)(BYTE1(v156) ^ BYTE2(v156))) )
              {
                sub_1800A4DFC(3, (_DWORD)BaseAddress, v42 - 16, 0, 0LL, 0LL);
                v38 = v140;
              }
            }
            if ( !(v35 - (unsigned __int16)v156) )
            {
              *(_QWORD *)(v38 + v32[6]) = v42;
              goto LABEL_84;
            }
          }
          *(_QWORD *)(v38 + v32[6]) = 0LL;
        }
        *(_DWORD *)(v32[5] + 4LL * (v36 >> 5)) &= ~(1 << (v36 & 0x1F));
      }
    }
LABEL_84:
    v44 = v145;
    v45 = v148;
    *v148 = (__int64)v145;
    v44[1] = (__int64)v45;
    if ( (*(_BYTE *)(v28 + 10) & 8) == 0 || sub_180021DA4(BaseAddress, v28) )
    {
      v46 = *(_BYTE *)(v28 + 10);
      if ( (v46 & 4) != 0 )
      {
        v47 = 16LL * *(unsigned __int16 *)(v28 + 8) - 32;
        v165 = v47;
        if ( (v46 & 2) != 0 && v47 > 4 )
        {
          v47 -= 4LL;
          v165 = v47;
        }
        v48 = RtlCompareMemoryUlong((PVOID)(v28 + 32), v47, 0xFEEEFEEE);
        if ( v48 != v47 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v28,
            (const void *)(v48 + v28 + 32));
          sub_180102310();
        }
      }
      *(_BYTE *)(v28 + 10) = 0;
      *(_BYTE *)(v28 + 15) = 0;
      v12 = v28;
      v166 = v28;
      v139 += *(unsigned __int16 *)(v28 + 8);
      *(_WORD *)(v28 + 8) = v139;
      *(_WORD *)(v28 + 16 * v139 + 12) = v139 ^ *((_WORD *)BaseAddress + 70);
    }
    else
    {
      sub_18001C798(BaseAddress, v28, *(unsigned __int16 *)(v28 + 8), 1);
    }
    goto LABEL_98;
  }
LABEL_99:
  v49 = v12 + 16 * v26;
  v140 = v49;
  if ( !*((_DWORD *)BaseAddress + 31) )
    goto LABEL_103;
  v162 = *(_DWORD *)(v49 + 8) ^ *((_DWORD *)BaseAddress + 34);
  if ( HIBYTE(v162) != ((unsigned __int8)v162 ^ (unsigned __int8)(BYTE1(v162) ^ BYTE2(v162))) )
    sub_1800A4DFC(3, (_DWORD)BaseAddress, v12 + 16 * v26, 0, 0LL, 0LL);
  while ( 1 )
  {
    v26 = v139;
LABEL_103:
    if ( ((*(_BYTE *)(v49 + 10) ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
      break;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v49 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v49 + 11) != (*(_BYTE *)(v49 + 8) ^ (unsigned __int8)(*(_BYTE *)(v49 + 9) ^ *(_BYTE *)(v49 + 10))) )
        sub_1800FDA30(BaseAddress, v49);
    }
    v50 = (_QWORD *)(v49 + 16);
    v51 = *(__int64 **)(v49 + 16);
    v148 = v51;
    v145 = *(__int64 **)(v49 + 24);
    v52 = *v145;
    v53 = v51[1];
    if ( *v145 == v53 && (_QWORD *)v52 == v50 )
    {
      BaseAddress[24] -= *(unsigned __int16 *)(v49 + 8);
      v54 = (__int64 *)BaseAddress[39];
      if ( v54 )
      {
        v55 = *(unsigned __int16 *)(v49 + 8);
        while ( 1 )
        {
          v56 = *((unsigned int *)v54 + 2);
          if ( v55 < v56 )
            break;
          if ( !*v54 )
          {
            v55 = (unsigned int)(v56 - 1);
            break;
          }
          v54 = (__int64 *)*v54;
        }
        v167 = v55;
        v57 = *(unsigned __int16 *)(v49 + 8);
        v183 = *(unsigned __int16 *)(v49 + 8);
        v58 = v55 - *((_DWORD *)v54 + 6);
        if ( *((_DWORD *)v54 + 3) )
          v59 = 2 * v58;
        else
          v59 = v58;
        v60 = 8 * v59;
        v61 = (_QWORD *)(8 * v59 + v54[6]);
        v62 = (_QWORD *)*v61;
        --*((_DWORD *)v54 + 4);
        v63 = *((_DWORD *)v54 + 2);
        if ( (_DWORD)v55 == v63 - 1 )
          --*((_DWORD *)v54 + 5);
        if ( v62 == v50 )
        {
          v151 = v63;
          if ( !*v54 )
            v151 = --v63;
          if ( (unsigned int)v55 >= v63 )
          {
            if ( *v50 == v54[4] )
            {
              *v61 = 0LL;
              *(_DWORD *)(v54[5] + 4LL * (v58 >> 5)) &= ~(1 << (v58 & 0x1F));
            }
            else
            {
              *v61 = *v50;
            }
          }
          else
          {
            v64 = *v50;
            if ( *v50 == v54[4] )
              goto LABEL_129;
            v65 = *(_DWORD *)(v64 - 16 + 8);
            v158 = v65;
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v158 = v65 ^ *((_DWORD *)BaseAddress + 34);
              if ( HIBYTE(v158) != ((unsigned __int8)v158 ^ (unsigned __int8)(BYTE1(v158) ^ BYTE2(v158))) )
              {
                sub_1800A4DFC(3, (_DWORD)BaseAddress, v64 - 16, 0, 0LL, 0LL);
                v51 = v148;
              }
            }
            if ( v57 - (unsigned __int16)v158 )
            {
LABEL_129:
              *(_QWORD *)(v54[6] + v60) = 0LL;
              *(_DWORD *)(v54[5] + 4LL * (v58 >> 5)) &= ~(1 << (v58 & 0x1F));
            }
            else
            {
              *(_QWORD *)(v54[6] + v60) = v64;
            }
            v49 = v140;
          }
        }
      }
      v66 = v145;
      *v145 = (__int64)v51;
      v51[1] = (__int64)v66;
      if ( (*(_BYTE *)(v49 + 10) & 8) == 0 || sub_180021DA4(BaseAddress, v49) )
      {
        v67 = *(_BYTE *)(v49 + 10);
        if ( (v67 & 4) != 0 )
        {
          v68 = 16LL * *(unsigned __int16 *)(v49 + 8) - 32;
          v168 = v68;
          if ( (v67 & 2) != 0 && v68 > 4 )
          {
            v68 -= 4LL;
            v168 = v68;
          }
          v69 = RtlCompareMemoryUlong((PVOID)(v49 + 32), v68, 0xFEEEFEEE);
          if ( v69 != v68 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v49,
              (const void *)(v69 + v49 + 32));
            sub_180102310();
          }
        }
        *(_BYTE *)(v12 + 10) = 0;
        *(_BYTE *)(v12 + 15) = 0;
        v139 += *(unsigned __int16 *)(v49 + 8);
        *(_WORD *)(v12 + 8) = v139;
        *(_WORD *)(v12 + 16 * v139 + 12) = v139 ^ *((_WORD *)BaseAddress + 70);
        v26 = v139;
        break;
      }
      sub_18001C798(BaseAddress, v49, *(unsigned __int16 *)(v49 + 8), 1);
    }
    else
    {
      sub_1800A4DFC(12, (_DWORD)BaseAddress, v49 + 16, v53, v52, 0LL);
    }
  }
  v185 = (_DWORD *)v12;
  v5 = v137;
LABEL_150:
  if ( (v26 < BaseAddress[22] || v26 + BaseAddress[24] < BaseAddress[23])
    && (v26 + BaseAddress[24] <= BaseAddress[23] || v26 < 0x100 || *((_WORD *)BaseAddress + 70) != *(_WORD *)(v12 + 12)) )
  {
    if ( v26 > 0xFF00 )
    {
      sub_18001D350((unsigned __int64)BaseAddress, v12, v26);
LABEL_271:
      if ( v138 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_DWORD *)(v12 + 8) ^= *((_DWORD *)BaseAddress + 34);
          if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
            sub_1800FDA30(BaseAddress, v12);
        }
        *(_BYTE *)(v12 + 10) |= 2u;
        v116 = 16LL * *(unsigned __int16 *)(v12 + 8) + v12;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
          *(_DWORD *)(v12 + 8) ^= *((_DWORD *)BaseAddress + 34);
        }
        *(_WORD *)(v116 - 4) = v138;
        *(_WORD *)(v116 - 2) = 0;
        if ( (BaseAddress[14] & 0x8000000) != 0 )
          *(_WORD *)(v116 - 2) = sub_18000F3C8(1u);
      }
      goto LABEL_311;
    }
    if ( v5 )
    {
      v70 = (unsigned __int16)v26;
      v140 = (unsigned __int16)v26;
      *(_BYTE *)(v12 + 10) = 0;
      *(_BYTE *)(v12 + 15) = 0;
      v71 = BaseAddress + 42;
      v72 = (__int64 *)BaseAddress[39];
      if ( v72 )
      {
        while ( 1 )
        {
          v73 = *((unsigned int *)v72 + 2);
          if ( (unsigned __int16)v26 < v73 )
          {
            v74 = (unsigned __int16)v26;
            v152 = (unsigned __int16)v26;
            goto LABEL_163;
          }
          if ( !*v72 )
            break;
          v72 = (__int64 *)*v72;
        }
        v74 = v73 - 1;
        v152 = (unsigned int)(v73 - 1);
        while ( 1 )
        {
LABEL_163:
          v75 = v74 - *((_DWORD *)v72 + 6);
          v76 = 0LL;
          v77 = (_QWORD *)v72[4];
          v78 = (_QWORD *)v77[1];
          if ( v77 == v78 )
          {
            v76 = (_QWORD *)v72[4];
          }
          else
          {
            v79 = (_DWORD)v78 - 16;
            v80 = *((_DWORD *)v78 - 2);
            v159 = v80;
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v159 = v80 ^ *((_DWORD *)BaseAddress + 34);
              if ( HIBYTE(v159) != ((unsigned __int8)v159 ^ (unsigned __int8)(BYTE1(v159) ^ BYTE2(v159))) )
                sub_1800A4DFC(3, (_DWORD)BaseAddress, v79, 0, 0LL, 0LL);
            }
            v177 = v70 - (unsigned __int16)v159;
            if ( v177 <= 0 )
            {
              v81 = *v77 - 16LL;
              v82 = *(_DWORD *)(v81 + 8);
              v160 = v82;
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v160 = v82 ^ *((_DWORD *)BaseAddress + 34);
                if ( HIBYTE(v160) != ((unsigned __int8)v160 ^ (unsigned __int8)(BYTE1(v160) ^ BYTE2(v160))) )
                  sub_1800A4DFC(3, (_DWORD)BaseAddress, v81, 0, 0LL, 0LL);
              }
              v178 = v70 - (unsigned __int16)v160;
              if ( v178 > 0 )
              {
                if ( *v72 || (_DWORD)v152 != *((_DWORD *)v72 + 2) - 1 )
                {
                  v85 = (unsigned int)v75 >> 5;
                  v146 = (unsigned int)v75 >> 5;
                  v86 = ((unsigned int)(*((_DWORD *)v72 + 2) - *((_DWORD *)v72 + 6)) >> 5) - 1;
                  v87 = (unsigned int *)(v72[5] + 4 * v85);
                  v169 = v87;
                  v88 = *v87 & ~((1 << (v75 & 0x1F)) - 1);
                  while ( !v88 )
                  {
                    if ( (unsigned int)v85 > v86 )
                    {
                      v12 = (unsigned __int64)v185;
                      goto LABEL_206;
                    }
                    v169 = ++v87;
                    v88 = *v87;
                    LODWORD(v85) = v85 + 1;
                    v146 = v85;
                  }
                  if ( (_WORD)v88 )
                  {
                    if ( (_BYTE)v88 )
                      v89 = (unsigned __int8)byte_180119B00[(unsigned __int8)v88];
                    else
                      v89 = (unsigned __int8)byte_180119B00[BYTE1(v88)] + 8;
                  }
                  else if ( (v88 & 0xFF0000) != 0 )
                  {
                    v89 = (unsigned __int8)byte_180119B00[BYTE2(v88)] + 16;
                  }
                  else
                  {
                    v89 = (unsigned __int8)byte_180119B00[(unsigned __int64)v88 >> 24] + 24;
                  }
                  v90 = (unsigned int)(v89 + 32 * v85);
                  v146 = v90;
                  if ( *((_DWORD *)v72 + 3) )
                    v90 = (unsigned int)(2 * v90);
                  v76 = *(_QWORD **)(v72[6] + 8 * v90);
                }
                else
                {
                  if ( *((_DWORD *)v72 + 3) )
                    v75 = (unsigned int)(2 * v75);
                  for ( i = *(_QWORD **)(v72[6] + 8 * v75); v77 != i; i = (_QWORD *)*i )
                  {
                    v84 = *((_DWORD *)i - 2);
                    v161 = v84;
                    if ( *((_DWORD *)BaseAddress + 31) )
                    {
                      v161 = v84 ^ *((_DWORD *)BaseAddress + 34);
                      if ( HIBYTE(v161) != ((unsigned __int8)v161 ^ (unsigned __int8)(BYTE1(v161) ^ BYTE2(v161))) )
                        sub_1800A4DFC(3, (_DWORD)BaseAddress, (_DWORD)i - 16, 0, 0LL, 0LL);
                    }
                    v179 = v140 - (unsigned __int16)v161;
                    if ( v179 <= 0 )
                    {
                      v76 = i;
                      break;
                    }
                  }
                }
                v70 = v140;
              }
              else
              {
                v76 = (_QWORD *)*v77;
              }
            }
            else
            {
              v76 = v77;
            }
            v12 = (unsigned __int64)v185;
          }
          if ( v76 )
            break;
LABEL_206:
          v72 = (__int64 *)*v72;
          v74 = *((_DWORD *)v72 + 6);
          v152 = v74;
          v70 = v140;
        }
        v71 = BaseAddress + 42;
      }
      else
      {
        v76 = (_QWORD *)*v71;
      }
      while ( v71 != v76 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v91 = *((_DWORD *)v76 - 2);
          v149 = v91;
          if ( (v91 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v149 = v91 ^ *((_DWORD *)BaseAddress + 34);
          v92 = v149;
          v12 = (unsigned __int64)v185;
        }
        else
        {
          v92 = *((_WORD *)v76 - 4);
        }
        v143 = v92;
        if ( v70 <= v92 )
          break;
        v76 = (_QWORD *)*v76;
        v71 = BaseAddress + 42;
      }
      v93 = (_QWORD *)(v12 + 16);
      v148 = (__int64 *)(v12 + 16);
      v94 = (__int64 *)v76[1];
      if ( (_QWORD *)*v94 == v76 )
      {
        *v93 = v76;
        *(_QWORD *)(v12 + 24) = v94;
        *v94 = (__int64)v93;
        v76[1] = v93;
      }
      else
      {
        sub_1800A4DFC(12, 0, (_DWORD)v76, 0, *v94, 0LL);
      }
      BaseAddress[24] += *(unsigned __int16 *)(v12 + 8);
      v95 = (__int64 *)BaseAddress[39];
      if ( v95 )
      {
        v96 = *(unsigned __int16 *)(v12 + 8);
        while ( 1 )
        {
          v97 = *((unsigned int *)v95 + 2);
          if ( v96 < v97 )
            break;
          if ( !*v95 )
          {
            v96 = (unsigned int)(v97 - 1);
            break;
          }
          v95 = (__int64 *)*v95;
        }
        v170 = v96;
        v98 = *(unsigned __int16 *)(v12 + 8);
        v145 = (__int64 *)*(unsigned __int16 *)(v12 + 8);
        v99 = v96 - *((_DWORD *)v95 + 6);
        if ( *((_DWORD *)v95 + 3) )
          v100 = 2 * v99;
        else
          v100 = v99;
        ++*((_DWORD *)v95 + 4);
        v101 = 8 * v100;
        v102 = *(_QWORD *)(8 * v100 + v95[6]);
        if ( (_DWORD)v96 == *((_DWORD *)v95 + 2) - 1 )
          ++*((_DWORD *)v95 + 5);
        if ( !v102 )
          goto LABEL_235;
        v103 = *(_DWORD *)(v102 - 16 + 8);
        v157 = v103;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v157 = v103 ^ *((_DWORD *)BaseAddress + 34);
          if ( HIBYTE(v157) != ((unsigned __int8)v157 ^ (unsigned __int8)(BYTE1(v157) ^ BYTE2(v157))) )
            sub_1800A4DFC(3, (_DWORD)BaseAddress, v102 - 16, 0, 0LL, 0LL);
        }
        v164 = v98 - (unsigned __int16)v157;
        v12 = (unsigned __int64)v185;
        if ( v164 <= 0 )
LABEL_235:
          *(_QWORD *)(v101 + v95[6]) = v148;
        if ( !v102 )
          *(_DWORD *)(v95[5] + 4LL * (v99 >> 5)) |= 1 << (v99 & 0x1F);
      }
LABEL_268:
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
        *(_DWORD *)(v12 + 8) ^= *((_DWORD *)BaseAddress + 34);
      }
      goto LABEL_271;
    }
    v104 = (unsigned __int16)v26;
    *(_BYTE *)(v12 + 10) &= 0xF0u;
    *(_BYTE *)(v12 + 15) = 0;
    if ( (BaseAddress[14] & 0x40) == 0 )
    {
LABEL_247:
      v107 = BaseAddress + 42;
      if ( BaseAddress[39] )
        v108 = (_QWORD *)sub_18000E6BC((__int64)BaseAddress, v104);
      else
        v108 = (_QWORD *)*v107;
      while ( v107 != v108 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v109 = *((_DWORD *)v108 - 2);
          v181 = v109;
          if ( (v109 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v181 = v109 ^ *((_DWORD *)BaseAddress + 34);
          v110 = v181;
          v12 = (unsigned __int64)v185;
        }
        else
        {
          v110 = *((_WORD *)v108 - 4);
        }
        v144 = v110;
        if ( v104 <= v110 )
          break;
        v108 = (_QWORD *)*v108;
      }
      v111 = (_QWORD *)(v12 + 16);
      v112 = (__int64 *)v108[1];
      if ( (_QWORD *)*v112 == v108 )
      {
        *v111 = v108;
        *(_QWORD *)(v12 + 24) = v112;
        *v112 = (__int64)v111;
        v108[1] = v111;
      }
      else
      {
        sub_1800A4DFC(12, 0, (_DWORD)v108, 0, *v112, 0LL);
      }
      BaseAddress[24] += *(unsigned __int16 *)(v12 + 8);
      v113 = BaseAddress[39];
      if ( v113 )
      {
        v114 = *(unsigned __int16 *)(v12 + 8);
        while ( 1 )
        {
          v115 = *(unsigned int *)(v113 + 8);
          if ( v114 < v115 )
            break;
          if ( !*(_QWORD *)v113 )
          {
            v114 = (unsigned int)(v115 - 1);
            break;
          }
          v113 = *(_QWORD *)v113;
        }
        v172 = v114;
        sub_18000E614((__int64)BaseAddress, v113, 1, v12 + 16, v114, *(unsigned __int16 *)(v12 + 8));
      }
      goto LABEL_268;
    }
    v105 = (_DWORD *)(v12 + 32);
    v171 = v12 + 32;
    v106 = (16 * (unsigned __int64)(unsigned int)v104 - 32) >> 2;
    v155 = v106;
    if ( v106 )
    {
      if ( ((unsigned __int8)v105 & 4) == 0 )
        goto LABEL_244;
      *v105 = -17891602;
      v155 = --v106;
      if ( v106 )
      {
        v105 = (_DWORD *)(v12 + 36);
        v171 = v12 + 36;
LABEL_244:
        memset64(v105, 0xFEEEFEEEFEEEFEEEuLL, v106 >> 1);
        if ( (v106 & 1) != 0 )
          v105[v106 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v12 + 10) |= 4u;
    goto LABEL_247;
  }
  sub_18001C798(BaseAddress, v12, v26, 0);
LABEL_311:
  if ( v136 )
  {
    if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) == 0 )
    {
      ++*((_DWORD *)BaseAddress + 152);
      v128 = *((_DWORD *)BaseAddress + 154);
      if ( *((_DWORD *)BaseAddress + 152) > v128 )
      {
        *((_DWORD *)BaseAddress + 152) = 0;
        v129 = BaseAddress[68] - 16LL * BaseAddress[24];
        if ( v129 > BaseAddress[80] )
          BaseAddress[80] = v129;
        BaseAddress[81] = v129;
      }
      if ( ++*((_DWORD *)BaseAddress + 155) >= 0x1000u )
      {
        if ( *((_BYTE *)BaseAddress + 386) != 2 || (v130 = 4, *((_DWORD *)BaseAddress + 156) <= 0x10u) )
          v130 = 8;
        if ( *((_DWORD *)BaseAddress + 153) > (unsigned int)(4096 >> v130) && v128 < 0x10000 )
          *((_DWORD *)BaseAddress + 154) = 2 * v128;
        *((_DWORD *)BaseAddress + 153) = 0;
        *((_DWORD *)BaseAddress + 155) = 0;
      }
    }
    v131 = BaseAddress[44];
    v23 = (*(_DWORD *)(v131 + 12))-- == 1;
    if ( v23 )
    {
      *(_QWORD *)(v131 + 16) = 0LL;
      v132 = _InterlockedCompareExchange((volatile signed __int32 *)(v131 + 8), -1, -2);
      if ( v132 != -2 )
      {
        if ( (*(_BYTE *)(v131 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v131);
        v133 = *(HANDLE *)(v131 + 24);
        if ( !v133 )
          v133 = sub_18000C1F4(v131);
        do
        {
          v134 = v132 & 2 | 1;
          v135 = _InterlockedCompareExchange((volatile signed __int32 *)(v131 + 8), v134 + v132, v132);
          v23 = v132 == v135;
          v132 = v135;
        }
        while ( !v23 );
        if ( (v134 & 2) != 0 )
          sub_1800A4BC0(v131, v133);
      }
    }
  }
  return v147;
}
