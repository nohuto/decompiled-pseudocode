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

__int64 __fastcall RtlpLowFragHeapAllocFromContext(PRTL_SRWLOCK SRWLock, unsigned __int16 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // r14
  unsigned __int16 *v6; // rbp
  struct _TEB *v7; // rsi
  __int64 HeapVirtualAffinity; // rcx
  __int64 UniqueThread_low; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 Value; // r10
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
  _SLIST_HEADER *v27; // r11
  _SLIST_HEADER *v28; // r14
  _SLIST_HEADER *v29; // r9
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
  _SLIST_HEADER *v41; // rax
  signed __int64 *v42; // rcx
  unsigned __int16 *v43; // r14
  volatile signed __int64 *v44; // rax
  unsigned int v45; // edx
  unsigned int v46; // esi
  signed __int64 *v47; // rbx
  signed __int64 v48; // r12
  _SLIST_HEADER *v49; // r15
  char v50; // r14
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
  _SLIST_HEADER *v70; // r14
  unsigned int v71; // edi
  volatile signed __int64 *v72; // r15
  __int64 v73; // rcx
  __int64 v74; // r9
  unsigned int v75; // r10d
  BOOL v76; // r8d
  unsigned __int64 v77; // rax
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
  __int64 v91; // r8
  __int64 v92; // r9
  unsigned __int16 **v93; // rbx
  signed __int32 v94; // eax
  _DWORD *v95; // rcx
  __int64 v96; // rcx
  bool v97; // al
  signed __int32 v98; // eax
  __int64 v99; // rax
  _QWORD *v100; // rcx
  signed __int64 v101; // rax
  __int16 RandomValue32; // ax
  unsigned __int16 v103; // ax
  __int64 v104; // rax
  int v105; // ebx
  ULONG CurrentProcessorNumber; // eax
  __int64 v107; // rax
  __int64 v108; // rbx
  char *v109; // rcx
  int v110; // ecx
  PSLIST_ENTRY v111; // rdx
  _SLIST_ENTRY *Next; // rcx
  unsigned __int16 *v113; // rax
  _QWORD **v114; // rdx
  __int64 v115; // rcx
  signed __int32 v116; // eax
  __int64 v117; // rcx
  __int64 v118; // rcx
  bool v119; // zf
  signed __int32 v120; // ett
  unsigned __int16 v121; // cx
  unsigned __int16 v122; // ax
  bool v123; // cf
  volatile signed __int64 *v124; // rax
  __int64 v125; // rcx
  char IsSubSegmentReuseable; // al
  signed __int32 v127; // eax
  __int64 v128; // rax
  _QWORD *v129; // rcx
  signed __int64 v130; // rax
  _QWORD **v131; // rdx
  __int64 v132; // rcx
  signed __int32 v133; // eax
  __int64 v134; // rax
  _QWORD *v135; // rcx
  signed __int64 v136; // rax
  signed __int32 v137; // eax
  __int64 v138; // rax
  volatile signed __int32 *v139; // rdx
  _QWORD *v140; // rcx
  signed __int32 v141[8]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int16 *v142; // [rsp+30h] [rbp-A8h]
  unsigned int v143; // [rsp+38h] [rbp-A0h]
  signed __int64 *v144; // [rsp+40h] [rbp-98h]
  PSLIST_HEADER ListHead; // [rsp+48h] [rbp-90h]
  volatile signed __int64 *v146; // [rsp+50h] [rbp-88h]
  PSLIST_ENTRY v147; // [rsp+58h] [rbp-80h]
  signed __int64 v148; // [rsp+60h] [rbp-78h]
  signed __int64 v149; // [rsp+68h] [rbp-70h]
  int v150; // [rsp+70h] [rbp-68h]
  PSLIST_HEADER v151; // [rsp+78h] [rbp-60h]
  int v152; // [rsp+80h] [rbp-58h]
  __int64 v153; // [rsp+88h] [rbp-50h]
  unsigned int v154; // [rsp+E0h] [rbp+8h]
  _SLIST_HEADER *v155; // [rsp+E0h] [rbp+8h]
  int v156; // [rsp+E0h] [rbp+8h]
  unsigned int v157; // [rsp+E0h] [rbp+8h]
  char v158; // [rsp+E8h] [rbp+10h]
  __int64 v159; // [rsp+F0h] [rbp+18h]
  char v160; // [rsp+F8h] [rbp+20h]

  v160 = (char)a4;
  v159 = a3;
  v158 = 0;
  LODWORD(v5) = 0;
  v6 = (unsigned __int16 *)&SRWLock[84].Ptr + 2 * a2 + 2;
  if ( (*(_BYTE *)&SRWLock[84].0 & 1) == 0 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v7 = NtCurrentTeb();
    HeapVirtualAffinity = v7->HeapVirtualAffinity;
    UniqueThread_low = LODWORD(v7->ClientId.UniqueThread);
    LODWORD(v5) = HeapVirtualAffinity - 1;
    v158 = HeapVirtualAffinity - 1;
    if ( (int)HeapVirtualAffinity - 1 < 0 || RtlpAffinityState[HeapVirtualAffinity] != UniqueThread_low )
    {
      v105 = HIDWORD(RtlpAffinityState[0]);
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v5 = v105 & CurrentProcessorNumber;
      v158 = v105 & CurrentProcessorNumber;
      v7->HeapVirtualAffinity = (v105 & CurrentProcessorNumber) + 1;
      qword_18015D448[v5] = UniqueThread_low;
    }
  }
  v10 = *((unsigned __int8 *)v6 + 2);
  v11 = 16LL * *v6;
  v153 = v11;
  v151 = (PSLIST_HEADER)&SRWLock[6 * (unsigned int)v5 + 408];
  if ( (_DWORD)v5 )
    Value = SRWLock[v10 + 278].Value - 192 + 192LL * (unsigned int)v5;
  else
    Value = SRWLock[v10 + 149].Value;
  v142 = (unsigned __int16 *)Value;
LABEL_8:
  while ( 2 )
  {
    v13 = *(_QWORD *)(Value + 8);
    if ( v13 )
    {
      v14 = *(_QWORD *)Value;
      v15 = HIWORD(*(_DWORD *)(v13 + 32));
      v143 = 0;
      v16 = *(signed __int64 **)(v14 + 24);
      v144 = v16;
      if ( (v15 & 0x8000) != 0 )
      {
        v107 = *(unsigned __int16 *)(Value + 172);
        v143 = 1;
        v108 = (__int64)v16 + 4 * v107;
        if ( (*(_BYTE *)(v108 + 679) & 1) == 0 )
        {
          if ( (int)RtlpAffinitizeSegmentInfoForBucket(v16, *(unsigned __int8 *)(v108 + 678), a3, a4) >= 0 )
          {
            *(_BYTE *)(v108 + 679) |= 1u;
            v109 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
            if ( *v109 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(v16[3], *(unsigned __int8 *)(v108 + 678));
          }
          Value = (unsigned __int64)v142;
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
      if ( !v20 || *(_QWORD *)v13 != Value || !(_WORD)v19 )
      {
        *(_DWORD *)(v13 + 32) = v19;
        goto LABEL_163;
      }
      v154 = RtlpSearchWidth[*(unsigned __int16 *)(Value + 172)];
      ListHead = (PSLIST_HEADER)NtCurrentTeb();
      v21 = *((_WORD *)&ListHead[379].HeaderX64 + 1);
      v22 = v21;
      v23 = (unsigned __int8)v21;
      if ( (unsigned __int8)v21 == HIBYTE(v21) )
      {
        LOWORD(v22) = HIBYTE(v21);
        RandomValue32 = RtlpHeapGenerateRandomValue32(v22, 255LL, 0x180000000uLL, 0x8000LL);
        Value = (unsigned __int64)v142;
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
        v30 = v154;
        v29 = *(_SLIST_HEADER **)(v20 + 40);
        if ( v25 < v154 )
          v30 = *(_QWORD *)(v20 + 32);
      }
      else
      {
        v27 = *(_SLIST_HEADER **)(v20 + 40);
        v28 = (_SLIST_HEADER *)((char *)v27 + 8 * ((v25 - 1) >> 6));
        v29 = (_SLIST_HEADER *)((char *)v27 + 8 * ((unsigned __int64)(unsigned int)(v19 >> 16) >> 6));
        ListHead = v29;
        do
        {
          if ( v29->Alignment != -1LL )
            break;
          v41 = v27;
          if ( v29 != v28 )
            v41 = (_SLIST_HEADER *)((char *)&v29->HeaderX64 + 8);
          v29 = v41;
        }
        while ( v41 != ListHead );
        if ( v29 == v28 && (v40 = v25 & 0x3F) != 0 )
        {
          v30 = v154;
          if ( v40 < (unsigned __int64)v154 )
            v30 = *(_DWORD *)(v20 + 32) & 0x3F;
        }
        else
        {
          v30 = v154;
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
      v152 = v34;
      v29->Alignment = v35;
      v36 = v34 + ((unsigned int)(((__int64)v29 - *(_QWORD *)(v20 + 40)) >> 3) << 6);
      *(_DWORD *)(v13 + 32) = (v36 << 16) | ((unsigned __int16)v19 - 1);
      LODWORD(v34) = RtlpLFHKey ^ (unsigned int)v144 ^ v20 ^ *(_DWORD *)(v20 + 24);
      v37 = v20 + v36 * WORD1(v34) + (unsigned __int16)v34;
      if ( (*(_BYTE *)(v37 + 15) & 0x3F) != 0 )
      {
        RtlpLogHeapFailure(14, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL), v37, 0, 0LL, 0LL);
        Value = (unsigned __int64)v142;
LABEL_163:
        v37 = 0LL;
      }
      if ( v143 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
        _InterlockedCompareExchange(
          (_DWORD *)RtlpAffinityState + 1,
          2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
          SHIDWORD(RtlpAffinityState[0]));
      if ( v37 )
      {
        if ( (v160 & 8) != 0 )
          memset((void *)(v37 + 16), 0, v11 - 8);
        v38 = v11 - v159;
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
    a3 = *(_QWORD *)Value;
    v42 = (signed __int64 *)(Value + 16);
    ListHead = *(PSLIST_HEADER *)Value;
    v144 = (signed __int64 *)(Value + 16);
LABEL_49:
    v148 = 0LL;
    while ( 2 )
    {
      v43 = v142;
      v44 = 0LL;
      v45 = 0;
      v146 = 0LL;
      v46 = 0;
      LODWORD(v147) = 0;
      v47 = v42;
      do
      {
        v48 = *v47;
        if ( !*v47 )
          goto LABEL_52;
        v143 = *(unsigned __int16 *)(v48 + 32);
        v63 = v143;
        if ( v143 <= v45 )
          goto LABEL_82;
        if ( (RtlpLowFragHeapGlobalFlags & 4) == 0 )
        {
          v103 = v43[86];
          if ( v103 <= 0x70u )
          {
            if ( *((_DWORD *)v43 + 40) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v103] )
            {
              v121 = *(_WORD *)(v48 + 32);
              v122 = *(_WORD *)(v48 + 40) >> 2;
              v123 = v122 < v121;
              v119 = v122 == v121;
              v63 = v143;
              LODWORD(a3) = !v123 && !v119;
              goto LABEL_85;
            }
            v63 = v143;
          }
        }
        LOBYTE(a3) = 0;
LABEL_85:
        v156 = a3;
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
          v63 = v143;
          LODWORD(a3) = v156;
        }
        if ( (_BYTE)a3 )
        {
          v45 = (unsigned int)v147;
LABEL_82:
          v44 = v146;
LABEL_52:
          v48 = v148;
          goto LABEL_53;
        }
LABEL_92:
        v45 = v63;
        v148 = v48;
        LODWORD(v147) = v63;
        v44 = (volatile signed __int64 *)&v43[4 * v46 + 8];
        v146 = v44;
LABEL_53:
        ++v46;
        ++v47;
      }
      while ( v46 < 0x10 );
      v49 = v151;
      v50 = v158;
      v51 = (__int64)v142;
      if ( v44 )
      {
        v155 = (_SLIST_HEADER *)(*(_QWORD *)(ListHead[1].Region + 8LL * v142[86] + 1192) + 144LL);
        v52 = RtlpInterlockedPopEntrySList(v155);
        if ( v52 )
        {
          while ( 1 )
          {
            v110 = *((_DWORD *)&v52[-1].Next + 3);
            v111 = v52;
            v147 = v52;
            v52 -= 3;
            if ( (v110 & 1) != 0 )
              break;
            _m_prefetchw((char *)&v52[2].Next + 12);
            if ( _InterlockedAnd((volatile signed __int32 *)&v52[2].Next + 3, 0xFFFFFFFD) == 2 )
            {
              Next = v52->Next->Next;
              v52->Next = 0LL;
              RtlpInterlockedPushEntrySList(Next, v111, a3, a4);
            }
            v52 = RtlpInterlockedPopEntrySList(v155);
            if ( !v52 )
              goto LABEL_56;
          }
          if ( !(unsigned int)RtlpSetSegmentInfo(v52, v51) )
          {
            RtlpInterlockedPushEntrySList(v155, v147, a3, a4);
            v52 = 0LL;
          }
        }
LABEL_56:
        v53 = v146;
        if ( v48 != _InterlockedCompareExchange64(v146, (signed __int64)v52, v48) )
        {
          v42 = v144;
          if ( v52 )
          {
            RtlpInterlockedPushEntrySList(v155, &v52[3], a3, a4);
            v42 = v144;
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
          v118 = **(_QWORD **)v48;
          *(_QWORD *)v48 = 0LL;
          RtlpInterlockedPushEntrySList(v118, v48 + 48, a3, a4);
          v42 = v144;
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
    v144 = (signed __int64 *)RtlpInterlockedPopEntrySList(ListHead);
    v69 = (PSLIST_ENTRY)v144;
    if ( !v144 )
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
        v124 = v144;
        *(_QWORD *)(v48 + 48) = v68;
        v68 = v48 + 48;
        if ( v71 )
          v124 = v72;
        ++v71;
        v72 = v124;
        goto LABEL_100;
      }
      _m_prefetchw((const void *)(v48 + 44));
      if ( _InterlockedAnd((volatile signed __int32 *)(v48 + 44), 0xFFFFFFFD) == 2 )
      {
        v69 = (PSLIST_ENTRY)v144;
LABEL_99:
        v73 = **(_QWORD **)v48;
        *(_QWORD *)v48 = 0LL;
        RtlpInterlockedPushEntrySList(v73, v69, a3, a4);
LABEL_100:
        v48 = 0LL;
        v144 = (signed __int64 *)RtlpInterlockedPopEntrySList(v70);
        v69 = (PSLIST_ENTRY)v144;
        if ( !v144 )
          goto LABEL_195;
        continue;
      }
      break;
    }
    if ( !RtlpIsSubSegmentReuseable(v51, v48) )
      goto LABEL_100;
LABEL_195:
    v50 = v158;
    v119 = v71 == 0;
    v146 = v72;
    v49 = v151;
    v157 = v71;
    v11 = v153;
    if ( !v119 )
      InterlockedPushListSList(ListHead, v68, v146, v157);
LABEL_61:
    if ( v48 )
    {
      *(_BYTE *)(v48 + 43) = v50;
      do
      {
        v54 = *(_DWORD *)(v48 + 44);
        Value = (unsigned __int64)v142;
        if ( !v54 || (v54 & 6) != 0 )
          goto LABEL_8;
      }
      while ( v54 != _InterlockedCompareExchange((volatile signed __int32 *)(v48 + 44), v54 | 6, v54) );
      a3 = *(_QWORD *)v48;
      if ( *(_QWORD *)v48 == Value )
      {
        v55 = NtCurrentPeb()->SharedData;
        if ( v55 && *v55 )
          v56 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v56 = 2147353472LL;
        if ( *(_BYTE *)v56 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL), *(_QWORD *)(v48 + 8));
          Value = (unsigned __int64)v142;
        }
        v48 = _InterlockedExchange64((volatile __int64 *)(Value + 8), v48);
        if ( !v48 )
          continue;
        _m_prefetchw((const void *)(v48 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v48 + 44), 0xFFFFFFF9) == 6 )
        {
LABEL_226:
          v125 = **(_QWORD **)v48;
          *(_QWORD *)v48 = 0LL;
          RtlpInterlockedPushEntrySList(v125, v48 + 48, a3, a4);
          Value = (unsigned __int64)v142;
          continue;
        }
        if ( *(_WORD *)(v48 + 32) )
        {
          IsSubSegmentReuseThresholdExceeded = RtlpIsSubSegmentReuseThresholdExceeded(Value, v48);
          Value = (unsigned __int64)v142;
          if ( !IsSubSegmentReuseThresholdExceeded )
          {
            while ( 1 )
            {
              v58 = *(_DWORD *)(v48 + 44);
              Value = (unsigned __int64)v142;
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
                      v116 = *((_DWORD *)v60 + 11);
                      do
                      {
                        v120 = v116;
                        v116 = _InterlockedCompareExchange((volatile signed __int32 *)v60 + 11, v116 & 0xFFFFFFFD, v116);
                      }
                      while ( v120 != v116 );
                      goto LABEL_187;
                    }
                  }
                  else
                  {
                    v62 = _InterlockedCompareExchange64(v61 + 2, v48, 0LL);
                    Value = (unsigned __int64)v142;
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
        Value = (unsigned __int64)v142;
        if ( IsSubSegmentReuseable )
        {
          while ( 1 )
          {
            v127 = *(_DWORD *)(v48 + 44);
            Value = (unsigned __int64)v142;
            if ( !v127 || (v127 & 2) != 0 )
              break;
            if ( v127 == _InterlockedCompareExchange((volatile signed __int32 *)(v48 + 44), v127 | 2, v127) )
            {
              a4 = *(_QWORD **)v48;
              a3 = 0LL;
              do
              {
                v128 = ((_BYTE)a3 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
                v60 = (__int64 **)a4[v128 + 2];
                v129 = &a4[v128];
                if ( v60 )
                {
                  if ( (*((_DWORD *)v60 + 11) & 1) == 0
                    && v60 == (__int64 **)_InterlockedCompareExchange64(v129 + 2, v48, (signed __int64)v60) )
                  {
                    goto LABEL_186;
                  }
                }
                else
                {
                  v130 = _InterlockedCompareExchange64(v129 + 2, v48, 0LL);
                  Value = (unsigned __int64)v142;
                  if ( !v130 )
                    goto LABEL_8;
                }
                a3 = (unsigned int)(a3 + 1);
              }
              while ( (unsigned int)a3 < 0x10 );
LABEL_200:
              v113 = *(unsigned __int16 **)v48;
              v114 = (_QWORD **)(v48 + 48);
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
  v76 = (*(_BYTE *)&SRWLock[84].0 & 2) != 0;
  do
  {
    v77 = SRWLock[10].Value;
    v78 = 0;
    if ( (_DWORD)v77 == v75 )
    {
      HIDWORD(v149) = HIDWORD(v77) + 1;
      if ( HIDWORD(v77) > 7 )
      {
        v78 = 1;
        HIDWORD(v149) = 0;
      }
    }
    else
    {
      v149 = v75 | 0x100000000LL;
    }
  }
  while ( v77 != _InterlockedCompareExchange64((volatile signed __int64 *)&SRWLock[10], v149, v77) );
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
    v150 = 7;
  }
  else
  {
    v150 = v85;
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
  UserBlock = RtlpAllocateUserBlock(SRWLock, (unsigned __int8)v85, v80 + 16, v74);
  v87 = UserBlock;
  if ( !UserBlock )
    return 0LL;
  v88 = 1LL << *(_BYTE *)(UserBlock + 16);
  if ( v88 > 0xF0000 )
    v88 = 983040LL;
  v89 = v88 + *(unsigned __int16 *)(v87 + 18);
  _InterlockedIncrement((volatile signed __int32 *)&SRWLock[7]);
  v90 = RtlpInterlockedPopEntrySList(v49);
  if ( v90 )
  {
    v93 = (unsigned __int16 **)&v90[-3];
    goto LABEL_133;
  }
  v104 = RtlpLowFragHeapAllocateFromZone(SRWLock);
  v93 = (unsigned __int16 **)v104;
  if ( v104 )
  {
    *(_QWORD *)(v104 + 8) = 0LL;
LABEL_133:
    if ( !v93 )
      goto LABEL_279;
    *((_BYTE *)v93 + 43) = v50;
    RtlpSubSegmentInitialize(
      (_DWORD)SRWLock,
      (_DWORD)v93,
      v87,
      (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v6 + 2)],
      v89,
      (__int64)v6);
    _InterlockedOr(v141, 0);
    *(_DWORD *)(v87 + 20) = -253701952;
    while ( 1 )
    {
      v94 = *((_DWORD *)v93 + 11);
      if ( !v94 || (v94 & 6) != 0 )
        break;
      if ( v94 == _InterlockedCompareExchange((volatile signed __int32 *)v93 + 11, v94 | 6, v94) )
      {
        a3 = (__int64)*v93;
        Value = (unsigned __int64)v142;
        if ( *v93 != v142 )
        {
          _m_prefetchw((char *)v93 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v93 + 11, 0xFFFFFFF9) == 6 )
          {
            v131 = (_QWORD **)(v93 + 6);
            v132 = *(_QWORD *)*v93;
            *v93 = 0LL;
          }
          else
          {
            if ( !RtlpIsSubSegmentReuseable(a3, (__int64)v93) )
              break;
            do
            {
              v137 = *((_DWORD *)v93 + 11);
              if ( !v137 || (v137 & 2) != 0 )
                goto LABEL_251;
            }
            while ( v137 != _InterlockedCompareExchange((volatile signed __int32 *)v93 + 11, v137 | 2, v137) );
            a4 = *v93;
            a3 = 0LL;
            do
            {
              v138 = ((_BYTE)a3 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
              v139 = (volatile signed __int32 *)a4[v138 + 2];
              v140 = &a4[v138];
              if ( v139 )
              {
                if ( (v139[11] & 1) == 0
                  && v139 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                          v140 + 2,
                                                          (signed __int64)v93,
                                                          (signed __int64)v139) )
                {
                  _m_prefetchw((const void *)(v139 + 11));
                  if ( _InterlockedAnd(v139 + 11, 0xFFFFFFFD) != 2 )
                    goto LABEL_251;
                  v132 = **(_QWORD **)v139;
                  *(_QWORD *)v139 = 0LL;
                  v131 = (_QWORD **)(v139 + 12);
                  goto LABEL_250;
                }
              }
              else if ( !_InterlockedCompareExchange64(v140 + 2, (signed __int64)v93, 0LL) )
              {
                goto LABEL_251;
              }
              a3 = (unsigned int)(a3 + 1);
            }
            while ( (unsigned int)a3 < 0x10 );
            v131 = (_QWORD **)(v93 + 6);
            a3 = (*v93)[86];
            v132 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*v93 + 24LL) + 8 * a3 + 1192) + 144LL;
          }
LABEL_250:
          RtlpInterlockedPushEntrySList(v132, v131, a3, a4);
          break;
        }
        v95 = NtCurrentPeb()->SharedData;
        if ( v95 && *v95 )
          v96 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v96 = 2147353472LL;
        if ( *(_BYTE *)v96 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v142 + 24LL) + 24LL), v93[1]);
          Value = (unsigned __int64)v142;
        }
        v93 = (unsigned __int16 **)_InterlockedExchange64((volatile __int64 *)(Value + 8), (__int64)v93);
        if ( v93 )
        {
          _m_prefetchw((char *)v93 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v93 + 11, 0xFFFFFFF9) == 6 )
          {
            v114 = (_QWORD **)(v93 + 6);
            v115 = *(_QWORD *)*v93;
            *v93 = 0LL;
LABEL_202:
            RtlpInterlockedPushEntrySList(v115, v114, a3, a4);
            Value = (unsigned __int64)v142;
          }
          else if ( *((_WORD *)v93 + 16) )
          {
            v97 = RtlpIsSubSegmentReuseThresholdExceeded(Value, (__int64)v93);
            Value = (unsigned __int64)v142;
            if ( !v97 )
            {
              while ( 1 )
              {
                v98 = *((_DWORD *)v93 + 11);
                Value = (unsigned __int64)v142;
                if ( !v98 || (v98 & 2) != 0 )
                  break;
                if ( v98 == _InterlockedCompareExchange((volatile signed __int32 *)v93 + 11, v98 | 2, v98) )
                {
                  a4 = *v93;
                  a3 = 0LL;
                  while ( 1 )
                  {
                    v99 = ((_BYTE)a3 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
                    v60 = (__int64 **)a4[v99 + 2];
                    v100 = &a4[v99];
                    if ( v60 )
                    {
                      if ( (*((_DWORD *)v60 + 11) & 1) == 0
                        && v60 == (__int64 **)_InterlockedCompareExchange64(
                                                v100 + 2,
                                                (signed __int64)v93,
                                                (signed __int64)v60) )
                      {
                        goto LABEL_186;
                      }
                    }
                    else
                    {
                      v101 = _InterlockedCompareExchange64(v100 + 2, (signed __int64)v93, 0LL);
                      Value = (unsigned __int64)v142;
                      if ( !v101 )
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
      v133 = *((_DWORD *)v93 + 11);
      Value = (unsigned __int64)v142;
      if ( !v133 || (v133 & 2) != 0 )
        goto LABEL_8;
      if ( v133 == _InterlockedCompareExchange((volatile signed __int32 *)v93 + 11, v133 | 2, v133) )
      {
        a4 = *v93;
        a3 = 0LL;
        do
        {
          v134 = ((_BYTE)a3 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
          v60 = (__int64 **)a4[v134 + 2];
          v135 = &a4[v134];
          if ( v60 )
          {
            if ( (*((_DWORD *)v60 + 11) & 1) == 0
              && v60 == (__int64 **)_InterlockedCompareExchange64(v135 + 2, (signed __int64)v93, (signed __int64)v60) )
            {
LABEL_186:
              _m_prefetchw((char *)v60 + 44);
              v116 = _InterlockedAnd((volatile signed __int32 *)v60 + 11, 0xFFFFFFFD);
LABEL_187:
              Value = (unsigned __int64)v142;
              if ( v116 == 2 )
              {
                v117 = **v60;
                *v60 = 0LL;
                RtlpInterlockedPushEntrySList(v117, v60 + 6, a3, a4);
                Value = (unsigned __int64)v142;
              }
              goto LABEL_8;
            }
          }
          else
          {
            v136 = _InterlockedCompareExchange64(v135 + 2, (signed __int64)v93, 0LL);
            Value = (unsigned __int64)v142;
            if ( !v136 )
              goto LABEL_8;
          }
          a3 = (unsigned int)(a3 + 1);
        }
        while ( (unsigned int)a3 < 0x10 );
LABEL_183:
        v113 = *v93;
        v114 = (_QWORD **)(v93 + 6);
LABEL_184:
        a3 = v113[86];
        v115 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v113 + 24LL) + 8 * a3 + 1192) + 144LL;
        goto LABEL_202;
      }
    }
  }
LABEL_279:
  RtlpFreeUserBlock((__int64)SRWLock, (unsigned __int8 *)v87, v91, v92);
  return 0LL;
}
