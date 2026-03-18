/*
 * XREFs of PopGetEnergyCounter @ 0x1407646DC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x140764728 (PopMeasureEnergyChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1403AA420, 0LL);
  *a1 = xmmword_1403AA450;
  PopReleaseRwLock((ULONG_PTR)&qword_1403AA420);
}
