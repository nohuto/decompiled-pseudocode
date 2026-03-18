/*
 * XREFs of PspRevertContainerImpersonation @ 0x1400F1810
 * Callers:
 *     IopProcessWorkItem @ 0x1400B61C0 (IopProcessWorkItem.c)
 *     NtRevertContainerImpersonation @ 0x140284768 (NtRevertContainerImpersonation.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     KeClearSystemPriority @ 0x1400F3610 (KeClearSystemPriority.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(ULONG_PTR BugCheckParameter1)
{
  _DWORD *v1; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *v4; // rcx
  _DWORD *SchedulerAssist; // rdx
  REGHANDLE v6; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v9; // rdx
  struct _KPRCB *v10; // rbp
  int v11; // eax
  int v12; // [rsp+40h] [rbp-58h] BYREF
  int v13; // [rsp+44h] [rbp-54h] BYREF
  int v14; // [rsp+48h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-48h] BYREF
  int *v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  v1 = *(_DWORD **)(BugCheckParameter1 + 1920);
  if ( !v1 )
    return 3221225473LL;
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x200) != 0 )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, BugCheckParameter1, 0LL);
    _enable();
    v10 = KeGetCurrentPrcb();
    v12 = 0;
    while ( 1 )
    {
      LOBYTE(v9) = 1;
      KiSetVpThreadSpinLockCount(v10, v9);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v10, 0LL);
      do
        KeYieldProcessorEx(&v12);
      while ( CurrentPrcb->PrcbLock );
    }
    _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x12u);
    *(_QWORD *)(BugCheckParameter1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 9u);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    __writecr8(0LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, CurrentIrql);
  *(_QWORD *)(BugCheckParameter1 + 1920) = 0LL;
  KeClearSystemPriority(BugCheckParameter1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  else
    PspThreadWorkOnBehalfLock = 0;
  v4 = KeGetCurrentPrcb();
  SchedulerAssist = v4->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v4->NestingLevel <= 1u )
    {
      v11 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v11;
      if ( !v11 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(v4);
    }
  }
  __writecr8(CurrentIrql);
  v6 = EtwpPsProvRegHandle;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate) )
  {
    v13 = v1[400];
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v13;
    v14 = 0;
    v16 = &v14;
    v17 = 4LL;
    EtwWriteEx(v6, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  ObDereferenceObjectDeferDeleteWithTag(v1, 0x746E6F43u);
  return 0LL;
}
