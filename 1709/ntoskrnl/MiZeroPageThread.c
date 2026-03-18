/*
 * XREFs of MiZeroPageThread @ 0x140135630
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiMapPagesToZero @ 0x14005C610 (MiMapPagesToZero.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400A6CA4 (KeSetIdealProcessorThreadEx.c)
 *     MiUnlinkNodeLargePage @ 0x1400C6570 (MiUnlinkNodeLargePage.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     KeQueryNodeActiveAffinity @ 0x1400FC870 (KeQueryNodeActiveAffinity.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x14011E810 (KeFindFirstSetLeftGroupAffinity.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     MiGetHugePageToZero @ 0x140134BB0 (MiGetHugePageToZero.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     MiDeleteZeroThreadContext @ 0x1401556D4 (MiDeleteZeroThreadContext.c)
 *     MiZeroBootLargePages @ 0x14015A634 (MiZeroBootLargePages.c)
 *     MiSetZeroPageThreadPriority @ 0x14015C5E0 (MiSetZeroPageThreadPriority.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPageThread(ULONG_PTR *a1)
{
  __int64 v1; // r14
  unsigned int v2; // ebx
  __int64 v3; // rsi
  void *v4; // r15
  struct _KEVENT *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rbp
  _QWORD *v8; // r14
  void *v9; // r12
  volatile signed __int32 *v10; // rdi
  KIRQL CurrentIrql; // r15
  signed __int32 v12; // edx
  bool v13; // zf
  unsigned int v14; // edi
  unsigned __int8 v15; // bl
  signed __int32 v16; // edx
  _QWORD *v17; // rsi
  __int64 v18; // rbp
  __int64 *v19; // rdi
  unsigned int v20; // r15d
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  bool v26; // cc
  __int64 v27; // rdx
  unsigned int v28; // r12d
  ULONG_PTR v29; // rdi
  unsigned __int8 v30; // r13
  unsigned int v31; // ebp
  char v32; // r8
  __int64 *v33; // rax
  unsigned int i; // ecx
  struct _KTHREAD *v35; // rdi
  int v36; // ecx
  unsigned int v37; // r8d
  unsigned int v38; // edx
  __int64 v39; // rax
  unsigned __int8 v40; // al
  _QWORD *v41; // rdx
  unsigned int v42; // r10d
  _QWORD *v43; // r9
  int FirstSetLeftGroupAffinity; // eax
  __int64 v45; // rcx
  signed __int32 v46; // eax
  _QWORD *v47; // rdi
  signed __int32 v48; // eax
  int HugePageToZero; // eax
  _QWORD *v50; // rdx
  bool v51; // r8
  _QWORD *v52; // rax
  int v53; // [rsp+40h] [rbp-128h]
  _QWORD *P; // [rsp+48h] [rbp-120h]
  unsigned int v55; // [rsp+50h] [rbp-118h]
  __int64 *v56; // [rsp+58h] [rbp-110h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-108h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-100h] BYREF
  struct _KEVENT *v59; // [rsp+80h] [rbp-E8h]
  void *v60; // [rsp+88h] [rbp-E0h]
  __int64 v61; // [rsp+90h] [rbp-D8h]
  PVOID Object[2]; // [rsp+98h] [rbp-D0h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+A8h] [rbp-C0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+C0h] [rbp-A8h] BYREF
  void *retaddr; // [rsp+168h] [rbp+0h]
  int v67; // [rsp+178h] [rbp+10h] BYREF
  __int64 v68; // [rsp+180h] [rbp+18h]
  int v69; // [rsp+188h] [rbp+20h] BYREF

  v1 = (__int64)a1;
  if ( a1 == &MiSystemPartition )
    MiZeroBootLargePages();
  P = *(_QWORD **)(v1 + 5280);
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v3 = 0LL;
  v55 = MiSetZeroPageThreadPriority(v1, CurrentThread, 0LL);
  v4 = (void *)(v1 + 104);
  v53 = -1;
  v5 = (struct _KEVENT *)(v1 + 5184);
  v60 = (void *)(v1 + 104);
  v59 = (struct _KEVENT *)(v1 + 5184);
LABEL_4:
  while ( 1 )
  {
    v6 = *(_QWORD *)(v1 + 16);
    Object[0] = v4;
    Object[1] = v5;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v3 )
        {
          v7 = *(_QWORD *)(v3 - 16);
          v8 = 0LL;
          v9 = 0LL;
          v10 = (volatile signed __int32 *)(v7 + 192);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7 + 192, CurrentIrql);
          }
          else
          {
            v67 = 0;
            if ( _interlockedbittestandset(v10, 0x1Fu) )
              v67 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v7 + 192), CurrentIrql);
            v12 = *v10;
            while ( (v12 & 0xBFFFFFFF) != 0x80000000 )
            {
              if ( (v12 & 0x40000000) == 0 )
              {
                v46 = _InterlockedCompareExchange(v10, v12 | 0x40000000, v12);
                v13 = v12 == v46;
                v12 = v46;
                if ( !v13 )
                  continue;
              }
              KeYieldProcessorEx(&v67);
              v12 = *v10;
            }
          }
          v13 = (*(_QWORD *)(v3 - 8))-- == 1LL;
          if ( v13 )
            v9 = (void *)(v3 - 16);
          if ( (ULONG_PTR *)v7 != &MiSystemPartition )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 192));
            __writecr8(CurrentIrql);
            CurrentIrql = ExAcquireSpinLockExclusive(&dword_14038A180);
          }
          if ( !--qword_14038A0E8 )
          {
            v8 = (_QWORD *)qword_14038A118;
            qword_14038A118 = 0LL;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14038A180, retaddr);
          else
            dword_14038A180 = 0;
          __writecr8(CurrentIrql);
          if ( v8 )
          {
            do
            {
              v47 = (_QWORD *)*v8;
              KeSignalGate((__int64)(v8 + 1), 1u);
              v8 = v47;
            }
            while ( v47 );
          }
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          v1 = (__int64)a1;
          v5 = v59;
          v3 = 0LL;
          v4 = v60;
        }
        if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray) )
          goto LABEL_106;
        if ( *(_QWORD *)(v1 + 2176) )
          break;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v1 + 4800);
        v40 = KeGetCurrentIrql();
        __writecr8(2uLL);
        LockHandle.OldIrql = v40;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, v1 + 4800);
        }
        else
        {
          v41 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v1 + 4800), (__int64)&LockHandle);
          if ( v41 )
            KxWaitForLockOwnerShip((__int64)&LockHandle, v41);
        }
        if ( !*(_QWORD *)(v1 + 2176) )
        {
          *(_BYTE *)(v1 + 5208) = 0;
          KeResetEvent(v5);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
LABEL_24:
      if ( !dword_140389290 && (unsigned int)MiSufficientAvailablePages(v1, 0xA0uLL) )
        break;
      KeWaitForSingleObject(v4, WrFreePage, 0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    }
    if ( (unsigned __int16)KeNumberNodes <= 1u )
      goto LABEL_27;
    v37 = v2 >> byte_140388501;
    v38 = v2 >> byte_140388501;
    while ( 1 )
    {
      v39 = 8256LL * v38;
      if ( *(_QWORD *)(v39 + v6 + 8040) )
        break;
      v42 = 0;
      v43 = (_QWORD *)(v39 + v6 + 8);
      do
      {
        if ( *v43 )
          break;
        ++v42;
        v43 += 2;
      }
      while ( v42 < 3 );
      if ( v42 != 3 )
        break;
      v38 = (v38 + 1) % (unsigned __int16)KeNumberNodes;
      if ( v38 == v37 )
        goto LABEL_24;
    }
    if ( v38 == v37 )
LABEL_27:
      v14 = v2;
    else
      v14 = *(_DWORD *)(8256LL * v38 + v6 + 8088);
    v15 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14038A180, v15);
    }
    else
    {
      v69 = 0;
      if ( _interlockedbittestandset(&dword_14038A180, 0x1Fu) )
        v69 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14038A180, v15);
      v16 = dword_14038A180;
      while ( (v16 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v16 & 0x40000000) == 0 )
        {
          v48 = _InterlockedCompareExchange(&dword_14038A180, v16 | 0x40000000, v16);
          v13 = v16 == v48;
          v16 = v48;
          if ( !v13 )
            continue;
        }
        KeYieldProcessorEx(&v69);
        v16 = dword_14038A180;
      }
    }
    if ( (ULONG_PTR *)v1 == &MiSystemPartition )
    {
      v17 = MmPhysicalMemoryBlock;
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v1 + 192));
      v17 = *(_QWORD **)(v1 + 96);
    }
    v68 = (__int64)v17;
    if ( v17 )
    {
      ++*(v17 - 1);
      ++qword_14038A0E8;
    }
    if ( (ULONG_PTR *)v1 != &MiSystemPartition )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 192));
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14038A180, retaddr);
    else
      dword_14038A180 = 0;
    __writecr8(v15);
    if ( !v17 )
      v68 = MiReferencePageRuns((__int64)&MiSystemPartition, 0);
    v2 = v14;
    if ( v14 == -1 )
      break;
    v18 = (__int64)P;
    v19 = MiLargePageSizes;
    v56 = MiLargePageSizes;
    v20 = 0;
    while ( 2 )
    {
      if ( !v20 && *(_BYTE *)(v18 + 210) )
      {
        HugePageToZero = MiGetHugePageToZero(v1, v18, v2);
        goto LABEL_54;
      }
      v21 = v2 >> byte_140388501;
      *(_QWORD *)(v18 + 32) = 0LL;
      if ( v20 < 3 )
      {
        v22 = MiUnlinkNodeLargePage(v1, v20, v21, 4, 1, 0, 0, v18);
        v23 = *v19;
        v24 = v22;
        goto LABEL_47;
      }
      v27 = *(_QWORD *)(v1 + 2056);
      v28 = v2;
      v61 = v27;
      while ( 1 )
      {
        v29 = *(_QWORD *)(v27 + 40LL * v2 + 16);
        if ( v29 != 0xFFFFFFFFFLL )
          break;
        v2 = v2 & ~dword_1403884F8 | dword_1403884F8 & (v2 + 1);
LABEL_61:
        if ( v2 == v28 )
        {
          v18 = (__int64)P;
LABEL_63:
          v24 = 0LL;
          goto LABEL_77;
        }
      }
      v24 = 48 * v29 - 0x58000000000LL;
      v30 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v31 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v31);
        }
        while ( *(__int64 *)(v24 + 24) < 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
      }
      if ( v29 > qword_1403885E0
        || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v29 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0
        || (v32 = *(_BYTE *)(v24 + 34), (v32 & 7) != 1) )
      {
LABEL_105:
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v30);
        v27 = v61;
        goto LABEL_61;
      }
      v33 = MiLargePageContainingFrames;
      for ( i = 0; i < 3; ++i )
      {
        if ( (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) == *v33 )
          goto LABEL_105;
        ++v33;
      }
      if ( *(_WORD *)(v24 + 32) )
        KeBugCheckEx(0x4Eu, 0x8DuLL, v29, *(unsigned int *)(v24 + 32), *(_QWORD *)(v24 + 8));
      v18 = (__int64)P;
      if ( (v32 & 8) != 0 )
      {
        v36 = 0;
        goto LABEL_76;
      }
      P[3] = v24;
      v35 = KeGetCurrentThread();
      P[7] = v35;
      *(_BYTE *)(v24 + 34) |= 8u;
      *(_QWORD *)(v24 + 16) = P;
      v13 = *((_BYTE *)P + 69) == 1;
      P[4] = 0LL;
      *((_BYTE *)P + 68) = 0;
      if ( !v13 )
        goto LABEL_75;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140388A98);
      v50 = (_QWORD *)qword_140388AA0;
      v51 = 0;
      if ( !qword_140388AA0 )
        goto LABEL_133;
      while ( 2 )
      {
        if ( (unsigned __int64)v35 < v50[7] )
        {
          v52 = (_QWORD *)*v50;
          if ( !*v50 )
          {
            v51 = 0;
            goto LABEL_133;
          }
          goto LABEL_136;
        }
        v52 = (_QWORD *)v50[1];
        if ( v52 )
        {
LABEL_136:
          v50 = v52;
          continue;
        }
        break;
      }
      v51 = 1;
LABEL_133:
      RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140388AA0, (unsigned __int64)v50, v51, (unsigned __int64)P);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388A98);
LABEL_75:
      v36 = 1;
LABEL_76:
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v30);
      if ( !v36 )
        goto LABEL_63;
LABEL_77:
      v19 = v56;
      v23 = 1LL;
      v1 = (__int64)a1;
LABEL_47:
      if ( !v24 )
      {
LABEL_48:
        ++v19;
        ++v20;
        v56 = v19;
        if ( v20 <= 3 )
          continue;
        v3 = v68;
        v5 = (struct _KEVENT *)(v1 + 5184);
        v4 = (void *)(v1 + 104);
        goto LABEL_4;
      }
      break;
    }
    v25 = (((unsigned __int64)MiGetUltraMapping((unsigned __int64 *)(v18 + 32LL * v20 + 80), v20, v23, 0) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000000LL;
    if ( v20 <= 1 )
    {
      v45 = 2 - v20;
      do
      {
        v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v45;
      }
      while ( v45 );
    }
    HugePageToZero = MiMapPagesToZero(v18, v25, v24, v20);
LABEL_54:
    if ( !HugePageToZero )
      goto LABEL_48;
    v3 = v68;
    v5 = (struct _KEVENT *)(v1 + 5184);
    v26 = v20 <= 3;
    v4 = (void *)(v1 + 104);
    if ( v26 )
    {
      if ( v2 >> byte_140388501 != v53 )
      {
        v53 = v2 >> byte_140388501;
        KeQueryNodeActiveAffinity(v2 >> byte_140388501, &Affinity, 0LL);
        if ( Affinity.Mask )
        {
          FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity((__int64)&Affinity);
          KeSetIdealProcessorThreadEx((__int64)CurrentThread, FirstSetLeftGroupAffinity, 0LL);
        }
      }
      MiZeroPage(v18, v1);
      v5 = (struct _KEVENT *)(v1 + 5184);
      v4 = (void *)(v1 + 104);
    }
  }
LABEL_106:
  MiSetZeroPageThreadPriority(v1, CurrentThread, v55);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x400u;
  MiDeleteZeroThreadContext(P);
  ExFreePoolWithTag(P, 0);
  *(_QWORD *)(v1 + 5280) = 0LL;
}
