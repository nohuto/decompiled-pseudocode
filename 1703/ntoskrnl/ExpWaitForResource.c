/*
 * XREFs of ExpWaitForResource @ 0x1400E7CC0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14008FC20 (ExpAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14009C290 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140143640 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14014D420 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14014E340 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14014E540 (ExAcquireFastResourceShared.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KiFastExitThreadWait @ 0x140017F24 (KiFastExitThreadWait.c)
 *     KiExitThreadWait @ 0x140017FB0 (KiExitThreadWait.c)
 *     KiWaitSatisfyMutant @ 0x140018280 (KiWaitSatisfyMutant.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyOther @ 0x140051968 (KiWaitSatisfyOther.c)
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiSatisfyThreadWait @ 0x140205B3C (KiSatisfyThreadWait.c)
 *     PerfLogExecutiveResourceWait @ 0x1402561E0 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpWaitForResource(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        void (__fastcall *a4)(_DWORD *, unsigned __int64, unsigned __int64))
{
  __int64 v4; // rax
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 WaitIrql; // r15
  unsigned int v10; // r15d
  struct _KPRCB *CurrentPrcb; // r13
  $6E77A2FF3C783A4EBEFA8B287A08A468 *v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 ThreadTimerDelay; // rdx
  struct _LIST_ENTRY *v16; // rcx
  __int64 result; // rax
  unsigned int v18; // ecx
  unsigned int v19; // r15d
  unsigned __int8 v20; // al
  int v21; // eax
  int v22; // eax
  signed __int32 v23[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int8 v24; // [rsp+30h] [rbp-78h]
  unsigned int v25; // [rsp+34h] [rbp-74h]
  int v26; // [rsp+38h] [rbp-70h]
  unsigned int v27; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v28; // [rsp+40h] [rbp-68h] BYREF
  __int64 v29; // [rsp+48h] [rbp-60h]
  int v30; // [rsp+50h] [rbp-58h] BYREF
  int v31; // [rsp+54h] [rbp-54h] BYREF
  int v32; // [rsp+58h] [rbp-50h] BYREF
  __int64 v33; // [rsp+60h] [rbp-48h]

  v4 = a2;
  __incgsdword(0x64A8u);
  v27 = 0;
  v26 = 0;
  ++a1[17];
  v33 = -5000000LL;
  while ( 2 )
  {
    v6 = v4 + 16;
    CurrentThread = KeGetCurrentThread();
    v24 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
    if ( !v24 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = CurrentIrql;
    }
    if ( v33 >= 0 )
    {
      v29 = v33;
      v25 = 1;
    }
    else
    {
      v29 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - (v33 + CurrentThread->RelativeTimerBias);
      v25 = 2;
    }
    while ( 1 )
    {
      WaitIrql = CurrentThread->WaitIrql;
      while ( 1 )
      {
        CurrentThread->WaitRegister.Flags = 0;
        CurrentThread->WaitMode = 0;
        CurrentThread->MiscFlags &= ~0x10u;
        v28 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v28);
          while ( CurrentThread->ThreadLock );
        }
        if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
          break;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        KiDeliverApc(0LL, 0LL, 0LL);
        KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentThread->WaitIrql = 0;
      }
      CurrentThread->WaitBlockFill6[68] = 5;
      CurrentThread->WaitReason = 27;
      CurrentThread->ThreadLock = 0LL;
      CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
      v10 = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = &CurrentThread->320;
      CurrentThread->WaitBlock[0].WaitType = 1;
      CurrentThread->WaitBlockFill4[17] = 4;
      CurrentThread->WaitBlock[0].WaitKey = 0;
      CurrentThread->WaitBlock[0].Object = (PVOID)v6;
      v30 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v6, 7u) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( (*(_DWORD *)v6 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)v6 & 0x7F) == 2 )
        break;
      if ( *(int *)(v6 + 4) > 0 )
      {
        KiWaitSatisfyOther(v6);
        goto LABEL_21;
      }
LABEL_13:
      v13 = v29;
      if ( v25 == 2 )
      {
        v14 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
        v13 = v29;
        ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
        if ( CurrentThread->WaitMode
          && !CurrentThread->WaitBlock[3].SpareLong
          && !CurrentThread->WaitIrql
          && !CurrentThread->ApcState.InProgressFlags
          && (_DWORD)ThreadTimerDelay )
        {
          v13 = v29 + ThreadTimerDelay;
        }
      }
      else
      {
        if ( !v25 )
          goto LABEL_16;
        if ( !v29 )
        {
LABEL_64:
          v10 = 258;
          goto LABEL_21;
        }
        v14 = MEMORY[0xFFFFF78000000014];
      }
      if ( v14 > v13 )
        goto LABEL_64;
LABEL_16:
      v16 = *(struct _LIST_ENTRY **)(v6 + 16);
      if ( v16->Flink != (struct _LIST_ENTRY *)(v6 + 8) )
        __fastfail(3u);
      v12->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(v6 + 8);
      CurrentThread->WaitBlock[0].WaitListEntry.Blink = v16;
      v16->Flink = (struct _LIST_ENTRY *)v12;
      *(_QWORD *)(v6 + 16) = v12;
      _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
      CurrentThread->WaitBlockCount = 1;
      result = KiCommitThreadWait(CurrentThread, &CurrentThread->320, v25, v29);
      if ( (_DWORD)result != 256 )
        goto LABEL_18;
      v24 = 0;
      v20 = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = v20;
    }
    if ( *(int *)(v6 + 4) <= 0
      && (CurrentThread != *(struct _KTHREAD **)(v6 + 40) || *(_BYTE *)(v6 + 2) != CurrentPrcb->DpcRoutineActive) )
    {
      goto LABEL_13;
    }
    v21 = *(_DWORD *)(v6 + 4);
    if ( v21 == 0x80000000 )
    {
      _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
      KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v24);
      RtlRaiseStatus(-1073741423);
    }
    v22 = v21 - 1;
    *(_DWORD *)(v6 + 4) = v22;
    if ( !v22 )
    {
      CurrentThread->WaitStatus = 0LL;
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v31);
        while ( CurrentThread->ThreadLock );
      }
      KiWaitSatisfyMutant((int *)v6, (__int64)CurrentThread, (__int64)CurrentPrcb);
      _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
      result = KiSatisfyThreadWait((_DWORD)CurrentPrcb, (_DWORD)CurrentThread, v24, (int)CurrentThread + 320, 0);
      goto LABEL_18;
    }
LABEL_21:
    _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    _InterlockedOr(v23, 0);
    if ( CurrentThread->ThreadLock )
    {
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v32);
        while ( CurrentThread->ThreadLock );
      }
      CurrentThread->ThreadLock = 0LL;
    }
    KiExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v24);
    result = v10;
LABEL_18:
    if ( (_DWORD)result == 258 )
    {
      v18 = v27 + 1;
      v27 = v18;
      v28 = v18;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
        PerfLogExecutiveResourceWait(a3, a1, v18);
      v19 = ++v26;
      v33 = ExpTimeout;
      if ( ExResourceTimeoutCount && v19 > ExResourceTimeoutCount )
      {
        v26 = 0;
        v25 = 0;
        DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", a1);
        __debugbreak();
      }
      v4 = a2;
      if ( a4 )
      {
        a4(a1, 0xFFFFF780000003B0uLL, 0xFFFFF78000000008uLL);
        v4 = a2;
      }
      continue;
    }
    return result;
  }
}
