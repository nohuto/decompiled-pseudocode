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

__int64 *__fastcall RtlpLocalInfoAllocFromCache(__int64 a1, char a2, __int64 *a3)
{
  _SLIST_ENTRY *v3; // r12
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  signed __int32 v10; // ebx
  __int64 v11; // r15
  struct _TEB *v12; // r13
  unsigned int v13; // r12d
  unsigned __int16 LowFragHeapDataSlot; // ax
  __int64 v15; // rcx
  unsigned __int16 v16; // bp
  unsigned __int16 v17; // ax
  int ClearBitAndSet; // eax
  volatile signed __int32 *v20; // rdi
  __int64 *v21; // rax
  __int64 *v22; // r15
  unsigned int v23; // ebp
  volatile signed __int64 *v24; // rsi
  unsigned int v25; // r13d
  __int64 v26; // rbx
  _SLIST_HEADER *v27; // rbp
  PSLIST_ENTRY v28; // rax
  _QWORD **v29; // rbx
  signed __int32 v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // r12d
  unsigned int v33; // ebp
  _SLIST_ENTRY *v34; // rbx
  _SLIST_HEADER *v35; // r15
  PSLIST_ENTRY v36; // rsi
  __int64 v37; // r9
  __int16 RandomValue32; // ax
  PSLIST_ENTRY v39; // r15
  __int64 v40; // rcx
  __int64 v41; // rbx
  char *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  char v45; // al
  signed __int32 v46; // eax
  __int64 v47; // rcx
  _QWORD **v48; // rdx
  __int64 v49; // rcx
  volatile signed __int32 *v50; // rdx
  char IsSubSegmentReuseable; // al
  signed __int32 v52; // eax
  __int64 v53; // rcx
  int v54; // [rsp+70h] [rbp+8h]
  __int64 v55; // [rsp+70h] [rbp+8h]

  v3 = 0LL;
LABEL_2:
  v5 = 0x8000LL;
  while ( 1 )
  {
LABEL_3:
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 )
    {
      v54 = 0;
      v7 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      if ( (*(_DWORD *)(v6 + 32) & 0x80000000) != 0 )
      {
        v41 = *(unsigned __int16 *)(a1 + 172);
        v54 = 1;
        if ( (*(_BYTE *)(v7 + 4 * v41 + 679) & 1) == 0 )
        {
          if ( (int)RtlpAffinitizeSegmentInfoForBucket(v7, *(unsigned __int8 *)(v7 + 4 * v41 + 678), a3, 0x8000LL) >= 0 )
          {
            *(_BYTE *)(v7 + 4 * v41 + 679) |= 1u;
            v42 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
            if ( *v42 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v7 + 24), *(unsigned __int8 *)(v7 + 4 * v41 + 678));
          }
          v5 = 0x8000LL;
        }
      }
      v8 = 0LL;
      v9 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v10 = *(_DWORD *)(v6 + 32);
        if ( (v10 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v10 )
            goto LABEL_51;
          if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 32), v10 | 0x80000000, v10) )
            break;
        }
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 > (unsigned int)v9 )
        {
          v10 = -1;
          break;
        }
      }
      if ( v10 == -1 )
        goto LABEL_51;
      v11 = *(_QWORD *)(v6 + 8);
      if ( !v11 || *(_QWORD *)v6 != a1 || !(_WORD)v10 )
      {
        *(_DWORD *)(v6 + 32) = v10;
        goto LABEL_51;
      }
      v12 = NtCurrentTeb();
      v13 = RtlpSearchWidth[*(unsigned __int16 *)(a1 + 172)];
      LowFragHeapDataSlot = v12->LowFragHeapDataSlot;
      v15 = LowFragHeapDataSlot;
      v16 = (unsigned __int8)LowFragHeapDataSlot;
      if ( (unsigned __int8)LowFragHeapDataSlot == HIBYTE(LowFragHeapDataSlot) )
      {
        LOWORD(v15) = HIBYTE(LowFragHeapDataSlot);
        RandomValue32 = RtlpHeapGenerateRandomValue32(v15, v8, v9, 0x8000LL);
        v17 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
      }
      else
      {
        v17 = (unsigned __int8)(LowFragHeapDataSlot ^ (LowFragHeapDataSlot + 1)) ^ LowFragHeapDataSlot;
      }
      v12->LowFragHeapDataSlot = v17;
      ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                         v11 + 32,
                         (unsigned int)(v10 >> 16),
                         *((unsigned __int8 *)&RtlpLowFragHeapRandomData + v16),
                         v13);
      v3 = 0LL;
      *(_DWORD *)(v6 + 32) = (ClearBitAndSet << 16) | ((unsigned __int16)v10 - 1);
      a3 = (__int64 *)(v11
                     + ClearBitAndSet
                     * (((unsigned int)v7 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v11 ^ *(_DWORD *)(v11 + 24)) >> 16)
                     + (unsigned __int16)(v7 ^ RtlpLFHKey ^ v11 ^ *(_WORD *)(v11 + 24)));
      if ( (*((_BYTE *)a3 + 15) & 0x3F) != 0 )
      {
        RtlpLogHeapFailure(14, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), (_DWORD)a3, 0, 0LL, 0LL);
LABEL_51:
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
      v20 = 0LL;
LABEL_21:
      v21 = (__int64 *)(a1 + 16);
      while ( 1 )
      {
        v22 = v21;
        v23 = 0;
        v24 = 0LL;
        v25 = 0;
        do
        {
          v26 = *v22;
          if ( *v22 )
          {
            v32 = *(unsigned __int16 *)(v26 + 32);
            if ( v32 > v25 && !RtlpIsSubSegmentReuseThresholdExceeded(a1, *v22) )
            {
              v20 = (volatile signed __int32 *)v26;
              v25 = v32;
              v24 = (volatile signed __int64 *)(a1 + 8 * (v23 + 2LL));
            }
            v3 = 0LL;
          }
          ++v23;
          ++v22;
        }
        while ( v23 < 0x10 );
        if ( !v24 )
        {
          v20 = 0LL;
          goto LABEL_31;
        }
        v27 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v55 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192) + 144LL);
        while ( 1 )
        {
          v28 = RtlpInterlockedPopEntrySList(v27);
          v29 = (_QWORD **)v28;
          if ( !v28 )
            break;
          v39 = v28;
          v29 = (_QWORD **)&v28[-3];
          if ( (*((_DWORD *)&v28[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v29, a1) )
            {
              RtlpInterlockedPushEntrySList(v27, v39, a3, v5);
              v29 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)v29 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v29 + 11, 0xFFFFFFFD) == 2 )
          {
            v40 = **v29;
            *v29 = 0LL;
            RtlpInterlockedPushEntrySList(v40, v28, a3, v5);
          }
        }
        if ( v20 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 v24,
                                                 (signed __int64)v29,
                                                 (signed __int64)v20) )
          break;
        v21 = (__int64 *)(a1 + 16);
        if ( v29 )
        {
          RtlpInterlockedPushEntrySList(v27, v29 + 6, a3, v5);
          goto LABEL_21;
        }
      }
      if ( !v29 )
        *(_WORD *)(a1 + 174) = (unsigned __int8)(((__int64)v24 - a1 - 16) >> 3);
LABEL_31:
      if ( !v20 )
        break;
      _m_prefetchw((const void *)(v20 + 11));
      if ( _InterlockedAnd(v20 + 11, 0xFFFFFFFD) != 2 )
        goto LABEL_33;
      v43 = **(_QWORD **)v20;
      *(_QWORD *)v20 = 0LL;
      RtlpInterlockedPushEntrySList(v43, v20 + 12, a3, v5);
    }
    v33 = 0;
    v34 = 0LL;
    v35 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v55 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192) + 144LL);
    v36 = RtlpInterlockedPopEntrySList(v35);
    if ( !v36 )
      return 0LL;
    do
    {
      v20 = (volatile signed __int32 *)&v36[-3];
      if ( (*((_DWORD *)&v36[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v20 + 11));
        if ( _InterlockedAnd(v20 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_86;
LABEL_85:
        v44 = **(_QWORD **)v20;
        *(_QWORD *)v20 = 0LL;
        RtlpInterlockedPushEntrySList(v44, v36, a3, v37);
        goto LABEL_86;
      }
      if ( (unsigned int)RtlpSetSegmentInfo(&v36[-3], a1) )
      {
        _m_prefetchw((const void *)(v20 + 11));
        if ( _InterlockedAnd(v20 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_85;
        if ( (unsigned __int8)RtlpIsSubSegmentReuseable(a1, &v36[-3], a3, v37) )
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
LABEL_86:
      v20 = 0LL;
      v36 = RtlpInterlockedPopEntrySList(v35);
    }
    while ( v36 );
    if ( v33 )
      InterlockedPushListSList(v35, v34, v3, v33);
    v3 = 0LL;
LABEL_33:
    if ( !v20 )
      return 0LL;
    *((_BYTE *)v20 + 43) = a2;
    do
    {
      v30 = *((_DWORD *)v20 + 11);
      v5 = 0x8000LL;
      if ( !v30 || (v30 & 6) != 0 )
        goto LABEL_3;
    }
    while ( v30 != _InterlockedCompareExchange(v20 + 11, v30 | 6, v30) );
    a3 = *(__int64 **)v20;
    if ( *(_QWORD *)v20 == a1 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v31 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v31 = 2147353472LL;
      if ( *(_BYTE *)v31 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), *((_QWORD *)v20 + 1));
      v20 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(a1 + 8), (__int64)v20);
      v5 = 0x8000LL;
      if ( !v20 )
        continue;
      _m_prefetchw((const void *)(v20 + 11));
      if ( _InterlockedAnd(v20 + 11, 0xFFFFFFF9) != 6 )
      {
        IsSubSegmentReuseable = RtlpIsSubSegmentReuseable(a1, v20, a3, 0x8000LL);
        v5 = 0x8000LL;
        if ( IsSubSegmentReuseable )
        {
          while ( 1 )
          {
            v52 = *((_DWORD *)v20 + 11);
            v5 = 0x8000LL;
            if ( !v52 || (v52 & 2) != 0 )
              break;
            if ( v52 == _InterlockedCompareExchange(v20 + 11, v52 | 2, v52) )
            {
              a3 = *(__int64 **)v20;
              LODWORD(v5) = 0;
              while ( 1 )
              {
                v53 = ((_BYTE)v5 + (unsigned __int8)*((_WORD *)a3 + 87)) & 0xF;
                v48 = (_QWORD **)a3[v53 + 2];
                if ( v48 )
                {
                  if ( (*((_DWORD *)v48 + 11) & 1) == 0
                    && v48 == (_QWORD **)_InterlockedCompareExchange64(
                                           &a3[v53 + 2],
                                           (signed __int64)v20,
                                           (signed __int64)v48) )
                  {
                    goto LABEL_121;
                  }
                }
                else if ( !_InterlockedCompareExchange64(&a3[v53 + 2], (signed __int64)v20, 0LL) )
                {
                  goto LABEL_2;
                }
                v5 = (unsigned int)(v5 + 1);
                if ( (unsigned int)v5 >= 0x10 )
                  goto LABEL_99;
              }
            }
          }
        }
        continue;
      }
      goto LABEL_102;
    }
    _m_prefetchw((const void *)(v20 + 11));
    if ( _InterlockedAnd(v20 + 11, 0xFFFFFFF9) == 6 )
    {
LABEL_102:
      v49 = **(_QWORD **)v20;
      *(_QWORD *)v20 = 0LL;
LABEL_100:
      v50 = v20 + 12;
LABEL_101:
      RtlpInterlockedPushEntrySList(v49, v50, a3, v5);
      goto LABEL_2;
    }
    v45 = RtlpIsSubSegmentReuseable(a3, v20, a3, 0x8000LL);
    v5 = 0x8000LL;
    if ( v45 )
    {
      while ( 1 )
      {
        v46 = *((_DWORD *)v20 + 11);
        v5 = 0x8000LL;
        if ( !v46 || (v46 & 2) != 0 )
          break;
        if ( v46 == _InterlockedCompareExchange(v20 + 11, v46 | 2, v46) )
        {
          a3 = *(__int64 **)v20;
          LODWORD(v5) = 0;
          while ( 1 )
          {
            v47 = ((_BYTE)v5 + (unsigned __int8)*((_WORD *)a3 + 87)) & 0xF;
            v48 = (_QWORD **)a3[v47 + 2];
            if ( v48 )
            {
              if ( (*((_DWORD *)v48 + 11) & 1) == 0
                && v48 == (_QWORD **)_InterlockedCompareExchange64(
                                       &a3[v47 + 2],
                                       (signed __int64)v20,
                                       (signed __int64)v48) )
              {
LABEL_121:
                _m_prefetchw((char *)v48 + 44);
                v5 = 0x8000LL;
                if ( _InterlockedAnd((volatile signed __int32 *)v48 + 11, 0xFFFFFFFD) == 2 )
                {
                  v49 = **v48;
                  *v48 = 0LL;
                  v50 = (volatile signed __int32 *)(v48 + 6);
                  goto LABEL_101;
                }
                goto LABEL_3;
              }
            }
            else if ( !_InterlockedCompareExchange64(&a3[v47 + 2], (signed __int64)v20, 0LL) )
            {
              goto LABEL_2;
            }
            v5 = (unsigned int)(v5 + 1);
            if ( (unsigned int)v5 >= 0x10 )
            {
LABEL_99:
              a3 = (__int64 *)*(unsigned __int16 *)(*(_QWORD *)v20 + 172LL);
              v49 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v20 + 24LL) + 8LL * (_QWORD)a3 + 1192) + 144LL;
              goto LABEL_100;
            }
          }
        }
      }
    }
  }
}
