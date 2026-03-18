/*
 * XREFs of KiInsertQueueDpc @ 0x1400943B0
 * Callers:
 *     PoExecutePerfCheck @ 0x140093910 (PoExecutePerfCheck.c)
 *     KiTimerWaitTest @ 0x140093D00 (KiTimerWaitTest.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     PpmPerfAction @ 0x1400953A0 (PpmPerfAction.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140095700 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     KiGenericCallDpcWorker @ 0x1400D04D0 (KiGenericCallDpcWorker.c)
 *     KiForegroundTimerCallback @ 0x1400E34F0 (KiForegroundTimerCallback.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     KiEntropyQueueDpc @ 0x140127180 (KiEntropyQueueDpc.c)
 *     KeMaskInterrupt @ 0x140129578 (KeMaskInterrupt.c)
 *     PpmPerfQueueAction @ 0x14014DC18 (PpmPerfQueueAction.c)
 *     ExpTimeRefreshCallback @ 0x14015D170 (ExpTimeRefreshCallback.c)
 *     HvlSharedIsr @ 0x1401E9C70 (HvlSharedIsr.c)
 *     IoProcessPassiveInterrupts @ 0x1401FE738 (IoProcessPassiveInterrupts.c)
 *     KiInsertSecondarySignalList @ 0x1402071A8 (KiInsertSecondarySignalList.c)
 *     KeUpdatePendingQosRequest @ 0x14020A080 (KeUpdatePendingQosRequest.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14020C534 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiEpfCompletionIsr @ 0x14020CE70 (KiEpfCompletionIsr.c)
 *     PpmPerfControlActionCallback @ 0x140240870 (PpmPerfControlActionCallback.c)
 *     ExpSvmFaultRoutine @ 0x140288390 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x140289EB0 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140289F70 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x14028A2E4 (WheapWorkQueueAddItem.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140204F88 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceDpcEnqueueEvent @ 0x14027B1F8 (EtwTraceDpcEnqueueEvent.c)
 */

__int64 __fastcall KiInsertQueueDpc(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 *a4,
        unsigned __int8 a5)
{
  unsigned __int16 v5; // r10
  unsigned __int8 v6; // r15
  bool v8; // r12
  bool v9; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // r11d
  signed __int64 IsrDpcStats; // rcx
  __int64 v16; // rdx
  __int16 v17; // r8
  unsigned __int16 v18; // ax
  __int64 v19; // rcx
  unsigned __int16 v20; // tt
  struct _KPRCB *v22; // rax
  signed __int16 v23; // ax
  signed __int16 v24; // tt
  __int64 v25; // rcx
  _QWORD *v26; // rax
  signed __int16 v27; // ax
  signed __int16 v28; // tt
  int v29; // [rsp+30h] [rbp-58h]
  int v30; // [rsp+34h] [rbp-54h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-50h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int Number; // [rsp+90h] [rbp+8h]
  __int64 v34; // [rsp+98h] [rbp+10h]
  __int64 v35; // [rsp+A0h] [rbp+18h]
  volatile signed __int32 *v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v5 = *(_WORD *)(BugCheckParameter2 + 2);
  v6 = 0;
  v29 = 0;
  v30 = 0;
  v8 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( v5 >= 0x500u )
  {
    Number = v5 - 1280;
    v11 = KiProcessorBlock[Number];
    if ( !v11 )
      KeBugCheckEx(0xC7u, 3uLL, BugCheckParameter2, v5, (unsigned int)KeNumberProcessors_0);
  }
  else
  {
    Number = CurrentPrcb->Number;
    v9 = v5 != (unsigned __int16)Number;
    v11 = (__int64)CurrentPrcb;
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 16) & *(_QWORD *)(v11 + 200)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 16), *(unsigned __int8 *)(v11 + 209));
  if ( *(_BYTE *)BugCheckParameter2 == 26 && *(_BYTE *)(v11 + 11880) )
    v12 = 11816LL;
  else
    v12 = 11776LL;
  v13 = v12 + v11;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v13 + 16);
  }
  else
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13 + 16), 0LL) )
      goto LABEL_9;
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v13 + 16));
  }
  a4 = v36;
  a2 = v34;
  a3 = v35;
LABEL_9:
  v14 = Number;
  IsrDpcStats = (signed __int64)CurrentPrcb->IsrDpcStats;
  if ( Number != CurrentPrcb->Number )
    IsrDpcStats = 1LL;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), IsrDpcStats, 0LL) )
  {
    ++*(_DWORD *)(v13 + 24);
    ++*(_DWORD *)(v13 + 28);
    *(_QWORD *)(BugCheckParameter2 + 40) = a2;
    *(_QWORD *)(BugCheckParameter2 + 48) = a3;
    if ( v8 )
    {
      v30 = *(_DWORD *)(v13 + 24);
      v29 = *(_DWORD *)(v13 + 28);
    }
    v6 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v25 = *(_QWORD *)v13;
      v26 = (_QWORD *)(BugCheckParameter2 + 8);
      if ( !*(_QWORD *)v13 )
        *(_QWORD *)(v13 + 8) = v26;
      *v26 = v25;
      *(_QWORD *)v13 = v26;
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      **(_QWORD **)(v13 + 8) = BugCheckParameter2 + 8;
      *(_QWORD *)(v13 + 8) = BugCheckParameter2 + 8;
    }
    if ( v9 )
      *(_WORD *)(BugCheckParameter2 + 2) = Number;
  }
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v13 + 16, retaddr);
    v14 = Number;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 16), 0LL);
  }
  if ( v6 )
  {
    if ( v8 )
    {
      EtwTraceDpcEnqueueEvent(
        -203591049
      * (KiWaitNever ^ __ROR8__(
                         *(_QWORD *)(BugCheckParameter2 + 24) ^ _byteswap_uint64(BugCheckParameter2 ^ KiWaitAlways),
                         KiWaitNever)),
        *(_QWORD *)(BugCheckParameter2 + 24),
        v30,
        v29,
        v14,
        *(_BYTE *)(BugCheckParameter2 + 1));
      v14 = Number;
    }
    if ( v13 == v11 + 11816 )
    {
      _m_prefetchw((const void *)(v11 + 11886));
      v27 = *(_WORD *)(v11 + 11886);
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 11886), v27 | 2, v27);
      }
      while ( v28 != v27 );
      if ( (v27 & 0x2F) != 0 )
        goto LABEL_38;
      v16 = 4LL;
      goto LABEL_30;
    }
    if ( *(_DWORD *)(v13 + 24) < *(_DWORD *)(v11 + 11864) )
    {
      if ( CurrentPrcb == (struct _KPRCB *)v11 )
      {
        if ( !*(_BYTE *)(BugCheckParameter2 + 1) && *(_DWORD *)(v11 + 11868) >= *(_DWORD *)(v11 + 11872) )
        {
LABEL_49:
          _m_prefetchw((const void *)(v11 + 11884));
          v23 = *(_WORD *)(v11 + 11884);
          do
          {
            v24 = v23;
            v23 = _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 11884), v23 | 0x10, v23);
          }
          while ( v24 != v23 );
          if ( (v23 & 0x2F) != 0 || (*(_QWORD *)(*(_QWORD *)(v11 + 192) + 64LL) & *(_QWORD *)(v11 + 200)) == 0LL )
            goto LABEL_38;
        }
      }
      else if ( (unsigned __int8)(*(_BYTE *)(BugCheckParameter2 + 1) - 2) > 1u )
      {
        goto LABEL_49;
      }
    }
    v16 = 2LL;
LABEL_30:
    v17 = 47;
    if ( (struct _KPRCB *)v11 == CurrentPrcb )
    {
      v17 = 41;
      LOWORD(v16) = v16 | 0x20;
    }
    _m_prefetchw((const void *)(v11 + 11884));
    v18 = *(_WORD *)(v11 + 11884);
    do
    {
      v19 = v18;
      BYTE1(v19) = BYTE1(v16) | HIBYTE(v18);
      v20 = v18;
      v18 = _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 11884), v16 | v18, v18);
    }
    while ( v20 != v18 );
    if ( ((unsigned __int16)v17 & v18) == 0 )
    {
      if ( (struct _KPRCB *)v11 == CurrentPrcb )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v19) = 2;
          HalRequestSoftwareInterrupt(v19);
        }
      }
      else if ( *(_QWORD *)(v11 + 8) != *(_QWORD *)(v11 + 24) || *(_BYTE *)(v11 + 7) )
      {
        v22 = KeGetCurrentPrcb();
        LOBYTE(v16) = 2;
        ++v22->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v14, v16);
      }
    }
  }
LABEL_38:
  __writecr8(CurrentIrql);
  return v6;
}
