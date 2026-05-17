/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x180041A70
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x18001453C (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpIsSubSegmentReuseable @ 0x180014FA0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeUserBlock @ 0x180015054 (RtlpFreeUserBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180046DE0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpAllocateUserBlock @ 0x180049994 (RtlpAllocateUserBlock.c)
 *     RtlpSubSegmentInitialize @ 0x18005E860 (RtlpSubSegmentInitialize.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180076024 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180077C88 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x18008172C (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A3B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3B50 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A3BC0 (InterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A4830 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180101228 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x180101898 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x180101934 (RtlpLogHeapSubSegmentActivate.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocFromContext(__int64 a1, unsigned __int16 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // r14
  unsigned __int16 *v6; // rbp
  struct _TEB *v7; // rsi
  __int64 HeapVirtualAffinity; // rcx
  __int64 UniqueThread_low; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r10
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  signed __int64 *v16; // r12
  unsigned int v17; // r8d
  int v18; // edx
  signed __int32 v19; // ebx
  __int64 v20; // r12
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  unsigned __int16 v23; // r14
  __int16 v24; // ax
  unsigned __int64 v25; // rdx
  int v26; // r8d
  union _SLIST_HEADER *v27; // r11
  union _SLIST_HEADER *v28; // r14
  union _SLIST_HEADER *v29; // r9
  unsigned int v30; // ecx
  unsigned int v31; // r8d
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // r9d
  __int64 v37; // rbx
  unsigned __int64 v38; // rdi
  unsigned int v40; // edx
  union _SLIST_HEADER *v41; // rax
  signed __int64 *v42; // rcx
  unsigned __int16 *v43; // r14
  volatile signed __int64 *v44; // rax
  unsigned int v45; // edx
  unsigned int v46; // esi
  signed __int64 *v47; // rbx
  signed __int64 v48; // r12
  union _SLIST_HEADER *v49; // r15
  unsigned int v50; // r14d
  __int64 v51; // rsi
  PSLIST_ENTRY v52; // rbx
  volatile signed __int64 *v53; // rcx
  signed __int32 v54; // eax
  _DWORD *v55; // rcx
  __int64 v56; // rcx
  bool IsSubSegmentReuseThresholdExceeded; // al
  signed __int32 v58; // eax
  __int64 v59; // rax
  __int64 **v60; // rdx
  _QWORD *v61; // rcx
  signed __int64 v62; // rax
  unsigned int v63; // ecx
  _DWORD *SharedData; // rdx
  __int64 v65; // rdx
  _DWORD *v66; // rdx
  __int64 v67; // rdx
  signed __int64 v68; // rbx
  PSLIST_ENTRY v69; // rdx
  union _SLIST_HEADER *v70; // r14
  unsigned int v71; // edi
  volatile signed __int64 *v72; // r15
  __int64 v73; // rcx
  __int64 v74; // r9
  unsigned int v75; // r10d
  BOOL v76; // r8d
  signed __int64 v77; // rax
  char v78; // r11
  char v79; // cl
  __int64 v80; // r10
  char v81; // r8
  unsigned int v82; // edx
  unsigned int v83; // eax
  unsigned int v84; // ecx
  unsigned int v85; // ecx
  __int64 UserBlock; // rax
  __int64 v87; // rsi
  unsigned __int64 v88; // rax
  __int64 v89; // r12
  PSLIST_ENTRY v90; // rax
  unsigned __int16 **v91; // rbx
  signed __int32 v92; // eax
  _DWORD *v93; // rcx
  __int64 v94; // rcx
  bool v95; // al
  signed __int32 v96; // eax
  __int64 v97; // rax
  _QWORD *v98; // rcx
  signed __int64 v99; // rax
  __int16 RandomValue32; // ax
  unsigned __int16 v101; // ax
  __int64 v102; // rax
  int v103; // ebx
  unsigned int CurrentProcessorNumber; // eax
  __int64 v105; // rax
  __int64 v106; // rbx
  char *v107; // rcx
  int v108; // ecx
  PSLIST_ENTRY v109; // rdx
  _SLIST_ENTRY *Next; // rcx
  unsigned __int16 *v111; // rax
  _QWORD **v112; // rdx
  __int64 v113; // rcx
  signed __int32 v114; // eax
  __int64 v115; // rcx
  __int64 v116; // rcx
  bool v117; // zf
  signed __int32 v118; // ett
  unsigned __int16 v119; // cx
  unsigned __int16 v120; // ax
  bool v121; // cf
  volatile signed __int64 *v122; // rax
  __int64 v123; // rcx
  char IsSubSegmentReuseable; // al
  signed __int32 v125; // eax
  __int64 v126; // rax
  _QWORD *v127; // rcx
  signed __int64 v128; // rax
  _QWORD **v129; // rdx
  __int64 v130; // rcx
  signed __int32 v131; // eax
  __int64 v132; // rax
  _QWORD *v133; // rcx
  signed __int64 v134; // rax
  signed __int32 v135; // eax
  __int64 v136; // rax
  volatile signed __int32 *v137; // rdx
  _QWORD *v138; // rcx
  signed __int32 v139[8]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int16 *v140; // [rsp+30h] [rbp-A8h]
  unsigned int v141; // [rsp+38h] [rbp-A0h]
  signed __int64 *v142; // [rsp+40h] [rbp-98h]
  PSLIST_HEADER ListHead; // [rsp+48h] [rbp-90h]
  volatile signed __int64 *v144; // [rsp+50h] [rbp-88h]
  PSLIST_ENTRY v145; // [rsp+58h] [rbp-80h]
  signed __int64 v146; // [rsp+60h] [rbp-78h]
  signed __int64 v147; // [rsp+68h] [rbp-70h]
  int v148; // [rsp+70h] [rbp-68h]
  PSLIST_HEADER v149; // [rsp+78h] [rbp-60h]
  int v150; // [rsp+80h] [rbp-58h]
  __int64 v151; // [rsp+88h] [rbp-50h]
  unsigned int v152; // [rsp+E0h] [rbp+8h]
  union _SLIST_HEADER *v153; // [rsp+E0h] [rbp+8h]
  int v154; // [rsp+E0h] [rbp+8h]
  unsigned int v155; // [rsp+E0h] [rbp+8h]
  int v156; // [rsp+E8h] [rbp+10h]
  __int64 v157; // [rsp+F0h] [rbp+18h]
  char v158; // [rsp+F8h] [rbp+20h]

  v158 = (char)a4;
  v157 = a3;
  v156 = 0;
  LODWORD(v5) = 0;
  v6 = (unsigned __int16 *)(a1 + 676 + 4LL * a2);
  if ( (*(_BYTE *)(a1 + 672) & 1) == 0 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v7 = NtCurrentTeb();
    HeapVirtualAffinity = v7->HeapVirtualAffinity;
    UniqueThread_low = LODWORD(v7->ClientId.UniqueThread);
    LODWORD(v5) = HeapVirtualAffinity - 1;
    v156 = HeapVirtualAffinity - 1;
    if ( (int)HeapVirtualAffinity - 1 < 0 || RtlpAffinityState[HeapVirtualAffinity] != UniqueThread_low )
    {
      v103 = HIDWORD(RtlpAffinityState[0]);
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v5 = v103 & CurrentProcessorNumber;
      v156 = v103 & CurrentProcessorNumber;
      v7->HeapVirtualAffinity = (v103 & CurrentProcessorNumber) + 1;
      qword_18015D448[v5] = UniqueThread_low;
    }
  }
  v10 = *((unsigned __int8 *)v6 + 2);
  v11 = 16LL * *v6;
  v151 = v11;
  v149 = (PSLIST_HEADER)(a1 + 48 * ((unsigned int)v5 + 68LL));
  if ( (_DWORD)v5 )
    v12 = *(_QWORD *)(a1 + 8 * v10 + 2224) - 192LL + 192LL * (unsigned int)v5;
  else
    v12 = *(_QWORD *)(a1 + 8 * v10 + 1192);
  v140 = (unsigned __int16 *)v12;
LABEL_8:
  while ( 2 )
  {
    v13 = *(_QWORD *)(v12 + 8);
    if ( v13 )
    {
      v14 = *(_QWORD *)v12;
      v15 = HIWORD(*(_DWORD *)(v13 + 32));
      v141 = 0;
      v16 = *(signed __int64 **)(v14 + 24);
      v142 = v16;
      if ( (v15 & 0x8000) != 0 )
      {
        v105 = *(unsigned __int16 *)(v12 + 172);
        v141 = 1;
        v106 = (__int64)v16 + 4 * v105;
        if ( (*(_BYTE *)(v106 + 679) & 1) == 0 )
        {
          if ( (int)RtlpAffinitizeSegmentInfoForBucket(v16, *(unsigned __int8 *)(v106 + 678), a3, a4) >= 0 )
          {
            *(_BYTE *)(v106 + 679) |= 1u;
            v107 = (unsigned int)RtlGetCurrentServiceSessionId()
                 ? (char *)NtCurrentPeb()->SharedData + 550
                 : (char *)2147353472;
            if ( *v107 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(v16[3], *(unsigned __int8 *)(v106 + 678));
          }
          v12 = (__int64)v140;
        }
      }
      v17 = 100;
      if ( MEMORY[0x7FFE036A] <= 1u )
        v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        v19 = *(_DWORD *)(v13 + 32);
        if ( (v19 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v19 )
            goto LABEL_163;
          if ( v19 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 32), v19 | 0x80000000, v19) )
            break;
        }
        if ( ++v18 > v17 )
          goto LABEL_163;
      }
      if ( v19 == -1 )
        goto LABEL_163;
      v20 = *(_QWORD *)(v13 + 8);
      if ( !v20 || *(_QWORD *)v13 != v12 || !(_WORD)v19 )
      {
        *(_DWORD *)(v13 + 32) = v19;
        goto LABEL_163;
      }
      v152 = RtlpSearchWidth[*(unsigned __int16 *)(v12 + 172)];
      ListHead = (PSLIST_HEADER)NtCurrentTeb();
      v21 = *((_WORD *)&ListHead[379].HeaderX64 + 1);
      v22 = v21;
      v23 = (unsigned __int8)v21;
      if ( (unsigned __int8)v21 == HIBYTE(v21) )
      {
        LOWORD(v22) = HIBYTE(v21);
        RandomValue32 = RtlpHeapGenerateRandomValue32(v22, 255LL, 0x180000000uLL, 0x8000LL);
        v12 = (__int64)v140;
        v24 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
      }
      else
      {
        v24 = (unsigned __int8)(v21 ^ (v21 + 1)) ^ v21;
      }
      *((_WORD *)&ListHead[379].HeaderX64 + 1) = v24;
      v25 = *(_QWORD *)(v20 + 32);
      v26 = *((unsigned __int8 *)&RtlpLowFragHeapRandomData + v23);
      if ( v25 < 0x40 )
      {
        v30 = v152;
        v29 = *(union _SLIST_HEADER **)(v20 + 40);
        if ( v25 < v152 )
          v30 = *(_QWORD *)(v20 + 32);
      }
      else
      {
        v27 = *(union _SLIST_HEADER **)(v20 + 40);
        v28 = (union _SLIST_HEADER *)((char *)v27 + 8 * ((v25 - 1) >> 6));
        v29 = (union _SLIST_HEADER *)((char *)v27 + 8 * ((unsigned __int64)(unsigned int)(v19 >> 16) >> 6));
        ListHead = v29;
        do
        {
          if ( v29->Alignment != -1LL )
            break;
          v41 = v27;
          if ( v29 != v28 )
            v41 = (union _SLIST_HEADER *)((char *)&v29->HeaderX64 + 8);
          v29 = v41;
        }
        while ( v41 != ListHead );
        if ( v29 == v28 && (v40 = v25 & 0x3F) != 0 )
        {
          v30 = v152;
          if ( v40 < (unsigned __int64)v152 )
            v30 = *(_DWORD *)(v20 + 32) & 0x3F;
        }
        else
        {
          v30 = v152;
        }
      }
      v31 = (v30 * v26) >> 7;
      if ( v30 >= 0x40 )
      {
        v33 = -1LL;
      }
      else
      {
        _BitScanForward64(&v32, ~v29->Alignment);
        LOBYTE(v31) = v32 + v31;
        v33 = ((1LL << v30) - 1) << v32;
      }
      _BitScanForward64(&v34, ~__ROR8__(v29->Alignment | ~v33, v31));
      LODWORD(v34) = ((_BYTE)v31 + (_BYTE)v34) & 0x3F;
      v35 = v29->Alignment | (1LL << v34);
      v150 = v34;
      v29->Alignment = v35;
      v36 = v34 + ((unsigned int)(((__int64)v29 - *(_QWORD *)(v20 + 40)) >> 3) << 6);
      *(_DWORD *)(v13 + 32) = (v36 << 16) | ((unsigned __int16)v19 - 1);
      LODWORD(v34) = RtlpLFHKey ^ (unsigned int)v142 ^ v20 ^ *(_DWORD *)(v20 + 24);
      v37 = v20 + v36 * WORD1(v34) + (unsigned __int16)v34;
      if ( (*(_BYTE *)(v37 + 15) & 0x3F) != 0 )
      {
        RtlpLogHeapFailure(14, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL), v37, 0, 0LL, 0LL);
        v12 = (__int64)v140;
LABEL_163:
        v37 = 0LL;
      }
      if ( v141 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
        _InterlockedCompareExchange(
          (_DWORD *)RtlpAffinityState + 1,
          2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
          SHIDWORD(RtlpAffinityState[0]));
      if ( v37 )
      {
        if ( (v158 & 8) != 0 )
          memset((void *)(v37 + 16), 0, v11 - 8);
        v38 = v11 - v157;
        if ( v38 >= 0x3F )
        {
          *(_QWORD *)(v37 + 16LL * *v6) = v38;
          *(_BYTE *)(v37 + 15) = -65;
        }
        else
        {
          *(_BYTE *)(v37 + 15) = v38 | 0x80;
        }
        return v37 + 16;
      }
    }
    a3 = *(_QWORD *)v12;
    v42 = (signed __int64 *)(v12 + 16);
    ListHead = *(PSLIST_HEADER *)v12;
    v142 = (signed __int64 *)(v12 + 16);
LABEL_49:
    v146 = 0LL;
    while ( 2 )
    {
      v43 = v140;
      v44 = 0LL;
      v45 = 0;
      v144 = 0LL;
      v46 = 0;
      LODWORD(v145) = 0;
      v47 = v42;
      do
      {
        v48 = *v47;
        if ( !*v47 )
          goto LABEL_52;
        v141 = *(unsigned __int16 *)(v48 + 32);
        v63 = v141;
        if ( v141 <= v45 )
          goto LABEL_82;
        if ( (RtlpLowFragHeapGlobalFlags & 4) == 0 )
        {
          v101 = v43[86];
          if ( v101 <= 0x70u )
          {
            if ( *((_DWORD *)v43 + 40) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v101] )
            {
              v119 = *(_WORD *)(v48 + 32);
              v120 = *(_WORD *)(v48 + 40) >> 2;
              v121 = v120 < v119;
              v117 = v120 == v119;
              v63 = v141;
              LODWORD(a3) = !v121 && !v117;
              goto LABEL_85;
            }
            v63 = v141;
          }
        }
        LOBYTE(a3) = 0;
LABEL_85:
        v154 = a3;
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v65 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v65 = 2147353482LL;
        if ( *(_BYTE *)v65
          || ((v66 = NtCurrentPeb()->SharedData) == 0LL || !*v66
            ? (v67 = 2147353472LL)
            : (v67 = (__int64)NtCurrentPeb()->SharedData + 550),
              *(_BYTE *)v67 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
        {
          if ( !(_BYTE)a3 )
            goto LABEL_92;
          RtlpLogHeapReuseThresholdActivate(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v43 + 24LL) + 24LL),
            *(_QWORD *)(v48 + 8),
            v43[86]);
          v63 = v141;
          LODWORD(a3) = v154;
        }
        if ( (_BYTE)a3 )
        {
          v45 = (unsigned int)v145;
LABEL_82:
          v44 = v144;
LABEL_52:
          v48 = v146;
          goto LABEL_53;
        }
LABEL_92:
        v45 = v63;
        v146 = v48;
        LODWORD(v145) = v63;
        v44 = (volatile signed __int64 *)&v43[4 * v46 + 8];
        v144 = v44;
LABEL_53:
        ++v46;
        ++v47;
      }
      while ( v46 < 0x10 );
      v49 = v149;
      v50 = v156;
      v51 = (__int64)v140;
      if ( v44 )
      {
        v153 = (union _SLIST_HEADER *)(*(_QWORD *)(ListHead[1].Region + 8LL * v140[86] + 1192) + 144LL);
        v52 = RtlpInterlockedPopEntrySList(v153);
        if ( v52 )
        {
          while ( 1 )
          {
            v108 = *((_DWORD *)&v52[-1].Next + 3);
            v109 = v52;
            v145 = v52;
            v52 -= 3;
            if ( (v108 & 1) != 0 )
              break;
            _m_prefetchw((char *)&v52[2].Next + 12);
            if ( _InterlockedAnd((volatile signed __int32 *)&v52[2].Next + 3, 0xFFFFFFFD) == 2 )
            {
              Next = v52->Next->Next;
              v52->Next = 0LL;
              RtlpInterlockedPushEntrySList(Next, v109);
            }
            v52 = RtlpInterlockedPopEntrySList(v153);
            if ( !v52 )
              goto LABEL_56;
          }
          if ( !(unsigned int)RtlpSetSegmentInfo(v52, v51) )
          {
            RtlpInterlockedPushEntrySList(v153, v145);
            v52 = 0LL;
          }
        }
LABEL_56:
        v53 = v144;
        if ( v48 != _InterlockedCompareExchange64(v144, (signed __int64)v52, v48) )
        {
          v42 = v142;
          if ( v52 )
          {
            RtlpInterlockedPushEntrySList(v153, &v52[3]);
            v42 = v142;
          }
          continue;
        }
        if ( !v52 )
          *(_WORD *)(v51 + 174) = (unsigned __int8)(((__int64)v53 - v51 - 16) >> 3);
        if ( v48 )
        {
          _m_prefetchw((const void *)(v48 + 44));
          if ( _InterlockedAnd((volatile signed __int32 *)(v48 + 44), 0xFFFFFFFD) != 2 )
            goto LABEL_61;
          v116 = **(_QWORD **)v48;
          *(_QWORD *)v48 = 0LL;
          RtlpInterlockedPushEntrySList(v116, v48 + 48);
          v42 = v142;
          goto LABEL_49;
        }
      }
      else
      {
        v48 = 0LL;
      }
      break;
    }
    v68 = 0LL;
    ListHead = (PSLIST_HEADER)(*(_QWORD *)(ListHead[1].Region + 8LL * *(unsigned __int16 *)(v51 + 172) + 1192) + 144LL);
    v142 = (signed __int64 *)RtlpInterlockedPopEntrySList(ListHead);
    v69 = (PSLIST_ENTRY)v142;
    if ( !v142 )
      goto LABEL_61;
    v70 = ListHead;
    v71 = 0;
    v72 = 0LL;
    while ( 2 )
    {
      v48 = (signed __int64)&v69[-3];
      if ( (*((_DWORD *)&v69[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v48 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v48 + 44), 0xFFFFFFFD) == 2 )
          goto LABEL_99;
        goto LABEL_100;
      }
      if ( !(unsigned int)RtlpSetSegmentInfo(v48, v51) )
      {
        v122 = v142;
        *(_QWORD *)(v48 + 48) = v68;
        v68 = v48 + 48;
        if ( v71 )
          v122 = v72;
        ++v71;
        v72 = v122;
        goto LABEL_100;
      }
      _m_prefetchw((const void *)(v48 + 44));
      if ( _InterlockedAnd((volatile signed __int32 *)(v48 + 44), 0xFFFFFFFD) == 2 )
      {
        v69 = (PSLIST_ENTRY)v142;
LABEL_99:
        v73 = **(_QWORD **)v48;
        *(_QWORD *)v48 = 0LL;
        RtlpInterlockedPushEntrySList(v73, v69);
LABEL_100:
        v48 = 0LL;
        v142 = (signed __int64 *)RtlpInterlockedPopEntrySList(v70);
        v69 = (PSLIST_ENTRY)v142;
        if ( !v142 )
          goto LABEL_195;
        continue;
      }
      break;
    }
    if ( !RtlpIsSubSegmentReuseable(v51, v48) )
      goto LABEL_100;
LABEL_195:
    v50 = v156;
    v117 = v71 == 0;
    v144 = v72;
    v49 = v149;
    v155 = v71;
    v11 = v151;
    if ( !v117 )
      InterlockedPushListSList(ListHead, v68, v144, v155);
LABEL_61:
    if ( v48 )
    {
      *(_BYTE *)(v48 + 43) = v50;
      do
      {
        v54 = *(_DWORD *)(v48 + 44);
        v12 = (__int64)v140;
        if ( !v54 || (v54 & 6) != 0 )
          goto LABEL_8;
      }
      while ( v54 != _InterlockedCompareExchange((volatile signed __int32 *)(v48 + 44), v54 | 6, v54) );
      a3 = *(_QWORD *)v48;
      if ( *(_QWORD *)v48 == v12 )
      {
        v55 = NtCurrentPeb()->SharedData;
        if ( v55 && *v55 )
          v56 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v56 = 2147353472LL;
        if ( *(_BYTE *)v56 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 24LL), *(_QWORD *)(v48 + 8));
          v12 = (__int64)v140;
        }
        v48 = _InterlockedExchange64((volatile __int64 *)(v12 + 8), v48);
        if ( !v48 )
          continue;
        _m_prefetchw((const void *)(v48 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v48 + 44), 0xFFFFFFF9) == 6 )
        {
LABEL_226:
          v123 = **(_QWORD **)v48;
          *(_QWORD *)v48 = 0LL;
          RtlpInterlockedPushEntrySList(v123, v48 + 48);
          v12 = (__int64)v140;
          continue;
        }
        if ( *(_WORD *)(v48 + 32) )
        {
          IsSubSegmentReuseThresholdExceeded = RtlpIsSubSegmentReuseThresholdExceeded(v12, v48);
          v12 = (__int64)v140;
          if ( !IsSubSegmentReuseThresholdExceeded )
          {
            while ( 1 )
            {
              v58 = *(_DWORD *)(v48 + 44);
              v12 = (__int64)v140;
              if ( !v58 || (v58 & 2) != 0 )
                break;
              if ( v58 == _InterlockedCompareExchange((volatile signed __int32 *)(v48 + 44), v58 | 2, v58) )
              {
                a4 = *(_QWORD **)v48;
                a3 = 0LL;
                while ( 1 )
                {
                  v59 = ((_BYTE)a3 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
                  v60 = (__int64 **)a4[v59 + 2];
                  v61 = &a4[v59];
                  if ( v60 )
                  {
                    if ( (*((_DWORD *)v60 + 11) & 1) == 0
                      && v60 == (__int64 **)_InterlockedCompareExchange64(v61 + 2, v48, (signed __int64)v60) )
                    {
                      _m_prefetchw((char *)v60 + 44);
                      v114 = *((_DWORD *)v60 + 11);
                      do
                      {
                        v118 = v114;
                        v114 = _InterlockedCompareExchange((volatile signed __int32 *)v60 + 11, v114 & 0xFFFFFFFD, v114);
                      }
                      while ( v118 != v114 );
                      goto LABEL_187;
                    }
                  }
                  else
                  {
                    v62 = _InterlockedCompareExchange64(v61 + 2, v48, 0LL);
                    v12 = (__int64)v140;
                    if ( !v62 )
                      goto LABEL_8;
                  }
                  a3 = (unsigned int)(a3 + 1);
                  if ( (unsigned int)a3 >= 0x10 )
                    goto LABEL_200;
                }
              }
            }
          }
        }
      }
      else
      {
        _m_prefetchw((const void *)(v48 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v48 + 44), 0xFFFFFFF9) == 6 )
          goto LABEL_226;
        IsSubSegmentReuseable = RtlpIsSubSegmentReuseable(a3, v48);
        v12 = (__int64)v140;
        if ( IsSubSegmentReuseable )
        {
          while ( 1 )
          {
            v125 = *(_DWORD *)(v48 + 44);
            v12 = (__int64)v140;
            if ( !v125 || (v125 & 2) != 0 )
              break;
            if ( v125 == _InterlockedCompareExchange((volatile signed __int32 *)(v48 + 44), v125 | 2, v125) )
            {
              a4 = *(_QWORD **)v48;
              a3 = 0LL;
              do
              {
                v126 = ((_BYTE)a3 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
                v60 = (__int64 **)a4[v126 + 2];
                v127 = &a4[v126];
                if ( v60 )
                {
                  if ( (*((_DWORD *)v60 + 11) & 1) == 0
                    && v60 == (__int64 **)_InterlockedCompareExchange64(v127 + 2, v48, (signed __int64)v60) )
                  {
                    goto LABEL_186;
                  }
                }
                else
                {
                  v128 = _InterlockedCompareExchange64(v127 + 2, v48, 0LL);
                  v12 = (__int64)v140;
                  if ( !v128 )
                    goto LABEL_8;
                }
                a3 = (unsigned int)(a3 + 1);
              }
              while ( (unsigned int)a3 < 0x10 );
LABEL_200:
              v111 = *(unsigned __int16 **)v48;
              v112 = (_QWORD **)(v48 + 48);
              goto LABEL_184;
            }
          }
        }
      }
      continue;
    }
    break;
  }
  v74 = *(unsigned int *)(v51 + 160);
  v75 = *((unsigned __int8 *)v6 + 2);
  v76 = (*(_BYTE *)(a1 + 672) & 2) != 0;
  do
  {
    v77 = *(_QWORD *)(a1 + 80);
    v78 = 0;
    if ( (_DWORD)v77 == v75 )
    {
      HIDWORD(v147) = HIDWORD(v77) + 1;
      if ( HIDWORD(v77) > 7 )
      {
        v78 = 1;
        HIDWORD(v147) = 0;
      }
    }
    else
    {
      v147 = v75 | 0x100000000LL;
    }
  }
  while ( v77 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v147, v77) );
  if ( !v78 || v76 )
  {
    v79 = 3;
    if ( v76 )
      v79 = 4;
    v74 = (unsigned int)v74 >> v79;
  }
  v80 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v6 + 2)];
  v81 = (*((_BYTE *)v6 + 3) & 1) - 1;
  if ( (unsigned int)v80 >= 0x100 )
    v81 = *((_BYTE *)v6 + 3) & 1;
  if ( *(_DWORD *)(v51 + 164) )
    --v81;
  v82 = 1 << (3 - v81);
  if ( (unsigned int)v74 >= v82 )
    v82 = v74;
  if ( v82 < 4 )
  {
    v82 = 4;
  }
  else if ( v82 > 0x400 )
  {
    v82 = 1024;
  }
  v83 = ((((unsigned __int64)v82 + 31) >> 3) & 0xFFFFFFFC) + v82 * (v80 + 16) + 68;
  if ( v83 > 0xF0000 )
    v83 = 983040;
  _BitScanReverse(&v84, v83 - 1);
  v85 = v84 + 1;
  if ( v85 <= 7 )
  {
    LOBYTE(v85) = 7;
    v148 = 7;
  }
  else
  {
    v148 = v85;
    if ( v85 >= 0x12 )
      LOBYTE(v85) = 18;
  }
  if ( (*((_BYTE *)v6 + 3) & 6) != 0 )
  {
    LOBYTE(v85) = 18;
  }
  else if ( (_BYTE)v85 != 18 && (unsigned int)v74 < 0x400 )
  {
    LOBYTE(v74) = 0;
    goto LABEL_128;
  }
  v74 = 1LL;
LABEL_128:
  UserBlock = RtlpAllocateUserBlock(a1, (unsigned __int8)v85, v80 + 16, v74);
  v87 = UserBlock;
  if ( !UserBlock )
    return 0LL;
  v88 = 1LL << *(_BYTE *)(UserBlock + 16);
  if ( v88 > 0xF0000 )
    v88 = 983040LL;
  v89 = v88 + *(unsigned __int16 *)(v87 + 18);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  v90 = RtlpInterlockedPopEntrySList(v49);
  if ( v90 )
  {
    v91 = (unsigned __int16 **)&v90[-3];
    goto LABEL_133;
  }
  v102 = RtlpLowFragHeapAllocateFromZone(a1, v50);
  v91 = (unsigned __int16 **)v102;
  if ( v102 )
  {
    *(_QWORD *)(v102 + 8) = 0LL;
LABEL_133:
    if ( !v91 )
      goto LABEL_279;
    *((_BYTE *)v91 + 43) = v50;
    RtlpSubSegmentInitialize(
      a1,
      (_DWORD)v91,
      v87,
      (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v6 + 2)],
      v89,
      (__int64)v6);
    _InterlockedOr(v139, 0);
    *(_DWORD *)(v87 + 20) = -253701952;
    while ( 1 )
    {
      v92 = *((_DWORD *)v91 + 11);
      if ( !v92 || (v92 & 6) != 0 )
        break;
      if ( v92 == _InterlockedCompareExchange((volatile signed __int32 *)v91 + 11, v92 | 6, v92) )
      {
        a3 = (__int64)*v91;
        v12 = (__int64)v140;
        if ( *v91 != v140 )
        {
          _m_prefetchw((char *)v91 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v91 + 11, 0xFFFFFFF9) == 6 )
          {
            v129 = (_QWORD **)(v91 + 6);
            v130 = *(_QWORD *)*v91;
            *v91 = 0LL;
          }
          else
          {
            if ( !RtlpIsSubSegmentReuseable(a3, (__int64)v91) )
              break;
            do
            {
              v135 = *((_DWORD *)v91 + 11);
              if ( !v135 || (v135 & 2) != 0 )
                goto LABEL_251;
            }
            while ( v135 != _InterlockedCompareExchange((volatile signed __int32 *)v91 + 11, v135 | 2, v135) );
            a4 = *v91;
            a3 = 0LL;
            do
            {
              v136 = ((_BYTE)a3 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
              v137 = (volatile signed __int32 *)a4[v136 + 2];
              v138 = &a4[v136];
              if ( v137 )
              {
                if ( (v137[11] & 1) == 0
                  && v137 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                          v138 + 2,
                                                          (signed __int64)v91,
                                                          (signed __int64)v137) )
                {
                  _m_prefetchw((const void *)(v137 + 11));
                  if ( _InterlockedAnd(v137 + 11, 0xFFFFFFFD) != 2 )
                    goto LABEL_251;
                  v130 = **(_QWORD **)v137;
                  *(_QWORD *)v137 = 0LL;
                  v129 = (_QWORD **)(v137 + 12);
                  goto LABEL_250;
                }
              }
              else if ( !_InterlockedCompareExchange64(v138 + 2, (signed __int64)v91, 0LL) )
              {
                goto LABEL_251;
              }
              a3 = (unsigned int)(a3 + 1);
            }
            while ( (unsigned int)a3 < 0x10 );
            v129 = (_QWORD **)(v91 + 6);
            v130 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*v91 + 24LL) + 8LL * (*v91)[86] + 1192) + 144LL;
          }
LABEL_250:
          RtlpInterlockedPushEntrySList(v130, v129);
          break;
        }
        v93 = NtCurrentPeb()->SharedData;
        if ( v93 && *v93 )
          v94 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v94 = 2147353472LL;
        if ( *(_BYTE *)v94 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v140 + 24LL) + 24LL), v91[1]);
          v12 = (__int64)v140;
        }
        v91 = (unsigned __int16 **)_InterlockedExchange64((volatile __int64 *)(v12 + 8), (__int64)v91);
        if ( v91 )
        {
          _m_prefetchw((char *)v91 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v91 + 11, 0xFFFFFFF9) == 6 )
          {
            v112 = (_QWORD **)(v91 + 6);
            v113 = *(_QWORD *)*v91;
            *v91 = 0LL;
LABEL_202:
            RtlpInterlockedPushEntrySList(v113, v112);
            v12 = (__int64)v140;
          }
          else if ( *((_WORD *)v91 + 16) )
          {
            v95 = RtlpIsSubSegmentReuseThresholdExceeded(v12, (__int64)v91);
            v12 = (__int64)v140;
            if ( !v95 )
            {
              while ( 1 )
              {
                v96 = *((_DWORD *)v91 + 11);
                v12 = (__int64)v140;
                if ( !v96 || (v96 & 2) != 0 )
                  break;
                if ( v96 == _InterlockedCompareExchange((volatile signed __int32 *)v91 + 11, v96 | 2, v96) )
                {
                  a4 = *v91;
                  a3 = 0LL;
                  while ( 1 )
                  {
                    v97 = ((_BYTE)a3 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
                    v60 = (__int64 **)a4[v97 + 2];
                    v98 = &a4[v97];
                    if ( v60 )
                    {
                      if ( (*((_DWORD *)v60 + 11) & 1) == 0
                        && v60 == (__int64 **)_InterlockedCompareExchange64(
                                                v98 + 2,
                                                (signed __int64)v91,
                                                (signed __int64)v60) )
                      {
                        goto LABEL_186;
                      }
                    }
                    else
                    {
                      v99 = _InterlockedCompareExchange64(v98 + 2, (signed __int64)v91, 0LL);
                      v12 = (__int64)v140;
                      if ( !v99 )
                        goto LABEL_8;
                    }
                    a3 = (unsigned int)(a3 + 1);
                    if ( (unsigned int)a3 >= 0x10 )
                      goto LABEL_183;
                  }
                }
              }
            }
          }
        }
        goto LABEL_8;
      }
    }
LABEL_251:
    while ( 1 )
    {
      v131 = *((_DWORD *)v91 + 11);
      v12 = (__int64)v140;
      if ( !v131 || (v131 & 2) != 0 )
        goto LABEL_8;
      if ( v131 == _InterlockedCompareExchange((volatile signed __int32 *)v91 + 11, v131 | 2, v131) )
      {
        a4 = *v91;
        a3 = 0LL;
        do
        {
          v132 = ((_BYTE)a3 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
          v60 = (__int64 **)a4[v132 + 2];
          v133 = &a4[v132];
          if ( v60 )
          {
            if ( (*((_DWORD *)v60 + 11) & 1) == 0
              && v60 == (__int64 **)_InterlockedCompareExchange64(v133 + 2, (signed __int64)v91, (signed __int64)v60) )
            {
LABEL_186:
              _m_prefetchw((char *)v60 + 44);
              v114 = _InterlockedAnd((volatile signed __int32 *)v60 + 11, 0xFFFFFFFD);
LABEL_187:
              v12 = (__int64)v140;
              if ( v114 == 2 )
              {
                v115 = **v60;
                *v60 = 0LL;
                RtlpInterlockedPushEntrySList(v115, v60 + 6);
                v12 = (__int64)v140;
              }
              goto LABEL_8;
            }
          }
          else
          {
            v134 = _InterlockedCompareExchange64(v133 + 2, (signed __int64)v91, 0LL);
            v12 = (__int64)v140;
            if ( !v134 )
              goto LABEL_8;
          }
          a3 = (unsigned int)(a3 + 1);
        }
        while ( (unsigned int)a3 < 0x10 );
LABEL_183:
        v111 = *v91;
        v112 = (_QWORD **)(v91 + 6);
LABEL_184:
        v113 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v111 + 24LL) + 8LL * v111[86] + 1192) + 144LL;
        goto LABEL_202;
      }
    }
  }
LABEL_279:
  RtlpFreeUserBlock(a1, (__int64 *)v87);
  return 0LL;
}
