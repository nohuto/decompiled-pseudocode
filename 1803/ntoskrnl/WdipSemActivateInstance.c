/*
 * XREFs of WdipSemActivateInstance @ 0x14060D9FC
 * Callers:
 *     WdipSemDisableScenario @ 0x14060D4B8 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x14060D740 (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403A2DD8, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_1403A2DD8, 0LL, v3, v4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
