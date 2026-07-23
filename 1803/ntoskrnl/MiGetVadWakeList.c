/*
 * XREFs of MiGetVadWakeList @ 0x1400FD750
 * Callers:
 *     MiFreePlaceholderStorage @ 0x140584AB8 (MiFreePlaceholderStorage.c)
 *     MiRemoveVadCharges @ 0x14059D690 (MiRemoveVadCharges.c)
 *     MiFreeRotateView @ 0x14074D138 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x14074D260 (MiFreeVadEventBitmap.c)
 *     MiFreeLargePageView @ 0x14075595C (MiFreeLargePageView.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1400D2920 (MiDeleteDeferredCloneDescriptors.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiGetVadWakeList(__int64 a1, __int64 a2)
{
  __int64 **v2; // r15
  __int64 *v3; // r12
  LONG *v4; // r14
  int v5; // ebx
  _KPROCESS *Process; // rbp
  char Flink; // al
  __int64 v8; // rbp
  LONG *v9; // rdi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v12; // ebx
  signed __int32 v13; // eax
  __int64 *v14; // rcx
  _SLIST_ENTRY *v15; // rsi
  int v16; // edi
  _KPROCESS *v17; // rcx
  struct _KPRCB *v18; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 *v21; // rdx
  signed __int32 v22; // ett
  int v23; // eax
  _SLIST_ENTRY *Next; // rbx
  __int64 v25; // r8
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v27; // [rsp+60h] [rbp+8h]
  int v28; // [rsp+68h] [rbp+10h]

  v28 = a2;
  v2 = (__int64 **)(a1 + 56);
  v3 = 0LL;
  v4 = &dword_1403CCD40;
  v5 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = (char)Process[2].Header.WaitListHead.Flink;
  v8 = (__int64)&Process[1].IdealNode[12];
  if ( (Flink & 7) == 2 )
    v9 = &dword_1403CCD40;
  else
    v9 = (LONG *)(v8 + 192);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    LOBYTE(a2) = 1;
    v12 = 0;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( _interlockedbittestandset(v9, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      v12 = ExpWaitForSpinLockExclusiveAndAcquire(v9, CurrentIrql);
    }
    v13 = *v9;
    while ( (v13 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v13 & 0x40000000) == 0 )
      {
        v22 = v13;
        v13 = _InterlockedCompareExchange(v9, v13 | 0x40000000, v13);
        if ( v22 != v13 )
          continue;
      }
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
      v13 = *v9;
    }
    v5 = v28;
  }
  v9[1] = 0;
  v14 = *v2;
  if ( *v2 )
  {
    do
    {
      v21 = (__int64 *)*v14;
      if ( (v5 & (_DWORD)v14[8]) != 0 )
      {
        *v14 = (__int64)v3;
        v3 = v14;
        *v2 = v21;
      }
      else
      {
        v2 = (__int64 **)v14;
      }
      v14 = v21;
    }
    while ( v21 );
  }
  v15 = 0LL;
  v27 = *(_DWORD *)(v8 + 184);
  v16 = 0;
  if ( (v27 & 7) != 2 )
    v4 = (LONG *)(v8 + 192);
  if ( (v27 & 7) == 0 )
  {
    if ( *(_QWORD *)(v8 + 16) )
    {
      v17 = KeGetCurrentThread()->ApcState.Process;
      if ( *(_WORD *)(*(_QWORD *)&v17[1].IdealGlobalNode + 336LL) )
        v15 = MiDeleteDeferredCloneDescriptors((__int64)v17);
    }
  }
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
    v16 = 1;
  MiCheckProcessShadow(v8, 2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  else
    *v4 = 0;
  v18 = KeGetCurrentPrcb();
  SchedulerAssist = v18->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v18->NestingLevel <= 1u )
    {
      v23 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v23;
      if ( !v23 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(v18);
    }
  }
  __writecr8(CurrentIrql);
  if ( v15 )
  {
    do
    {
      Next = v15->Next;
      ExFreePoolWithTag(v15, 0);
      v15 = Next;
    }
    while ( Next );
  }
  if ( !v16 && ((v27 & 0x8000000) != 0 || (v27 & 0x4000000) != 0 || (v27 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(v8);
    MiUnlockWorkingSetShared(v8, CurrentIrql, v25);
  }
  return v3;
}
