/*
 * XREFs of WdipSemActivateInstance @ 0x14073EE1C
 * Callers:
 *     WdipSemDisableScenario @ 0x1405AB6EC (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1405AB884 (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403613D8, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_1403613D8, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
