/*
 * XREFs of MiGetUltraMapping @ 0x1401389F0
 * Callers:
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002E730 (MiDecrementAndInsertStandbyPages.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiCombinePte @ 0x140040950 (MiCombinePte.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiZeroLargePage @ 0x140138310 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x1401386E0 (MiZeroInParallelWorker.c)
 *     MiDeleteUltraMapContext @ 0x14013A5FC (MiDeleteUltraMapContext.c)
 *     MiAllocateHyperSpace @ 0x1401406F0 (MiAllocateHyperSpace.c)
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 *     MiGetPagesToZero @ 0x14017B8BC (MiGetPagesToZero.c)
 *     MiInitializeNewUltraHugeContext @ 0x14017BE2C (MiInitializeNewUltraHugeContext.c)
 *     MmMapMdl @ 0x140256AE0 (MmMapMdl.c)
 *     MiScrubNodeLargePageList @ 0x14026C284 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x140270A34 (MiScrubPage.c)
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlFindSetBitsAndClearEx @ 0x14013A270 (RtlFindSetBitsAndClearEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiGetUltraMapping(unsigned __int64 *a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rbx
  __int64 v9; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 result; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  unsigned __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // r10
  __int64 v33; // r12
  ULONG64 SetBitsAndClear; // rax
  ULONG64 v35; // rdi
  __int64 v36; // r9
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rbx
  __int64 *v39; // rsi
  __int64 v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  unsigned __int64 v45; // r9
  unsigned __int64 i; // r8
  unsigned __int64 *v47; // rdx
  __int64 v48; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = *a1;
  v9 = MiUltraMapSizes[a2];
  if ( !*a1 )
    goto LABEL_23;
  if ( a2 == 1 )
  {
    v10 = v9 << 9;
LABEL_5:
    v11 = v10 - 1;
    v12 = a3 << 12;
    if ( (a3 << 12) + (v4 & (v10 - 1)) > v10 )
    {
      v4 = ~v11 & (v10 + v4 - 1);
      *a1 = v4;
    }
    if ( (v11 & v4) != 0 && (a4 & 2) == 0 )
    {
      *a1 = v12 + v4;
      return v4;
    }
    v14 = (((v4 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( a2 <= 1 )
    {
      v44 = 2 - a2;
      do
      {
        v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v44;
      }
      while ( v44 );
    }
    *(_QWORD *)v14 = ZeroPte;
    if ( MiPteInShadowRange(v14) )
    {
      MiWritePteShadow(v16, v15, v17);
      v15 = ZeroPte;
    }
    if ( (a4 & 2) != 0 )
    {
      if ( a2 > 1 )
      {
        v24 = (__int64 *)((v19 & (v14 >> 9)) - 0x98000000000LL);
        *v24 = v15;
        if ( MiPteInShadowRange((unsigned __int64)v24) )
          MiWritePteShadow(v26, v25, v27);
      }
    }
    else if ( a2 != 1 )
    {
      v20 = v14 + 8;
      if ( (v20 & 0xFFF) != 0 )
      {
        *(_QWORD *)v20 = MiMakeValidPte(v20, a1[2], 3087007748LL, v18);
        if ( MiPteInShadowRange(v20) )
          MiWritePteShadow(v22, v21, v23);
        result = (__int64)(v20 << 25) >> 16 << 25 >> 16;
        *a1 = v12 + result;
        return result;
      }
    }
    goto LABEL_22;
  }
  if ( a2 )
  {
    v10 = 0x200000LL;
    goto LABEL_5;
  }
LABEL_22:
  v4 -= v9;
LABEL_23:
  KeAcquireInStackQueuedSpinLock(&qword_1403CC2E8, &LockHandle);
  if ( v4 )
  {
    v28 = (_QWORD *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
    *v28 = ZeroPte;
    if ( MiPteInShadowRange((unsigned __int64)v28) )
      MiWritePteShadow(v30, v29, v31);
    _bittestandset64((signed __int64 *)qword_1403CC318, v32);
  }
  v33 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    *a1 = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, HintIndex);
      v35 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0, 2u);
      v45 = 0LL;
      for ( i = BitMapHeader.SizeOfBitMap >> 6; v45 < i; *v47 |= v48 )
      {
        v47 = &BitMapHeader.Buffer[v45];
        v48 = *((_QWORD *)qword_1403CC318 + v45++);
      }
      memset(qword_1403CC318, 0, 4 * (((unsigned __int64)qword_1403CC310 >> 5) + ((qword_1403CC310 & 0x1F) != 0)));
    }
    HintIndex = SetBitsAndClear + 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v37 = qword_1403CC2F0 + (v35 << 30);
    if ( (a4 & 1) == 0 )
      *a1 = v37 + (a3 << 12);
    if ( a2 )
    {
      v38 = ((v37 >> 27) & 0x1FFFF8) - 0x90482600000LL;
      v39 = (__int64 *)(a1 + 1);
      LOBYTE(v33) = a2 != 1;
      v40 = v33 + 1;
      do
      {
        *(_QWORD *)v38 = MiMakeValidPte(v38, *v39, 3087007748LL, v36);
        if ( MiPteInShadowRange(v38) )
          MiWritePteShadow(v42, v41, v43);
        ++v39;
        v38 = (__int64)(v38 << 25) >> 16;
        --v40;
      }
      while ( v40 );
    }
    return v37;
  }
}
