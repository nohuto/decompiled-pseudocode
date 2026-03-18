/*
 * XREFs of KeThawExecution @ 0x1402034E8
 * Callers:
 *     ExpWaitForBootDevices @ 0x14025AB50 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x140789B30 (KdExitDebugger.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeFlushCurrentTbImmediately @ 0x14017BB00 (KeFlushCurrentTbImmediately.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiEndDebugAccumulation @ 0x140203640 (KiEndDebugAccumulation.c)
 *     KiSendThawExecution @ 0x140203980 (KiSendThawExecution.c)
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
  off_14033B448[0]();
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
