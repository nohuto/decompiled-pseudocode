/*
 * XREFs of MiCoalesceFreePages @ 0x1400C77B0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140007170 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7FC0 (MiUnlinkFreeOrZeroedPage.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiReturnFreeZeroPage @ 0x14010AE0C (MiReturnFreeZeroPage.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1401894F0 (RtlpInterlockedFlushSList.c)
 *     MiClearPfnSlist @ 0x14021EFA0 (MiClearPfnSlist.c)
 */

__int64 __fastcall MiCoalesceFreePages(__int64 a1)
{
  void *v1; // r8
  __int64 v3; // r9
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  int v6; // r14d
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbx
  _QWORD *v10; // r10
  _QWORD *v11; // r11
  unsigned int v12; // eax
  __int64 *v13; // rcx
  unsigned int i; // eax
  __int64 v15; // rcx
  __int16 v16; // r9
  volatile signed __int64 *v17; // r12
  _KLOCK_ENTRY *v18; // rbx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdi
  _QWORD *v21; // rbx
  unsigned int v22; // eax
  __int64 *v23; // rcx
  unsigned int v24; // eax
  volatile signed __int64 *v25; // r12
  __int64 v26; // rcx
  __int16 v27; // r9
  __int16 v28; // r10
  int v29; // r14d
  unsigned int v30; // r8d
  _SLIST_HEADER *v31; // r15
  __int16 v32; // r12
  PSLIST_ENTRY v33; // rsi
  PSLIST_ENTRY v34; // rbx
  __int64 v35; // r8
  _SLIST_ENTRY *Next; // rbp
  __int64 v37; // r9
  signed __int64 v38; // rdx
  signed __int64 v39; // r8
  signed __int64 v40; // rdx
  int v41; // edx
  unsigned int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // r8
  unsigned __int64 v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // [rsp+20h] [rbp-88h]
  unsigned __int64 v50; // [rsp+30h] [rbp-78h]
  __int64 v51; // [rsp+38h] [rbp-70h]
  __int64 v52; // [rsp+40h] [rbp-68h] BYREF
  __int64 v53; // [rsp+48h] [rbp-60h]
  unsigned __int64 v54; // [rsp+50h] [rbp-58h]
  unsigned __int64 v55; // [rsp+B0h] [rbp+8h]
  int v56; // [rsp+B8h] [rbp+10h]
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp+18h]
  _QWORD *v58; // [rsp+C8h] [rbp+20h]

  v1 = MmPhysicalMemoryBlock;
  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v3 = qword_14036C8F8;
  v4 = 48 * a1 - 0x58000000000LL;
  v5 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v49 = v4;
  v55 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = *(_BYTE *)(v4 + 34) & 7;
  v56 = v6;
  v7 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v4 + 40) >> 40) & 0x3FFLL));
  v53 = v7;
  v8 = 48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL) - 0x58000000000LL;
  v54 = v8;
  v9 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v10 = (_QWORD *)(v8 + 40);
  v11 = (_QWORD *)(48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL) - 0x57FFFFFFFD8LL);
  do
  {
    if ( v9 > qword_14036C290
      || v1 && (*v11 & 0x20000000000000LL) == 0
      || *(_QWORD *)(v3 + 8 * ((*v10 >> 40) & 0x3FFLL)) != v7 )
    {
      return 0LL;
    }
    v12 = *((_BYTE *)v10 - 6) & 7;
    if ( v12 > 1 )
    {
      if ( v12 != 5
        || (*(v10 - 4) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
        || !(unsigned int)MiInvalidPteConforms(*(v10 - 3))
        || MiGetPteTimeStamp(v15) != 4294967294LL
        || (v16 & 0xF000u) > 0x1000uLL )
      {
        return 0LL;
      }
      v1 = MmPhysicalMemoryBlock;
      v3 = qword_14036C8F8;
    }
    else
    {
      v13 = MiLargePageContainingFrames;
      for ( i = 0; i < 3; ++i )
      {
        if ( (*v10 & 0xFFFFFFFFFLL) == *v13 )
          return 0LL;
        ++v13;
      }
    }
    v10 += 6;
    ++v9;
    v11 += 6;
  }
  while ( v10 - 5 != (_QWORD *)(v8 + 768) );
  v52 = 0LL;
  v17 = (volatile signed __int64 *)(v7 + 224);
  v50 = v5;
  BugCheckParameter2 = (ULONG_PTR)v17;
  v18 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)v17, 0LL);
  if ( _InterlockedCompareExchange64(v17, 17LL, 0LL) && !ExfTryAcquirePushLockShared((signed __int64 *)v17) )
  {
    if ( !v18 )
      return 0LL;
    KeAbPostReleaseEx((ULONG_PTR)v17, v18);
    return 0LL;
  }
  if ( v18 )
    v18->AcquiredByte |= 1u;
  v19 = v8 + 768;
  v51 = 48 * v5 - 0x58000000000LL;
  v20 = v51;
  v21 = (_QWORD *)(v8 + 40);
  v58 = (_QWORD *)(v8 + 40);
  while ( v20 == v4 )
  {
    if ( (*(_BYTE *)(v20 + 34) & 7) != 0 )
      MiSetFreshPfnFromFreeList(v20);
    else
      *(_QWORD *)(v20 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
LABEL_72:
    if ( v6 != 1 )
    {
      if ( MiPfnZeroingNeeded() )
        v6 = v41;
      v56 = v6;
    }
    v20 += 48LL;
    ++v5;
    v21 += 6;
    v51 = v20;
    v50 = v5;
    v58 = v21;
    if ( v20 == v19 )
      goto LABEL_79;
  }
  if ( v5 > qword_14036C290
    || MmPhysicalMemoryBlock && (*v21 & 0x20000000000000LL) == 0
    || *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v20 + 40) >> 40) & 0x3FFLL)) != v53 )
  {
    goto LABEL_79;
  }
  v22 = *(_BYTE *)(v20 + 34) & 7;
  if ( v22 > 1 )
  {
    if ( v22 != 5
      || (*(_QWORD *)(v20 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
      || (unsigned int)MiInvalidPteConforms(*(_QWORD *)(v20 + 16)) && MiGetPteTimeStamp(v26) != 4294967294LL
      || (v27 & 0xF000u) > 0x1000uLL )
    {
      goto LABEL_79;
    }
    v29 = (unsigned __int8)HIBYTE(*((_WORD *)v21 - 12)) >> 4;
    if ( (unsigned int)v29 <= 1 )
    {
      _mm_lfence();
      v30 = *v21 >> 58;
      if ( v30 >= (unsigned __int16)KeNumberNodes )
      {
        v30 = MiPageToNode(v5, 0LL);
        v28 = 513;
      }
      v31 = (_SLIST_HEADER *)(*(_QWORD *)(v53 + 8LL * v29 + 3944)
                            + 16LL
                            * (dword_14036C1F8 & (unsigned int)v5 | (v30 << byte_14036C1B9) | (((*v21 >> 36) & 3) << byte_14036C1BA)));
      if ( LOWORD(v31->Alignment) )
      {
        v32 = 512;
        v33 = 0LL;
        if ( !v29 )
          v32 = v28;
        v34 = RtlpInterlockedFlushSList(v31);
        if ( v34 )
        {
          do
          {
            Next = v34->Next;
            if ( _interlockedbittestandset64((volatile signed __int32 *)&v34[1].Next + 2, 0x3FuLL) )
            {
              RtlpInterlockedPushEntrySList(v31, v34);
            }
            else if ( v34 == (PSLIST_ENTRY)(v58 - 5) )
            {
              v33 = v34;
            }
            else
            {
              MiClearPfnSlist(
                v34,
                (unsigned __int128)((__int64)&v34[0x5800000000LL] * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                v35,
                (__int64)&v34[0x5800000000LL] / 48);
              MiInsertPageInFreeOrZeroedList(v37, v32);
              _InterlockedAnd64((volatile signed __int64 *)&v34[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
            }
            v34 = Next;
          }
          while ( Next );
          v20 = v51;
          v8 = v54;
          if ( v33 )
          {
            v33->Next = 0LL;
            v38 = *((_QWORD *)&v33[1].Next + 1);
            v39 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&v33[1].Next + 1,
                    v38 & 0xFFFFFFF000000000uLL,
                    v38);
            if ( v38 != v39 )
            {
              do
              {
                v40 = v39;
                v39 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&v33[1].Next + 1,
                        v39 & 0xFFFFFFF000000000uLL,
                        v39);
              }
              while ( v40 != v39 );
            }
            v33[1].Next = 0LL;
            if ( v29 == 1 )
              MiSetFreshPfnFromFreeList(v33);
            v4 = v49;
            v6 = v56;
            v5 = v50;
            v21 = v58;
LABEL_71:
            v19 = v8 + 768;
            goto LABEL_72;
          }
        }
      }
    }
    v6 = v56;
LABEL_79:
    v25 = (volatile signed __int64 *)BugCheckParameter2;
    goto LABEL_80;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    goto LABEL_79;
  if ( (*(_BYTE *)(v20 + 34) & 7u) <= 1 )
  {
    v23 = MiLargePageContainingFrames;
    v24 = 0;
    while ( (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFLL) != *v23 )
    {
      ++v24;
      ++v23;
      if ( v24 >= 3 )
      {
        if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v5, 0LL, 0LL) )
          goto LABEL_71;
        MiReturnFreeZeroPage(v20, 512LL);
        break;
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v25 = (volatile signed __int64 *)BugCheckParameter2;
LABEL_80:
  v42 = 0;
  if ( _InterlockedCompareExchange64(v25, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v25);
  KeAbPostRelease((ULONG_PTR)v25);
  if ( v20 == v8 + 768 )
  {
    if ( v6 == 1 )
      MiSetOriginalPtePfnFromFreeList(&v52, v43, v44);
    v45 = v8 + 720;
    v46 = 0LL;
    do
    {
      *(_QWORD *)(v45 + 16) = v52;
      if ( (*(_BYTE *)(v45 + 34) & 0xC0) != 0x40 )
        MiChangePageAttribute(v45, 1LL, 1LL);
      v47 = v55 - v46 + 15;
      v48 = 48 * v47 - 0x58000000000LL;
      *(_QWORD *)(v48 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v48 + 40) &= ~0x200000000000000uLL;
      *(_BYTE *)(v48 + 35) &= 0xF8u;
      *(_BYTE *)(v48 + 34) &= ~0x10u;
      if ( (v47 & 0xF) != 0 )
      {
        *(_QWORD *)(v48 + 40) = *(_QWORD *)(v48 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
        *(_BYTE *)(v48 + 34) = *(_BYTE *)(v48 + 34) & 0xF8 | 1;
      }
      if ( v45 == v8 )
      {
        *(_QWORD *)(v45 + 40) = *(_QWORD *)(v45 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
        *(_BYTE *)(v45 + 34) ^= (*(_BYTE *)(v45 + 34) ^ v6) & 7;
        MiInsertLargePageInNodeListHelper(v55, 0x10uLL, v6, 0);
      }
      if ( v45 != v49 )
        _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++v42;
      v45 -= 48LL;
      v46 = v42;
    }
    while ( v42 < 0x10uLL );
    return 1LL;
  }
  else
  {
    for ( ; v8 < v20; v8 += 48LL )
    {
      if ( v8 != v49 )
      {
        MiReturnFreeZeroPage(v8, 512LL);
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    return 0LL;
  }
}
