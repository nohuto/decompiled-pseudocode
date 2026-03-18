/*
 * XREFs of KeThawExecution @ 0x1402097E0
 * Callers:
 *     ExpWaitForBootDevices @ 0x1402842A0 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x140796D74 (KdExitDebugger.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeFlushCurrentTbImmediately @ 0x14017B290 (KeFlushCurrentTbImmediately.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiEndDebugAccumulation @ 0x140209938 (KiEndDebugAccumulation.c)
 *     KiSendThawExecution @ 0x140209C84 (KiSendThawExecution.c)
 */

__int64 __fastcall KeThawExecution(char a1)
{
  char v2; // bl
  __int64 v3; // rcx
  unsigned __int8 v4; // di
  __int64 result; // rax

  v2 = KdPortLocked;
  if ( (KiFreezeFlag & 8) != 0 )
    v2 = 0;
  off_140353478[0]();
  if ( !PoAllProcIntrDisabled )
  {
    MEMORY[0xFFFFF78000000350] = KeQueryPerformanceCounter(0LL);
    KiInterruptTimeErrorAccumulator = 0LL;
  }
  LOBYTE(v3) = 1;
  KiSendThawExecution(v3);
  v4 = KiOldIrql;
  KiFreezeFlag = 0;
  KxReleaseSpinLock(&KiFreezeExecutionLock);
  if ( v2 )
    KxReleaseSpinLock(&KdDebuggerLock);
  KeFlushCurrentTbImmediately();
  KiEndDebugAccumulation(KeGetCurrentPrcb());
  result = v4;
  __writecr8(v4);
  if ( a1 )
    _enable();
  return result;
}
