/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x14046788C
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140454A00 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140467560 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140584544 (WdipSemEnableScenario.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140345B58, 0LL);
  v3 = *a1;
  v4 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v4 != a1 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  --dword_140345B50;
  ExReleasePushLockEx((ULONG_PTR)&qword_140345B58, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return WdipSemFastFree(3LL, a1);
}
