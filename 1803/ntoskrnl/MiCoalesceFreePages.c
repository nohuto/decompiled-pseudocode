/*
 * XREFs of MiCoalesceFreePages @ 0x14002C6E0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiReturnFreeZeroPage @ 0x1400517A8 (MiReturnFreeZeroPage.c)
 *     MiPfnZeroingNeeded @ 0x140052058 (MiPfnZeroingNeeded.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400A27C0 (ExfTryAcquirePushLockShared.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 *     MiClearPfnSlist @ 0x140264F24 (MiClearPfnSlist.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall MiCoalesceFreePages(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rsi
  int v4; // r15d
  __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r10
  _QWORD *v9; // r11
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  unsigned int i; // eax
  __int64 v15; // rcx
  __int16 v16; // r9
  volatile signed __int64 *v17; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v22; // cl
  int SessionId; // eax
  unsigned __int64 v24; // r9
  bool v25; // zf
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rdi
  unsigned int v30; // eax
  __int64 *v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r14
  unsigned __int64 v35; // rdx
  unsigned int v36; // r9d
  unsigned int v37; // eax
  unsigned __int64 v38; // r8
  _SLIST_HEADER *v39; // r15
  _QWORD *v40; // rsi
  unsigned __int64 v41; // rbp
  volatile signed __int64 *v42; // rdi
  __int64 v43; // r9
  signed __int64 v44; // rdx
  signed __int64 v45; // r8
  signed __int64 v46; // rdx
  __int64 v47; // rbx
  unsigned __int64 v48; // rsi
  unsigned int v49; // r14d
  __int64 v50; // rbp
  unsigned __int64 v51; // rdi
  __int64 PteTimeStamp; // rax
  __int64 v53; // rdx
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rdx
  char v57; // r8
  char v58; // r8
  volatile signed __int64 *v59; // [rsp+20h] [rbp-98h]
  _QWORD *v60; // [rsp+30h] [rbp-88h]
  __int64 v61; // [rsp+38h] [rbp-80h]
  unsigned __int64 v62; // [rsp+40h] [rbp-78h]
  __int64 v63; // [rsp+48h] [rbp-70h] BYREF
  __int64 v64; // [rsp+50h] [rbp-68h]
  unsigned __int64 v65; // [rsp+58h] [rbp-60h]
  unsigned __int64 v66; // [rsp+60h] [rbp-58h]
  ULONG_PTR v67; // [rsp+C0h] [rbp+8h]
  int v68; // [rsp+C8h] [rbp+10h]
  int v69; // [rsp+D0h] [rbp+18h] BYREF
  int v70; // [rsp+D8h] [rbp+20h]

  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v2 = 48 * a1 - 0x58000000000LL;
  v3 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v61 = v2;
  v67 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = *(_BYTE *)(v2 + 34) & 7;
  v68 = v4;
  v5 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v2 + 40) >> 40) & 0x3FFLL));
  v64 = v5;
  v6 = 48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL) - 0x58000000000LL;
  v66 = v6;
  v7 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = v6 + 34;
  v9 = (_QWORD *)(48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL) - 0x57FFFFFFFD8LL);
  do
  {
    if ( v7 > qword_1403CB780 || MmPhysicalMemoryBlock && (*v9 & 0x20000000000000LL) == 0 )
      return 0LL;
    v10 = *(_QWORD *)(v8 + 6);
    if ( *(_QWORD *)(qword_1403CBD88 + 8 * ((v10 >> 40) & 0x3FF)) != v5 )
      return 0LL;
    v11 = *(_BYTE *)v8 & 7;
    if ( v11 > 1 )
    {
      if ( v11 != 5
        || (*(_QWORD *)(v8 - 26) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
        || !(unsigned int)MiInvalidPteConforms(*(_QWORD *)(v8 - 18))
        || MiGetPteTimeStamp(v15) != 4294967294LL
        || (v16 & 0xF000u) > 0x1000uLL )
      {
        return 0LL;
      }
    }
    else
    {
      v12 = MiLargePageContainingFrames;
      v13 = v10 & 0xFFFFFFFFFLL;
      for ( i = 0; i < 3; ++i )
      {
        if ( v13 == *v12 )
          return 0LL;
        ++v12;
      }
    }
    v8 += 48LL;
    ++v7;
    v9 += 6;
  }
  while ( v8 - 34 != v6 + 768 );
  v17 = (volatile signed __int64 *)(v5 + 184);
  v69 = 0;
  CurrentThread = KeGetCurrentThread();
  v63 = ZeroPte;
  v62 = v3;
  v59 = (volatile signed __int64 *)(v5 + 184);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    LOBYTE(v20) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v20 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v19 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5 + 184);
        goto LABEL_26;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      LOBYTE(v20) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
      CurrentThread->AbEntrySummary = v20;
    }
    v22 = v20;
    _BitScanForward((unsigned int *)&v20, (unsigned __int8)v20);
    v70 = v20;
    CurrentThread->AbEntrySummary = v22 & ~(1 << v20);
    v19 = (__int64)&CurrentThread->LockEntries[v20];
LABEL_26:
    if ( v19 )
    {
      if ( (unsigned int)MiGetSystemRegionType(v5 + 184) == 1 )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v19 + 40) = SessionId;
      *(_QWORD *)(v19 + 32) = (unsigned __int64)v17 & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    }
    goto LABEL_34;
  }
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  v19 = 0LL;
LABEL_34:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v5 + 184, &v69);
  v25 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v25 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( _InterlockedCompareExchange64(v17, 17LL, 0LL) && !(unsigned __int8)ExfTryAcquirePushLockShared(v5 + 184) )
  {
    if ( !v19 )
      return 0LL;
    KeAbPostReleaseEx(v5 + 184);
    return 0LL;
  }
  if ( v19 )
    *(_BYTE *)(v19 + 26) |= 1u;
  v26 = v6 + 768;
  v27 = 48 * v3 - 0x58000000000LL;
  v65 = v27;
  v28 = 1LL;
  v29 = (_QWORD *)(v6 + 40);
  v60 = (_QWORD *)(v6 + 40);
  while ( v27 == v2 )
  {
    if ( (*(_BYTE *)(v27 + 34) & 7) != 0 )
    {
      MiSetFreshPfnFromFreeList(v27);
LABEL_87:
      v28 = 1LL;
      goto LABEL_88;
    }
    *(_QWORD *)(v27 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
LABEL_88:
    if ( v4 != 1 )
    {
      if ( (unsigned int)MiPfnZeroingNeeded(v27, v28) )
        v4 = v28;
      v68 = v4;
    }
    v27 += 48LL;
    ++v3;
    v29 += 6;
    v65 = v27;
    v62 = v3;
    v60 = v29;
    if ( v27 == v26 )
      goto LABEL_95;
  }
  if ( v3 > qword_1403CB780
    || MmPhysicalMemoryBlock && (*v29 & 0x20000000000000LL) == 0
    || *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v27 + 40) >> 40) & 0x3FFLL)) != v5 )
  {
    goto LABEL_95;
  }
  v30 = *(_BYTE *)(v27 + 34) & 7;
  if ( v30 > 1 )
  {
    if ( v30 != 5
      || (*(_QWORD *)(v27 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
      || (unsigned int)MiInvalidPteConforms(*(_QWORD *)(v27 + 16)) && MiGetPteTimeStamp(v33) != 4294967294LL )
    {
      goto LABEL_95;
    }
    v24 = (unsigned __int16)v24 & 0xF000;
    if ( v24 > 0x1000 )
      goto LABEL_95;
    v34 = (unsigned __int8)HIBYTE(*((_WORD *)v29 - 12)) >> 4;
    if ( (unsigned int)v34 > 1 )
      goto LABEL_95;
    _mm_lfence();
    v35 = *v29;
    v36 = *v29 >> 58;
    if ( v36 >= (unsigned __int16)KeNumberNodes )
    {
      v37 = MiPageToNode(v3, 0LL);
      v35 = *v29;
      v36 = v37;
    }
    v38 = ((v35 >> 36) & 3) << byte_1403CB69A;
    v28 = dword_1403CB6D8 & (unsigned int)v3;
    v24 = v36 << byte_1403CB699;
    v26 = 16 * ((unsigned int)v24 | v28 | v38);
    v39 = (_SLIST_HEADER *)(v26 + *(_QWORD *)(v5 + 8 * v34 + 4136));
    if ( !LOWORD(v39->Alignment) )
      goto LABEL_94;
    v40 = 0LL;
    v24 = (unsigned __int64)RtlpInterlockedFlushSList((PSLIST_HEADER)(v26 + *(_QWORD *)(v5 + 8 * v34 + 4136)));
    if ( !v24 )
      goto LABEL_94;
    do
    {
      v41 = *(_QWORD *)v24;
      v42 = (volatile signed __int64 *)(v24 + 24);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
      {
        RtlpInterlockedPushEntrySList(v39, (PSLIST_ENTRY)v24);
      }
      else if ( (_QWORD *)v24 == v60 - 5 )
      {
        v40 = (_QWORD *)v24;
      }
      else
      {
        MiClearPfnSlist(v24);
        MiInsertPageInFreeOrZeroedList((v43 + 0x58000000000LL) / 48, 513 - ((_DWORD)v34 != 0));
        _InterlockedAnd64(v42, 0x7FFFFFFFFFFFFFFFuLL);
      }
      v24 = v41;
    }
    while ( v41 );
    v27 = v65;
    v6 = v66;
    if ( !v40 )
    {
LABEL_94:
      v4 = v68;
      goto LABEL_95;
    }
    v44 = v40[3];
    v24 = 0xFFFFFFF000000000uLL;
    v45 = _InterlockedCompareExchange64(v40 + 3, v44 & 0xFFFFFFF000000000uLL, v44);
    if ( v44 != v45 )
    {
      do
      {
        v46 = v45;
        v45 = _InterlockedCompareExchange64(v40 + 3, v45 & 0xFFFFFFF000000000uLL, v45);
      }
      while ( v46 != v45 );
    }
    v40[2] = ZeroPte;
    *v40 = 0LL;
    if ( (_DWORD)v34 == 1 )
      MiSetFreshPfnFromFreeList(v40);
    v5 = v64;
    v2 = v61;
    v4 = v68;
    v3 = v62;
    v29 = v60;
LABEL_86:
    v26 = v6 + 768;
    goto LABEL_87;
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
  {
    if ( (*(_BYTE *)(v27 + 34) & 7u) <= 1 )
    {
      v28 = *(_QWORD *)(v27 + 40);
      if ( *(_QWORD *)(qword_1403CBD88 + 8 * ((v28 >> 40) & 0x3FF)) == v5 )
      {
        v31 = MiLargePageContainingFrames;
        v28 &= 0xFFFFFFFFFuLL;
        v32 = 0;
        while ( v28 != *v31 )
        {
          ++v32;
          ++v31;
          if ( v32 >= 3 )
          {
            if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v3, 0LL, 0LL) )
              goto LABEL_86;
            MiReturnFreeZeroPage(v27, 512LL);
            break;
          }
        }
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_95:
  if ( _InterlockedCompareExchange64(v59, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v59, v28, v26, v24);
  KeAbPostRelease((ULONG_PTR)v59);
  if ( v27 == v6 + 768 )
  {
    if ( v4 == 1 )
      MiSetOriginalPtePfnFromFreeList(&v63);
    v47 = v63;
    v48 = v6 + 720;
    v49 = 0;
    v50 = 0LL;
    v51 = v6 + 736;
    do
    {
      PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)v51);
      *(_QWORD *)v51 = v47;
      if ( PteTimeStamp == v53 )
        *(_QWORD *)v51 = MiUpdatePageFileHighInPte(v47, v53);
      if ( (*(_BYTE *)(v51 + 18) & 0xC0) != 0x40 )
      {
        MiChangePageAttribute(v48, 1LL, 1LL);
        v54 = 0xFFFFFFFFCLL;
      }
      v55 = v67 - v50 + 15;
      v56 = 48 * v55 - 0x58000000000LL;
      *(_QWORD *)(v56 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v56 + 40) &= ~0x200000000000000uLL;
      v57 = *(_BYTE *)(v56 + 34);
      *(_BYTE *)(v56 + 35) &= 0xF8u;
      v58 = v57 & 0xEF;
      *(_BYTE *)(v56 + 34) = v58;
      *(_QWORD *)(v56 + 8) = 0LL;
      if ( (v55 & 0xF) != 0 )
      {
        *(_QWORD *)(v56 + 40) = v54 | *(_QWORD *)(v56 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
        *(_BYTE *)(v56 + 34) = v58 ^ (v4 ^ v58) & 7;
      }
      if ( v48 == v6 )
      {
        *(_QWORD *)(v51 + 24) = v54 | *(_QWORD *)(v51 + 24) & 0xFFFFFFFFFFFFFFFCuLL;
        *(_BYTE *)(v51 + 18) ^= (v4 ^ *(_BYTE *)(v51 + 18)) & 7;
        MiInsertLargePageInNodeListHelper(v67);
      }
      if ( v48 != v61 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v51 + 8), 0x7FFFFFFFFFFFFFFFuLL);
        v47 = v63;
      }
      ++v49;
      v48 -= 48LL;
      v50 = v49;
      v51 -= 48LL;
    }
    while ( v49 < 0x10uLL );
    return 1LL;
  }
  else
  {
    for ( ; v6 < v27; v6 += 48LL )
    {
      if ( v6 != v61 )
      {
        MiReturnFreeZeroPage(v6, 512LL);
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    return 0LL;
  }
}
