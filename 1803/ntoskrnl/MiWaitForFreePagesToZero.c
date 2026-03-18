/*
 * XREFs of MiWaitForFreePagesToZero @ 0x1400FEE90
 * Callers:
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     MiReferencePageRuns @ 0x1400C4678 (MiReferencePageRuns.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiWaitForFreePagesToZero(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r13
  void *v4; // r14
  unsigned int v5; // ebx
  struct _KEVENT *v6; // rdi
  unsigned int v9; // r15d
  __int64 v10; // rax
  ULONG_PTR *v11; // r11
  __int64 v12; // r14
  _QWORD *v13; // rbx
  _QWORD *v14; // r15
  void *v15; // r8
  volatile signed __int32 *v16; // rdi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v20; // edx
  bool v21; // zf
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  unsigned __int8 v24; // r14
  struct _KPRCB *v25; // r10
  _DWORD *v26; // rcx
  signed __int32 v27; // edx
  _QWORD *v28; // rbx
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  _QWORD *v34; // rcx
  volatile __int64 *v35; // r10
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  _QWORD *v39; // rdx
  __int64 v40; // rax
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  int v43; // eax
  signed __int32 v44; // eax
  KIRQL v45; // al
  int v46; // eax
  _QWORD *v47; // rbx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  signed __int32 v51; // eax
  int v52; // eax
  void *v53; // [rsp+40h] [rbp-89h]
  __int64 v54; // [rsp+48h] [rbp-81h] BYREF
  volatile signed __int64 *v55; // [rsp+50h] [rbp-79h]
  unsigned __int8 v56; // [rsp+58h] [rbp-71h]
  __int64 v57; // [rsp+60h] [rbp-69h]
  PVOID Object[3]; // [rsp+68h] [rbp-61h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-49h] BYREF
  void *retaddr; // [rsp+128h] [rbp+5Fh]
  int v61; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v62; // [rsp+138h] [rbp+6Fh]
  unsigned int v63; // [rsp+140h] [rbp+77h]
  int v64; // [rsp+148h] [rbp+7Fh] BYREF

  v63 = a3;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = (void *)(a1 + 104);
  v5 = a3;
  Object[0] = (PVOID)(a1 + 104);
  v6 = (struct _KEVENT *)(a1 + 6272);
  v62 = a3;
  Object[1] = (PVOID)(a1 + 6272);
  v57 = v3;
  v9 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *a2;
      v11 = &MiSystemPartition;
      if ( !*a2 )
        goto LABEL_21;
      v12 = *(_QWORD *)(v10 - 16);
      v13 = (_QWORD *)(v10 - 16);
      v14 = 0LL;
      v53 = 0LL;
      v15 = 0LL;
      v16 = (volatile signed __int32 *)(v12 + 192);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v12 + 192, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v61 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v43 = SchedulerAssist[5];
            SchedulerAssist[5] = v43 + 1;
            if ( v43 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            {
              KiPerformUnboostKick(CurrentPrcb);
              v15 = 0LL;
            }
          }
        }
        if ( _interlockedbittestandset(v16, 0x1Fu) )
        {
          KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
          v61 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v12 + 192), CurrentIrql);
          v11 = &MiSystemPartition;
          v15 = 0LL;
        }
        v20 = *v16;
        if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
          goto LABEL_8;
        do
        {
          if ( (v20 & 0x40000000) == 0 )
          {
            v44 = _InterlockedCompareExchange(v16, v20 | 0x40000000, v20);
            v21 = v20 == v44;
            v20 = v44;
            if ( !v21 )
              continue;
          }
          KeYieldProcessorEx(&v61);
          v20 = *v16;
        }
        while ( (v20 & 0xBFFFFFFF) != 0x80000000 );
      }
      v11 = &MiSystemPartition;
      v15 = 0LL;
LABEL_8:
      v21 = v13[1]-- == 1LL;
      if ( v21 )
      {
        v15 = v13;
        v53 = v13;
      }
      if ( (ULONG_PTR *)v12 != v11 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 192));
        __writecr8(CurrentIrql);
        v45 = ExAcquireSpinLockExclusive(&dword_1403CE000);
        v15 = v53;
        CurrentIrql = v45;
      }
      if ( !--qword_1403CDF68 )
      {
        v14 = (_QWORD *)qword_1403CDF98;
        qword_1403CDF98 = 0LL;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1403CE000, retaddr);
        v15 = v53;
      }
      else
      {
        dword_1403CE000 = 0;
      }
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      if ( v23 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v46 = v23[5] - 1;
          v23[5] = v46;
          if ( !v46 )
          {
            if ( !*((_BYTE *)v23 + 25) && !*((_BYTE *)v23 + 27) )
              KiPerformUnboostKick(v22);
            v15 = v53;
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v14 )
      {
        do
        {
          v47 = (_QWORD *)*v14;
          KeSignalGate((__int64)(v14 + 1), 1);
          v14 = v47;
        }
        while ( v47 );
        v15 = v53;
      }
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      v9 = v62;
      v6 = (struct _KEVENT *)(a1 + 6272);
      v5 = v63;
      v4 = (void *)(a1 + 104);
      v3 = v57;
      *a2 = 0LL;
LABEL_21:
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray) )
        return 0xFFFFFFFFLL;
      if ( *(_QWORD *)(a1 + 2240) )
        break;
      v35 = (volatile __int64 *)(a1 + 4864);
      v55 = (volatile signed __int64 *)(a1 + 4864);
      v54 = 0LL;
      v36 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v56 = v36;
      v37 = KeGetCurrentPrcb();
      v38 = v37->SchedulerAssist;
      if ( v38 )
      {
        if ( v37->NestingLevel <= 1u )
        {
          v48 = v38[5];
          v38[5] = v48 + 1;
          if ( v48 == -1 && !*((_BYTE *)v38 + 25) && !*((_BYTE *)v38 + 27) )
            KiPerformUnboostKick(v37);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v54, v35);
      }
      else
      {
        v39 = (_QWORD *)_InterlockedExchange64(v35, (__int64)&v54);
        if ( v39 )
          KxWaitForLockOwnerShip((__int64)&v54, v39);
      }
      if ( !*(_QWORD *)(a1 + 2240) )
      {
        *(_BYTE *)(a1 + 6296) = 0;
        KeResetEvent(v6);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v54, retaddr);
        goto LABEL_60;
      }
      _m_prefetchw(&v54);
      v40 = v54;
      if ( v54 )
        goto LABEL_63;
      if ( (__int64 *)_InterlockedCompareExchange64(v55, 0LL, (signed __int64)&v54) != &v54 )
      {
        v40 = KxWaitForLockChainValid(&v54);
LABEL_63:
        v54 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v40 + 8), 1uLL);
      }
LABEL_60:
      v41 = KeGetCurrentPrcb();
      v42 = v41->SchedulerAssist;
      if ( v42 )
      {
        if ( v41->NestingLevel <= 1u )
        {
          v49 = v42[5] - 1;
          v42[5] = v49;
          if ( !v49 && !*((_BYTE *)v42 + 25) && !*((_BYTE *)v42 + 27) )
            KiPerformUnboostKick(v41);
        }
      }
      __writecr8(v56);
    }
LABEL_23:
    if ( !dword_1403CC510 && (unsigned int)MiSufficientAvailablePages(a1, 160LL) )
      break;
    KeWaitForSingleObject(v4, WrFreePage, 0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v9 = v5;
    while ( 1 )
    {
      v32 = 1984LL * v9;
      if ( *(_QWORD *)(v32 + v3 + 1768) )
        break;
      v33 = 0;
      v34 = (_QWORD *)(v3 + v32 + 8);
      do
      {
        if ( *v34 )
          break;
        ++v33;
        v34 += 34;
      }
      while ( v33 < 3 );
      if ( v33 != 3 )
        break;
      v9 = (v9 + 1) % (unsigned __int16)KeNumberNodes;
      v62 = v9;
      if ( v9 == v5 )
        goto LABEL_23;
    }
  }
  v24 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1403CE000, v24);
  }
  else
  {
    v25 = KeGetCurrentPrcb();
    v64 = 0;
    v26 = v25->SchedulerAssist;
    if ( v26 )
    {
      if ( v25->NestingLevel <= 1u )
      {
        v50 = v26[5];
        v26[5] = v50 + 1;
        if ( v50 == -1 && !*((_BYTE *)v26 + 25) && !*((_BYTE *)v26 + 27) )
          KiPerformUnboostKick(v25);
      }
    }
    if ( _interlockedbittestandset(&dword_1403CE000, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount((__int64)v25, 0);
      v64 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_1403CE000, v24);
    }
    v27 = dword_1403CE000;
    while ( (v27 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v27 & 0x40000000) == 0 )
      {
        v51 = _InterlockedCompareExchange(&dword_1403CE000, v27 | 0x40000000, v27);
        v21 = v27 == v51;
        v27 = v51;
        if ( !v21 )
          continue;
      }
      KeYieldProcessorEx(&v64);
      v27 = dword_1403CE000;
    }
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    v28 = MmPhysicalMemoryBlock;
  }
  else
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
    v28 = *(_QWORD **)(a1 + 96);
  }
  if ( v28 )
  {
    ++*(v28 - 1);
    ++qword_1403CDF68;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1403CE000, retaddr);
  else
    dword_1403CE000 = 0;
  v29 = KeGetCurrentPrcb();
  v30 = v29->SchedulerAssist;
  if ( v30 )
  {
    if ( v29->NestingLevel <= 1u )
    {
      v52 = v30[5] - 1;
      v30[5] = v52;
      if ( !v52 && !*((_BYTE *)v30 + 25) && !*((_BYTE *)v30 + 27) )
        KiPerformUnboostKick(v29);
    }
  }
  __writecr8(v24);
  if ( !v28 )
    v28 = (_QWORD *)MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  *a2 = (__int64)v28;
  return v9;
}
