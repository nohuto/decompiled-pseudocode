/*
 * XREFs of PoGetIdleTimes @ 0x14003837C
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x14052C0C4 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     KeGetProcessorIndexFromNumber @ 0x140038470 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopGetIdleTimesCallback @ 0x1400384F0 (PopGetIdleTimesCallback.c)
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall PoGetIdleTimes(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // bl
  int IdleTimesCallback; // eax
  ULONG v13; // eax
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
    v13 = KeGetProcessorIndexFromNumber(ProcNumber);
    KeAddProcessorAffinityEx(v14, v13);
    PopExecuteOnTargetProcessors(v14, PopGetIdleTimesCallback, a2, a3);
  }
  return PopReleaseRwLock(&PpmIdlePolicyLock);
}
