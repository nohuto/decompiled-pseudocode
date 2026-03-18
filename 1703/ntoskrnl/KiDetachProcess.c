/*
 * XREFs of KiDetachProcess @ 0x1400B1E40
 * Callers:
 *     KeDetachProcess @ 0x140038E40 (KeDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400B0360 (KeUnstackDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiMoveApcState @ 0x1400B1D50 (KiMoveApcState.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiSetAddressPolicy @ 0x14017BD00 (KiSetAddressPolicy.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1401EB8F0 (HvlSwitchVirtualAddressSpace.c)
 */

__int64 __fastcall KiDetachProcess(__int64 *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *p_Lock; // r15
  unsigned __int8 CurrentIrql; // r12
  $69CD3F157F9F39B6F7113F2231989901 *v7; // rdi
  $5BC46E0569261879018906DEC3127961 *v8; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 Group; // rcx
  unsigned __int64 GroupIndex; // r14
  __int64 v19; // rbp
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 result; // rax
  char v24; // si
  unsigned __int8 v25; // bp
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  signed __int64 *v28; // rdx
  signed __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-38h] BYREF
  int v31[13]; // [rsp+24h] [rbp-34h] BYREF

  CurrentThread = KeGetCurrentThread();
  p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v30 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v30);
    while ( CurrentThread->ThreadLock );
  }
  while ( CurrentThread->ApcState.KernelApcPending )
  {
    if ( CurrentThread->SpecialApcDisable )
      break;
    if ( CurrentIrql )
      break;
    CurrentThread->ThreadLock = 0LL;
    __writecr8(0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v31[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(v31);
      while ( CurrentThread->ThreadLock );
    }
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v7 = &CurrentThread->152, ($69CD3F157F9F39B6F7113F2231989901 *)v7->ApcState.ApcListHead[0].Flink != v7)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v8 = &CurrentThread->600;
  if ( a1 == (__int64 *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPending = CurrentThread->SavedApcState.UserApcPending;
    Flink = v8->SavedApcState.ApcListHead[0].Flink;
    if ( ($5BC46E0569261879018906DEC3127961 *)v8->SavedApcState.ApcListHead[0].Flink == v8 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v7->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v7;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v7->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v7;
      Blink->Flink = (struct _LIST_ENTRY *)v7;
    }
    v11 = &CurrentThread->SavedApcState.ApcListHead[1];
    v12 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v11->Flink == v11 )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v12->Flink = v12;
      CurrentThread->ApcState.UserApcPending = 0;
    }
    else
    {
      v13 = v11->Flink;
      v14 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v12->Flink = v13;
      CurrentThread->ApcState.ApcListHead[1].Blink = v14;
      v13->Blink = v12;
      v14->Flink = v12;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    KiMoveApcState(a1, (__int64)&CurrentThread->152);
  }
  CurrentThread->ThreadLock = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  Process = CurrentThread->ApcState.Process;
  Group = CurrentPrcb->Group;
  GroupIndex = CurrentPrcb->GroupIndex;
  v19 = 8 * Group + 280;
  _interlockedbittestandset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v19), GroupIndex);
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
  if ( KiKvaShadow && !KiFlushPcid )
  {
    Group = __readcr4();
    if ( (Group & 0x20080) != 0 )
    {
      __writecr4(Group ^ 0x80);
      __writecr4(Group);
    }
    else
    {
      v22 = __readcr3();
      __writecr3(v22);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)p_Lock + v19), GroupIndex);
  CurrentThread->MiscFlags &= ~0x800u;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( !a2 )
  {
    result = _InterlockedExchangeAdd(p_Lock + 143, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v24 = 0;
      v25 = KeGetCurrentIrql();
      __writecr8(2uLL);
      KiAcquireKobjectLockSafe(p_Lock);
      v26 = *((_DWORD *)p_Lock + 143);
      if ( (v26 & 7) == 0 )
      {
        Group = (unsigned __int64)(p_Lock + 12);
        if ( *(_QWORD *)Group != Group && (v26 & 0xFFFFFFF8) == 0 )
        {
          while ( 1 )
          {
            Group = v26 & 0xFFFFFFF8 | 3;
            v27 = v26;
            v26 = _InterlockedCompareExchange(p_Lock + 143, Group, v26);
            if ( v27 == v26 )
              break;
            if ( (v26 & 0xFFFFFFF8) != 0 )
              goto LABEL_47;
          }
          v24 = 1;
        }
      }
LABEL_47:
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      if ( v24 )
      {
        v28 = (signed __int64 *)(p_Lock + 66);
        _m_prefetchw(&KiProcessOutSwapListHead);
        v29 = KiProcessOutSwapListHead;
        do
        {
          *v28 = v29;
          Group = v29;
          v29 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v28, v29);
        }
        while ( v29 != Group );
        if ( !v29 )
          KeSetEvent(&KiSwapEvent, 10, 0);
      }
      result = v25;
      __writecr8(v25);
    }
  }
  if ( ($69CD3F157F9F39B6F7113F2231989901 *)v7->ApcState.ApcListHead[0].Flink != v7 )
  {
    LOBYTE(Group) = 1;
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(Group);
  }
  return result;
}
