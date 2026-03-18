/*
 * XREFs of ExpAddTagForBigPages @ 0x1400D9480
 * Callers:
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     ExAllocateHeapPool @ 0x1402BCFE4 (ExAllocateHeapPool.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1400B24A0 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpResizeBigPageTable @ 0x14014A110 (ExpResizeBigPageTable.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // r12d
  unsigned __int64 v8; // r13
  int v9; // edi
  unsigned __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v15; // ett
  __int64 v16; // rdx
  int *v17; // r9
  unsigned __int64 v18; // r10
  __int64 v19; // rcx
  volatile signed __int64 v20; // rtt
  int v21; // r8d
  int v22; // r8d
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  __int64 v26; // rax
  bool v27; // cf
  __int64 v28; // rdx
  int v29; // ebx
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  _QWORD *v32; // rbx
  void *v33; // rcx
  int v34; // eax
  void *v35; // rcx
  int v36; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF
  int v39; // [rsp+68h] [rbp+10h]
  __int64 v40; // [rsp+70h] [rbp+18h]

  v40 = a3;
  v39 = a2;
  v6 = 0;
  v8 = 40543LL * (unsigned int)(a1 >> 12);
  v9 = a4 & 0x20;
  while ( 1 )
  {
    v11 = HIDWORD(v8) ^ v8;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v34 = SchedulerAssist[5];
          SchedulerAssist[5] = v34 + 1;
          if ( v34 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      _m_prefetchw(&ExpLargePoolTableLock);
      v15 = ExpLargePoolTableLock & 0x7FFFFFFF;
      if ( v15 != _InterlockedCompareExchange(
                    &ExpLargePoolTableLock,
                    (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                    ExpLargePoolTableLock & 0x7FFFFFFF) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
      }
    }
    if ( v9 )
    {
      v16 = *(_QWORD *)(qword_1403CB640 + 8248);
      v17 = (int *)(qword_1403CB640 + 8120);
      v18 = *(_QWORD *)(qword_1403CB640 + 8256);
    }
    else
    {
      v16 = PoolBigPageTable;
      v17 = &ExpPoolBigEntriesInUse;
      v18 = PoolBigPageTableSize;
    }
    if ( v16 && *v17 != v18 )
      break;
LABEL_22:
    if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) )
    {
      v29 = ExpResizeBigPageTable(a4, v28, &P);
      ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
      __writecr8(CurrentIrql);
      if ( !v29 )
      {
        ++ExpBigTableExpansionFailed;
        return 0LL;
      }
      v30 = P;
      if ( P )
      {
        do
        {
          v35 = v30;
          v30 = (_QWORD *)*v30;
          ExFreePoolWithTag(v35, 0);
        }
        while ( v30 );
        P = 0LL;
      }
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
      __writecr8(CurrentIrql);
    }
  }
  v19 = v16 + 24LL * (((_DWORD)v18 - 1) & (unsigned int)v11);
  while ( 1 )
  {
    if ( (*(_QWORD *)v19 & 1) != 0 )
    {
      v20 = *(_QWORD *)v19;
      if ( v20 == _InterlockedCompareExchange64((volatile signed __int64 *)v19, a1, *(_QWORD *)v19) )
        break;
    }
    v26 = v19 + 24;
    ++v6;
    v27 = v19 + 24 < v16 + 24 * v18;
    v19 = v16;
    if ( v27 )
      v19 = v26;
    if ( v19 == v16 + 24LL * (((_DWORD)v18 - 1) & (unsigned int)v11) )
      goto LABEL_22;
  }
  v21 = a5;
  *(_DWORD *)(v19 + 8) = v39;
  *(_BYTE *)(v19 + 12) = a6;
  v22 = (unsigned __int8)*(_DWORD *)(v19 + 12) | ((a4 & 0xFFF | (v21 << 12)) << 8);
  *(_QWORD *)(v19 + 16) = v40;
  *(_DWORD *)(v19 + 12) = v22;
  _InterlockedIncrement(v17);
  if ( v6 < 0x10 || *v17 <= (unsigned int)(v18 >> 2) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
    }
    else
    {
      _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
      _InterlockedDecrement(&ExpLargePoolTableLock);
    }
    v23 = KeGetCurrentPrcb();
    v24 = v23->SchedulerAssist;
    if ( v24 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v36 = v24[5] - 1;
        v24[5] = v36;
        if ( !v36 && !*((_BYTE *)v24 + 25) && !*((_BYTE *)v24 + 27) )
          KiPerformUnboostKick(v23);
      }
    }
    __writecr8(CurrentIrql);
  }
  else if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) == 1 )
  {
    ExpResizeBigPageTable(a4, v31, &P);
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    __writecr8(CurrentIrql);
    v32 = P;
    if ( P )
    {
      do
      {
        v33 = v32;
        v32 = (_QWORD *)*v32;
        ExFreePoolWithTag(v33, 0);
      }
      while ( v32 );
    }
  }
  else
  {
    ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
    __writecr8(CurrentIrql);
  }
  return 1LL;
}
