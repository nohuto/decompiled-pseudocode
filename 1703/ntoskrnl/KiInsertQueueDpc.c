/*
 * XREFs of KiInsertQueueDpc @ 0x1400F1510
 * Callers:
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     KiForegroundTimerCallback @ 0x14002F480 (KiForegroundTimerCallback.c)
 *     KiEntropyQueueDpc @ 0x14002F740 (KiEntropyQueueDpc.c)
 *     KiGenericCallDpcWorker @ 0x140040740 (KiGenericCallDpcWorker.c)
 *     KiTimerWaitTest @ 0x1400E43F0 (KiTimerWaitTest.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     PpmPerfAction @ 0x1400F2880 (PpmPerfAction.c)
 *     PoExecutePerfCheck @ 0x1400F31A0 (PoExecutePerfCheck.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1400F3250 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     PpmPerfQueueAction @ 0x140147208 (PpmPerfQueueAction.c)
 *     KeMaskInterrupt @ 0x14014BBAC (KeMaskInterrupt.c)
 *     IoProcessPassiveInterrupts @ 0x1401F8634 (IoProcessPassiveInterrupts.c)
 *     KiInsertSecondarySignalList @ 0x140200CFC (KiInsertSecondarySignalList.c)
 *     KeUpdatePendingVirtualLittleRequest @ 0x140203B98 (KeUpdatePendingVirtualLittleRequest.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x140205F44 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmPerfControlActionCallback @ 0x14022D430 (PpmPerfControlActionCallback.c)
 *     ExpTimeRefreshCallback @ 0x140259EF0 (ExpTimeRefreshCallback.c)
 *     ExpSvmFaultRoutine @ 0x14025E840 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x1402602E0 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x1402603A0 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x140260714 (WheapWorkQueueAddItem.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14004FB00 (KxWaitForSpinLockAndAcquire.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401FEC08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceDpcEnqueueEvent @ 0x140253534 (EtwTraceDpcEnqueueEvent.c)
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
  __int64 v12; // rdi
  unsigned int v13; // r11d
  signed __int64 IsrDpcStats; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  unsigned __int16 v19; // tt
  struct _KPRCB *v21; // rax
  signed __int16 v22; // ax
  signed __int16 v23; // tt
  __int64 v24; // rcx
  _QWORD *v25; // rax
  signed __int16 v26; // ax
  signed __int16 v27; // tt
  int v28; // [rsp+30h] [rbp-58h]
  int v29; // [rsp+34h] [rbp-54h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-50h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int Number; // [rsp+90h] [rbp+8h]
  __int64 v33; // [rsp+98h] [rbp+10h]
  __int64 v34; // [rsp+A0h] [rbp+18h]
  volatile signed __int32 *v35; // [rsp+A8h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v5 = *(_WORD *)(BugCheckParameter2 + 2);
  v6 = 0;
  v28 = 0;
  v29 = 0;
  v8 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( v5 >= 0x280u )
  {
    Number = v5 - 640;
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
    v12 = v11 + 11816;
  else
    v12 = v11 + 11776;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v12 + 16);
  }
  else
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v12 + 16), 0LL) )
      goto LABEL_9;
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v12 + 16));
  }
  a4 = v35;
  a2 = v33;
  a3 = v34;
LABEL_9:
  v13 = Number;
  IsrDpcStats = (signed __int64)CurrentPrcb->IsrDpcStats;
  if ( Number != CurrentPrcb->Number )
    IsrDpcStats = 1LL;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), IsrDpcStats, 0LL) )
  {
    ++*(_DWORD *)(v12 + 24);
    ++*(_DWORD *)(v12 + 28);
    *(_QWORD *)(BugCheckParameter2 + 40) = a2;
    *(_QWORD *)(BugCheckParameter2 + 48) = a3;
    if ( v8 )
    {
      v29 = *(_DWORD *)(v12 + 24);
      v28 = *(_DWORD *)(v12 + 28);
    }
    v6 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v24 = *(_QWORD *)v12;
      v25 = (_QWORD *)(BugCheckParameter2 + 8);
      if ( !*(_QWORD *)v12 )
        *(_QWORD *)(v12 + 8) = v25;
      *v25 = v24;
      *(_QWORD *)v12 = v25;
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      **(_QWORD **)(v12 + 8) = BugCheckParameter2 + 8;
      *(_QWORD *)(v12 + 8) = BugCheckParameter2 + 8;
    }
    if ( v9 )
      *(_WORD *)(BugCheckParameter2 + 2) = Number;
  }
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v12 + 16, retaddr);
    v13 = Number;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 16), 0LL);
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
        v29,
        v28,
        v13,
        *(_BYTE *)(BugCheckParameter2 + 1));
      v13 = Number;
    }
    if ( v12 == v11 + 11816 )
    {
      _m_prefetchw((const void *)(v11 + 11886));
      v26 = *(_WORD *)(v11 + 11886);
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 11886), v26 | 2, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x2F) != 0 )
        goto LABEL_38;
      v15 = 4LL;
      goto LABEL_30;
    }
    if ( *(_DWORD *)(v12 + 24) < *(_DWORD *)(v11 + 11864) )
    {
      if ( CurrentPrcb == (struct _KPRCB *)v11 )
      {
        if ( !*(_BYTE *)(BugCheckParameter2 + 1) && *(_DWORD *)(v11 + 11868) >= *(_DWORD *)(v11 + 11872) )
        {
LABEL_49:
          _m_prefetchw((const void *)(v11 + 11884));
          v22 = *(_WORD *)(v11 + 11884);
          do
          {
            v23 = v22;
            v22 = _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 11884), v22 | 0x10, v22);
          }
          while ( v23 != v22 );
          if ( (v22 & 0x2F) != 0 || (*(_QWORD *)(*(_QWORD *)(v11 + 192) + 64LL) & *(_QWORD *)(v11 + 200)) == 0LL )
            goto LABEL_38;
        }
      }
      else if ( (unsigned __int8)(*(_BYTE *)(BugCheckParameter2 + 1) - 2) > 1u )
      {
        goto LABEL_49;
      }
    }
    v15 = 2LL;
LABEL_30:
    v16 = 47LL;
    if ( (struct _KPRCB *)v11 == CurrentPrcb )
    {
      v16 = 41LL;
      LOWORD(v15) = v15 | 0x20;
    }
    _m_prefetchw((const void *)(v11 + 11884));
    v17 = *(_WORD *)(v11 + 11884);
    do
    {
      v18 = v17;
      BYTE1(v18) = BYTE1(v15) | HIBYTE(v17);
      v19 = v17;
      v17 = _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 11884), v15 | v17, v17);
    }
    while ( v19 != v17 );
    if ( ((unsigned __int16)v16 & v17) == 0 )
    {
      if ( (struct _KPRCB *)v11 == CurrentPrcb )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v18) = 2;
          HalRequestSoftwareInterrupt(v18);
        }
      }
      else if ( *(_QWORD *)(v11 + 8) != *(_QWORD *)(v11 + 24) || *(_BYTE *)(v11 + 7) )
      {
        v21 = KeGetCurrentPrcb();
        LOBYTE(v15) = 2;
        ++v21->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v13, v15, v16, a4);
      }
    }
  }
LABEL_38:
  __writecr8(CurrentIrql);
  return v6;
}
