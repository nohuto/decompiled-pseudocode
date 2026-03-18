/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x14060C924
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14052DCB0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x14060D4B8 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x14060D740 (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     WdipSemFastFree @ 0x14060CB80 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD *v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403A2DD8, 0LL);
  v5 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  --dword_1403A2DD0;
  ExReleasePushLockEx((ULONG_PTR)&qword_1403A2DD8, 0LL, v3, v4);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return WdipSemFastFree(3LL, a1);
}
