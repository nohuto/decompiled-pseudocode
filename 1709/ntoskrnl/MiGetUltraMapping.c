/*
 * XREFs of MiGetUltraMapping @ 0x1400CD380
 * Callers:
 *     MiCombinePte @ 0x14009F2D0 (MiCombinePte.c)
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     MiDeleteUltraMapContext @ 0x1400CF098 (MiDeleteUltraMapContext.c)
 *     MiZeroLargePage @ 0x1400CFBFC (MiZeroLargePage.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiGetPagesToZero @ 0x1401352C8 (MiGetPagesToZero.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     MiInitializeNewUltraHugeContext @ 0x140153B68 (MiInitializeNewUltraHugeContext.c)
 *     MmMapMdl @ 0x14021A540 (MmMapMdl.c)
 *     MiScrubNodeLargePageList @ 0x140233A64 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x140238F30 (MiScrubPage.c)
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlFindSetBitsAndClearEx @ 0x1400CF180 (RtlFindSetBitsAndClearEx.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiGetUltraMapping(unsigned __int64 *a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // rbx
  char v7; // di
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r14
  __int64 result; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // r11
  __int64 v17; // rcx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r10
  _QWORD *v20; // rsi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rax
  ULONG64 i; // rbp
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  unsigned __int64 j; // r10
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // rdi
  __int64 *v29; // rsi
  __int64 v30; // rbx
  unsigned __int64 ValidPte; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = *a1;
  v6 = 0LL;
  v7 = a4;
  v10 = MiUltraMapSizes[a2];
  if ( !*a1 )
    goto LABEL_24;
  if ( !a2 )
  {
LABEL_23:
    v4 -= v10;
LABEL_24:
    KeAcquireInStackQueuedSpinLock(&qword_140389038, &LockHandle);
    if ( v4 )
    {
      v19 = (v4 - qword_140389040) >> 30;
      v20 = (_QWORD *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
      *v20 = 0LL;
      if ( (unsigned __int64)v20 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v20, 0LL);
      _bittestandset64((signed __int64 *)qword_140389068, v19);
    }
    if ( (v7 & 2) != 0 )
    {
      *a1 = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return 0LL;
    }
    else
    {
      for ( i = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, HintIndex);
            i == -1LL;
            i = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, HintIndex) )
      {
        KeFlushTb(0LL, 2LL, v24);
        v25 = 0LL;
        for ( j = BitMapHeader.SizeOfBitMap >> 6; v25 < j; ++v25 )
          BitMapHeader.Buffer[v25] |= *((_QWORD *)qword_140389068 + v25);
        memset(qword_140389068, 0, 4 * (((unsigned __int64)qword_140389060 >> 5) + ((qword_140389060 & 0x1F) != 0)));
      }
      HintIndex = i + 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v27 = qword_140389040 + (i << 30);
      if ( (v7 & 1) == 0 )
        *a1 = v27 + (a3 << 12);
      if ( a2 )
      {
        v28 = ((v27 >> 27) & 0x1FFFF8) - 0x90482600000LL;
        v29 = (__int64 *)(a1 + 1);
        LOBYTE(v6) = a2 != 1;
        v30 = v6 + 1;
        do
        {
          ValidPte = MiMakeValidPte(v28, *v29, -1207959548);
          *(_QWORD *)v28 = ValidPte;
          if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v28, ValidPte);
          ++v29;
          v28 = (__int64)(v28 << 25) >> 16;
          --v30;
        }
        while ( v30 );
      }
      return v27;
    }
  }
  if ( a2 == 1 )
    v11 = v10 << 9;
  else
    v11 = 0x200000LL;
  v12 = v11 - 1;
  v13 = a3 << 12;
  if ( (a3 << 12) + (v4 & (v11 - 1)) > v11 )
  {
    v4 = ~v12 & (v11 + v4 - 1);
    *a1 = v4;
  }
  if ( (v12 & v4) != 0 && (a4 & 2) == 0 )
  {
    *a1 = v13 + v4;
    return v4;
  }
  v15 = (((v4 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v16 = 0x7FFFFFFFF8LL;
  if ( a2 <= 1 )
  {
    v17 = 2 - a2;
    do
    {
      v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v17;
    }
    while ( v17 );
  }
  *(_QWORD *)v15 = 0LL;
  if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v15, 0LL);
  if ( (a4 & 2) != 0 )
  {
    if ( a2 > 1 )
    {
      v18 = (_QWORD *)((v16 & (v15 >> 9)) - 0x98000000000LL);
      *v18 = 0LL;
      if ( (unsigned __int64)v18 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v18 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v18, 0LL);
    }
    goto LABEL_22;
  }
  if ( a2 == 1 || (v21 = v15 + 8, (v21 & 0xFFF) == 0) )
  {
LABEL_22:
    v7 = a4;
    goto LABEL_23;
  }
  v22 = MiMakeValidPte(v21, a1[2], -1207959548);
  *(_QWORD *)v21 = v22;
  if ( v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v21, v22);
  result = (__int64)(v21 << 25) >> 16 << 25 >> 16;
  *a1 = v13 + result;
  return result;
}
