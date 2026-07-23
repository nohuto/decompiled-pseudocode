/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x140050BA0
 * Callers:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400CAD78 (MiGetPerfectColorHeadPage.c)
 *     MiPurgeZeroList @ 0x14022A7B0 (MiPurgeZeroList.c)
 *     MiTransferPartitionPageRun @ 0x140238208 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiPageListCollision @ 0x14010F9B8 (MiPageListCollision.c)
 *     MiUpdateAvailableEvents @ 0x140137060 (MiUpdateAvailableEvents.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x14021D8D8 (MiObtainFreePages.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(unsigned __int64 a1, __int64 a2, __int16 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rsi
  int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // r10
  volatile signed __int32 *v13; // r8
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  volatile signed __int64 *v17; // r9
  unsigned __int64 v18; // rdx
  signed __int64 v19; // r8
  signed __int64 v20; // rcx
  __int64 v21; // rax
  volatile signed __int64 *v22; // r9
  __int64 v23; // r11
  signed __int64 v24; // r8
  signed __int64 v25; // rcx
  char v26; // r15
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rcx
  __int64 PteTimeStamp; // rax
  int v35; // r8d
  unsigned int v36; // r8d
  __int64 v38; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int64 *v39; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v3 = a2;
  v5 = 48 * a1 - 0x58000000000LL;
  v6 = *(_QWORD *)(v5 + 40) >> 58;
  v7 = *(_BYTE *)(v5 + 34) & 7;
  v8 = dword_140388540 & (unsigned int)a1 | (v6 << byte_140388501) | (((*(_QWORD *)(v5 + 40) >> 36) & 3) << byte_140388502);
  v9 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v5 + 40) >> 40) & 0x3FFLL));
  if ( a2 )
  {
    v6 = -1;
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 8 * v7 + 2048);
    v38 = 0LL;
    v3 = v10 + 40 * v8;
    v39 = (volatile signed __int64 *)(v3 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v38, v3 + 32);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(v3 + 32), (__int64)&v38) )
    {
      KxWaitForLockOwnerShip(&v38);
    }
  }
  _InterlockedDecrement64(*(volatile signed __int64 **)(v9 + 8 * v7 + 4088));
  if ( dword_140388B14 == 1 )
  {
    LOBYTE(v11) = 1;
    v12 = a1 & 0x1F;
    v13 = (volatile signed __int32 *)stru_140388B68.Buffer + (a1 >> 5);
    if ( (unsigned __int64)(v12 + 1) <= 0x20 )
    {
      v14 = 1 << v12;
LABEL_16:
      _InterlockedOr(v13, v14);
      goto LABEL_17;
    }
    if ( (a1 & 0x1F) == 0 )
      goto LABEL_15;
    _InterlockedOr(v13++, ((1 << (32 - (a1 & 0x1F))) - 1) << v12);
    v11 = 1LL - (32 - (unsigned int)(a1 & 0x1F));
    if ( v11 >= 0x20 )
    {
      v15 = v11 >> 5;
      v11 += -32LL * (v11 >> 5);
      do
      {
        *v13++ = -1;
        --v15;
      }
      while ( v15 );
    }
    if ( v11 )
    {
LABEL_15:
      v14 = (1 << v11) - 1;
      goto LABEL_16;
    }
  }
LABEL_17:
  --*(_QWORD *)v3;
  if ( *(_QWORD *)(v3 + 16) == a1 )
  {
    v16 = *(_QWORD *)v5 & 0xFFFFFFFFFLL;
    *(_QWORD *)(v3 + 16) = v16;
    if ( v16 == 0xFFFFFFFFFLL )
    {
      v18 = (unsigned __int64)(unsigned int)v8 >> byte_140388501;
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 16 * ((unsigned int)v7 + 516 * v18) + 7944)
                                  + 4 * ((unsigned __int64)((unsigned int)v8 & dword_140388540) >> 5)),
        ~(1 << (v8 & dword_140388540 & 0x1F)));
      *(_QWORD *)(v3 + 24) = 0xFFFFFFFFFLL;
    }
    else
    {
      v17 = (volatile signed __int64 *)(48 * v16 - 0x57FFFFFFFE8LL);
      v18 = *v17;
      v19 = _InterlockedCompareExchange64(v17, *v17 | 0xFFFFFFFFFLL, *v17);
      if ( v18 != v19 )
      {
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange64(v17, v19 | 0xFFFFFFFFFLL, v19);
        }
        while ( v20 != v19 );
      }
    }
  }
  else
  {
    v18 = 6 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL);
    *(_QWORD *)(48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL) ^= (*(_QWORD *)v5 ^ *(_QWORD *)(48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    v21 = *(_QWORD *)v5 & 0xFFFFFFFFFLL;
    if ( v21 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v3 + 24) = *(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL;
    }
    else
    {
      v22 = (volatile signed __int64 *)(48 * v21 - 0x57FFFFFFFE8LL);
      v23 = *(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL;
      v18 = *v22;
      v24 = _InterlockedCompareExchange64(v22, v23 | *v22 & 0xFFFFFFF000000000uLL, *v22);
      if ( v18 != v24 )
      {
        do
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange64(v22, v23 | v24 & 0xFFFFFFF000000000uLL, v24);
        }
        while ( v25 != v24 );
      }
    }
  }
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v26 = *(_BYTE *)(v9 + 4677);
  if ( v6 != -1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v38, retaddr);
      goto LABEL_31;
    }
    _m_prefetchw(&v38);
    v31 = v38;
    if ( !v38 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v39, 0LL, (signed __int64)&v38) == &v38 )
        goto LABEL_31;
      v31 = KxWaitForLockChainValid(&v38, v18);
    }
    v38 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v31 + 8), 1uLL);
  }
LABEL_31:
  v27 = *(_QWORD *)(v9 + 16) + 8256 * ((unsigned __int64)(unsigned int)v8 >> byte_140388501);
  _InterlockedDecrement64((volatile signed __int64 *)(v27 + 8 * v7 + 8032));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedDecrement64((volatile signed __int64 *)(v27
                                                      + 8
                                                      * (v7
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v8 >> byte_140388502)))
                                                      + 8096));
  v28 = _InterlockedDecrement64((volatile signed __int64 *)(v9 + 5952));
  if ( v28 == *(_QWORD *)(v9 + 4968) || v28 == *(_QWORD *)(v9 + 4976) )
    MiUpdateAvailableEvents(v9, v27);
  if ( v28 <= 0x420 )
  {
    v29 = *(_QWORD *)(v9 + 5680);
    if ( !v29 || !*(_BYTE *)(v29 + 52) )
      MiObtainFreePages(v9, v27);
    if ( v28 < 0xA0 && v28 + 1 >= 0xA0 && *(_DWORD *)(v9 + 1144) )
      KeSetEvent((PRKEVENT)(v9 + 992), 0, 0);
  }
  if ( v28 < 0x9F )
  {
    if ( (a3 & 0x800) != 0 )
    {
      v30 = 1;
    }
    else
    {
      v32 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v32 & 0xC) == 8 )
      {
        v30 = 1;
      }
      else if ( v28 < 0x20 && (ULONG_PTR *)v9 == &MiSystemPartition )
      {
        v30 = 0;
      }
      else if ( (a3 & 4) != 0 )
      {
        v30 = 1;
      }
      else if ( (v32 & 2) != 0 && v28 >= 0x21 )
      {
        v30 = 1;
      }
      else
      {
        v30 = (*(unsigned __int8 *)(v9 + 4) >> 3) & 1;
      }
    }
  }
  else
  {
    v30 = 1;
  }
  if ( (*(_BYTE *)(v5 + 34) & 8) != 0 )
    MiPageListCollision(v5, 1LL);
  v33 = *(_QWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 24) &= 0xFFFFFFF000000000uLL;
  *(_QWORD *)v5 = 0LL;
  PteTimeStamp = MiGetPteTimeStamp(v33);
  *(_QWORD *)(v5 + 16) = 0LL;
  v35 = 0;
  if ( PteTimeStamp == 4294967293LL )
    v35 = 2;
  v36 = v30 | v35;
  if ( v36 >= 2 )
    *(_QWORD *)(v5 + 16) = MiUpdatePageFileHighInPte(0LL, 4294967293LL);
  if ( (_DWORD)v7 == 1 || v26 == 1 )
    MiSetFreshPfnFromFreeList(v5);
  return v36 & 1;
}
