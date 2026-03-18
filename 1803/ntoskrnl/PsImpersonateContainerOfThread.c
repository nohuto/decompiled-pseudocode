/*
 * XREFs of PsImpersonateContainerOfThread @ 0x1400F3930
 * Callers:
 *     IopProcessWorkItem @ 0x1400B61C0 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407474A4 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140060FE0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     KeClearSystemPriority @ 0x1400F3610 (KeClearSystemPriority.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     ObpIncrPointerCount @ 0x1400F3900 (ObpIncrPointerCount.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x140247AD0 (KeCheckAndApplyBamQos.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402AF574 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

BOOLEAN __fastcall PsImpersonateContainerOfThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID Object; // rbp
  unsigned __int8 CurrentIrql; // bp
  int v5; // edi
  unsigned __int8 v6; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v9; // al
  __int64 v10; // r8
  struct _KPRCB *v11; // r14
  _QWORD *v12; // rdi
  __int64 v13; // rdi
  struct _KPRCB *v14; // r8
  __int64 v15; // rcx
  REGHANDLE v16; // rbx
  BOOLEAN result; // al
  __int64 v18; // rdx
  __int64 v19; // rdx
  struct _KPRCB *v20; // r12
  _KTHREAD *NextThread; // r13
  __int64 v22; // r8
  __int64 v23; // rdx
  __int16 v24; // di
  unsigned int v25; // edx
  unsigned int v26; // eax
  bool v27; // di
  unsigned int v28; // edi
  int v29; // eax
  _QWORD *v30; // rdx
  signed __int32 v31; // ett
  unsigned int v32; // eax
  unsigned int v33; // ecx
  int v34; // [rsp+40h] [rbp-88h] BYREF
  int v35; // [rsp+44h] [rbp-84h] BYREF
  int v36; // [rsp+48h] [rbp-80h] BYREF
  int v37; // [rsp+4Ch] [rbp-7Ch] BYREF
  _QWORD *v38; // [rsp+50h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-68h] BYREF
  int *v40; // [rsp+70h] [rbp-58h]
  __int64 v41; // [rsp+78h] [rbp-50h]
  int v42; // [rsp+C0h] [rbp-8h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  if ( ObpTraceFlags )
    ObpPushStackInfo(a1 - 48);
  ObpIncrPointerCount((volatile signed __int64 *)(a1 - 48));
  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread[1].WaitBlock[1].Object;
  if ( Object )
  {
    KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
    v28 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
    CurrentThread[1].WaitBlock[1].Object = 0LL;
    KeClearSystemPriority((__int64)CurrentThread);
    ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
    __writecr8(v28);
    EtwTraceThreadWorkOnBehalfUpdate(Object, 0LL);
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x746E6F43u);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, CurrentIrql);
  CurrentThread[1].WaitBlock[1].Object = (PVOID)a1;
  v5 = *(char *)(a1 + 195);
  if ( v5 > 15 )
    LOBYTE(v5) = 15;
  v38 = 0LL;
  v6 = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v34 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v29 = SchedulerAssist[5];
      SchedulerAssist[5] = v29 + 1;
      if ( v29 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v34);
    while ( CurrentThread->ThreadLock );
    LOBYTE(v23) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, v23);
  }
  CurrentThread->SystemPriority = v5;
  v9 = CurrentThread->PriorityFloorCounts[(char)v5];
  if ( v9 == 0xFF )
    KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)v5, 1uLL, 0LL);
  CurrentThread->PriorityFloorCounts[(char)v5] = v9 + 1;
  CurrentThread->PriorityFloorSummary |= 1 << v5;
  if ( CurrentThread->Priority < (char)v5 )
    KiSetPriorityThread((__int64)CurrentThread, (__int64 *)&v38, v5);
  CurrentThread->ThreadLock = 0LL;
  KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = v38;
  while ( v12 )
  {
    v30 = v12 - 27;
    v12 = (_QWORD *)*v12;
    KiDeferredReadyThread(v11, v30, v10);
  }
  if ( v6 < 2u )
  {
    v13 = (__int64)v11->CurrentThread;
    if ( v11->NextThread )
    {
      KiAbProcessContextSwitch(v11->CurrentThread, 0LL);
      v20 = KeGetCurrentPrcb();
      v35 = 0;
      while ( 1 )
      {
        LOBYTE(v19) = 1;
        KiSetVpThreadSpinLockCount(v20, v19);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v11->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v20, 0LL);
        do
          KeYieldProcessorEx(&v35);
        while ( v11->PrcbLock );
      }
      NextThread = v11->NextThread;
      v11->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v11, v13, 0LL);
      _enable();
      v11->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v22 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v22 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(v13 + 643) = 32;
      *(_BYTE *)(v13 + 390) = v6;
      KiQueueReadyThread(v11, v13, v22);
      if ( !(unsigned __int8)KiSwapContext(v13, NextThread, v6) )
        goto LABEL_19;
    }
    else if ( (*(_DWORD *)(v13 + 116) & 0x40) == 0 )
    {
LABEL_19:
      __writecr8(v6);
      goto LABEL_20;
    }
    __writecr8(1uLL);
    *(_DWORD *)(v13 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_19;
  }
  if ( v11->NextThread && !v11->DpcRoutineActive )
    KiRequestSoftwareInterrupt(v11, 2);
LABEL_20:
  v14 = KeGetCurrentPrcb();
  if ( *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) )
  {
    v24 = v42;
    _disable();
    v25 = *(_DWORD *)(a1 + 120) & 3;
    v26 = *((_DWORD *)&CurrentThread->0 + 1) & 3;
    v27 = (v24 & 0x200) != 0;
    if ( v25 != v26 && (v25 == 3 || v26 == 3 || v25 < v26) )
    {
      do
        v31 = *(&CurrentThread->MiscFlags + 1);
      while ( v31 != _InterlockedCompareExchange(
                       (volatile signed __int32 *)&CurrentThread->116 + 1,
                       v25 | v31 & 0xFFFFFFFC,
                       v31) );
      v32 = v14->PrcbFlags.PrcbFlags & 3;
      v33 = *((_DWORD *)&CurrentThread->0 + 1) & 3;
      if ( v33 != v32 && (v33 == 3 || v32 == 3 || v33 < v32) )
        KeCheckAndApplyBamQos(v14, CurrentThread);
    }
    if ( v27 )
      _enable();
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  else
    PspThreadWorkOnBehalfLock = 0;
  KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  __writecr8(CurrentIrql);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 944LL);
  if ( v15 )
  {
    v18 = *(_QWORD *)(v15 + 1016);
    if ( v18 )
      KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v18);
  }
  v16 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate);
  if ( result )
  {
    v36 = 0;
    UserData.Ptr = (ULONGLONG)&v36;
    v37 = *(_DWORD *)(a1 + 1600);
    *(_QWORD *)&UserData.Size = 4LL;
    v40 = &v37;
    v41 = 4LL;
    return EtwWriteEx(v16, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
