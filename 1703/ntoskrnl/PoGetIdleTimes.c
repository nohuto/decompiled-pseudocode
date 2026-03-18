/*
 * XREFs of PoGetIdleTimes @ 0x140088C1C
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x1404F6DA4 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x140088D10 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     PopGetIdleTimesCallback @ 0x140088D90 (PopGetIdleTimesCallback.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall PoGetIdleTimes(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // bl
  int IdleTimesCallback; // eax
  ULONG v12; // eax
  _DWORD v14[44]; // [rsp+20h] [rbp-E8h] BYREF

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  CurrentThread = KeGetCurrentThread();
  v9 = Prcb;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  IdleTimesCallback = PopGetIdleTimesCallback(v9, a2, a3);
  __writecr8(CurrentIrql);
  if ( IdleTimesCallback < 0 )
  {
    v14[0] = 1310721;
    memset(&v14[1], 0, 0xA4uLL);
    v12 = KeGetProcessorIndexFromNumber(ProcNumber);
    KeAddProcessorAffinityEx(v14, v12);
    PopExecuteOnTargetProcessors((__int64)v14, (__int64)PopGetIdleTimesCallback, a2, a3);
  }
  return PopReleaseRwLock(&PpmIdlePolicyLock);
}
