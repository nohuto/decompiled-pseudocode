/*
 * XREFs of KiInsertQueueDpc @ 0x140039020
 * Callers:
 *     KiGenericCallDpcWorker @ 0x140004B80 (KiGenericCallDpcWorker.c)
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     KiForegroundTimerCallback @ 0x1400399B0 (KiForegroundTimerCallback.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     KiEntropyQueueDpc @ 0x1400C76A0 (KiEntropyQueueDpc.c)
 *     KiTimerWaitTest @ 0x1401089B0 (KiTimerWaitTest.c)
 *     PpmPerfAction @ 0x140109090 (PpmPerfAction.c)
 *     PoExecutePerfCheck @ 0x140109900 (PoExecutePerfCheck.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140109AF0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 *     ExpTimeRefreshCallback @ 0x14015F2A0 (ExpTimeRefreshCallback.c)
 *     KeMaskInterrupt @ 0x1401688E4 (KeMaskInterrupt.c)
 *     PpmPerfQueueAction @ 0x14016BED4 (PpmPerfQueueAction.c)
 *     HvlSharedIsr @ 0x140226D70 (HvlSharedIsr.c)
 *     IoProcessPassiveInterrupts @ 0x14023B108 (IoProcessPassiveInterrupts.c)
 *     KiInsertSecondarySignalList @ 0x140244DC8 (KiInsertSecondarySignalList.c)
 *     KeUpdatePendingQosRequest @ 0x140247D04 (KeUpdatePendingQosRequest.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14024A7F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiEpfCompletionIsr @ 0x14024B1F0 (KiEpfCompletionIsr.c)
 *     PpmPerfControlActionCallback @ 0x140277ED0 (PpmPerfControlActionCallback.c)
 *     ExpSvmFaultRoutine @ 0x1402BC6E0 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x1402BF580 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x1402BF640 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x1402BF9B4 (WheapWorkQueueAddItem.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     KiSetVpThreadSystemWork @ 0x140248FE0 (KiSetVpThreadSystemWork.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1402AEB18 (EtwTraceDpcEnqueueEvent.c)
 */

__int64 __fastcall KiInsertQueueDpc(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 *a4,
        unsigned __int8 a5)
{
  unsigned __int16 v5; // r11
  unsigned __int8 v6; // r15
  bool v8; // r12
  char v9; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  struct _KPRCB *v14; // r10
  _DWORD *SchedulerAssist; // rcx
  unsigned int v16; // r11d
  signed __int64 IsrDpcStats; // rcx
  int v18; // eax
  _QWORD *v19; // rcx
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  char v22; // al
  __int64 v23; // rdx
  __int16 v24; // r8
  unsigned __int16 v25; // ax
  __int64 v26; // rcx
  unsigned __int16 v27; // tt
  int v29; // edi
  struct _KPRCB *v30; // rax
  signed __int16 v31; // ax
  signed __int16 v32; // tt
  __int64 v33; // rax
  signed __int16 v34; // ax
  signed __int16 v35; // tt
  char v36; // al
  int v37; // eax
  int v38; // eax
  char v39; // al
  int v40; // r11d
  __int64 v41; // rcx
  bool v42; // zf
  _DWORD *v43; // rdx
  __int64 v44; // rcx
  unsigned int Number; // [rsp+30h] [rbp-68h]
  int v46; // [rsp+34h] [rbp-64h]
  int v47; // [rsp+38h] [rbp-60h]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  char v50; // [rsp+A0h] [rbp+8h]
  __int64 v51; // [rsp+A8h] [rbp+10h]
  __int64 v52; // [rsp+B0h] [rbp+18h]
  volatile signed __int32 *v53; // [rsp+B8h] [rbp+20h]

  v53 = a4;
  v52 = a3;
  v51 = a2;
  v5 = *(_WORD *)(BugCheckParameter2 + 2);
  v6 = 0;
  v46 = 0;
  v47 = 0;
  v8 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v50 = 0;
  if ( CurrentPrcb->SchedulerAssist )
  {
    LOBYTE(a2) = 1;
    v36 = KiSetVpThreadSystemWork(CurrentPrcb, a2);
    a3 = v52;
    a2 = v51;
    a4 = v53;
    v50 = v36;
  }
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
    if ( v5 != (_WORD)Number )
      v9 = 1;
    v11 = (__int64)CurrentPrcb;
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 16) & *(_QWORD *)(v11 + 200)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 16), *(unsigned __int8 *)(v11 + 209));
  if ( *(_BYTE *)BugCheckParameter2 == 26 && *(_BYTE *)(v11 + 11880) )
    v12 = 11816LL;
  else
    v12 = 11776LL;
  v13 = v11 + v12;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v13 + 16);
    goto LABEL_76;
  }
  v14 = KeGetCurrentPrcb();
  SchedulerAssist = v14->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v37 = SchedulerAssist[5];
      SchedulerAssist[5] = v37 + 1;
      if ( v37 == -1 )
      {
        if ( !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        {
          KiPerformUnboostKick(v14);
          a3 = v52;
          a4 = v53;
        }
        a2 = v51;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 16), 0LL) )
  {
    KiSetVpThreadSpinLockCount(v14, 0LL);
    KxWaitForSpinLockAndAcquire(v13 + 16);
LABEL_76:
    a4 = v53;
    a2 = v51;
    a3 = v52;
  }
  v16 = Number;
  IsrDpcStats = (signed __int64)CurrentPrcb->IsrDpcStats;
  if ( Number != CurrentPrcb->Number )
    IsrDpcStats = 1LL;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), IsrDpcStats, 0LL) )
  {
    v18 = *(_DWORD *)(v13 + 24);
    ++*(_DWORD *)(v13 + 28);
    *(_DWORD *)(v13 + 24) = v18 + 1;
    *(_QWORD *)(BugCheckParameter2 + 40) = a2;
    *(_QWORD *)(BugCheckParameter2 + 48) = a3;
    if ( v8 )
    {
      v47 = *(_DWORD *)(v13 + 24);
      v46 = *(_DWORD *)(v13 + 28);
    }
    v19 = (_QWORD *)(BugCheckParameter2 + 8);
    v6 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v33 = *(_QWORD *)v13;
      if ( !*(_QWORD *)v13 )
        *(_QWORD *)(v13 + 8) = v19;
      *v19 = v33;
      *(_QWORD *)v13 = v19;
    }
    else
    {
      *v19 = 0LL;
      **(_QWORD **)(v13 + 8) = v19;
      *(_QWORD *)(v13 + 8) = v19;
    }
    if ( v9 )
      *(_WORD *)(BugCheckParameter2 + 2) = Number;
  }
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v13 + 16, retaddr);
    v16 = Number;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 16), 0LL);
  }
  v20 = KeGetCurrentPrcb();
  v21 = v20->SchedulerAssist;
  if ( v21 )
  {
    if ( v20->NestingLevel <= 1u )
    {
      v38 = v21[5] - 1;
      v21[5] = v38;
      if ( !v38 && !*((_BYTE *)v21 + 25) && !*((_BYTE *)v21 + 27) )
        KiPerformUnboostKick(v20);
    }
  }
  if ( v6 )
  {
    if ( v8 )
      EtwTraceDpcEnqueueEvent(
        -203591049
      * (KiWaitNever ^ __ROR8__(
                         *(_QWORD *)(BugCheckParameter2 + 24) ^ _byteswap_uint64(BugCheckParameter2 ^ KiWaitAlways),
                         KiWaitNever)),
        *(_QWORD *)(BugCheckParameter2 + 24),
        v47,
        v46,
        v16,
        *(_BYTE *)(BugCheckParameter2 + 1));
    if ( v13 == v11 + 11816 )
    {
      _m_prefetchw((const void *)(v11 + 11886));
      v34 = *(_WORD *)(v11 + 11886);
      do
      {
        v35 = v34;
        v34 = _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 11886), v34 | 2, v34);
      }
      while ( v35 != v34 );
      if ( (v34 & 0x2F) != 0 )
        goto LABEL_44;
      v23 = 4LL;
      goto LABEL_36;
    }
    if ( *(_DWORD *)(v13 + 24) < *(_DWORD *)(v11 + 11864) )
    {
      v22 = *(_BYTE *)(BugCheckParameter2 + 1);
      if ( CurrentPrcb == (struct _KPRCB *)v11 )
      {
        if ( !v22 && *(_DWORD *)(v11 + 11868) >= *(_DWORD *)(v11 + 11872) )
        {
LABEL_61:
          _m_prefetchw((const void *)(v11 + 11884));
          v31 = *(_WORD *)(v11 + 11884);
          do
          {
            v32 = v31;
            v31 = _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 11884), v31 | 0x10, v31);
          }
          while ( v32 != v31 );
          if ( (v31 & 0x2F) != 0 || (*(_QWORD *)(*(_QWORD *)(v11 + 192) + 64LL) & *(_QWORD *)(v11 + 200)) == 0LL )
            goto LABEL_44;
        }
      }
      else if ( (unsigned __int8)(v22 - 2) > 1u )
      {
        goto LABEL_61;
      }
    }
    v23 = 2LL;
LABEL_36:
    v24 = 47;
    if ( (struct _KPRCB *)v11 == CurrentPrcb )
    {
      v24 = 41;
      LOWORD(v23) = v23 | 0x20;
    }
    _m_prefetchw((const void *)(v11 + 11884));
    v25 = *(_WORD *)(v11 + 11884);
    do
    {
      v26 = v25;
      BYTE1(v26) = BYTE1(v23) | HIBYTE(v25);
      v27 = v25;
      v25 = _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 11884), v23 | v25, v25);
    }
    while ( v27 != v25 );
    if ( ((unsigned __int16)v24 & v25) == 0 )
    {
      if ( (struct _KPRCB *)v11 == CurrentPrcb )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v26) = 2;
          HalRequestSoftwareInterrupt(v26);
        }
      }
      else if ( *(_QWORD *)(v11 + 8) != *(_QWORD *)(v11 + 24) || *(_BYTE *)(v11 + 7) )
      {
        if ( *(_QWORD *)(v11 + 25016) )
        {
          LOBYTE(v23) = 1;
          KiSetVpThreadSystemWork(v11, v23);
        }
        v29 = KiVpThreadSystemWorkPriority;
        if ( (KiVelocityFlags & 2) != 0
          && *(_QWORD *)(v11 + 25016)
          && CurrentPrcb->SchedulerAssist
          && KiVpThreadSystemWorkPriority >= 8 )
        {
          LOBYTE(v23) = 1;
          v39 = KiSetVpThreadSystemWork(CurrentPrcb, v23);
          v41 = *(_QWORD *)(v11 + 25016);
          v23 = *(unsigned int *)(v41 + 4);
          if ( *(_BYTE *)(v41 + 26) && (int)v23 < v29 )
          {
            v42 = HvlpVirtualProcessorsIdentityMapped == 0;
            v43 = CurrentPrcb->SchedulerAssist;
            v43[4] = v40;
            v44 = *(unsigned int *)(v11 + 36);
            if ( v42 )
              LODWORD(v44) = (unsigned __int8)byte_140450301[2 * (unsigned int)v44] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v44] << 6);
            v43[3] = v44;
            v23 = 0LL;
            __writemsr(0x400000C2u, (unsigned int)v44);
          }
          if ( v39 )
            KiSetVpThreadSystemWork(CurrentPrcb, 0LL);
        }
        v30 = KeGetCurrentPrcb();
        LOBYTE(v23) = 2;
        ++v30->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(Number, v23);
      }
    }
  }
LABEL_44:
  if ( v50 )
    KiSetVpThreadSystemWork(CurrentPrcb, 0LL);
  __writecr8(CurrentIrql);
  return v6;
}
