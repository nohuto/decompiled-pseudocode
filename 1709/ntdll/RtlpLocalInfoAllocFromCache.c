/*
 * XREFs of RtlpLocalInfoAllocFromCache @ 0x180014AA8
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x1800145D4 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x18001453C (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpLfhFindClearBitAndSet @ 0x180014EC4 (RtlpLfhFindClearBitAndSet.c)
 *     RtlpIsSubSegmentReuseable @ 0x180014FA0 (RtlpIsSubSegmentReuseable.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180046DE0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180077C88 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x18008172C (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A3B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3B50 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A3BC0 (InterlockedPushListSList.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180101228 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x180101934 (RtlpLogHeapSubSegmentActivate.c)
 */

__int64 *__fastcall RtlpLocalInfoAllocFromCache(__int64 a1, signed __int64 a2, __int64 *a3)
{
  struct _SLIST_ENTRY *v3; // r12
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  signed __int32 v8; // ebx
  __int64 v9; // r15
  struct _TEB *v10; // r13
  unsigned int v11; // r12d
  unsigned __int16 LowFragHeapDataSlot; // ax
  __int64 v13; // rcx
  unsigned __int16 v14; // bp
  unsigned __int16 v15; // ax
  int ClearBitAndSet; // eax
  volatile signed __int32 *v18; // rdi
  __int64 *v19; // rax
  __int64 *v20; // r15
  unsigned int v21; // ebp
  volatile signed __int64 *v22; // rsi
  unsigned int v23; // r13d
  __int64 v24; // rbx
  union _SLIST_HEADER *v25; // rbp
  PSLIST_ENTRY v26; // rax
  _QWORD **v27; // rbx
  signed __int32 v28; // eax
  __int64 v29; // rcx
  __int64 *v30; // r8
  __int64 v31; // rcx
  unsigned int v32; // r12d
  unsigned int v33; // ebp
  _SLIST_ENTRY *v34; // rbx
  union _SLIST_HEADER *v35; // r15
  PSLIST_ENTRY v36; // rsi
  __int16 RandomValue32; // ax
  PSLIST_ENTRY v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  char *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  signed __int32 v46; // eax
  int v47; // r9d
  __int64 v48; // rcx
  __int64 v49; // rcx
  _QWORD **v50; // rdx
  signed __int32 v51; // eax
  int v52; // r9d
  __int64 v53; // rcx
  int v54; // [rsp+70h] [rbp+8h]
  __int64 v55; // [rsp+70h] [rbp+8h]
  char v56; // [rsp+78h] [rbp+10h]

  v56 = a2;
  v3 = 0LL;
  while ( 1 )
  {
LABEL_2:
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
      v54 = 0;
      v6 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      if ( (*(_DWORD *)(v5 + 32) & 0x80000000) != 0 )
      {
        v40 = *(unsigned __int16 *)(a1 + 172);
        v54 = 1;
        if ( (*(_BYTE *)(v6 + 4 * v40 + 679) & 1) == 0
          && (int)RtlpAffinitizeSegmentInfoForBucket(v6, *(unsigned __int8 *)(v6 + 4 * v40 + 678), a3, 0x8000LL) >= 0 )
        {
          v42 = *(unsigned __int8 *)(v6 + 4 * v40 + 679) | 1u;
          *(_BYTE *)(v6 + 4 * v40 + 679) |= 1u;
          v43 = (unsigned int)RtlGetCurrentServiceSessionId(v42, v41)
              ? (char *)NtCurrentPeb()->SharedData + 550
              : (char *)2147353472;
          if ( *v43 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v6 + 24), *(unsigned __int8 *)(v6 + 4 * v40 + 678));
        }
      }
      a2 = 0LL;
      v7 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v5 + 32);
        if ( (v8 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v8 )
            goto LABEL_50;
          if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 32), v8 | 0x80000000, v8) )
            break;
        }
        a2 = (unsigned int)(a2 + 1);
        if ( (unsigned int)a2 > (unsigned int)v7 )
        {
          v8 = -1;
          break;
        }
      }
      if ( v8 == -1 )
        goto LABEL_50;
      v9 = *(_QWORD *)(v5 + 8);
      if ( !v9 || *(_QWORD *)v5 != a1 || !(_WORD)v8 )
      {
        *(_DWORD *)(v5 + 32) = v8;
        goto LABEL_50;
      }
      v10 = NtCurrentTeb();
      v11 = RtlpSearchWidth[*(unsigned __int16 *)(a1 + 172)];
      LowFragHeapDataSlot = v10->LowFragHeapDataSlot;
      v13 = LowFragHeapDataSlot;
      v14 = (unsigned __int8)LowFragHeapDataSlot;
      if ( (unsigned __int8)LowFragHeapDataSlot == HIBYTE(LowFragHeapDataSlot) )
      {
        LOWORD(v13) = HIBYTE(LowFragHeapDataSlot);
        RandomValue32 = RtlpHeapGenerateRandomValue32(v13, a2, v7, 0x8000LL);
        v15 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
      }
      else
      {
        v15 = (unsigned __int8)(LowFragHeapDataSlot ^ (LowFragHeapDataSlot + 1)) ^ LowFragHeapDataSlot;
      }
      v10->LowFragHeapDataSlot = v15;
      ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                         v9 + 32,
                         (unsigned int)(v8 >> 16),
                         *((unsigned __int8 *)&RtlpLowFragHeapRandomData + v14),
                         v11);
      v3 = 0LL;
      a2 = (ClearBitAndSet << 16) | ((unsigned int)(unsigned __int16)v8 - 1);
      *(_DWORD *)(v5 + 32) = a2;
      a3 = (__int64 *)(v9
                     + ClearBitAndSet
                     * (((unsigned int)v6 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v9 ^ *(_DWORD *)(v9 + 24)) >> 16)
                     + (unsigned __int16)(v6 ^ RtlpLFHKey ^ v9 ^ *(_WORD *)(v9 + 24)));
      if ( (*((_BYTE *)a3 + 15) & 0x3F) != 0 )
      {
        RtlpLogHeapFailure(14, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), (_DWORD)a3, 0, 0LL, 0LL);
LABEL_50:
        a3 = 0LL;
      }
      if ( v54 && HIDWORD(RtlpAffinityState) + 1 < (unsigned int)RtlpAffinityState )
        _InterlockedCompareExchange(
          (_DWORD *)&RtlpAffinityState + 1,
          2 * (HIDWORD(RtlpAffinityState) + 1) - 1,
          SHIDWORD(RtlpAffinityState));
      if ( a3 )
        return a3;
    }
    v55 = *(_QWORD *)a1;
    while ( 1 )
    {
      v18 = 0LL;
LABEL_20:
      v19 = (__int64 *)(a1 + 16);
      while ( 1 )
      {
        v20 = v19;
        v21 = 0;
        v22 = 0LL;
        v23 = 0;
        do
        {
          v24 = *v20;
          if ( *v20 )
          {
            v32 = *(unsigned __int16 *)(v24 + 32);
            if ( v32 > v23 && !RtlpIsSubSegmentReuseThresholdExceeded(a1, *v20) )
            {
              v18 = (volatile signed __int32 *)v24;
              v23 = v32;
              v22 = (volatile signed __int64 *)(a1 + 8 * (v21 + 2LL));
            }
            v3 = 0LL;
          }
          ++v21;
          ++v20;
        }
        while ( v21 < 0x10 );
        if ( !v22 )
        {
          v18 = 0LL;
          goto LABEL_30;
        }
        v25 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v55 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192)
                                    + 144LL);
        while ( 1 )
        {
          v26 = RtlpInterlockedPopEntrySList(v25);
          v27 = (_QWORD **)v26;
          if ( !v26 )
            break;
          v38 = v26;
          v27 = (_QWORD **)&v26[-3];
          if ( (*((_DWORD *)&v26[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v27, a1) )
            {
              RtlpInterlockedPushEntrySList(v25, v38);
              v27 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)v27 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v27 + 11, 0xFFFFFFFD) == 2 )
          {
            v39 = **v27;
            *v27 = 0LL;
            RtlpInterlockedPushEntrySList(v39, v26);
          }
        }
        if ( v18 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 v22,
                                                 (signed __int64)v27,
                                                 (signed __int64)v18) )
          break;
        v19 = (__int64 *)(a1 + 16);
        if ( v27 )
        {
          RtlpInterlockedPushEntrySList(v25, v27 + 6);
          goto LABEL_20;
        }
      }
      if ( !v27 )
        *(_WORD *)(a1 + 174) = (unsigned __int8)(((__int64)v22 - a1 - 16) >> 3);
LABEL_30:
      if ( !v18 )
        break;
      _m_prefetchw((const void *)(v18 + 11));
      if ( _InterlockedAnd(v18 + 11, 0xFFFFFFFD) != 2 )
        goto LABEL_32;
      v44 = **(_QWORD **)v18;
      *(_QWORD *)v18 = 0LL;
      RtlpInterlockedPushEntrySList(v44, v18 + 12);
    }
    v33 = 0;
    v34 = 0LL;
    v35 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v55 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192)
                                + 144LL);
    v36 = RtlpInterlockedPopEntrySList(v35);
    if ( !v36 )
      return 0LL;
    do
    {
      v18 = (volatile signed __int32 *)&v36[-3];
      if ( (*((_DWORD *)&v36[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v18 + 11));
        if ( _InterlockedAnd(v18 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_85;
LABEL_84:
        v45 = **(_QWORD **)v18;
        *(_QWORD *)v18 = 0LL;
        RtlpInterlockedPushEntrySList(v45, v36);
        goto LABEL_85;
      }
      if ( (unsigned int)RtlpSetSegmentInfo(&v36[-3], a1) )
      {
        _m_prefetchw((const void *)(v18 + 11));
        if ( _InterlockedAnd(v18 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_84;
        if ( (unsigned __int8)RtlpIsSubSegmentReuseable(a1, &v36[-3]) )
          break;
      }
      else
      {
        v36->Next = v34;
        v34 = v36;
        if ( v33 )
          v36 = v3;
        ++v33;
        v3 = v36;
      }
LABEL_85:
      v18 = 0LL;
      v36 = RtlpInterlockedPopEntrySList(v35);
    }
    while ( v36 );
    if ( v33 )
      InterlockedPushListSList(v35, v34, v3, v33);
    v3 = 0LL;
LABEL_32:
    if ( !v18 )
      return 0LL;
    *((_BYTE *)v18 + 43) = v56;
    do
    {
      v28 = *((_DWORD *)v18 + 11);
      if ( !v28 || (v28 & 6) != 0 )
        goto LABEL_2;
      v29 = v28 | 6u;
    }
    while ( v28 != _InterlockedCompareExchange(v18 + 11, v29, v28) );
    v30 = *(__int64 **)v18;
    if ( *(_QWORD *)v18 == a1 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v29, a2) )
        v31 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v31 = 2147353472LL;
      if ( *(_BYTE *)v31 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), *((_QWORD *)v18 + 1));
      v18 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(a1 + 8), (__int64)v18);
      if ( v18 )
      {
        _m_prefetchw((const void *)(v18 + 11));
        if ( _InterlockedAnd(v18 + 11, 0xFFFFFFF9) == 6 )
        {
LABEL_101:
          v49 = **(_QWORD **)v18;
          *(_QWORD *)v18 = 0LL;
LABEL_99:
          v50 = (_QWORD **)(v18 + 12);
LABEL_100:
          RtlpInterlockedPushEntrySList(v49, v50);
        }
        else if ( (unsigned __int8)RtlpIsSubSegmentReuseable(a1, v18) )
        {
          while ( 1 )
          {
            v51 = *((_DWORD *)v18 + 11);
            if ( !v51 || (v51 & 2) != 0 )
              break;
            if ( v51 == _InterlockedCompareExchange(v18 + 11, v51 | 2, v51) )
            {
              a3 = *(__int64 **)v18;
              v52 = 0;
              while ( 1 )
              {
                v53 = ((_BYTE)v52 + (unsigned __int8)*((_WORD *)a3 + 87)) & 0xF;
                a2 = a3[v53 + 2];
                if ( a2 )
                {
                  if ( (*(_DWORD *)(a2 + 44) & 1) == 0
                    && a2 == _InterlockedCompareExchange64(&a3[v53 + 2], (signed __int64)v18, a2) )
                  {
                    goto LABEL_120;
                  }
                }
                else if ( !_InterlockedCompareExchange64(&a3[v53 + 2], (signed __int64)v18, 0LL) )
                {
                  goto LABEL_2;
                }
                if ( (unsigned int)++v52 >= 0x10 )
                  goto LABEL_98;
              }
            }
          }
        }
      }
    }
    else
    {
      _m_prefetchw((const void *)(v18 + 11));
      if ( _InterlockedAnd(v18 + 11, 0xFFFFFFF9) == 6 )
        goto LABEL_101;
      if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v30, v18) )
        continue;
      do
      {
        v46 = *((_DWORD *)v18 + 11);
        if ( !v46 || (v46 & 2) != 0 )
          goto LABEL_2;
      }
      while ( v46 != _InterlockedCompareExchange(v18 + 11, v46 | 2, v46) );
      a3 = *(__int64 **)v18;
      v47 = 0;
      while ( 1 )
      {
        v48 = ((_BYTE)v47 + (unsigned __int8)*((_WORD *)a3 + 87)) & 0xF;
        a2 = a3[v48 + 2];
        if ( !a2 )
        {
          if ( !_InterlockedCompareExchange64(&a3[v48 + 2], (signed __int64)v18, 0LL) )
            goto LABEL_2;
          goto LABEL_97;
        }
        if ( (*(_DWORD *)(a2 + 44) & 1) == 0
          && a2 == _InterlockedCompareExchange64(&a3[v48 + 2], (signed __int64)v18, a2) )
        {
          break;
        }
LABEL_97:
        if ( (unsigned int)++v47 >= 0x10 )
        {
LABEL_98:
          v49 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v18 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v18 + 172LL)
                          + 1192)
              + 144LL;
          goto LABEL_99;
        }
      }
LABEL_120:
      _m_prefetchw((const void *)(a2 + 44));
      if ( _InterlockedAnd((volatile signed __int32 *)(a2 + 44), 0xFFFFFFFD) == 2 )
      {
        v49 = **(_QWORD **)a2;
        *(_QWORD *)a2 = 0LL;
        v50 = (_QWORD **)(a2 + 48);
        goto LABEL_100;
      }
    }
  }
}
