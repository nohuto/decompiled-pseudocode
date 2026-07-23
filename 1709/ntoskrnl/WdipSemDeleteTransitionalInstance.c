/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x14073EEE8
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14058F6D0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x1405AB6EC (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1405AB884 (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     WdipSemFastFree @ 0x1405AAA94 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemDeleteTransitionalInstance(_SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _SLIST_ENTRY *Next; // rdx
  _SLIST_ENTRY **v4; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403613D8, 0LL);
  Next = a1->Next;
  if ( *(&a1->Next->Next + 1) != a1 || (v4 = (_SLIST_ENTRY **)*((_QWORD *)&a1->Next + 1), *v4 != a1) )
    __fastfail(3u);
  *v4 = Next;
  *((_QWORD *)&Next->Next + 1) = v4;
  --dword_1403613D0;
  ExReleasePushLockEx((ULONG_PTR)&qword_1403613D8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return WdipSemFastFree(3, a1);
}
