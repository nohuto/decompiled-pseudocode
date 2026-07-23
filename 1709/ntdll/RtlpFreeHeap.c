/*
 * XREFs of RtlpFreeHeap @ 0x18003AD60
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x1800094B4 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18000955C (RtlpFindEntry.c)
 *     RtlLogStackBackTraceEx @ 0x180009C98 (RtlLogStackBackTraceEx.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180039B00 (RtlpInsertFreeBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpCommitBlock @ 0x18004A2F4 (RtlpCommitBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18004A630 (RtlpSecMemFreeVirtualMemory.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18006F920 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpUpdateHeapRates @ 0x18007EED4 (RtlpUpdateHeapRates.c)
 *     RtlpUpdateHeapWatermarks @ 0x180089AD8 (RtlpUpdateHeapWatermarks.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18009F950 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A46C0 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E6AE0 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x1800F0F20 (RtlpUpdateTagEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x1800FFA98 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x18010148C (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x1801016FC (RtlpLogHeapFreeEvent.c)
 *     RtlDebugFreeHeap @ 0x180103A6C (RtlDebugFreeHeap.c)
 *     RtlpBreakPointHeap @ 0x180104C08 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlpFreeHeap(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  char v5; // r15
  int v7; // edi
  __int64 v8; // r8
  _DWORD *SharedData; // rcx
  __int64 v10; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  struct _TEB *v14; // rax
  signed __int8 v15; // cf
  void *UniqueThread; // rax
  __int64 **v17; // rcx
  _BYTE *v18; // r8
  char v19; // al
  unsigned __int16 *v20; // r14
  unsigned __int16 v21; // ax
  _WORD *v22; // rdx
  bool v23; // zf
  int v24; // r8d
  int v25; // edx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  __int64 v28; // r15
  _QWORD *v29; // r8
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 *v32; // rdi
  __int64 *v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned int v35; // ecx
  int v36; // r12d
  unsigned int v37; // r14d
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rdx
  _QWORD *v41; // r11
  unsigned int v42; // eax
  __int64 v43; // r13
  int v44; // eax
  __int64 v45; // rax
  __int64 *v46; // rcx
  char v47; // al
  SIZE_T v48; // rdi
  SIZE_T v49; // rsi
  __int64 v50; // r15
  _QWORD *v51; // r8
  __int64 *v52; // r11
  __int64 v53; // rax
  __int64 v54; // r9
  __int64 *v55; // rdi
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  unsigned int v58; // ecx
  int v59; // r12d
  unsigned int v60; // r14d
  __int64 v61; // rax
  __int64 v62; // r13
  _QWORD *v63; // rdx
  _QWORD *v64; // r9
  unsigned int v65; // eax
  __int64 v66; // r15
  int v67; // eax
  __int64 *v68; // rax
  char v69; // al
  SIZE_T v70; // rdi
  SIZE_T v71; // r14
  unsigned int v72; // edi
  unsigned __int64 v73; // rdi
  _QWORD *v74; // rax
  __int64 *v75; // r12
  unsigned __int64 v76; // rcx
  unsigned int v77; // r15d
  __int64 v78; // r15
  _QWORD *v79; // r14
  _QWORD *v80; // r13
  _QWORD *v81; // rax
  int v82; // r8d
  int v83; // eax
  __int64 v84; // r8
  int v85; // eax
  _QWORD *i; // rdi
  int v87; // eax
  __int64 v88; // rdi
  unsigned int v89; // r9d
  unsigned int *v90; // r8
  unsigned int v91; // edx
  int v92; // eax
  __int64 v93; // rdi
  int v94; // ecx
  unsigned __int16 v95; // ax
  __int64 *v96; // rdi
  __int64 *v97; // rax
  __int64 *v98; // r14
  __int64 *v99; // rdx
  unsigned __int64 v100; // rcx
  unsigned int v101; // ecx
  int v102; // r12d
  unsigned int v103; // r15d
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // r13
  int v107; // eax
  unsigned __int64 v108; // r14
  _DWORD *v109; // r8
  unsigned __int64 v110; // rdx
  _QWORD *v111; // rdi
  _QWORD *Entry; // r8
  int v113; // ecx
  unsigned __int16 v114; // ax
  _QWORD *v115; // r14
  __int64 *v116; // rax
  __int64 v117; // rdx
  unsigned __int64 v118; // rdi
  unsigned __int64 v119; // rcx
  __int64 v120; // rcx
  unsigned __int64 v121; // rdi
  unsigned __int64 v122; // rsi
  __int64 v123; // rax
  __int64 *v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // r9
  __int64 v127; // r8
  __int64 v128; // rdi
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rdi
  __int64 v132; // rcx
  unsigned int v133; // edx
  unsigned __int64 v134; // rcx
  __int64 v135; // rdi
  signed __int32 v136; // ebx
  __int64 DeferredCriticalSectionEvent; // r8
  int v138; // edx
  signed __int32 v139; // eax
  char v140; // [rsp+48h] [rbp-1E0h]
  char v141; // [rsp+49h] [rbp-1DFh]
  __int16 updated; // [rsp+4Ch] [rbp-1DCh]
  unsigned __int64 v143; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v144; // [rsp+58h] [rbp-1D0h]
  __int64 *v145; // [rsp+60h] [rbp-1C8h]
  int v146[2]; // [rsp+68h] [rbp-1C0h]
  unsigned __int8 v147; // [rsp+70h] [rbp-1B8h]
  unsigned __int16 v148; // [rsp+72h] [rbp-1B6h]
  unsigned __int16 v149; // [rsp+74h] [rbp-1B4h]
  __int64 *v150; // [rsp+78h] [rbp-1B0h]
  unsigned int v151; // [rsp+80h] [rbp-1A8h]
  unsigned int v152; // [rsp+84h] [rbp-1A4h]
  unsigned int v153; // [rsp+88h] [rbp-1A0h]
  unsigned int v154; // [rsp+90h] [rbp-198h]
  __int64 v155; // [rsp+98h] [rbp-190h]
  unsigned __int64 v156; // [rsp+A0h] [rbp-188h] BYREF
  unsigned __int64 v157; // [rsp+A8h] [rbp-180h]
  int v158[2]; // [rsp+B0h] [rbp-178h]
  unsigned int v159; // [rsp+B8h] [rbp-170h]
  int v162; // [rsp+C8h] [rbp-160h]
  int v163; // [rsp+CCh] [rbp-15Ch]
  int v164; // [rsp+D0h] [rbp-158h]
  int v165; // [rsp+D4h] [rbp-154h]
  __int64 v166; // [rsp+D8h] [rbp-150h]
  unsigned int NtGlobalFlag; // [rsp+E0h] [rbp-148h]
  SIZE_T v168; // [rsp+E8h] [rbp-140h]
  unsigned __int64 v169; // [rsp+F0h] [rbp-138h]
  __int64 v170; // [rsp+108h] [rbp-120h]
  SIZE_T v171; // [rsp+110h] [rbp-118h]
  unsigned int *v172; // [rsp+118h] [rbp-110h]
  __int64 v173; // [rsp+120h] [rbp-108h]
  unsigned __int64 v174; // [rsp+128h] [rbp-100h]
  __int64 v175; // [rsp+130h] [rbp-F8h]
  __int64 v176; // [rsp+138h] [rbp-F0h]
  int v177; // [rsp+148h] [rbp-E0h]
  int v178; // [rsp+158h] [rbp-D0h]
  int v179; // [rsp+178h] [rbp-B0h]
  int v180; // [rsp+188h] [rbp-A0h]
  int v181; // [rsp+198h] [rbp-90h]
  int v182; // [rsp+1A8h] [rbp-80h]
  int v183; // [rsp+1B8h] [rbp-70h]
  int v184; // [rsp+1C8h] [rbp-60h]
  int v185; // [rsp+1D8h] [rbp-50h]
  unsigned __int64 v186; // [rsp+1E0h] [rbp-48h]
  struct _TEB *v187; // [rsp+1F0h] [rbp-38h]
  unsigned __int64 v188; // [rsp+240h] [rbp+18h]

  v188 = a3;
  v5 = 1;
  v141 = 1;
  v140 = 0;
  v152 = 1;
  v156 = 0LL;
  updated = 0;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v7 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v7 & 0x7D010F60) != 0 )
  {
    v5 = 0;
    v141 = 0;
    v8 = 4LL;
    if ( (v7 & 0x61000000) != 0 && (v7 & 0x10000000) == 0 )
      return RtlDebugFreeHeap(a1);
  }
  else
  {
    v8 = 3LL;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    v11 = 2147353472LL;
  }
  else
  {
    v11 = 2147353472LL;
    v10 = 2147353472LL;
  }
  if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v12 = v188;
    if ( ((*(_BYTE *)(v188 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
      RtlpLogHeapFreeEvent(a1, a4, v8, a4);
  }
  else
  {
    v12 = v188;
  }
  if ( (v7 & 1) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 352);
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
      if ( *(void **)(v13 + 16) != UniqueThread )
      {
        if ( byte_18015F3E8 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741420;
          v187 = NtCurrentTeb();
          v187->LastErrorValue = RtlNtStatusToDosError(-1073741420);
          v152 = 0;
LABEL_317:
          v72 = 256;
          goto LABEL_318;
        }
        RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
        RtlpUpdateHeapRates(a1, 1LL);
        goto LABEL_25;
      }
      ++*(_DWORD *)(v13 + 12);
    }
    ++*(_DWORD *)(a1 + 584);
LABEL_25:
    v140 = 1;
    v12 = v188;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v188 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v188 + 11) != (*(_BYTE *)(v188 + 8) ^ (unsigned __int8)(*(_BYTE *)(v188 + 9) ^ *(_BYTE *)(v188 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v188);
    }
    v17 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(v188 + 8) < (unsigned __int64)*((unsigned int *)v17 + 2) )
        break;
      v17 = (__int64 **)*v17;
    }
    while ( v17 );
    goto LABEL_36;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v12);
  }
LABEL_36:
  v18 = (_BYTE *)(v12 + 10);
  v19 = *(_BYTE *)(v12 + 10);
  if ( (v19 & 8) != 0 )
    *v18 = v19 & 0xF7;
  if ( *(_BYTE *)(v12 + 15) == 4 )
  {
    v122 = v12 - 48;
    *(_QWORD *)v146 = v122;
    *(_QWORD *)v158 = *(_QWORD *)(v122 + 32);
    v156 = v122 & 0xFFFFFFFFFFFF0000uLL;
    *(_QWORD *)(a1 + 560) -= *(_QWORD *)v158;
    v123 = *(_QWORD *)v122;
    v124 = *(__int64 **)(v122 + 8);
    v125 = *v124;
    v126 = *(_QWORD *)(*(_QWORD *)v122 + 8LL);
    if ( *v124 == v126 && v125 == v122 )
    {
      *v124 = v123;
      *(_QWORD *)(v123 + 8) = v124;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, v122, v126, v125, 0LL);
    }
    if ( !v5 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v127 = *(_QWORD *)(v122 + 32) >> 4;
        v122 = *(_QWORD *)v146;
        RtlpUpdateTagEntry(a1, *(unsigned __int16 *)(*(_QWORD *)v146 + 18LL), v127, 0, 3);
      }
      else
      {
        v122 = *(_QWORD *)v146;
      }
    }
    if ( v140 )
    {
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v140 = 0;
    }
    v128 = *(_QWORD *)(v122 + 40);
    v176 = v128;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v129 = (__int64)NtCurrentPeb()->SharedData + 558;
      LODWORD(v122) = v146[0];
      v128 = v176;
    }
    else
    {
      v129 = 2147353480LL;
    }
    if ( *(_BYTE *)v129 )
      RtlpHeapLogRangeRelease(a1, v156, v128);
    v143 = 0LL;
    RtlpSecMemFreeVirtualMemory(v129, &v156, &v143, 0x8000LL);
    if ( RtlGetCurrentServiceSessionId() )
    {
      v130 = (__int64)NtCurrentPeb()->SharedData + 550;
      LODWORD(v122) = v146[0];
    }
    else
    {
      v130 = 2147353472LL;
    }
    if ( *(_BYTE *)v130 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v11 = (__int64)NtCurrentPeb()->SharedData + 550;
        LODWORD(v122) = v146[0];
        RtlpLogHeapContractEvent(
          a1,
          v146[0],
          v158[0],
          16 * *(_QWORD *)(a1 + 192),
          0,
          0LL,
          (HANDLE)*(unsigned __int8 *)v11);
      }
      else
      {
        LODWORD(v122) = v146[0];
      }
    }
    v131 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v132 = (__int64)NtCurrentPeb()->SharedData + 560;
      LODWORD(v122) = v146[0];
    }
    else
    {
      v132 = 2147353482LL;
    }
    if ( *(_BYTE *)v132 )
    {
      if ( RtlGetCurrentServiceSessionId() )
      {
        v131 = (__int64)NtCurrentPeb()->SharedData + 560;
        LODWORD(v122) = v146[0];
      }
      RtlpLogHeapContractEvent(a1, v122, v158[0], 16 * *(_QWORD *)(a1 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v131);
    }
    goto LABEL_317;
  }
  v20 = (unsigned __int16 *)(v12 + 8);
  v21 = *(_WORD *)(v12 + 8);
  if ( v21 < *(_WORD *)(a1 + 400) )
  {
    if ( ((unsigned __int8)(1 << (v21 & 7)) & *(_BYTE *)(((unsigned __int64)v21 >> 3) + a1 + 402)) == 0 )
    {
      v22 = (_WORD *)(*(_QWORD *)(a1 + 392) + 2LL * *v20);
      if ( *v22 > 1u )
        --*v22;
    }
    v12 = v188;
  }
  if ( !v5 )
  {
    v159 = NtCurrentPeb()->NtGlobalFlag;
    v12 = v188;
    if ( (v159 & 0x800) != 0 )
    {
      v23 = (*v18 & 2) == 0;
      v24 = *v20;
      if ( v23 )
      {
        v147 = *(_BYTE *)(v188 + 11);
        v25 = v147;
      }
      else
      {
        v25 = *(unsigned __int16 *)(v188 + 16LL * *v20 - 14);
      }
      updated = RtlpUpdateTagEntry(a1, v25, v24, 0, 2);
    }
  }
  v26 = *v20;
  v143 = v26;
  if ( *(char *)(a1 + 112) < 0 )
    goto LABEL_152;
  v169 = v12;
  v27 = 16 * (*(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140));
  v28 = v12 - v27;
  if ( v12 - v27 != v12
    && ((*(_BYTE *)(v28 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v28 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v28 + 11) != (*(_BYTE *)(v28 + 8) ^ (unsigned __int8)(*(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v28);
    }
    v29 = (_QWORD *)(v28 + 16);
    v144 = *(_QWORD *)(v28 + 16);
    v150 = *(__int64 **)(v28 + 24);
    v30 = *v150;
    v31 = *(_QWORD *)(v144 + 8);
    if ( *v150 != v31 || (_QWORD *)v30 != v29 )
    {
      RtlpLogHeapFailure(12, a1, (_DWORD)v29, v31, v30, 0LL);
LABEL_99:
      v26 = v143;
      goto LABEL_100;
    }
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v28 + 8);
    v32 = *(__int64 **)(a1 + 312);
    if ( v32 )
    {
      v33 = (__int64 *)*(unsigned __int16 *)(v28 + 8);
      while ( 1 )
      {
        v34 = *((unsigned int *)v32 + 2);
        if ( (unsigned __int64)v33 < v34 )
        {
          v35 = *(unsigned __int16 *)(v28 + 8);
          v166 = *(unsigned __int16 *)(v28 + 8);
          goto LABEL_64;
        }
        if ( !*v32 )
          break;
        v32 = (__int64 *)*v32;
      }
      v35 = v34 - 1;
      v166 = v35;
LABEL_64:
      v36 = (int)v33;
      v145 = v33;
      v37 = v35 - *((_DWORD *)v32 + 6);
      if ( *((_DWORD *)v32 + 3) )
        v38 = 2 * v37;
      else
        v38 = v37;
      v39 = 8 * v38;
      v145 = (__int64 *)(8 * v38);
      v40 = v32[6];
      v41 = *(_QWORD **)(v40 + 8 * v38);
      --*((_DWORD *)v32 + 4);
      v42 = *((_DWORD *)v32 + 2);
      if ( v35 == v42 - 1 )
        --*((_DWORD *)v32 + 5);
      if ( v41 == v29 )
      {
        v153 = v42;
        if ( !*v32 )
          --v42;
        v153 = v42;
        if ( v35 >= v42 )
        {
          if ( *v29 != v32[4] )
          {
            *(_QWORD *)(v40 + v39) = *v29;
            goto LABEL_85;
          }
          *(_QWORD *)(v40 + v39) = 0LL;
        }
        else
        {
          v43 = *v29;
          if ( *v29 != v32[4] )
          {
            v44 = *(_DWORD *)(v43 - 16 + 8);
            v178 = v44;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v178 = v44 ^ *(_DWORD *)(a1 + 136);
              if ( HIBYTE(v178) != ((unsigned __int8)v178 ^ (unsigned __int8)(BYTE1(v178) ^ BYTE2(v178))) )
              {
                RtlpLogHeapFailure(3, a1, v43 - 16, 0, 0LL, 0LL);
                v39 = (__int64)v145;
              }
            }
            if ( !(v36 - (unsigned __int16)v178) )
            {
              *(_QWORD *)(v39 + v32[6]) = v43;
              goto LABEL_85;
            }
          }
          *(_QWORD *)(v39 + v32[6]) = 0LL;
        }
        *(_DWORD *)(v32[5] + 4LL * (v37 >> 5)) &= ~(1 << (v37 & 0x1F));
      }
    }
LABEL_85:
    v45 = v144;
    v46 = v150;
    *v150 = v144;
    *(_QWORD *)(v45 + 8) = v46;
    if ( (*(_BYTE *)(v28 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock((PVOID)a1) )
    {
      v47 = *(_BYTE *)(v28 + 10);
      if ( (v47 & 4) != 0 )
      {
        v48 = 16LL * *(unsigned __int16 *)(v28 + 8) - 32;
        v168 = v48;
        if ( (v47 & 2) != 0 && v48 > 4 )
        {
          v48 -= 4LL;
          v168 = v48;
        }
        v49 = RtlCompareMemoryUlong((PVOID)(v28 + 32), v48, 0xFEEEFEEE);
        if ( v49 != v48 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v28,
            (const void *)(v49 + v28 + 32));
          RtlpBreakPointHeap();
        }
      }
      *(_BYTE *)(v28 + 10) = 0;
      *(_BYTE *)(v28 + 15) = 0;
      v12 = v28;
      v169 = v28;
      v143 += *(unsigned __int16 *)(v28 + 8);
      *(_WORD *)(v28 + 8) = v143;
      *(_WORD *)(v28 + 16 * v143 + 12) = v143 ^ *(_WORD *)(a1 + 140);
    }
    else
    {
      RtlpDeCommitFreeBlock(a1, v28, *(unsigned __int16 *)(v28 + 8), 1);
    }
    goto LABEL_99;
  }
LABEL_100:
  v50 = v12 + 16 * v26;
  v144 = v50;
  if ( !*(_DWORD *)(a1 + 124) )
    goto LABEL_104;
  v184 = *(_DWORD *)(v50 + 8) ^ *(_DWORD *)(a1 + 136);
  if ( HIBYTE(v184) != ((unsigned __int8)v184 ^ (unsigned __int8)(BYTE1(v184) ^ BYTE2(v184))) )
    RtlpLogHeapFailure(3, a1, v12 + 16 * v26, 0, 0LL, 0LL);
  while ( 1 )
  {
    v26 = v143;
LABEL_104:
    if ( ((*(_BYTE *)(v50 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
      break;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v50 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v50 + 11) != (*(_BYTE *)(v50 + 8) ^ (unsigned __int8)(*(_BYTE *)(v50 + 9) ^ *(_BYTE *)(v50 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v50);
    }
    v51 = (_QWORD *)(v50 + 16);
    v52 = *(__int64 **)(v50 + 16);
    v150 = v52;
    v145 = *(__int64 **)(v50 + 24);
    v53 = *v145;
    v54 = v52[1];
    if ( *v145 == v54 && (_QWORD *)v53 == v51 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v50 + 8);
      v55 = *(__int64 **)(a1 + 312);
      if ( v55 )
      {
        v56 = *(unsigned __int16 *)(v50 + 8);
        while ( 1 )
        {
          v57 = *((unsigned int *)v55 + 2);
          if ( v56 < v57 )
          {
            v58 = *(unsigned __int16 *)(v50 + 8);
            v170 = *(unsigned __int16 *)(v50 + 8);
            goto LABEL_116;
          }
          if ( !*v55 )
            break;
          v55 = (__int64 *)*v55;
        }
        v58 = v57 - 1;
        v170 = v58;
LABEL_116:
        v59 = v56;
        v186 = v56;
        v60 = v58 - *((_DWORD *)v55 + 6);
        if ( *((_DWORD *)v55 + 3) )
          v61 = 2 * v60;
        else
          v61 = v60;
        v62 = 8 * v61;
        v63 = (_QWORD *)(8 * v61 + v55[6]);
        v64 = (_QWORD *)*v63;
        --*((_DWORD *)v55 + 4);
        v65 = *((_DWORD *)v55 + 2);
        if ( v58 == v65 - 1 )
          --*((_DWORD *)v55 + 5);
        if ( v64 == v51 )
        {
          v154 = v65;
          if ( !*v55 )
            --v65;
          v154 = v65;
          if ( v58 >= v65 )
          {
            if ( *v51 == v55[4] )
            {
              *v63 = 0LL;
              *(_DWORD *)(v55[5] + 4LL * (v60 >> 5)) &= ~(1 << (v60 & 0x1F));
            }
            else
            {
              *v63 = *v51;
            }
          }
          else
          {
            v66 = *v51;
            if ( *v51 == v55[4] )
              goto LABEL_131;
            v67 = *(_DWORD *)(v66 - 16 + 8);
            v179 = v67;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v179 = v67 ^ *(_DWORD *)(a1 + 136);
              if ( HIBYTE(v179) != ((unsigned __int8)v179 ^ (unsigned __int8)(BYTE1(v179) ^ BYTE2(v179))) )
              {
                RtlpLogHeapFailure(3, a1, v66 - 16, 0, 0LL, 0LL);
                v52 = v150;
              }
            }
            if ( v59 - (unsigned __int16)v179 )
            {
LABEL_131:
              *(_QWORD *)(v55[6] + v62) = 0LL;
              *(_DWORD *)(v55[5] + 4LL * (v60 >> 5)) &= ~(1 << (v60 & 0x1F));
            }
            else
            {
              *(_QWORD *)(v55[6] + v62) = v66;
            }
            v50 = v144;
          }
        }
      }
      v68 = v145;
      *v145 = (__int64)v52;
      v52[1] = (__int64)v68;
      if ( (*(_BYTE *)(v50 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock((PVOID)a1) )
      {
        v69 = *(_BYTE *)(v50 + 10);
        if ( (v69 & 4) != 0 )
        {
          v70 = 16LL * *(unsigned __int16 *)(v50 + 8) - 32;
          v171 = v70;
          if ( (v69 & 2) != 0 && v70 > 4 )
          {
            v70 -= 4LL;
            v171 = v70;
          }
          v71 = RtlCompareMemoryUlong((PVOID)(v50 + 32), v70, 0xFEEEFEEE);
          if ( v71 != v70 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v50,
              (const void *)(v71 + v50 + 32));
            RtlpBreakPointHeap();
          }
        }
        *(_BYTE *)(v12 + 10) = 0;
        *(_BYTE *)(v12 + 15) = 0;
        v143 += *(unsigned __int16 *)(v50 + 8);
        *(_WORD *)(v12 + 8) = v143;
        *(_WORD *)(v12 + 16 * v143 + 12) = v143 ^ *(_WORD *)(a1 + 140);
        v26 = v143;
        break;
      }
      RtlpDeCommitFreeBlock(a1, v50, *(unsigned __int16 *)(v50 + 8), 1);
    }
    else
    {
      RtlpLogHeapFailure(12, a1, (_DWORD)v51, v54, v53, 0LL);
    }
  }
  v188 = v12;
  v5 = v141;
LABEL_152:
  if ( v26 >= *(_QWORD *)(a1 + 176) && v26 + *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 184) )
  {
    RtlpDeCommitFreeBlock(a1, v12, v26, 0);
LABEL_285:
    v72 = 256;
    goto LABEL_318;
  }
  if ( v26 + *(_QWORD *)(a1 + 192) <= *(_QWORD *)(a1 + 184)
    || (v72 = 256, v26 < 0x100)
    || *(_WORD *)(a1 + 140) != *(_WORD *)(v12 + 12) )
  {
    if ( v26 > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v12, v26);
LABEL_277:
      if ( updated )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
          if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
            RtlpAnalyzeHeapFailure(a1, v12);
        }
        *(_BYTE *)(v12 + 10) |= 2u;
        v121 = 16LL * *(unsigned __int16 *)(v12 + 8) + v12;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
          *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        *(_WORD *)(v121 - 4) = updated;
        *(_WORD *)(v121 - 2) = 0;
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
          *(_WORD *)(v121 - 2) = RtlLogStackBackTraceEx(1u);
      }
      goto LABEL_285;
    }
    if ( v5 )
    {
      v73 = (unsigned __int16)v26;
      v144 = (unsigned __int16)v26;
      *(_BYTE *)(v12 + 10) = 0;
      *(_BYTE *)(v12 + 15) = 0;
      v74 = (_QWORD *)(a1 + 336);
      v75 = *(__int64 **)(a1 + 312);
      if ( v75 )
      {
        while ( 1 )
        {
          v76 = *((unsigned int *)v75 + 2);
          if ( (unsigned __int16)v26 < v76 )
          {
            v77 = (unsigned __int16)v26;
            v155 = (unsigned __int16)v26;
            goto LABEL_166;
          }
          if ( !*v75 )
            break;
          v75 = (__int64 *)*v75;
        }
        v77 = v76 - 1;
        v155 = (unsigned int)(v76 - 1);
        while ( 1 )
        {
LABEL_166:
          v78 = v77 - *((_DWORD *)v75 + 6);
          v79 = 0LL;
          v80 = (_QWORD *)v75[4];
          v81 = (_QWORD *)v80[1];
          if ( v80 == v81 )
          {
            v79 = (_QWORD *)v75[4];
          }
          else
          {
            v82 = (_DWORD)v81 - 16;
            v83 = *((_DWORD *)v81 - 2);
            v177 = v83;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v177 = v83 ^ *(_DWORD *)(a1 + 136);
              if ( HIBYTE(v177) != ((unsigned __int8)v177 ^ (unsigned __int8)(BYTE1(v177) ^ BYTE2(v177))) )
                RtlpLogHeapFailure(3, a1, v82, 0, 0LL, 0LL);
            }
            v162 = v73 - (unsigned __int16)v177;
            if ( v162 <= 0 )
            {
              v84 = *v80 - 16LL;
              v85 = *(_DWORD *)(v84 + 8);
              v180 = v85;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v180 = v85 ^ *(_DWORD *)(a1 + 136);
                if ( HIBYTE(v180) != ((unsigned __int8)v180 ^ (unsigned __int8)(BYTE1(v180) ^ BYTE2(v180))) )
                  RtlpLogHeapFailure(3, a1, v84, 0, 0LL, 0LL);
              }
              v163 = v73 - (unsigned __int16)v180;
              if ( v163 > 0 )
              {
                if ( *v75 || (_DWORD)v155 != *((_DWORD *)v75 + 2) - 1 )
                {
                  v88 = (unsigned int)v78 >> 5;
                  v151 = (unsigned int)v78 >> 5;
                  v89 = ((unsigned int)(*((_DWORD *)v75 + 2) - *((_DWORD *)v75 + 6)) >> 5) - 1;
                  v90 = (unsigned int *)(v75[5] + 4 * v88);
                  v172 = v90;
                  v91 = *v90 & ~((1 << (v78 & 0x1F)) - 1);
                  while ( !v91 )
                  {
                    if ( (unsigned int)v88 > v89 )
                    {
                      v12 = v188;
                      goto LABEL_209;
                    }
                    v172 = ++v90;
                    v91 = *v90;
                    LODWORD(v88) = v88 + 1;
                    v151 = v88;
                  }
                  if ( (_WORD)v91 )
                  {
                    if ( (_BYTE)v91 )
                      v92 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v91];
                    else
                      v92 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v91)] + 8;
                  }
                  else if ( (v91 & 0xFF0000) != 0 )
                  {
                    v92 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v91)] + 16;
                  }
                  else
                  {
                    v92 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v91 >> 24] + 24;
                  }
                  v93 = (unsigned int)(v92 + 32 * v88);
                  v151 = v93;
                  if ( *((_DWORD *)v75 + 3) )
                    v93 = (unsigned int)(2 * v93);
                  v79 = *(_QWORD **)(v75[6] + 8 * v93);
                }
                else
                {
                  if ( *((_DWORD *)v75 + 3) )
                    v78 = (unsigned int)(2 * v78);
                  for ( i = *(_QWORD **)(v75[6] + 8 * v78); v80 != i; i = (_QWORD *)*i )
                  {
                    v87 = *((_DWORD *)i - 2);
                    v181 = v87;
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v181 = v87 ^ *(_DWORD *)(a1 + 136);
                      if ( HIBYTE(v181) != ((unsigned __int8)v181 ^ (unsigned __int8)(BYTE1(v181) ^ BYTE2(v181))) )
                        RtlpLogHeapFailure(3, a1, (_DWORD)i - 16, 0, 0LL, 0LL);
                    }
                    v164 = v144 - (unsigned __int16)v181;
                    if ( v164 <= 0 )
                    {
                      v79 = i;
                      break;
                    }
                  }
                }
                v73 = v144;
              }
              else
              {
                v79 = (_QWORD *)*v80;
              }
            }
            else
            {
              v79 = v80;
            }
            v12 = v188;
          }
          if ( v79 )
            break;
LABEL_209:
          v75 = (__int64 *)*v75;
          v77 = *((_DWORD *)v75 + 6);
          v155 = v77;
          v73 = v144;
        }
        v74 = (_QWORD *)(a1 + 336);
      }
      else
      {
        v79 = (_QWORD *)*v74;
      }
      while ( v74 != v79 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v94 = *((_DWORD *)v79 - 2);
          v185 = v94;
          if ( (v94 & *(_DWORD *)(a1 + 124)) != 0 )
            v185 = v94 ^ *(_DWORD *)(a1 + 136);
          v95 = v185;
          v12 = v188;
        }
        else
        {
          v95 = *((_WORD *)v79 - 4);
        }
        v148 = v95;
        if ( v73 <= v95 )
          break;
        v79 = (_QWORD *)*v79;
        v74 = (_QWORD *)(a1 + 336);
      }
      v96 = (__int64 *)(v12 + 16);
      v145 = (__int64 *)(v12 + 16);
      v97 = (__int64 *)v79[1];
      if ( (_QWORD *)*v97 == v79 )
      {
        *v96 = (__int64)v79;
        *(_QWORD *)(v12 + 24) = v97;
        *v97 = (__int64)v96;
        v79[1] = v96;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v79, 0, *v97, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v12 + 8);
      v98 = *(__int64 **)(a1 + 312);
      if ( v98 )
      {
        v99 = (__int64 *)*(unsigned __int16 *)(v12 + 8);
        while ( 1 )
        {
          v100 = *((unsigned int *)v98 + 2);
          if ( (unsigned __int64)v99 < v100 )
          {
            v101 = *(unsigned __int16 *)(v12 + 8);
            v173 = *(unsigned __int16 *)(v12 + 8);
            goto LABEL_229;
          }
          if ( !*v98 )
            break;
          v98 = (__int64 *)*v98;
        }
        v101 = v100 - 1;
        v173 = v101;
LABEL_229:
        v102 = (int)v99;
        v150 = v99;
        v103 = v101 - *((_DWORD *)v98 + 6);
        if ( *((_DWORD *)v98 + 3) )
          v104 = 2 * v103;
        else
          v104 = v103;
        ++*((_DWORD *)v98 + 4);
        v105 = 8 * v104;
        v144 = 8 * v104;
        v106 = *(_QWORD *)(8 * v104 + v98[6]);
        if ( v101 == *((_DWORD *)v98 + 2) - 1 )
          ++*((_DWORD *)v98 + 5);
        if ( !v106 )
          goto LABEL_240;
        v107 = *(_DWORD *)(v106 - 16 + 8);
        v182 = v107;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v182 = v107 ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v182) != ((unsigned __int8)v182 ^ (unsigned __int8)(BYTE1(v182) ^ BYTE2(v182))) )
            RtlpLogHeapFailure(3, a1, v106 - 16, 0, 0LL, 0LL);
          v96 = v145;
          v105 = v144;
        }
        v165 = v102 - (unsigned __int16)v182;
        v12 = v188;
        if ( v165 <= 0 )
LABEL_240:
          *(_QWORD *)(v105 + v98[6]) = v96;
        if ( !v106 )
          *(_DWORD *)(v98[5] + 4LL * (v103 >> 5)) |= 1 << (v103 & 0x1F);
      }
LABEL_274:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
        *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_277;
    }
    v108 = (unsigned __int16)v26;
    *(_BYTE *)(v12 + 10) &= 0xF0u;
    *(_BYTE *)(v12 + 15) = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_252:
      v111 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v108);
      else
        Entry = (_QWORD *)*v111;
      while ( v111 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v113 = *((_DWORD *)Entry - 2);
          v183 = v113;
          if ( (v113 & *(_DWORD *)(a1 + 124)) != 0 )
            v183 = v113 ^ *(_DWORD *)(a1 + 136);
          v114 = v183;
          v12 = v188;
        }
        else
        {
          v114 = *((_WORD *)Entry - 4);
        }
        v149 = v114;
        if ( v108 <= v114 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v115 = (_QWORD *)(v12 + 16);
      v116 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v116 == Entry )
      {
        *v115 = Entry;
        *(_QWORD *)(v12 + 24) = v116;
        *v116 = (__int64)v115;
        Entry[1] = v115;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v116, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v12 + 8);
      v117 = *(_QWORD *)(a1 + 312);
      if ( v117 )
      {
        v118 = *(unsigned __int16 *)(v12 + 8);
        while ( 1 )
        {
          v119 = *(unsigned int *)(v117 + 8);
          if ( v118 < v119 )
          {
            v120 = *(unsigned __int16 *)(v12 + 8);
            goto LABEL_272;
          }
          if ( !*(_QWORD *)v117 )
            break;
          v117 = *(_QWORD *)v117;
        }
        v120 = (unsigned int)(v119 - 1);
LABEL_272:
        v175 = v120;
        RtlpHeapAddListEntry(a1, v117, 1, v12 + 16, v120, v118);
      }
      goto LABEL_274;
    }
    v109 = (_DWORD *)(v12 + 32);
    v174 = v12 + 32;
    v110 = (16 * (unsigned __int64)(unsigned int)v108 - 32) >> 2;
    v157 = v110;
    if ( v110 )
    {
      if ( ((unsigned __int8)v109 & 4) == 0 )
        goto LABEL_249;
      *v109 = -17891602;
      v157 = --v110;
      if ( v110 )
      {
        v109 = (_DWORD *)(v12 + 36);
        v174 = v12 + 36;
LABEL_249:
        memset64(v109, 0xFEEEFEEEFEEEFEEEuLL, v110 >> 1);
        if ( (v110 & 1) != 0 )
          v109[v110 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v12 + 10) |= 4u;
    goto LABEL_252;
  }
  RtlpDeCommitFreeBlock(a1, v12, v26, 0);
LABEL_318:
  if ( v140 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      ++*(_DWORD *)(a1 + 608);
      v133 = *(_DWORD *)(a1 + 616);
      if ( *(_DWORD *)(a1 + 608) > v133 )
      {
        *(_DWORD *)(a1 + 608) = 0;
        v134 = *(_QWORD *)(a1 + 544) - 16LL * *(_QWORD *)(a1 + 192);
        if ( v134 > *(_QWORD *)(a1 + 640) )
          *(_QWORD *)(a1 + 640) = v134;
        *(_QWORD *)(a1 + 648) = v134;
      }
      if ( ++*(_DWORD *)(a1 + 620) >= 0x1000u )
      {
        if ( *(_BYTE *)(a1 + 386) != 2 || *(_DWORD *)(a1 + 624) <= 0x10u )
          v72 = 16;
        if ( *(_DWORD *)(a1 + 612) > v72 && v133 < 0x10000 )
          *(_DWORD *)(a1 + 616) = 2 * v133;
        *(_DWORD *)(a1 + 612) = 0;
        *(_DWORD *)(a1 + 620) = 0;
      }
    }
    v135 = *(_QWORD *)(a1 + 352);
    v23 = (*(_DWORD *)(v135 + 12))-- == 1;
    if ( v23 )
    {
      *(_QWORD *)(v135 + 16) = 0LL;
      v136 = _InterlockedCompareExchange((volatile signed __int32 *)(v135 + 8), -1, -2);
      if ( v136 != -2 )
      {
        if ( (*(_BYTE *)(v135 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v135);
        DeferredCriticalSectionEvent = *(_QWORD *)(v135 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v135);
        do
        {
          v138 = v136 & 2 | 1;
          v139 = _InterlockedCompareExchange((volatile signed __int32 *)(v135 + 8), v138 + v136, v136);
          v23 = v136 == v139;
          v136 = v139;
        }
        while ( !v23 );
        if ( (v138 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v135, DeferredCriticalSectionEvent);
      }
    }
  }
  return v152;
}
