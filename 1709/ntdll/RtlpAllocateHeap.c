/*
 * XREFs of RtlpAllocateHeap @ 0x1800437B0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpPerformHeapMaintenance @ 0x180006DA4 (RtlpPerformHeapMaintenance.c)
 *     RtlpHeapAddListEntry @ 0x1800094B4 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18000955C (RtlpFindEntry.c)
 *     RtlLogStackBackTraceEx @ 0x180009C98 (RtlLogStackBackTraceEx.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180039B00 (RtlpInsertFreeBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlpHeapRemoveListEntry @ 0x18004650C (RtlpHeapRemoveListEntry.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180046DE0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpExtendHeap @ 0x1800472B8 (RtlpExtendHeap.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpCommitBlock @ 0x18004A2F4 (RtlpCommitBlock.c)
 *     RtlpGetHeapProtection @ 0x18004B238 (RtlpGetHeapProtection.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x180077C6C (RtlpGetExtraStuffPointer.c)
 *     RtlpGetLFHContext @ 0x180077D74 (RtlpGetLFHContext.c)
 *     RtlpUpdateHeapRates @ 0x18007EED4 (RtlpUpdateHeapRates.c)
 *     RtlpUpdateHeapWatermarks @ 0x180089AD8 (RtlpUpdateHeapWatermarks.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x1800A46C0 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800F0F20 (RtlpUpdateTagEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x1800FFB38 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x1801013E4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180101658 (RtlpLogHeapExtendEvent.c)
 *     RtlDebugAllocateHeap @ 0x180103090 (RtlDebugAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x180104C08 (RtlpBreakPointHeap.c)
 */

void *__fastcall RtlpAllocateHeap(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        __int64 **a5,
        _DWORD *a6)
{
  unsigned int v6; // r14d
  unsigned int v8; // r12d
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // r15
  __int64 v13; // r8
  unsigned int v14; // r10d
  unsigned int *v15; // r9
  unsigned int v16; // edx
  int v17; // eax
  __int64 v18; // r8
  _QWORD *v19; // r13
  struct _TEB *v20; // rax
  signed __int8 v21; // cf
  void *UniqueThread; // rax
  __int64 *k; // rdi
  ULONG_PTR v24; // rax
  unsigned int v25; // esi
  __int64 v26; // rsi
  _QWORD *v27; // r14
  _QWORD *v28; // rax
  int v29; // r8d
  int v30; // eax
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rdi
  ULONG_PTR v34; // rax
  _QWORD *v35; // r8
  __int64 v36; // r10
  __int64 *v37; // r11
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 *v40; // rsi
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned int v43; // edx
  int v44; // r12d
  unsigned int v45; // r14d
  __int64 v46; // rax
  _QWORD *v47; // r13
  _QWORD *v48; // r9
  unsigned int v49; // eax
  unsigned int v50; // ecx
  __int64 v51; // r13
  char *v52; // rsi
  char v53; // r13
  unsigned __int64 v54; // rdx
  ULONG_PTR v55; // r14
  unsigned __int64 v56; // r12
  ULONG_PTR v57; // rcx
  char v58; // r12
  unsigned __int8 v59; // al
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rdi
  unsigned __int64 v64; // rdi
  unsigned __int64 v65; // r13
  _QWORD *v66; // rax
  __int64 *v67; // r15
  unsigned __int64 v68; // rax
  __int64 v69; // r14
  _QWORD *v70; // rdi
  _QWORD *v71; // r12
  _QWORD *v72; // rax
  _QWORD *v73; // r15
  __int64 *v74; // rax
  __int64 *v75; // rdi
  __int64 *v76; // rdx
  unsigned __int64 v77; // rax
  int v78; // ecx
  int v79; // r8d
  unsigned int v80; // r14d
  __int64 v81; // rax
  __int64 v82; // r12
  __int64 v83; // r13
  unsigned __int16 *v84; // rsi
  __int64 v85; // rdi
  int v86; // r8d
  int v87; // eax
  __int64 v88; // r8
  int v89; // eax
  __int64 v90; // rdi
  unsigned int v91; // r9d
  unsigned int *v92; // r8
  unsigned int v93; // edx
  unsigned int v94; // ecx
  int v95; // ecx
  unsigned __int16 v96; // ax
  unsigned __int64 v97; // r14
  char v98; // si
  unsigned __int16 *v99; // rdi
  unsigned __int16 v100; // cx
  __int64 *v101; // rsi
  int v102; // eax
  int v103; // eax
  __int64 v104; // rdi
  unsigned __int64 v105; // rdx
  int v106; // eax
  _QWORD *n; // rsi
  int v108; // eax
  ULONG_PTR v109; // rcx
  _QWORD *v110; // rax
  _QWORD *v111; // r8
  __int64 v112; // rsi
  __int64 *v113; // r14
  __int64 v114; // rax
  __int64 v115; // r9
  __int64 **v116; // rdx
  unsigned __int64 v117; // r9
  unsigned __int64 v118; // rax
  __int64 v119; // rcx
  int v120; // r9d
  _QWORD *j; // r14
  int v122; // eax
  __int64 v123; // r14
  __int64 *v124; // r12
  __int64 v125; // rax
  __int64 v126; // r9
  __int64 **v127; // rdx
  unsigned __int64 v128; // rcx
  unsigned __int64 v129; // rax
  int v130; // r8d
  __int64 v131; // rdx
  __int64 v132; // rcx
  unsigned __int16 LFHContext; // ax
  __int64 v134; // rdi
  ULONG HeapProtection; // esi
  __int64 v136; // rdi
  __int64 v137; // rcx
  __int64 v138; // rcx
  __int64 v139; // rdi
  __int64 v140; // rcx
  _DWORD *v141; // rcx
  unsigned __int64 v142; // r8
  __int64 *v143; // rax
  __int64 v144; // r14
  _QWORD *ExtraStuffPointer; // rdi
  _QWORD *v146; // rdi
  _QWORD *v147; // r8
  int v148; // ecx
  unsigned __int16 v149; // ax
  _QWORD *v150; // rdi
  __int64 *v151; // rax
  __int64 v152; // rdx
  unsigned __int64 v153; // rcx
  unsigned __int64 v154; // rax
  int v155; // r8d
  unsigned int v157; // eax
  unsigned __int64 v158; // r8
  __int64 v159; // r15
  __int64 *v160; // r13
  __int64 v161; // rax
  __int64 v162; // r9
  __int64 **v163; // rdx
  unsigned __int64 v164; // r9
  unsigned __int64 v165; // rcx
  __int64 v166; // rcx
  unsigned __int64 v167; // r14
  _QWORD *v168; // rdi
  _QWORD *Entry; // r8
  _QWORD *v170; // rdi
  __int64 *v171; // rax
  __int64 v172; // rdx
  unsigned __int64 v173; // r8
  unsigned __int64 v174; // rcx
  __int64 v175; // rcx
  int v176; // ecx
  unsigned __int16 v177; // ax
  _QWORD *v178; // rdi
  _QWORD *v179; // r8
  __int64 *v180; // rax
  unsigned __int64 v181; // rcx
  char v182; // al
  struct _TEB *v183; // rdi
  struct _TEB *v184; // rdi
  struct _TEB *v185; // rdi
  SIZE_T v186; // r14
  SIZE_T v187; // r12
  _DWORD *v188; // r8
  unsigned __int64 v189; // rdx
  SIZE_T v190; // r15
  SIZE_T v191; // r13
  _DWORD *v192; // r8
  unsigned __int64 v193; // rdx
  int v194; // ecx
  unsigned __int16 v195; // ax
  char *v196; // r8
  char *v197; // rax
  __int16 updated; // ax
  _DWORD *SharedData; // rcx
  __int64 v200; // rcx
  void *v201; // rdi
  ULONG_PTR v203; // rax
  int AllocationType; // [rsp+20h] [rbp-268h]
  int Protect; // [rsp+28h] [rbp-260h]
  char v206; // [rsp+30h] [rbp-258h]
  PVOID v207; // [rsp+38h] [rbp-250h] BYREF
  char v208; // [rsp+40h] [rbp-248h]
  ULONG_PTR v209; // [rsp+48h] [rbp-240h]
  int v210; // [rsp+50h] [rbp-238h]
  void *v211; // [rsp+58h] [rbp-230h]
  ULONG_PTR v212; // [rsp+60h] [rbp-228h]
  unsigned int v213; // [rsp+68h] [rbp-220h]
  unsigned int v214; // [rsp+6Ch] [rbp-21Ch]
  int v215; // [rsp+70h] [rbp-218h]
  char *v216; // [rsp+78h] [rbp-210h]
  __int64 v217; // [rsp+80h] [rbp-208h]
  unsigned int v218; // [rsp+88h] [rbp-200h]
  ULONG_PTR m; // [rsp+90h] [rbp-1F8h]
  __int64 v220; // [rsp+98h] [rbp-1F0h]
  unsigned __int64 v221; // [rsp+A0h] [rbp-1E8h]
  __int64 *v222; // [rsp+A8h] [rbp-1E0h]
  __int64 i; // [rsp+B0h] [rbp-1D8h]
  unsigned __int64 v224; // [rsp+B8h] [rbp-1D0h]
  PVOID BaseAddress; // [rsp+C0h] [rbp-1C8h] BYREF
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp-1C0h] BYREF
  unsigned __int64 v227; // [rsp+D0h] [rbp-1B8h]
  unsigned __int64 v228; // [rsp+D8h] [rbp-1B0h]
  int v229; // [rsp+E0h] [rbp-1A8h]
  int v230; // [rsp+E4h] [rbp-1A4h]
  int v231; // [rsp+E8h] [rbp-1A0h]
  __int64 v233; // [rsp+F0h] [rbp-198h]
  unsigned int *v234; // [rsp+F8h] [rbp-190h]
  _QWORD *v235; // [rsp+100h] [rbp-188h]
  __int64 v236; // [rsp+108h] [rbp-180h]
  __int64 v237; // [rsp+110h] [rbp-178h]
  SIZE_T v238; // [rsp+118h] [rbp-170h]
  unsigned int *v239; // [rsp+120h] [rbp-168h]
  __int64 v240; // [rsp+128h] [rbp-160h]
  unsigned __int64 v241; // [rsp+130h] [rbp-158h]
  __int64 v242; // [rsp+138h] [rbp-150h]
  __int64 v243; // [rsp+140h] [rbp-148h]
  SIZE_T v244; // [rsp+148h] [rbp-140h]
  __int64 v245; // [rsp+150h] [rbp-138h]
  unsigned __int64 v246; // [rsp+158h] [rbp-130h]
  __int64 v247; // [rsp+160h] [rbp-128h]
  __int64 v248; // [rsp+168h] [rbp-120h]
  void *v249; // [rsp+170h] [rbp-118h]
  _QWORD *v250; // [rsp+178h] [rbp-110h]
  unsigned __int64 v251; // [rsp+180h] [rbp-108h]
  __int64 v252; // [rsp+188h] [rbp-100h]
  int v253; // [rsp+198h] [rbp-F0h]
  int v254; // [rsp+1A8h] [rbp-E0h]
  int v255; // [rsp+1B8h] [rbp-D0h]
  int v256; // [rsp+1C8h] [rbp-C0h]
  int v257; // [rsp+1D8h] [rbp-B0h]
  int v258; // [rsp+1E8h] [rbp-A0h]
  int v259; // [rsp+1F8h] [rbp-90h]
  int v260; // [rsp+208h] [rbp-80h]
  int v261; // [rsp+218h] [rbp-70h]
  int v262; // [rsp+228h] [rbp-60h]
  int v263; // [rsp+238h] [rbp-50h]
  int v264; // [rsp+248h] [rbp-40h]
  unsigned int v265; // [rsp+298h] [rbp+10h]
  ULONG_PTR v267; // [rsp+2A8h] [rbp+20h] BYREF

  v267 = a4;
  v265 = a2;
  v8 = a2;
  LODWORD(v209) = 1;
  v206 = 0;
  v10 = 0LL;
  v211 = 0LL;
  v207 = 0LL;
  v210 = 0;
  v11 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    LODWORD(v209) = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return (void *)RtlDebugAllocateHeap(a1);
    if ( a3 )
      v10 = a3;
    else
      v10 = 1LL;
    v203 = *(_QWORD *)(a1 + 264) & (v10 + *(_QWORD *)(a1 + 256));
    if ( v203 < 0x20 )
      v203 = 32LL;
    v267 = v203;
    v6 = (unsigned int)a2 >> 4;
    LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    LODWORD(v212) = v6;
    if ( (a2 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) )
    {
      LOBYTE(v6) = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      LODWORD(v212) = v6;
      v267 = v203 + 16;
    }
    v12 = v267 >> 4;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v212) = v6;
    v12 = a4 >> 4;
    if ( v11 < 2 )
    {
      v267 += 16LL;
      v12 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v212) = v6;
  }
  if ( (a2 & 1) != 0 )
  {
LABEL_26:
    if ( v12 > *(unsigned int *)(a1 + 148) )
    {
      if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
      {
        v267 += 56LL;
        v134 = (RtlpHeapGenerateRandomValue32(v10, a2, a3, a4) & 0xF) << 12;
        BaseAddress = 0LL;
        RegionSize = v134 + v267 + 4096;
        HeapProtection = RtlpGetHeapProtection(a1, 1LL);
        if ( ZwAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               &RegionSize,
               0x2000u,
               HeapProtection) < 0 )
          goto LABEL_487;
        v207 = (char *)BaseAddress + v134;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v207, 0LL, &v267, 0x1000u, HeapProtection) >= 0 )
        {
          *((_WORD *)v207 + 28) = v267 - a3;
          *((_BYTE *)v207 + 58) = v6 | 2;
          *((_QWORD *)v207 + 4) = v267;
          *((_QWORD *)v207 + 5) = RegionSize;
          *((_BYTE *)v207 + 63) = 4;
          *(_QWORD *)(a1 + 560) += v267;
          v136 = 2147353472LL;
          if ( RtlGetCurrentServiceSessionId() )
            v137 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v137 = 2147353472LL;
          if ( *(_BYTE *)v137 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(a1, v207, v267, 9LL);
          if ( RtlGetCurrentServiceSessionId() )
            v138 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v138 = 2147353472LL;
          if ( *(_BYTE *)v138 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v136 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapExtendEvent(a1, (int)v207, v267, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v136);
          }
          v139 = 2147353482LL;
          if ( RtlGetCurrentServiceSessionId() )
            v140 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v140 = 2147353482LL;
          if ( *(_BYTE *)v140 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v139 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapExtendEvent(a1, (int)v207, v267, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v139);
          }
          if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
            *((_WORD *)v207 + 8) = RtlLogStackBackTraceEx(1u);
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          {
            updated = RtlpUpdateTagEntry(a1, (unsigned __int8)(v8 >> 18), 0, *((_QWORD *)v207 + 4) >> 4, 1);
            *((_WORD *)v207 + 9) = updated;
          }
          v141 = v207;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *((_BYTE *)v207 + 59) = *((_BYTE *)v207 + 56) ^ *((_BYTE *)v207 + 57) ^ *((_BYTE *)v207 + 58);
            v141[14] ^= *(_DWORD *)(a1 + 136);
            v141 = v207;
          }
          v142 = a1 + 272;
          v143 = *(__int64 **)(a1 + 280);
          if ( *v143 == a1 + 272 )
          {
            *(_QWORD *)v141 = v142;
            *((_QWORD *)v141 + 1) = v143;
            *v143 = (__int64)v141;
            *(_QWORD *)(a1 + 280) = v141;
          }
          else
          {
            RtlpLogHeapFailure(12, 0, v142, 0, *v143, 0LL);
          }
          v211 = (char *)v207 + 64;
          goto LABEL_487;
        }
        v207 = 0LL;
        ++*(_DWORD *)(a1 + 600);
      }
      goto LABEL_325;
    }
    if ( (v8 & 0x800000) == 0 )
    {
      if ( v11 < *(unsigned __int16 *)(a1 + 400) )
      {
        if ( a3 > RtlpLargestLfhBlock )
          goto LABEL_32;
        v97 = v11 >> 3;
        v98 = v11 & 7;
        if ( ((unsigned __int8)(1 << (v11 & 7)) & *(_BYTE *)((v11 >> 3) + a1 + 402)) != 0 )
          goto LABEL_32;
        v99 = (unsigned __int16 *)(*(_QWORD *)(a1 + 392) + 2 * v11);
        v251 = (unsigned __int64)v99;
        *v99 += 33;
        v100 = *v99;
        if ( !v210 && (v100 & 0x1Fu) <= 0x10 && v100 <= 0xFF00u )
          goto LABEL_32;
        if ( a3 )
          v131 = a3;
        else
          v131 = 1LL;
        if ( *(_BYTE *)(a1 + 386) == 2 )
          v132 = *(_QWORD *)(a1 + 376);
        else
          v132 = 0LL;
        LFHContext = RtlpGetLFHContext(v132, v131);
        if ( LFHContext != 0xFFFF )
        {
          *v99 = LFHContext;
          *(_BYTE *)(v97 + a1 + 402) |= 1 << v98;
          ++*(_DWORD *)(a1 + 624);
          goto LABEL_32;
        }
        if ( *(_BYTE *)(a1 + 386) == 2 && *(_QWORD *)(a1 + 376) )
          goto LABEL_32;
      }
      else if ( a3 > RtlpLargestLfhBlock
             || *(_BYTE *)(a1 + 386) == 2 && *(_QWORD *)(a1 + 376)
             || *(_BYTE *)(a1 + 387) != 2 )
      {
        goto LABEL_32;
      }
      *(_DWORD *)(a1 + 120) |= 0x20000000u;
    }
LABEL_32:
    if ( a5 )
    {
      v101 = *a5;
      if ( *a5 )
      {
        v33 = (__int64)(v101 - 2);
        v216 = (char *)(v101 - 2);
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_DWORD *)(v33 + 8) ^= *(_DWORD *)(a1 + 136);
          if ( *(_BYTE *)(v33 + 11) != (*(_BYTE *)(v33 + 8) ^ (unsigned __int8)(*(_BYTE *)(v33 + 9) ^ *(_BYTE *)(v33 + 10))) )
            RtlpAnalyzeHeapFailure(a1, v101 - 2);
        }
        v123 = *v101;
        v124 = *(__int64 **)(v33 + 24);
        v125 = *v124;
        v126 = *(_QWORD *)(*v101 + 8);
        if ( *v124 != v126 || (__int64 *)v125 != v101 )
        {
          RtlpLogHeapFailure(12, a1, (_DWORD)v101, v126, v125, 0LL);
          goto LABEL_404;
        }
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v33 + 8);
        v127 = *(__int64 ***)(a1 + 312);
        if ( v127 )
        {
          v128 = *(unsigned __int16 *)(v33 + 8);
          while ( 1 )
          {
            v129 = *((unsigned int *)v127 + 2);
            if ( v128 < v129 )
            {
              v130 = *(unsigned __int16 *)(v33 + 8);
              v233 = *(unsigned __int16 *)(v33 + 8);
              goto LABEL_242;
            }
            if ( !*v127 )
              break;
            v127 = (__int64 **)*v127;
          }
          v130 = v129 - 1;
          v233 = (unsigned int)(v129 - 1);
LABEL_242:
          AllocationType = v130;
          LOBYTE(v130) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v127, v130, (_DWORD)v101, AllocationType, v128);
        }
        *v124 = v123;
        *(_QWORD *)(v123 + 8) = v124;
        v52 = (char *)(v33 + 10);
        if ( (*(_BYTE *)(v33 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock((PVOID)a1) )
        {
          RtlpDeCommitFreeBlock(a1, v33, *(unsigned __int16 *)(v33 + 8), 1);
LABEL_404:
          NtCurrentTeb()->LastStatusValue = -1073741801;
          v185 = NtCurrentTeb();
          v185->LastErrorValue = RtlNtStatusToDosError(-1073741801);
          goto LABEL_487;
        }
LABEL_73:
        v53 = *v52;
        v208 = *v52;
        v54 = (unsigned int)v209;
        if ( !(_DWORD)v209 && (v53 & 4) != 0 )
        {
          v186 = 16LL * *(unsigned __int16 *)(v33 + 8) - 32;
          v238 = v186;
          if ( (v53 & 2) != 0 && v186 > 4 )
          {
            v186 -= 4LL;
            v238 = v186;
          }
          v187 = RtlCompareMemoryUlong((PVOID)(v33 + 32), v186, 0xFEEEFEEE);
          if ( v187 != v186 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            v33 = (__int64)v216;
            DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v216, &v216[v187 + 32]);
            RtlpBreakPointHeap();
            v53 = v208;
          }
          v54 = (unsigned int)v209;
        }
        v217 = v33;
        if ( (*v52 & 1) != 0 )
        {
          RtlpLogHeapFailure(3, a1, v33, 0, 0LL, 0LL);
          goto LABEL_487;
        }
        *v52 = v212;
        v55 = *(unsigned __int16 *)(v33 + 8) - v12;
        v252 = v55;
        *(_WORD *)(v33 + 8) = v12;
        v56 = a3;
        v57 = v267 - a3;
        v212 = v267 - a3;
        if ( v267 - a3 >= 0x3F )
        {
          *(_QWORD *)(v33 + 16 * v12) = v57;
          *(_BYTE *)(v33 + 15) = 63;
        }
        else
        {
          *(_BYTE *)(v33 + 15) = v57;
        }
        *(_BYTE *)(v33 + 11) = 0;
        if ( !v55 )
        {
LABEL_117:
          v211 = (void *)(v217 + 16);
          v84 = (unsigned __int16 *)(v217 + 8);
          v85 = 16LL * *(unsigned __int16 *)(v217 + 8);
          v248 = v85;
          if ( (*(_BYTE *)(v217 + 15) & 0x3F) == 0x3F )
          {
            v85 -= 8LL;
            v248 = v85;
          }
          if ( (_DWORD)v54 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              *(_BYTE *)(v217 + 11) = *(_BYTE *)(v217 + 8) ^ *(_BYTE *)(v217 + 9) ^ *(_BYTE *)(v217 + 10);
              *(_DWORD *)v84 ^= *(_DWORD *)(a1 + 136);
            }
            if ( v206 )
            {
              if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
              {
                ++*(_DWORD *)(a1 + 608);
                v94 = *(_DWORD *)(a1 + 616);
                if ( *(_DWORD *)(a1 + 608) > v94 )
                {
                  *(_DWORD *)(a1 + 608) = 0;
                  v105 = *(_QWORD *)(a1 + 544) - 16LL * *(_QWORD *)(a1 + 192);
                  if ( v105 > *(_QWORD *)(a1 + 640) )
                    *(_QWORD *)(a1 + 640) = v105;
                  *(_QWORD *)(a1 + 648) = v105;
                }
                if ( ++*(_DWORD *)(a1 + 620) >= 0x1000u )
                {
                  if ( *(_BYTE *)(a1 + 386) == 2 && *(_DWORD *)(a1 + 624) > 0x10u )
                    v157 = 256;
                  else
                    v157 = 16;
                  if ( *(_DWORD *)(a1 + 612) > v157 && v94 < 0x10000 )
                    *(_DWORD *)(a1 + 616) = 2 * v94;
                  *(_DWORD *)(a1 + 612) = 0;
                  *(_DWORD *)(a1 + 620) = 0;
                }
              }
              RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
              v206 = 0;
            }
            if ( (v265 & 8) != 0 )
              memset(v211, 0, v85 - 8);
            goto LABEL_487;
          }
          if ( (v265 & 8) != 0 )
          {
            memset(v211, 0, v85 - 8);
          }
          else if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
          {
            v196 = (char *)v211;
            v249 = v211;
            v54 = (v56 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
            v227 = v54;
            if ( v54 )
            {
              if ( ((unsigned __int8)v211 & 4) == 0 )
                goto LABEL_470;
              *(_DWORD *)v211 = -1163005939;
              v227 = --v54;
              if ( v54 )
              {
                v196 += 4;
                v249 = v196;
LABEL_470:
                memset64(v196, 0xBAADF00DBAADF00DuLL, v54 >> 1);
                if ( (v54 & 1) != 0 )
                  *(_DWORD *)&v196[4 * v54 - 4] = -1163005939;
              }
            }
          }
          if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
          {
            v197 = (char *)v211;
            *(_QWORD *)((char *)v211 + v56) = 0xABABABABABABABABuLL;
            *(_QWORD *)&v197[v56 + 8] = 0xABABABABABABABABuLL;
            *(_BYTE *)(v217 + 10) |= 4u;
          }
          v144 = v217;
          *(_BYTE *)(v217 + 11) = 0;
          if ( (*(_BYTE *)(v144 + 10) & 2) != 0 )
          {
            ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v144, v54);
            v250 = ExtraStuffPointer;
            *ExtraStuffPointer = 0LL;
            ExtraStuffPointer[1] = 0LL;
            if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
              *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
              *((_WORD *)v250 + 1) = RtlpUpdateTagEntry(a1, (v265 >> 18) & 0xFFF, 0, *v84, 0);
          }
          else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          {
            *(_BYTE *)(v144 + 11) = RtlpUpdateTagEntry(a1, (unsigned __int8)(v265 >> 18), 0, *v84, 0);
          }
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v144 + 11) = *(_BYTE *)v84 ^ *((_BYTE *)v84 + 1) ^ *((_BYTE *)v84 + 2);
            *(_DWORD *)v84 ^= *(_DWORD *)(a1 + 136);
          }
          goto LABEL_487;
        }
        if ( v55 == 1 )
        {
          ++*(_WORD *)(v33 + 8);
          v109 = v267 - a3 + 16;
          v209 = v109;
          if ( v109 >= 0x3F )
          {
            *(_QWORD *)(v33 + 16 * (v12 + 1)) = v109;
            *(_BYTE *)(v33 + 15) = 63;
          }
          else
          {
            *(_BYTE *)(v33 + 15) = v109;
          }
          goto LABEL_117;
        }
        if ( (_DWORD)v54 )
        {
          v58 = 0;
          v215 = 0;
        }
        else
        {
          v58 = 1;
          v215 = 1;
        }
        v59 = *(_BYTE *)(v33 + 14);
        if ( v59 )
          v60 = (v33 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v59 << 16) + 0x10000;
        else
          v60 = a1;
        v221 = v55;
        v61 = v33 + 16 * v12;
        v210 = 0;
        *(_BYTE *)(v61 + 10) = v53;
        *(_BYTE *)(v61 + 15) = 0;
        *(_WORD *)(v61 + 12) = v12 ^ *(_WORD *)(a1 + 140);
        v62 = *(_QWORD *)(v60 + 40);
        if ( v62 == v60 )
        {
          LOBYTE(v63) = 0;
        }
        else
        {
          v63 = ((v61 - v60) >> 16) + 1;
          v252 = v63;
          if ( (v61 - v60) >> 16 > 0xFC )
            RtlpLogHeapFailure(3, v62, v61, v60, 0LL, 0LL);
        }
        *(_BYTE *)(v61 + 14) = v63;
        *(_BYTE *)(v61 + 11) = 0;
        *(_WORD *)(v61 + 8) = v55;
        while ( 1 )
        {
          v64 = v61 + 16 * v55;
          if ( ((*(_BYTE *)(v64 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
            break;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_DWORD *)(v64 + 8) ^= *(_DWORD *)(a1 + 136);
            if ( *(_BYTE *)(v64 + 11) != (*(_BYTE *)(v64 + 8) ^ (unsigned __int8)(*(_BYTE *)(v64 + 9) ^ *(_BYTE *)(v64 + 10))) )
              RtlpAnalyzeHeapFailure(a1, v61 + 16 * v55);
          }
          v158 = v64 + 16;
          v159 = *(_QWORD *)(v64 + 16);
          v160 = *(__int64 **)(v64 + 24);
          v161 = *v160;
          v162 = *(_QWORD *)(v159 + 8);
          if ( *v160 == v162 && v161 == v158 )
          {
            *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v64 + 8);
            v163 = *(__int64 ***)(a1 + 312);
            if ( v163 )
            {
              v164 = *(unsigned __int16 *)(v64 + 8);
              while ( 1 )
              {
                v165 = *((unsigned int *)v163 + 2);
                if ( v164 < v165 )
                {
                  v166 = *(unsigned __int16 *)(v64 + 8);
                  goto LABEL_348;
                }
                if ( !*v163 )
                  break;
                v163 = (__int64 **)*v163;
              }
              v166 = (unsigned int)(v165 - 1);
LABEL_348:
              v243 = v166;
              LOBYTE(v158) = 1;
              RtlpHeapRemoveListEntry(a1, (_DWORD)v163, v158, v64 + 16, v166, v164);
            }
            *v160 = v159;
            *(_QWORD *)(v159 + 8) = v160;
            if ( (*(_BYTE *)(v64 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock((PVOID)a1) )
            {
              if ( v58 )
              {
                v182 = *(_BYTE *)(v64 + 10);
                if ( (v182 & 4) != 0 )
                {
                  v190 = 16LL * *(unsigned __int16 *)(v64 + 8) - 32;
                  v244 = v190;
                  if ( (v182 & 2) != 0 && v190 > 4 )
                  {
                    v190 -= 4LL;
                    v244 = v190;
                  }
                  v191 = RtlCompareMemoryUlong((PVOID)(v64 + 32), v190, 0xFEEEFEEE);
                  if ( v191 != v190 )
                  {
                    if ( NtCurrentPeb()->Ldr )
                      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                    else
                      DbgPrint("HEAP: ");
                    DbgPrint(
                      "HEAP: Free Heap block %p modified at %p after it was freed\n",
                      (const void *)(v61 + 16 * v55),
                      (const void *)(v64 + v191 + 32));
                    RtlpBreakPointHeap();
                    v58 = v215;
                  }
                }
              }
              *(_BYTE *)(v61 + 10) = *(_BYTE *)(v64 + 10);
              v167 = *(unsigned __int16 *)(v64 + 8) + v55;
              v221 = v167;
              if ( v167 > 0xFF00 )
              {
                RtlpInsertFreeBlock(a1, v61, v167);
                v54 = (unsigned int)v209;
                goto LABEL_322;
              }
              *(_WORD *)(v61 + 8) = v167;
              *(_WORD *)(16 * v167 + v61 + 12) = v167 ^ *(_WORD *)(a1 + 140);
              if ( !v58 )
              {
                *(_BYTE *)(v61 + 10) = 0;
                *(_BYTE *)(v61 + 15) = 0;
                v168 = (_QWORD *)(a1 + 336);
                if ( *(_QWORD *)(a1 + 312) )
                  Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v167);
                else
                  Entry = (_QWORD *)*v168;
                while ( v168 != Entry )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v176 = *((_DWORD *)Entry - 2);
                    v263 = v176;
                    if ( (v176 & *(_DWORD *)(a1 + 124)) != 0 )
                      v263 = v176 ^ *(_DWORD *)(a1 + 136);
                    v177 = v263;
                  }
                  else
                  {
                    v177 = *((_WORD *)Entry - 4);
                  }
                  if ( (unsigned __int16)v167 <= (unsigned __int64)v177 )
                    break;
                  Entry = (_QWORD *)*Entry;
                }
                v170 = (_QWORD *)(v61 + 16);
                v171 = (__int64 *)Entry[1];
                if ( (_QWORD *)*v171 == Entry )
                {
                  *v170 = Entry;
                  *(_QWORD *)(v61 + 24) = v171;
                  *v171 = (__int64)v170;
                  Entry[1] = v170;
                }
                else
                {
                  RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v171, 0LL);
                }
                *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v61 + 8);
                v172 = *(_QWORD *)(a1 + 312);
                if ( v172 )
                {
                  v173 = *(unsigned __int16 *)(v61 + 8);
                  while ( 1 )
                  {
                    v174 = *(unsigned int *)(v172 + 8);
                    if ( v173 < v174 )
                      break;
                    if ( !*(_QWORD *)v172 )
                    {
                      v175 = (unsigned int)(v174 - 1);
                      goto LABEL_364;
                    }
                    v172 = *(_QWORD *)v172;
                  }
                  v175 = *(unsigned __int16 *)(v61 + 8);
LABEL_364:
                  v245 = v175;
                  goto LABEL_365;
                }
                goto LABEL_320;
              }
              *(_BYTE *)(v61 + 10) &= 0xF0u;
              *(_BYTE *)(v61 + 15) = 0;
              if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
              {
LABEL_380:
                v178 = (_QWORD *)(a1 + 336);
                if ( *(_QWORD *)(a1 + 312) )
                  v179 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v167);
                else
                  v179 = (_QWORD *)*v178;
                while ( v178 != v179 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v194 = *((_DWORD *)v179 - 2);
                    v264 = v194;
                    if ( (v194 & *(_DWORD *)(a1 + 124)) != 0 )
                      v264 = v194 ^ *(_DWORD *)(a1 + 136);
                    v195 = v264;
                  }
                  else
                  {
                    v195 = *((_WORD *)v179 - 4);
                  }
                  if ( (unsigned __int16)v167 <= (unsigned __int64)v195 )
                    break;
                  v179 = (_QWORD *)*v179;
                }
                v170 = (_QWORD *)(v61 + 16);
                v180 = (__int64 *)v179[1];
                if ( (_QWORD *)*v180 == v179 )
                {
                  *v170 = v179;
                  *(_QWORD *)(v61 + 24) = v180;
                  *v180 = (__int64)v170;
                  v179[1] = v170;
                }
                else
                {
                  RtlpLogHeapFailure(12, 0, (_DWORD)v179, 0, *v180, 0LL);
                }
                *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v61 + 8);
                v172 = *(_QWORD *)(a1 + 312);
                if ( v172 )
                {
                  v173 = *(unsigned __int16 *)(v61 + 8);
                  while ( 1 )
                  {
                    v181 = *(unsigned int *)(v172 + 8);
                    if ( v173 < v181 )
                      break;
                    if ( !*(_QWORD *)v172 )
                    {
                      v175 = (unsigned int)(v181 - 1);
                      goto LABEL_390;
                    }
                    v172 = *(_QWORD *)v172;
                  }
                  v175 = *(unsigned __int16 *)(v61 + 8);
LABEL_390:
                  v247 = v175;
LABEL_365:
                  RtlpHeapAddListEntry(a1, v172, 1, (__int64)v170, v175, v173);
                }
LABEL_320:
                v54 = (unsigned int)v209;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  *(_BYTE *)(v61 + 11) = *(_BYTE *)(v61 + 8) ^ *(_BYTE *)(v61 + 9) ^ *(_BYTE *)(v61 + 10);
                  *(_DWORD *)(v61 + 8) ^= *(_DWORD *)(a1 + 136);
                }
LABEL_322:
                v56 = a3;
                goto LABEL_117;
              }
              v192 = (_DWORD *)(v61 + 32);
              v246 = v61 + 32;
              v193 = (16 * (unsigned __int64)(unsigned __int16)v167 - 32) >> 2;
              v224 = v193;
              if ( v193 )
              {
                if ( ((unsigned __int8)v192 & 4) != 0 )
                {
                  *v192 = -17891602;
                  v224 = --v193;
                  if ( v193 )
                  {
                    v192 = (_DWORD *)(v61 + 36);
                    v246 = v61 + 36;
                    goto LABEL_451;
                  }
                }
                else
                {
LABEL_451:
                  memset64(v192, 0xFEEEFEEEFEEEFEEEuLL, v193 >> 1);
                  if ( (v193 & 1) != 0 )
                    v192[v193 - 1] = -17891602;
                }
              }
              *(_BYTE *)(v61 + 10) |= 4u;
              goto LABEL_380;
            }
            RtlpDeCommitFreeBlock(a1, v61 + 16 * v55, *(unsigned __int16 *)(v64 + 8), 1);
          }
          else
          {
            RtlpLogHeapFailure(12, a1, v158, v162, v161, 0LL);
          }
          if ( v210 )
          {
            NtCurrentTeb()->LastStatusValue = -1073741764;
            v183 = NtCurrentTeb();
            v183->LastErrorValue = RtlNtStatusToDosError(-1073741764);
            goto LABEL_487;
          }
          v210 = 1;
        }
        *(_WORD *)(v64 + 12) = v55 ^ *(_WORD *)(a1 + 140);
        if ( !v58 )
        {
          v65 = (unsigned __int16)v55;
          v251 = (unsigned __int16)v55;
          *(_BYTE *)(v61 + 10) = 0;
          *(_BYTE *)(v61 + 15) = 0;
          v66 = (_QWORD *)(a1 + 336);
          v67 = *(__int64 **)(a1 + 312);
          if ( v67 )
          {
            while ( 1 )
            {
              v68 = *((unsigned int *)v67 + 2);
              if ( (unsigned __int16)v55 < v68 )
                break;
              if ( !*v67 )
              {
                LODWORD(v55) = v68 - 1;
                i = (unsigned int)(v68 - 1);
                goto LABEL_93;
              }
              v67 = (__int64 *)*v67;
            }
            LODWORD(v55) = (unsigned __int16)v55;
            for ( i = (unsigned __int16)v55; ; i = (unsigned int)v55 )
            {
LABEL_93:
              v69 = (unsigned int)(v55 - *((_DWORD *)v67 + 6));
              v70 = 0LL;
              v71 = (_QWORD *)v67[4];
              v72 = (_QWORD *)v71[1];
              if ( v71 == v72 )
              {
                v70 = (_QWORD *)v67[4];
              }
              else
              {
                v86 = (_DWORD)v72 - 16;
                v87 = *((_DWORD *)v72 - 2);
                v257 = v87;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v257 = v87 ^ *(_DWORD *)(a1 + 136);
                  if ( HIBYTE(v257) != ((unsigned __int8)v257 ^ (unsigned __int8)(BYTE1(v257) ^ BYTE2(v257))) )
                    RtlpLogHeapFailure(3, a1, v86, 0, 0LL, 0LL);
                }
                if ( (int)(v65 - (unsigned __int16)v257) > 0 )
                {
                  v70 = v71;
                }
                else
                {
                  v88 = *v71 - 16LL;
                  v89 = *(_DWORD *)(v88 + 8);
                  v258 = v89;
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v258 = v89 ^ *(_DWORD *)(a1 + 136);
                    if ( HIBYTE(v258) != ((unsigned __int8)v258 ^ (unsigned __int8)(BYTE1(v258) ^ BYTE2(v258))) )
                      RtlpLogHeapFailure(3, a1, v88, 0, 0LL, 0LL);
                  }
                  if ( (int)(v65 - (unsigned __int16)v258) <= 0 )
                  {
                    v70 = (_QWORD *)*v71;
                  }
                  else if ( !*v67 && (_DWORD)i == *((_DWORD *)v67 + 2) - 1 )
                  {
                    if ( *((_DWORD *)v67 + 3) )
                      v69 = (unsigned int)(2 * v69);
                    for ( j = *(_QWORD **)(v67[6] + 8 * v69); v71 != j; j = (_QWORD *)*j )
                    {
                      v122 = *((_DWORD *)j - 2);
                      v259 = v122;
                      if ( *(_DWORD *)(a1 + 124) )
                      {
                        v259 = v122 ^ *(_DWORD *)(a1 + 136);
                        if ( HIBYTE(v259) != ((unsigned __int8)v259 ^ (unsigned __int8)(BYTE1(v259) ^ BYTE2(v259))) )
                          RtlpLogHeapFailure(3, a1, (_DWORD)j - 16, 0, 0LL, 0LL);
                      }
                      if ( (int)(v65 - (unsigned __int16)v259) <= 0 )
                      {
                        v70 = j;
                        break;
                      }
                    }
                  }
                  else
                  {
                    v90 = (unsigned int)v69 >> 5;
                    v214 = (unsigned int)v69 >> 5;
                    v91 = ((unsigned int)(*((_DWORD *)v67 + 2) - *((_DWORD *)v67 + 6)) >> 5) - 1;
                    v92 = (unsigned int *)(v67[5] + 4 * v90);
                    v239 = v92;
                    v93 = *v92 & ~((1 << (v69 & 0x1F)) - 1);
                    while ( !v93 )
                    {
                      if ( (unsigned int)v90 > v91 )
                        goto LABEL_246;
                      v239 = ++v92;
                      v93 = *v92;
                      LODWORD(v90) = v90 + 1;
                      v214 = v90;
                    }
                    if ( (_WORD)v93 )
                    {
                      if ( (_BYTE)v93 )
                        v103 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v93];
                      else
                        v103 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v93)] + 8;
                    }
                    else if ( (v93 & 0xFF0000) != 0 )
                    {
                      v103 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v93)] + 16;
                    }
                    else
                    {
                      v103 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v93 >> 24] + 24;
                    }
                    v104 = (unsigned int)(v103 + 32 * v90);
                    v214 = v104;
                    if ( *((_DWORD *)v67 + 3) )
                      v104 = (unsigned int)(2 * v104);
                    v70 = *(_QWORD **)(v67[6] + 8 * v104);
                  }
                }
              }
              if ( v70 )
                break;
LABEL_246:
              v67 = (__int64 *)*v67;
              LODWORD(v55) = *((_DWORD *)v67 + 6);
            }
            v66 = (_QWORD *)(a1 + 336);
          }
          else
          {
            v70 = (_QWORD *)*v66;
          }
          while ( v66 != v70 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v95 = *((_DWORD *)v70 - 2);
              v261 = v95;
              if ( (v95 & *(_DWORD *)(a1 + 124)) != 0 )
                v261 = v95 ^ *(_DWORD *)(a1 + 136);
              v96 = v261;
            }
            else
            {
              v96 = *((_WORD *)v70 - 4);
            }
            if ( v65 <= v96 )
              break;
            v70 = (_QWORD *)*v70;
            v66 = (_QWORD *)(a1 + 336);
          }
          v73 = (_QWORD *)(v61 + 16);
          v74 = (__int64 *)v70[1];
          if ( (_QWORD *)*v74 == v70 )
          {
            *v73 = v70;
            *(_QWORD *)(v61 + 24) = v74;
            *v74 = (__int64)v73;
            v70[1] = v73;
          }
          else
          {
            RtlpLogHeapFailure(12, 0, (_DWORD)v70, 0, *v74, 0LL);
          }
          *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v61 + 8);
          v75 = *(__int64 **)(a1 + 312);
          if ( v75 )
          {
            v76 = (__int64 *)*(unsigned __int16 *)(v61 + 8);
            while ( 1 )
            {
              v77 = *((unsigned int *)v75 + 2);
              if ( (unsigned __int64)v76 < v77 )
                break;
              if ( !*v75 )
              {
                v78 = v77 - 1;
                v240 = (unsigned int)(v77 - 1);
                goto LABEL_106;
              }
              v75 = (__int64 *)*v75;
            }
            v78 = *(unsigned __int16 *)(v61 + 8);
            v240 = *(unsigned __int16 *)(v61 + 8);
LABEL_106:
            v79 = (int)v76;
            v222 = v76;
            v80 = v78 - *((_DWORD *)v75 + 6);
            if ( *((_DWORD *)v75 + 3) )
              v81 = 2 * v80;
            else
              v81 = v80;
            ++*((_DWORD *)v75 + 4);
            v82 = 8 * v81;
            v83 = *(_QWORD *)(8 * v81 + v75[6]);
            if ( v78 == *((_DWORD *)v75 + 2) - 1 )
              ++*((_DWORD *)v75 + 5);
            if ( !v83 )
              goto LABEL_111;
            v106 = *(_DWORD *)(v83 - 8);
            v260 = v106;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v260 = v106 ^ *(_DWORD *)(a1 + 136);
              if ( HIBYTE(v260) != ((unsigned __int8)v260 ^ (unsigned __int8)(BYTE1(v260) ^ BYTE2(v260))) )
              {
                RtlpLogHeapFailure(3, a1, v83 - 16, 0, 0LL, 0LL);
                v79 = (int)v222;
              }
            }
            if ( v79 - (unsigned __int16)v260 <= 0 )
LABEL_111:
              *(_QWORD *)(v82 + v75[6]) = v73;
            if ( !v83 )
              *(_DWORD *)(v75[5] + 4LL * (v80 >> 5)) |= 1 << (v80 & 0x1F);
          }
          v54 = (unsigned int)v209;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v61 + 11) = *(_BYTE *)(v61 + 8) ^ *(_BYTE *)(v61 + 9) ^ *(_BYTE *)(v61 + 10);
            *(_DWORD *)(v61 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          v56 = a3;
          goto LABEL_117;
        }
        *(_BYTE *)(v61 + 10) &= 0xF0u;
        *(_BYTE *)(v61 + 15) = 0;
        if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
        {
LABEL_305:
          v146 = (_QWORD *)(a1 + 336);
          if ( *(_QWORD *)(a1 + 312) )
            v147 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v55);
          else
            v147 = (_QWORD *)*v146;
          while ( v146 != v147 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v148 = *((_DWORD *)v147 - 2);
              v262 = v148;
              if ( (v148 & *(_DWORD *)(a1 + 124)) != 0 )
                v262 = v148 ^ *(_DWORD *)(a1 + 136);
              v149 = v262;
            }
            else
            {
              v149 = *((_WORD *)v147 - 4);
            }
            if ( (unsigned __int16)v55 <= (unsigned __int64)v149 )
              break;
            v147 = (_QWORD *)*v147;
          }
          v150 = (_QWORD *)(v61 + 16);
          v151 = (__int64 *)v147[1];
          if ( (_QWORD *)*v151 == v147 )
          {
            *v150 = v147;
            *(_QWORD *)(v61 + 24) = v151;
            *v151 = (__int64)v150;
            v147[1] = v150;
          }
          else
          {
            RtlpLogHeapFailure(12, 0, (_DWORD)v147, 0, *v151, 0LL);
          }
          *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v61 + 8);
          v152 = *(_QWORD *)(a1 + 312);
          if ( v152 )
          {
            v153 = *(unsigned __int16 *)(v61 + 8);
            while ( 1 )
            {
              v154 = *(unsigned int *)(v152 + 8);
              if ( v153 < v154 )
              {
                v155 = *(unsigned __int16 *)(v61 + 8);
                v242 = *(unsigned __int16 *)(v61 + 8);
                goto LABEL_319;
              }
              if ( !*(_QWORD *)v152 )
                break;
              v152 = *(_QWORD *)v152;
            }
            v155 = v154 - 1;
            v242 = (unsigned int)(v154 - 1);
LABEL_319:
            RtlpHeapAddListEntry(a1, v152, 1, (__int64)v150, v155, v153);
          }
          goto LABEL_320;
        }
        v188 = (_DWORD *)(v61 + 32);
        v241 = v61 + 32;
        v189 = (16 * (unsigned __int64)(unsigned __int16)v55 - 32) >> 2;
        v228 = v189;
        if ( v189 )
        {
          if ( ((unsigned __int8)v188 & 4) == 0 )
            goto LABEL_429;
          *v188 = -17891602;
          v228 = --v189;
          if ( v189 )
          {
            v188 = (_DWORD *)(v61 + 36);
            v241 = v61 + 36;
LABEL_429:
            memset64(v188, 0xFEEEFEEEFEEEFEEEuLL, v189 >> 1);
            if ( (v189 & 1) != 0 )
              v188[v189 - 1] = -17891602;
          }
        }
        *(_BYTE *)(v61 + 10) |= 4u;
        goto LABEL_305;
      }
    }
    v235 = (_QWORD *)(a1 + 336);
    for ( k = *(__int64 **)(a1 + 312); ; k = (__int64 *)*k )
    {
      v24 = *((unsigned int *)k + 2);
      if ( v12 < v24 )
      {
        v25 = v12;
        m = v12;
        goto LABEL_36;
      }
      if ( !*k )
        break;
    }
    v25 = v24 - 1;
    for ( m = (unsigned int)(v24 - 1); ; m = v25 )
    {
LABEL_36:
      v26 = v25 - *((_DWORD *)k + 6);
      v19 = 0LL;
      v27 = (_QWORD *)k[4];
      v28 = (_QWORD *)v27[1];
      if ( v27 == v28 )
      {
        v19 = (_QWORD *)k[4];
      }
      else
      {
        v29 = (_DWORD)v28 - 16;
        v30 = *((_DWORD *)v28 - 2);
        v253 = v30;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v253 = v30 ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v253) != ((unsigned __int8)v253 ^ (unsigned __int8)(BYTE1(v253) ^ BYTE2(v253))) )
            RtlpLogHeapFailure(3, a1, v29, 0, 0LL, 0LL);
        }
        v229 = v12 - (unsigned __int16)v253;
        if ( v229 > 0 )
        {
          v19 = v27;
        }
        else
        {
          v31 = *v27 - 16LL;
          v32 = *(_DWORD *)(v31 + 8);
          v254 = v32;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v254 = v32 ^ *(_DWORD *)(a1 + 136);
            if ( HIBYTE(v254) != ((unsigned __int8)v254 ^ (unsigned __int8)(BYTE1(v254) ^ BYTE2(v254))) )
              RtlpLogHeapFailure(3, a1, v31, 0, 0LL, 0LL);
          }
          v230 = v12 - (unsigned __int16)v254;
          if ( v230 > 0 )
          {
            if ( !*k && (_DWORD)m == *((_DWORD *)k + 2) - 1 )
            {
              if ( *((_DWORD *)k + 3) )
                v26 = (unsigned int)(2 * v26);
              for ( n = *(_QWORD **)(k[6] + 8 * v26); v27 != n; n = (_QWORD *)*n )
              {
                v108 = *((_DWORD *)n - 2);
                v255 = v108;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v255 = v108 ^ *(_DWORD *)(a1 + 136);
                  if ( HIBYTE(v255) != ((unsigned __int8)v255 ^ (unsigned __int8)(BYTE1(v255) ^ BYTE2(v255))) )
                    RtlpLogHeapFailure(3, a1, (_DWORD)n - 16, 0, 0LL, 0LL);
                }
                v231 = v12 - (unsigned __int16)v255;
                if ( v231 <= 0 )
                {
                  v19 = n;
                  break;
                }
              }
            }
            else
            {
              v13 = (unsigned int)v26 >> 5;
              v213 = (unsigned int)v26 >> 5;
              v14 = ((unsigned int)(*((_DWORD *)k + 2) - *((_DWORD *)k + 6)) >> 5) - 1;
              v15 = (unsigned int *)(k[5] + 4 * v13);
              v234 = v15;
              v16 = *v15 & ~((1 << (v26 & 0x1F)) - 1);
              while ( !v16 )
              {
                if ( (unsigned int)v13 > v14 )
                  goto LABEL_221;
                v234 = ++v15;
                v16 = *v15;
                LODWORD(v13) = v13 + 1;
                v213 = v13;
              }
              if ( (_WORD)v16 )
              {
                if ( (_BYTE)v16 )
                  v17 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v16];
                else
                  v17 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v16)] + 8;
              }
              else if ( (v16 & 0xFF0000) != 0 )
              {
                v17 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v16)] + 16;
              }
              else
              {
                v17 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v16 >> 24] + 24;
              }
              v18 = (unsigned int)(v17 + 32 * v13);
              v213 = v18;
              if ( *((_DWORD *)k + 3) )
                v18 = (unsigned int)(2 * v18);
              v19 = *(_QWORD **)(k[6] + 8 * v18);
            }
          }
          else
          {
            v19 = (_QWORD *)*v27;
          }
        }
      }
      if ( v19 )
        break;
LABEL_221:
      k = (__int64 *)*k;
      v25 = *((_DWORD *)k + 6);
    }
    if ( v235 != v19 )
    {
      v33 = (__int64)(v19 - 2);
      v216 = (char *)(v19 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v33 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v33 + 11) != (*(_BYTE *)(v33 + 8) ^ (unsigned __int8)(*(_BYTE *)(v33 + 9) ^ *(_BYTE *)(v33 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v19 - 2);
      }
      v34 = *(unsigned __int16 *)(v33 + 8);
      if ( v34 >= v12 )
      {
        v35 = v19;
        v36 = *v19;
        v221 = v36;
        v37 = *(__int64 **)(v33 + 24);
        v222 = v37;
        v38 = *v37;
        v39 = *(_QWORD *)(v36 + 8);
        if ( *v37 != v39 || (_QWORD *)v38 != v19 )
        {
          RtlpLogHeapFailure(12, a1, (_DWORD)v19, v39, v38, 0LL);
          goto LABEL_487;
        }
        *(_QWORD *)(a1 + 192) -= v34;
        v40 = *(__int64 **)(a1 + 312);
        if ( !v40 )
          goto LABEL_71;
        v41 = *(unsigned __int16 *)(v33 + 8);
        while ( 1 )
        {
          v42 = *((unsigned int *)v40 + 2);
          if ( v41 < v42 )
            break;
          if ( !*v40 )
          {
            v43 = v42 - 1;
            v236 = (unsigned int)(v42 - 1);
            goto LABEL_60;
          }
          v40 = (__int64 *)*v40;
        }
        v43 = *(unsigned __int16 *)(v33 + 8);
        v236 = *(unsigned __int16 *)(v33 + 8);
LABEL_60:
        v44 = v41;
        v220 = v41;
        v45 = v43 - *((_DWORD *)v40 + 6);
        if ( *((_DWORD *)v40 + 3) )
          v46 = 2 * v45;
        else
          v46 = v45;
        v220 = 8 * v46;
        v47 = (_QWORD *)(8 * v46 + v40[6]);
        v48 = (_QWORD *)*v47;
        --*((_DWORD *)v40 + 4);
        v49 = *((_DWORD *)v40 + 2);
        v50 = v49 - 1;
        if ( v43 == v49 - 1 )
          --*((_DWORD *)v40 + 5);
        if ( v48 != v35 )
          goto LABEL_71;
        v218 = v49;
        if ( !*v40 )
        {
          --v49;
          v218 = v50;
        }
        if ( v43 >= v49 )
        {
          if ( *v35 != v40[4] )
          {
            *v47 = *v35;
            goto LABEL_71;
          }
          *v47 = 0LL;
        }
        else
        {
          v51 = *v35;
          if ( *v35 != v40[4] )
          {
            v102 = *(_DWORD *)(v51 - 16 + 8);
            v256 = v102;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v256 = v102 ^ *(_DWORD *)(a1 + 136);
              if ( HIBYTE(v256) != ((unsigned __int8)v256 ^ (unsigned __int8)(BYTE1(v256) ^ BYTE2(v256))) )
              {
                RtlpLogHeapFailure(3, a1, v51 - 16, 0, 0LL, 0LL);
                v36 = v221;
                v37 = v222;
              }
            }
            if ( !(v44 - (unsigned __int16)v256) )
            {
              *(_QWORD *)(v220 + v40[6]) = v51;
              v33 = (__int64)v216;
              goto LABEL_71;
            }
            v33 = (__int64)v216;
          }
          *(_QWORD *)(v220 + v40[6]) = 0LL;
        }
        *(_DWORD *)(v40[5] + 4LL * (v45 >> 5)) &= ~(1 << (v45 & 0x1F));
LABEL_71:
        *v37 = v36;
        *(_QWORD *)(v36 + 8) = v37;
LABEL_72:
        v52 = (char *)(v33 + 10);
        if ( (*(_BYTE *)(v33 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock((PVOID)a1) )
        {
          RtlpDeCommitFreeBlock(a1, v33, *(unsigned __int16 *)(v33 + 8), 1);
          goto LABEL_487;
        }
        goto LABEL_73;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v33 + 11) = *(_BYTE *)(v33 + 8) ^ *(_BYTE *)(v33 + 9) ^ *(_BYTE *)(v33 + 10);
        *(_DWORD *)(v33 + 8) ^= *(_DWORD *)(a1 + 136);
      }
    }
    v110 = (_QWORD *)RtlpExtendHeap(a1);
    v33 = (__int64)v110;
    v216 = (char *)v110;
    if ( v110 )
    {
      v111 = v110 + 2;
      v112 = v110[2];
      v113 = (__int64 *)v110[3];
      v114 = *v113;
      v115 = *(_QWORD *)(v112 + 8);
      if ( *v113 != v115 || (_QWORD *)v114 != v111 )
      {
        RtlpLogHeapFailure(12, a1, (_DWORD)v111, v115, v114, 0LL);
        goto LABEL_487;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v33 + 8);
      v116 = *(__int64 ***)(a1 + 312);
      if ( v116 )
      {
        v117 = *(unsigned __int16 *)(v33 + 8);
        while ( 1 )
        {
          v118 = *((unsigned int *)v116 + 2);
          if ( v117 < v118 )
            break;
          if ( !*v116 )
          {
            v119 = (unsigned int)(v118 - 1);
            goto LABEL_216;
          }
          v116 = (__int64 **)*v116;
        }
        v119 = *(unsigned __int16 *)(v33 + 8);
LABEL_216:
        v237 = v119;
        Protect = v117;
        v120 = (int)v111;
        LOBYTE(v111) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v116, (_DWORD)v111, v120, v119, Protect);
      }
      *v113 = v112;
      *(_QWORD *)(v112 + 8) = v113;
      goto LABEL_72;
    }
LABEL_325:
    v211 = 0LL;
    goto LABEL_487;
  }
  v10 = *(_QWORD *)(a1 + 352);
  v20 = NtCurrentTeb();
  v21 = _interlockedbittestandreset((volatile signed __int32 *)(v10 + 8), 0);
  UniqueThread = v20->ClientId.UniqueThread;
  if ( v21 )
  {
    *(_QWORD *)(v10 + 16) = UniqueThread;
    *(_DWORD *)(v10 + 12) = 1;
LABEL_23:
    ++*(_DWORD *)(a1 + 584);
    goto LABEL_24;
  }
  if ( *(void **)(v10 + 16) == UniqueThread )
  {
    ++*(_DWORD *)(v10 + 12);
    goto LABEL_23;
  }
  if ( !byte_18015F3E8 )
  {
    v210 = 1;
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    RtlpUpdateHeapRates(a1, 1LL);
LABEL_24:
    v206 = 1;
    if ( (*(_DWORD *)(a1 + 120) & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance((_DWORD *)a1);
    goto LABEL_26;
  }
  NtCurrentTeb()->LastStatusValue = -1073741420;
  v184 = NtCurrentTeb();
  v184->LastErrorValue = RtlNtStatusToDosError(-1073741420);
LABEL_487:
  if ( v206 )
  {
    if ( !v207 && v211 )
      RtlpUpdateHeapWatermarks(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v200 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v200 = 2147353480LL;
  v201 = v211;
  if ( *(_BYTE *)v200 && v211 )
  {
    if ( v207 )
      RtlpHeapLogRangeReserve(a1, (unsigned __int64)v207 & 0xFFFFFFFFFFFF0000uLL, *((_QWORD *)v207 + 5));
  }
  return v201;
}
