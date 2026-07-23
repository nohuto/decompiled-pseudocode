/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x1400C7FC0
 * Callers:
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiRemoveAnyPage @ 0x1400B91F0 (MiRemoveAnyPage.c)
 *     MiZeroSinglePage @ 0x1400C6290 (MiZeroSinglePage.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 *     MiPurgeZeroList @ 0x140138B04 (MiPurgeZeroList.c)
 *     MiTransferPartitionPageRun @ 0x14021EA0C (MiTransferPartitionPageRun.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiPageListCollision @ 0x140125804 (MiPageListCollision.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     MiUpdateAvailableEvents @ 0x1401548AC (MiUpdateAvailableEvents.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x140215244 (MiObtainFreePages.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // r10
  unsigned __int64 v13; // r9
  volatile signed __int32 *v14; // r8
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r10
  signed __int64 v19; // rdx
  signed __int64 v20; // r8
  signed __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r11
  signed __int64 v25; // rdx
  signed __int64 v26; // r8
  signed __int64 v27; // rcx
  char v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  int v33; // ecx
  __int64 v35; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v36; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v38; // [rsp+80h] [rbp+8h]

  v3 = a2;
  v5 = 48 * a1 - 0x58000000000LL;
  v6 = *(_BYTE *)(v5 + 34) & 7;
  v38 = *(_QWORD *)(v5 + 40) >> 58;
  v7 = dword_14036C1F8 & (unsigned int)a1 | (v38 << byte_14036C1B9) | (((*(_QWORD *)(v5 + 40) >> 36) & 3) << byte_14036C1BA);
  v8 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v5 + 40) >> 40) & 0x3FFLL));
  if ( a2 )
  {
    v38 = -1;
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 8 * v6 + 1920);
    v35 = 0LL;
    v3 = v9 + 40 * v7;
    v36 = (volatile signed __int64 *)(v3 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v35, v3 + 32);
    }
    else
    {
      v10 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v3 + 32), (__int64)&v35);
      if ( v10 )
        KxWaitForLockOwnerShip((__int64)&v35, v10);
    }
  }
  v11 = 1;
  _InterlockedDecrement64(*(volatile signed __int64 **)(v8 + 8 * v6 + 3960));
  if ( dword_14036C91C == 1 )
  {
    v12 = a1 & 0x1F;
    LOBYTE(v13) = 1;
    v14 = (volatile signed __int32 *)stru_14036C970.Buffer + (a1 >> 5);
    if ( (unsigned __int64)(v12 + 1) <= 0x20 )
    {
      v15 = 1 << v12;
LABEL_16:
      _InterlockedOr(v14, v15);
      goto LABEL_17;
    }
    if ( (a1 & 0x1F) == 0 )
      goto LABEL_15;
    _InterlockedOr(v14++, ((1 << (32 - (a1 & 0x1F))) - 1) << v12);
    v13 = 1LL - (32 - (unsigned int)(a1 & 0x1F));
    if ( v13 >= 0x20 )
    {
      v16 = v13 >> 5;
      v13 += -32LL * (v13 >> 5);
      do
      {
        *v14++ = -1;
        --v16;
      }
      while ( v16 );
    }
    if ( v13 )
    {
LABEL_15:
      v15 = (1 << v13) - 1;
      goto LABEL_16;
    }
  }
LABEL_17:
  --*(_QWORD *)v3;
  if ( *(_QWORD *)(v3 + 16) == a1 )
  {
    v17 = *(_QWORD *)v5 & 0xFFFFFFFFFLL;
    *(_QWORD *)(v3 + 16) = v17;
    if ( v17 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v3 + 24) = 0xFFFFFFFFFLL;
    }
    else
    {
      v18 = 48 * v17 - 0x58000000000LL;
      v19 = *(_QWORD *)(v18 + 24);
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v19 | 0xFFFFFFFFFLL, v19);
      if ( v19 != v20 )
      {
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v20 | 0xFFFFFFFFFLL, v20);
        }
        while ( v21 != v20 );
      }
    }
  }
  else
  {
    *(_QWORD *)(48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL) ^= (*(_QWORD *)v5 ^ *(_QWORD *)(48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    v22 = *(_QWORD *)v5 & 0xFFFFFFFFFLL;
    if ( v22 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v3 + 24) = *(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL;
    }
    else
    {
      v23 = 48 * v22 - 0x58000000000LL;
      v24 = *(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL;
      v25 = *(_QWORD *)(v23 + 24);
      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 24), v24 | v25 & 0xFFFFFFF000000000uLL, v25);
      if ( v25 != v26 )
      {
        do
        {
          v27 = v26;
          v26 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v23 + 24),
                  v24 | v26 & 0xFFFFFFF000000000uLL,
                  v26);
        }
        while ( v27 != v26 );
      }
    }
  }
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v28 = *(_BYTE *)(v8 + 4549);
  if ( v38 != -1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v35, retaddr);
      goto LABEL_35;
    }
    _m_prefetchw(&v35);
    v29 = v35;
    if ( !v35 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v36, 0LL, (signed __int64)&v35) == &v35 )
        goto LABEL_35;
      v29 = KxWaitForLockChainValid(&v35);
    }
    v35 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v29 + 8), 1uLL);
  }
LABEL_35:
  v30 = *(_QWORD *)(v8 + 48) + 2184 * ((unsigned __int64)(unsigned int)v7 >> byte_14036C1B9);
  _InterlockedDecrement64((volatile signed __int64 *)(v30 + 8 * v6 + 2008));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedDecrement64((volatile signed __int64 *)(v30
                                                      + 8
                                                      * (v6
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v7 >> byte_14036C1BA)))
                                                      + 2072));
  v31 = _InterlockedDecrement64((volatile signed __int64 *)(v8 + 5760));
  if ( v31 == *(_QWORD *)(v8 + 4840) || v31 == *(_QWORD *)(v8 + 4848) )
    MiUpdateAvailableEvents(v8);
  if ( v31 <= 0x420 )
  {
    v32 = *(_QWORD *)(v8 + 5544);
    if ( !v32 || !*(_BYTE *)(v32 + 52) )
      MiObtainFreePages(v8);
    if ( v31 < 0xA0 && v31 + 1 >= 0xA0 && *(_DWORD *)(v8 + 1192) )
      KeSetEvent((PRKEVENT)(v8 + 1040), 0, 0);
  }
  if ( v31 < 0x9F )
  {
    v30 = a3;
    if ( (a3 & 0x800) == 0 )
    {
      v33 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v33 & 0xC) != 8 )
      {
        if ( v31 < 0x20 && (ULONG_PTR *)v8 == &MiSystemPartition )
        {
          v11 = 0;
        }
        else if ( (a3 & 4) == 0 && ((v33 & 2) == 0 || v31 < 0x21) )
        {
          v11 = (*(unsigned __int8 *)(v8 + 4) >> 4) & 1;
        }
      }
    }
  }
  if ( (*(_BYTE *)(v5 + 34) & 8) != 0 )
    MiPageListCollision(v5, v30);
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 24) &= 0xFFFFFFF000000000uLL;
  *(_QWORD *)(v5 + 16) = 0LL;
  if ( (_DWORD)v6 == 1 || v28 == 1 )
    MiSetFreshPfnFromFreeList(v5);
  return v11;
}
