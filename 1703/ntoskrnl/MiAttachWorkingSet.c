/*
 * XREFs of MiAttachWorkingSet @ 0x1400B21D0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiPrepareAttachThread @ 0x140022D6C (MiPrepareAttachThread.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiAttachSession @ 0x140063AC4 (MiAttachSession.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSelectSessionAttachProcess @ 0x140094590 (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAttachProcess @ 0x1400B1C00 (KiAttachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeIsExecutingDpc @ 0x1400B2A00 (KeIsExecutingDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSetAddressPolicy @ 0x14017BD00 (KiSetAddressPolicy.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1401EB8F0 (HvlSwitchVirtualAddressSpace.c)
 */

__int64 __fastcall MiAttachWorkingSet(__int64 a1)
{
  char v1; // al
  ULONG_PTR v2; // rdi
  struct _KTHREAD *v3; // r8
  unsigned __int8 v4; // al
  struct _KTHREAD *v5; // rbx
  unsigned __int8 CurrentIrql; // r12
  $69CD3F157F9F39B6F7113F2231989901 *v7; // r9
  $5BC46E0569261879018906DEC3127961 *v8; // r8
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *Process; // r15
  unsigned __int64 GroupIndex; // r14
  __int64 v18; // rbp
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // edi
  __int64 *v25; // rax
  __int64 *v26; // rbx
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  unsigned int IsExecutingDpc; // eax
  int v31; // [rsp+30h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-B0h] BYREF
  char v33[48]; // [rsp+50h] [rbp-98h] BYREF

  v1 = *(_BYTE *)(a1 + 192) & 7;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      v23 = a1 - 3008;
      if ( *(_WORD *)(a1 + 172) )
      {
        v24 = 0;
        KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
        v25 = MiSelectSessionAttachProcess(v23);
        v26 = v25;
        if ( v25 )
          v24 = MiPrepareAttachThread((__int64)v25, (__int64)(v25 + 160));
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        if ( v26 )
        {
          if ( v24 )
          {
            CurrentThread = KeGetCurrentThread();
            ApcStateIndex = CurrentThread->ApcStateIndex;
            if ( ApcStateIndex )
              KeBugCheckEx(5u, (ULONG_PTR)v26, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
            KiStackAttachProcess((ULONG_PTR)v26);
            return 1LL;
          }
          ObfDereferenceObjectWithTag(v26, 0x746C6644u);
        }
        return 0LL;
      }
      MiAttachSession(a1 - 3008);
    }
  }
  else
  {
    v2 = a1 - 1280;
    if ( (PEPROCESS)(a1 - 1280) != PsInitialSystemProcess )
    {
      v3 = KeGetCurrentThread();
      v4 = v3->ApcStateIndex;
      if ( v4 )
        KeBugCheckEx(5u, a1 - 1280, (ULONG_PTR)v3->ApcState.Process, v4, 0LL);
      v5 = KeGetCurrentThread();
      if ( (unsigned int)KeIsExecutingDpc() || (*(_DWORD *)(v2 + 440) & 0x10000000) != 0 )
      {
        IsExecutingDpc = KeIsExecutingDpc();
        KeBugCheckEx(5u, v2, (ULONG_PTR)v5->ApcState.Process, v5->ApcStateIndex, IsExecutingDpc);
      }
      if ( v5->ApcState.Process != (_KPROCESS *)v2 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v31 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v5->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v31);
          while ( v5->ThreadLock );
        }
        if ( v5->ApcStateIndex )
        {
          KiAttachProcess((__int64)v5, v2, CurrentIrql, 1LL, (__int64)v33);
        }
        else
        {
          v7 = &v5->152;
          v8 = &v5->600;
          v5->SavedApcState.Process = v5->ApcState.Process;
          v5->SavedApcState.InProgressFlags = v5->ApcState.InProgressFlags;
          v5->SavedApcState.KernelApcPending = v5->ApcState.KernelApcPending;
          v5->SavedApcState.UserApcPending = v5->ApcState.UserApcPending;
          Flink = v5->ApcState.ApcListHead[0].Flink;
          if ( ($69CD3F157F9F39B6F7113F2231989901 *)v7->ApcState.ApcListHead[0].Flink == v7 )
          {
            v5->SavedApcState.ApcListHead[0].Blink = v5->SavedApcState.ApcListHead;
            v8->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v8;
            v5->SavedApcState.KernelApcPending = 0;
          }
          else
          {
            Blink = v5->ApcState.ApcListHead[0].Blink;
            v8->SavedApcState.ApcListHead[0].Flink = Flink;
            v5->SavedApcState.ApcListHead[0].Blink = Blink;
            Flink->Blink = (struct _LIST_ENTRY *)v8;
            Blink->Flink = (struct _LIST_ENTRY *)v8;
          }
          v11 = &v5->ApcState.ApcListHead[1];
          v12 = &v5->SavedApcState.ApcListHead[1];
          if ( v11->Flink == v11 )
          {
            v5->SavedApcState.ApcListHead[1].Blink = &v5->SavedApcState.ApcListHead[1];
            v12->Flink = v12;
            v5->SavedApcState.UserApcPending = 0;
          }
          else
          {
            v13 = v11->Flink;
            v14 = v5->ApcState.ApcListHead[1].Blink;
            v12->Flink = v13;
            v5->SavedApcState.ApcListHead[1].Blink = v14;
            v13->Blink = v12;
            v14->Flink = v12;
          }
          v5->ApcState.ApcListHead[0].Blink = v5->ApcState.ApcListHead;
          v7->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v7;
          v5->ApcState.ApcListHead[1].Blink = &v5->ApcState.ApcListHead[1];
          v5->ApcState.ApcListHead[1].Flink = &v5->ApcState.ApcListHead[1];
          v5->MiscFlags |= 0x800u;
          *(_WORD *)&v5->ApcStateFill[40] = 0;
          v5->ApcState.UserApcPending = 0;
          v5->ApcStateIndex = 1;
          v5->ApcState.Process = (_KPROCESS *)v2;
          v5->ThreadLock = 0LL;
          CurrentPrcb = KeGetCurrentPrcb();
          Process = v5->SavedApcState.Process;
          GroupIndex = CurrentPrcb->GroupIndex;
          v18 = 8LL * CurrentPrcb->Group + 280;
          _interlockedbittestandset64((volatile signed __int32 *)(v2 + v18), GroupIndex);
          v19 = *(_QWORD *)(v2 + 40);
          if ( KiKvaShadow )
          {
            v20 = *(_QWORD *)(v2 + 40);
            if ( (v19 & 2) != 0 )
              v20 = v19 | 0x8000000000000000uLL;
            __writegsqword(0x7000u, v20);
            KiSetAddressPolicy(*(unsigned __int8 *)(v2 + 640));
          }
          if ( (HvlEnlightenments & 1) != 0 )
            HvlSwitchVirtualAddressSpace(v19);
          else
            __writecr3(v19);
          if ( KiKvaShadow && !KiFlushPcid )
          {
            v21 = __readcr4();
            if ( (v21 & 0x20080) != 0 )
            {
              __writecr4(v21 ^ 0x80);
              __writecr4(v21);
            }
            else
            {
              v22 = __readcr3();
              __writecr3(v22);
            }
          }
          _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v18), GroupIndex);
          v5->MiscFlags &= ~0x800u;
          __writecr8(CurrentIrql);
        }
      }
    }
  }
  return 1LL;
}
