/*
 * XREFs of MiCoalesceFreePages @ 0x140050390
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     MiPfnZeroingNeeded @ 0x1400C4A48 (MiPfnZeroingNeeded.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiReturnFreeZeroPage @ 0x1400CABF0 (MiReturnFreeZeroPage.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     ExfTryAcquirePushLockShared @ 0x140100550 (ExfTryAcquirePushLockShared.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140188FF0 (RtlpInterlockedFlushSList.c)
 *     MiClearPfnSlist @ 0x14022A478 (MiClearPfnSlist.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiCoalesceFreePages(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned int v4; // r15d
  __int64 v5; // r8
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r10
  _QWORD *v10; // r11
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rcx
  __int16 v17; // r9
  volatile signed __int64 *v18; // r13
  signed __int64 v19; // rdx
  __int64 v20; // rbx
  signed __int64 i; // r8
  unsigned __int64 v22; // rbx
  _QWORD *v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int16 v26; // r9
  __int64 v27; // r12
  unsigned int v28; // r8d
  unsigned int v29; // r8d
  _SLIST_HEADER *v30; // r15
  _SLIST_HEADER *v31; // rcx
  PSLIST_ENTRY v32; // rdi
  PSLIST_ENTRY v33; // r9
  _SLIST_ENTRY *Next; // rbp
  volatile signed __int64 *v35; // rsi
  __int64 v36; // r9
  unsigned int v37; // ebp
  unsigned __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rbx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 updated; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  _QWORD *v46; // [rsp+20h] [rbp-88h]
  unsigned __int64 v47; // [rsp+30h] [rbp-78h]
  __int64 v48; // [rsp+38h] [rbp-70h] BYREF
  __int64 v49; // [rsp+40h] [rbp-68h]
  unsigned __int64 v50; // [rsp+48h] [rbp-60h]
  unsigned __int64 v51; // [rsp+50h] [rbp-58h]
  unsigned __int64 v52; // [rsp+B0h] [rbp+8h]
  unsigned int v53; // [rsp+B8h] [rbp+10h]
  __int64 v54; // [rsp+C0h] [rbp+18h]
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp+20h]

  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v2 = 48 * a1 - 0x58000000000LL;
  v3 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v54 = v2;
  v52 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = *(_BYTE *)(v2 + 34) & 7;
  v53 = v4;
  v5 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v2 + 40) >> 40) & 0x3FFLL));
  v49 = v5;
  v6 = 48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL) - 0x58000000000LL;
  v7 = v6 + 768;
  v51 = v6;
  v8 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = v6 + 34;
  v10 = (_QWORD *)(48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL) - 0x57FFFFFFFD8LL);
  do
  {
    if ( v8 > qword_1403885E0 || MmPhysicalMemoryBlock && (*v10 & 0x20000000000000LL) == 0 )
      return 0LL;
    v11 = *(_QWORD *)(v9 + 6);
    if ( *(_QWORD *)(qword_140388AF0 + 8 * ((v11 >> 40) & 0x3FF)) != v5 )
      return 0LL;
    v12 = *(_BYTE *)v9 & 7;
    if ( v12 > 1 )
    {
      if ( v12 != 5
        || (*(_QWORD *)(v9 - 26) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
        || !(unsigned int)MiInvalidPteConforms(*(_QWORD *)(v9 - 18), v11, v5, *(_QWORD *)(v9 - 18))
        || MiGetPteTimeStamp(v16) != 4294967294LL
        || (v17 & 0xF000u) > 0x1000uLL )
      {
        return 0LL;
      }
      v5 = v49;
    }
    else
    {
      v13 = v11 & 0xFFFFFFFFFLL;
      v14 = 0;
      v15 = MiLargePageContainingFrames;
      do
      {
        if ( v13 == *v15 )
          return 0LL;
        ++v14;
        ++v15;
      }
      while ( v14 < 3 );
    }
    v9 += 48LL;
    ++v8;
    v10 += 6;
  }
  while ( v9 - 34 != v7 );
  v18 = (volatile signed __int64 *)(v5 + 184);
  v48 = 0LL;
  v47 = v3;
  BugCheckParameter2 = v5 + 184;
  v20 = KeAbPreAcquire(v5 + 184, 0LL);
  if ( _InterlockedCompareExchange64(v18, 17LL, 0LL) && !(unsigned __int8)ExfTryAcquirePushLockShared(v18) )
  {
    if ( !v20 )
      return 0LL;
    KeAbPostReleaseEx((ULONG_PTR)v18);
    return 0LL;
  }
  if ( v20 )
    *(_BYTE *)(v20 + 26) |= 1u;
  v22 = 48 * v3 - 0x58000000000LL;
  v50 = v22;
  if ( v6 == v7 )
    goto LABEL_75;
  v23 = (_QWORD *)(v6 + 40);
  v46 = (_QWORD *)(v6 + 40);
  while ( 1 )
  {
    if ( v22 == v54 )
    {
      if ( (*(_BYTE *)(v22 + 34) & 7) != 0 )
        MiSetFreshPfnFromFreeList(v22);
      else
        *(_QWORD *)(v22 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
      goto LABEL_66;
    }
    if ( v3 > qword_1403885E0
      || MmPhysicalMemoryBlock && (*v23 & 0x20000000000000LL) == 0
      || *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL)) != v49 )
    {
      goto LABEL_74;
    }
    v24 = *(_BYTE *)(v22 + 34) & 7;
    if ( v24 > 1 )
      break;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
      goto LABEL_74;
    if ( (*(_BYTE *)(v22 + 34) & 7u) > 1 || (unsigned int)MiFreeZeroPageSizeIndex(v22) != -1 )
      goto LABEL_43;
    if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v3, 0LL, 0LL) )
    {
      MiReturnFreeZeroPage(v22, 512LL);
LABEL_43:
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v18 = (volatile signed __int64 *)BugCheckParameter2;
      v2 = v54;
      goto LABEL_75;
    }
LABEL_66:
    if ( v4 != 1 )
    {
      if ( (unsigned int)MiPfnZeroingNeeded(v22, 1LL, i) )
        v4 = v19;
      v53 = v4;
    }
    v22 += 48LL;
    ++v3;
    v23 += 6;
    v50 = v22;
    v47 = v3;
    v46 = v23;
    if ( v22 == v7 )
      goto LABEL_74;
  }
  if ( v24 != 5
    || (*(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
    || (unsigned int)MiInvalidPteConforms(*(_QWORD *)(v22 + 16), v19, i, *(_QWORD *)(v22 + 16))
    && MiGetPteTimeStamp(v25) != 4294967294LL
    || (v26 & 0xF000u) > 0x1000uLL )
  {
    goto LABEL_74;
  }
  v27 = (unsigned __int8)HIBYTE(*((_WORD *)v23 - 12)) >> 4;
  if ( (unsigned int)v27 > 1 )
    goto LABEL_73;
  _mm_lfence();
  v28 = *v23 >> 58;
  if ( v28 >= (unsigned __int16)KeNumberNodes )
    v28 = MiPageToNode(v3, 0LL);
  v29 = v28 << byte_140388501;
  v30 = (_SLIST_HEADER *)(*(_QWORD *)(v49 + 8 * v27 + 4072)
                        + 16LL * (dword_140388540 & (unsigned int)v3 | v29 | (((*v23 >> 36) & 3) << byte_140388502)));
  if ( LOWORD(v30->Alignment) )
  {
    v31 = (_SLIST_HEADER *)(*(_QWORD *)(v49 + 8 * v27 + 4072)
                          + 16LL * (dword_140388540 & (unsigned int)v3 | v29 | (((*v23 >> 36) & 3) << byte_140388502)));
    v32 = 0LL;
    v33 = RtlpInterlockedFlushSList(v31);
    if ( v33 )
    {
      do
      {
        Next = v33->Next;
        v35 = (volatile signed __int64 *)(&v33[1].Next + 1);
        if ( _interlockedbittestandset64((volatile signed __int32 *)&v33[1].Next + 2, 0x3FuLL) )
        {
          RtlpInterlockedPushEntrySList(v30, v33);
        }
        else if ( v33 == (PSLIST_ENTRY)(v46 - 5) )
        {
          v32 = v33;
        }
        else
        {
          MiClearPfnSlist(v33);
          MiInsertPageInFreeOrZeroedList((v36 + 0x58000000000LL) / 48, 513 - ((_DWORD)v27 != 0));
          _InterlockedAnd64(v35, 0x7FFFFFFFFFFFFFFFuLL);
        }
        v33 = Next;
      }
      while ( Next );
      v22 = v50;
      v6 = v51;
      if ( v32 )
      {
        v19 = *((_QWORD *)&v32[1].Next + 1);
        for ( i = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&v32[1].Next + 1,
                    v19 & 0xFFFFFFF000000000uLL,
                    v19);
              v19 != i;
              i = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&v32[1].Next + 1,
                    i & 0xFFFFFFF000000000uLL,
                    i) )
        {
          v19 = i;
        }
        v32->Next = 0LL;
        v32[1].Next = 0LL;
        if ( (_DWORD)v27 == 1 )
          MiSetFreshPfnFromFreeList(v32);
        v4 = v53;
        v7 = v6 + 768;
        v3 = v47;
        v23 = v46;
        goto LABEL_66;
      }
    }
  }
  v4 = v53;
LABEL_73:
  v7 = v6 + 768;
LABEL_74:
  v18 = (volatile signed __int64 *)BugCheckParameter2;
  v2 = v54;
LABEL_75:
  v37 = 0;
  if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v18);
  KeAbPostRelease((ULONG_PTR)v18);
  if ( v22 == v7 )
  {
    if ( v4 == 1 )
      MiSetOriginalPtePfnFromFreeList(&v48);
    v38 = v7 - 48;
    v39 = 0LL;
    v40 = v7 - 48 + 16;
    do
    {
      if ( MiGetPteTimeStamp(*(_QWORD *)v40) == 4294967293LL )
      {
        v42 = v48;
        *(_QWORD *)v40 = v48;
        updated = MiUpdatePageFileHighInPte(v42, 4294967293LL);
      }
      else
      {
        updated = v48;
      }
      *(_QWORD *)v40 = updated;
      if ( (*(_BYTE *)(v40 + 18) & 0xC0) != 0x40 )
      {
        MiChangePageAttribute(v38, 1LL, 1LL);
        v41 = 0xFFFFFFFFCLL;
      }
      v44 = v52 - v39 + 15;
      v45 = 48 * v44 - 0x58000000000LL;
      *(_QWORD *)(v45 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v45 + 40) &= ~0x200000000000000uLL;
      *(_BYTE *)(v45 + 35) &= 0xF8u;
      *(_BYTE *)(v45 + 34) &= ~0x10u;
      if ( (v44 & 0xF) != 0 )
      {
        *(_QWORD *)(v45 + 40) = v41 | *(_QWORD *)(v45 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
        *(_BYTE *)(v45 + 34) ^= (v4 ^ *(_BYTE *)(v45 + 34)) & 7;
      }
      if ( v38 == v6 )
      {
        *(_QWORD *)(v40 + 24) = v41 | *(_QWORD *)(v40 + 24) & 0xFFFFFFFFFFFFFFFCuLL;
        *(_BYTE *)(v40 + 18) ^= (v4 ^ *(_BYTE *)(v40 + 18)) & 7;
        MiInsertLargePageInNodeListHelper(v52, 16LL, v4, 0LL);
      }
      if ( v38 != v54 )
        _InterlockedAnd64((volatile signed __int64 *)(v40 + 8), 0x7FFFFFFFFFFFFFFFuLL);
      ++v37;
      v38 -= 48LL;
      v39 = v37;
      v40 -= 48LL;
    }
    while ( v37 < 0x10uLL );
    return 1LL;
  }
  else
  {
    for ( ; v6 < v22; v6 += 48LL )
    {
      if ( v6 != v2 )
      {
        MiReturnFreeZeroPage(v6, 512LL);
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    return 0LL;
  }
}
