/*
 * XREFs of PoGetIdleTimes @ 0x14008CD70
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x140488240 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x14008CE90 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     PopGetIdleTimesCallback @ 0x14008D170 (PopGetIdleTimesCallback.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall PoGetIdleTimes(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  __int64 ProcessorIndexFromNumber; // rbx
  __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 CurrentIrql; // bl
  int IdleTimesCallback; // eax
  ULONG v11; // eax
  _DWORD v12[44]; // [rsp+20h] [rbp-E8h] BYREF

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( (unsigned int)ProcessorIndexFromNumber >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    v7 = 0LL;
  else
    v7 = KiProcessorBlock[ProcessorIndexFromNumber];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  IdleTimesCallback = PopGetIdleTimesCallback(v7, a2, a3);
  __writecr8(CurrentIrql);
  if ( IdleTimesCallback < 0 )
  {
    v12[0] = 1310721;
    memset(&v12[1], 0, 0xA4uLL);
    v11 = KeGetProcessorIndexFromNumber(ProcNumber);
    KeAddProcessorAffinityEx(v12, v11);
    PopExecuteOnTargetProcessors(v12, PopGetIdleTimesCallback, a2, a3);
  }
  if ( qword_140365E98 )
    qword_140365E98 = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
  KeLeaveCriticalRegion();
}
