/*
 * XREFs of KiDetachProcess @ 0x14000A340
 * Callers:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     KeUnstackDetachProcess @ 0x1400B64F0 (KeUnstackDetachProcess.c)
 *     KeDetachProcess @ 0x1400CE890 (KeDetachProcess.c)
 * Callees:
 *     KiMoveApcState @ 0x140008620 (KiMoveApcState.c)
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSetAddressPolicy @ 0x1400FDE10 (KiSetAddressPolicy.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14022E4B0 (HvlSwitchVirtualAddressSpace.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KiDetachProcess(__int64 *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v3; // r13d
  volatile signed __int32 *p_Lock; // r15
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  $005F0E83B22994B61E86C72E0CE43C71 *v9; // rdi
  $5F1408DF39311D54C4C08723EECFE20B *v10; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v12; // rdx
  _LIST_ENTRY *v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  unsigned __int64 v16; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 v18; // r14
  __int64 v19; // rbp
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v21; // rax
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v24; // rcx
  char v25; // si
  unsigned __int8 v26; // bp
  unsigned __int32 v27; // eax
  unsigned __int32 v28; // ett
  signed __int64 *v29; // rdx
  signed __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  struct _KPRCB *v34; // rdi
  int v35; // eax
  unsigned __int64 v36; // rax
  int v37; // [rsp+20h] [rbp-38h] BYREF
  int v38; // [rsp+24h] [rbp-34h] BYREF
  int v39; // [rsp+28h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  v39 = a2;
  p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v37 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v32 = SchedulerAssist[5];
      SchedulerAssist[5] = v32 + 1;
      if ( v32 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v37);
    while ( CurrentThread->ThreadLock );
    LOBYTE(v31) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, v31);
  }
  if ( CurrentThread->ApcState.KernelApcPending )
  {
    do
    {
      if ( CurrentThread->SpecialApcDisable )
        break;
      if ( CurrentIrql )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      __writecr8(0LL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v34 = KeGetCurrentPrcb();
      v38 = 0;
      while ( 1 )
      {
        LOBYTE(v33) = 1;
        KiSetVpThreadSpinLockCount(v34, v33);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v34, 0LL);
        do
          KeYieldProcessorEx(&v38);
        while ( CurrentThread->ThreadLock );
      }
    }
    while ( CurrentThread->ApcState.KernelApcPending );
    v3 = v39;
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v9 = &CurrentThread->152, ($005F0E83B22994B61E86C72E0CE43C71 *)v9->ApcState.ApcListHead[0].Flink != v9)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v10 = &CurrentThread->600;
  if ( a1 == (__int64 *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPending = CurrentThread->SavedApcState.UserApcPending;
    Flink = v10->SavedApcState.ApcListHead[0].Flink;
    if ( ($5F1408DF39311D54C4C08723EECFE20B *)v10->SavedApcState.ApcListHead[0].Flink == v10 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v9->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v9;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v9->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v9;
      Blink->Flink = (struct _LIST_ENTRY *)v9;
    }
    v12 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
    v13 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v12 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v13->Flink = v13;
      CurrentThread->ApcState.UserApcPending = 0;
    }
    else
    {
      v24 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v13->Flink = (struct _LIST_ENTRY *)v12;
      CurrentThread->ApcState.ApcListHead[1].Blink = v24;
      v12->Header.WaitListHead.Flink = v13;
      v24->Flink = v13;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    KiMoveApcState(a1, (__int64)&CurrentThread->152);
  }
  CurrentThread->ThreadLock = 0LL;
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v35 = v15[5] - 1;
      v15[5] = v35;
      if ( !v35 && !*((_BYTE *)v15 + 25) && !*((_BYTE *)v15 + 27) )
        KiPerformUnboostKick(v14);
    }
  }
  v16 = (unsigned __int64)KeGetCurrentPrcb();
  Process = CurrentThread->ApcState.Process;
  v18 = *(unsigned __int8 *)(v16 + 209);
  v19 = 8LL * *(unsigned __int8 *)(v16 + 208) + 280;
  _interlockedbittestandset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v19), v18);
  DirectoryTableBase = Process->DirectoryTableBase;
  if ( KiKvaShadow )
  {
    v21 = Process->DirectoryTableBase;
    if ( (DirectoryTableBase & 2) != 0 )
      v21 = DirectoryTableBase | 0x8000000000000000uLL;
    __writegsqword(0x7000u, v21);
    KiSetAddressPolicy(Process->AddressPolicy);
  }
  if ( (HvlEnlightenments & 1) != 0 )
    HvlSwitchVirtualAddressSpace(DirectoryTableBase);
  else
    __writecr3(DirectoryTableBase);
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v16 = __readcr4();
    if ( (v16 & 0x20080) != 0 )
    {
      __writecr4(v16 ^ 0x80);
      __writecr4(v16);
    }
    else
    {
      v36 = __readcr3();
      __writecr3(v36);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)p_Lock + v19), v18);
  CurrentThread->MiscFlags &= ~0x800u;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( !v3 )
  {
    result = _InterlockedExchangeAdd(p_Lock + 143, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v25 = 0;
      v26 = KeGetCurrentIrql();
      __writecr8(2uLL);
      KiAcquireKobjectLockSafe(p_Lock);
      v27 = *((_DWORD *)p_Lock + 143);
      if ( (v27 & 7) == 0 )
      {
        v16 = (unsigned __int64)(p_Lock + 12);
        if ( *(_QWORD *)v16 != v16 && v27 < 8 )
        {
          while ( 1 )
          {
            v16 = v27 & 0xFFFFFFF8 | 3;
            v28 = v27;
            v27 = _InterlockedCompareExchange(p_Lock + 143, v16, v27);
            if ( v28 == v27 )
              break;
            if ( v27 >= 8 )
              goto LABEL_37;
          }
          v25 = 1;
        }
      }
LABEL_37:
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      if ( v25 )
      {
        v29 = (signed __int64 *)(p_Lock + 66);
        _m_prefetchw(&KiProcessOutSwapListHead);
        v30 = KiProcessOutSwapListHead;
        do
        {
          *v29 = v30;
          v16 = v30;
          v30 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v29, v30);
        }
        while ( v30 != v16 );
        if ( !v30 )
          KeSetEvent(&KiSwapEvent, 10, 0);
      }
      result = v26;
      __writecr8(v26);
    }
  }
  if ( ($005F0E83B22994B61E86C72E0CE43C71 *)v9->ApcState.ApcListHead[0].Flink != v9 )
  {
    LOBYTE(v16) = 1;
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(v16);
  }
  return result;
}
