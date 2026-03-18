/*
 * XREFs of VfDeadlockAfterCallDriver @ 0x1408283D8
 * Callers:
 *     VfAfterCallDriver @ 0x14081D4D4 (VfAfterCallDriver.c)
 * Callees:
 *     ViLowerIrql @ 0x1402AB208 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1402AB220 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1408299DC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140829A14 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x14082A560 (ViDeadlockSearchThread.c)
 */

void __fastcall VfDeadlockAfterCallDriver(int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax

  if ( a1 && ViDeadlockDetectionEnabled && (unsigned int)KeNumberProcessors_0 <= 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = ViRaiseIrqlToDpcLevel();
    ViDeadlockDetectionLock(0LL);
    v5 = ViDeadlockSearchThread(CurrentThread, v3, v4);
    if ( v5 )
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 44));
    ViDeadlockDetectionUnlock(0LL);
    ViLowerIrql(v2);
  }
}
