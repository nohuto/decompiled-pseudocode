/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x14002D3C0
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiGetPerfectColorHeadPage @ 0x1400D4EA0 (MiGetPerfectColorHeadPage.c)
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 *     MiPurgeZeroList @ 0x14014F71C (MiPurgeZeroList.c)
 *     MiTransferPartitionPageRun @ 0x14026FE30 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     MiPageListCollision @ 0x1400C0DC4 (MiPageListCollision.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x1401700A4 (MiUpdateAvailableEvents.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiObtainFreePages @ 0x140259A20 (MiObtainFreePages.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(ULONG_PTR a1, __int64 a2, __int16 a3, unsigned __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // rsi
  int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rdx
  volatile __int64 *v12; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v15; // eax
  ULONG_PTR v16; // r10
  volatile signed __int32 *v17; // r8
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  signed __int64 v22; // r8
  signed __int64 v23; // rcx
  __int64 v24; // r11
  __int64 v25; // rax
  __int64 v26; // r11
  signed __int64 v27; // rcx
  char v28; // r12
  __int64 v29; // rax
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  int v36; // ebx
  int v37; // ecx
  __int64 v38; // rcx
  unsigned int v39; // ebp
  __int64 v41; // [rsp+20h] [rbp-68h] BYREF
  volatile signed __int64 *v42; // [rsp+28h] [rbp-60h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v45; // [rsp+98h] [rbp+10h]
  int v47; // [rsp+A8h] [rbp+20h]

  v4 = a2;
  v6 = 48 * a1 - 0x58000000000LL;
  v7 = 0;
  v47 = (unsigned __int8)HIBYTE(*(_QWORD *)(v6 + 40)) >> 2;
  v8 = *(_BYTE *)(v6 + 34) & 7;
  v45 = *(_BYTE *)(v6 + 34) & 7;
  v9 = dword_1403CB6D8 & (unsigned int)a1 | (((*(_QWORD *)(v6 + 40) >> 36) & 3) << byte_1403CB69A) | (unsigned int)(v47 << byte_1403CB699);
  v10 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v6 + 40) >> 40) & 0x3FFLL));
  if ( a2 )
  {
    v47 = -1;
  }
  else
  {
    v11 = *(_QWORD *)(v10 + 8 * v8 + 2112);
    v41 = 0LL;
    v4 = v11 + 40 * v9;
    v12 = (volatile __int64 *)(v4 + 32);
    v42 = (volatile signed __int64 *)(v4 + 32);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[5];
        SchedulerAssist[5] = v15 + 1;
        if ( v15 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v41, v12);
    }
    else if ( _InterlockedExchange64(v12, (__int64)&v41) )
    {
      KxWaitForLockOwnerShip(&v41);
    }
  }
  _InterlockedDecrement64(*(volatile signed __int64 **)(v10 + 8 * v8 + 4152));
  if ( dword_1403CBDAC == 1 )
  {
    a4 = 1LL;
    v16 = a1 & 0x1F;
    v17 = (volatile signed __int32 *)(qword_1403CBE08 + 4 * (a1 >> 5));
    if ( v16 + 1 <= 0x20 )
    {
      v18 = 1 << v16;
LABEL_22:
      _InterlockedOr(v17, v18);
      goto LABEL_23;
    }
    if ( (a1 & 0x1F) == 0 )
      goto LABEL_21;
    _InterlockedOr(v17++, ((1 << (32 - (a1 & 0x1F))) - 1) << v16);
    a4 = 1LL - (32 - (unsigned int)(a1 & 0x1F));
    if ( a4 >= 0x20 )
    {
      v19 = a4 >> 5;
      a4 += -32LL * (a4 >> 5);
      do
      {
        *v17++ = -1;
        --v19;
      }
      while ( v19 );
    }
    if ( a4 )
    {
LABEL_21:
      v18 = (1 << a4) - 1;
      goto LABEL_22;
    }
  }
LABEL_23:
  --*(_QWORD *)v4;
  if ( *(_QWORD *)(v4 + 16) == a1 )
  {
    v20 = *(_QWORD *)v6 & 0xFFFFFFFFFLL;
    *(_QWORD *)(v4 + 16) = v20;
    if ( v20 == 0xFFFFFFFFFLL )
    {
      a4 = *(_QWORD *)(v10 + 16)
         + 1984 * ((unsigned __int64)(unsigned int)v9 >> byte_1403CB699)
         + 16 * ((unsigned int)v8 + 104LL);
      v22 = (unsigned int)~(1 << (v9 & dword_1403CB6D8 & 0x1F));
      v21 = (unsigned __int64)((unsigned int)v9 & dword_1403CB6D8) >> 5;
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a4 + 8) + 4 * v21), v22);
      *(_QWORD *)(v4 + 24) = 0xFFFFFFFFFLL;
    }
    else
    {
      a4 = 48 * v20 - 0x58000000000LL;
      v21 = *(_QWORD *)(a4 + 24);
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 24), v21 | 0xFFFFFFFFFLL, v21);
      if ( v21 != v22 )
      {
        do
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 24), v22 | 0xFFFFFFFFFLL, v22);
        }
        while ( v23 != v22 );
      }
    }
  }
  else
  {
    v22 = 0xFFFFFA8000000000uLL;
    v21 = 6 * (*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFLL);
    *(_QWORD *)(48 * (*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL) ^= (*(_QWORD *)v6 ^ *(_QWORD *)(48 * (*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    v24 = *(_QWORD *)(v6 + 24);
    v25 = *(_QWORD *)v6 & 0xFFFFFFFFFLL;
    if ( v25 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v4 + 24) = v24 & 0xFFFFFFFFFLL;
    }
    else
    {
      a4 = 48 * v25 - 0x58000000000LL;
      v26 = v24 & 0xFFFFFFFFFLL;
      v21 = *(_QWORD *)(a4 + 24);
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 24), v26 | v21 & 0xFFFFFFF000000000uLL, v21);
      if ( v21 != v22 )
      {
        do
        {
          v27 = v22;
          v22 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(a4 + 24),
                  v26 | v22 & 0xFFFFFFF000000000uLL,
                  v22);
        }
        while ( v27 != v22 );
      }
    }
  }
  *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xF8 | 5;
  v28 = *(_BYTE *)(v10 + 4765);
  if ( v47 != -1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v41, retaddr, v22, a4);
LABEL_41:
      v30 = KeGetCurrentPrcb();
      v31 = v30->SchedulerAssist;
      if ( v31 )
      {
        if ( v30->NestingLevel <= 1u )
        {
          v32 = v31[5] - 1;
          v31[5] = v32;
          if ( !v32 )
          {
            v22 = *((unsigned __int8 *)v31 + 27);
            if ( !*((_BYTE *)v31 + 25) && !(_BYTE)v22 )
              KiPerformUnboostKick(v30);
          }
        }
      }
      goto LABEL_47;
    }
    _m_prefetchw(&v41);
    v29 = v41;
    if ( !v41 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v42, 0LL, (signed __int64)&v41) == &v41 )
        goto LABEL_41;
      v29 = KxWaitForLockChainValid(&v41, v21, v22, a4);
    }
    v41 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v29 + 8), 1uLL);
    goto LABEL_41;
  }
LABEL_47:
  v33 = *(_QWORD *)(v10 + 16) + 1984 * ((unsigned __int64)(unsigned int)v9 >> byte_1403CB699);
  _InterlockedDecrement64((volatile signed __int64 *)(v33 + 8LL * (unsigned int)v8 + 1760));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedDecrement64((volatile signed __int64 *)(v33
                                                      + 8
                                                      * ((unsigned int)v8
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v9 >> byte_1403CB69A)))
                                                      + 1824));
  v34 = _InterlockedDecrement64((volatile signed __int64 *)(v10 + 7040));
  if ( v34 == *(_QWORD *)(v10 + 6120) || v34 == *(_QWORD *)(v10 + 6128) )
    MiUpdateAvailableEvents(v10, v33);
  if ( v34 <= 0x420 )
  {
    v35 = *(_QWORD *)(v10 + 6768);
    if ( !v35 || !*(_BYTE *)(v35 + 52) )
      MiObtainFreePages(v10, v33, v22);
    if ( v34 < 0xA0 && v34 + 1 >= 0xA0 && *(_DWORD *)(v10 + 1144) )
      KeSetEvent((PRKEVENT)(v10 + 992), 0, 0);
  }
  if ( v34 < 0x9F )
  {
    if ( (a3 & 0x2000) != 0 )
    {
      v36 = 1;
    }
    else
    {
      v37 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v37 & 0xC) == 8 )
      {
        v36 = 1;
      }
      else if ( v34 < 0x20 && (ULONG_PTR *)v10 == &MiSystemPartition )
      {
        v36 = 0;
      }
      else if ( (a3 & 4) != 0 )
      {
        v36 = 1;
      }
      else if ( (v37 & 2) != 0 && v34 >= 0x21 )
      {
        v36 = 1;
      }
      else
      {
        v36 = (*(unsigned __int8 *)(v10 + 4) >> 3) & 1;
      }
    }
  }
  else
  {
    v36 = 1;
  }
  if ( (*(_BYTE *)(v6 + 34) & 8) != 0 )
    MiPageListCollision(v6, 1LL, v22);
  v38 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 24) &= 0xFFFFFFF000000000uLL;
  *(_QWORD *)v6 = 0LL;
  if ( MiGetPteTimeStamp(v38) == 4294967293LL )
    v7 = 2;
  v39 = v36 | v7;
  *(_QWORD *)(v6 + 16) = ZeroPte;
  if ( v39 >= 2 )
    *(_QWORD *)(v6 + 16) = MiUpdatePageFileHighInPte(ZeroPte, 4294967293LL);
  if ( v45 == 1 || v28 == 1 )
  {
    MiSetFreshPfnFromFreeList(v6);
  }
  else if ( (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(a1);
  }
  return v39 & 1;
}
