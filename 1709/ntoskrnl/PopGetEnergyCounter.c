/*
 * XREFs of PopGetEnergyCounter @ 0x1405AD408
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x1405AD3BC (PopMeasureEnergyChange.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140365AC0, 0LL);
  *a1 = xmmword_140365AF0;
  PopReleaseRwLock((ULONG_PTR)&qword_140365AC0);
}
