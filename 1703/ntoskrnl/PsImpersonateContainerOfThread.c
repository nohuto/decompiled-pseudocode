/*
 * XREFs of PsImpersonateContainerOfThread @ 0x140044504
 * Callers:
 *     IopProcessWorkItem @ 0x140087120 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406B1A68 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140044420 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     PspRevertContainerImpersonation @ 0x140044790 (PspRevertContainerImpersonation.c)
 *     ObpIncrPointerCount @ 0x140091B70 (ObpIncrPointerCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 */

__int64 __fastcall PsImpersonateContainerOfThread(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)a1 - 48);
  ObpIncrPointerCount(a1 - 6);
  CurrentThread = KeGetCurrentThread();
  PspRevertContainerImpersonation(CurrentThread);
  v3 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
  CurrentThread[1].WaitBlock[1].Object = a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  __writecr8(v3);
  v4 = *(_QWORD *)(a1[68] + 944LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 1016);
    if ( v5 )
      KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v5);
  }
  return EtwTraceThreadWorkOnBehalfUpdate(0LL, a1);
}
