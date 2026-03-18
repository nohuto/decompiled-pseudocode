/*
 * XREFs of KeThawExecution @ 0x14024738C
 * Callers:
 *     ExpWaitForBootDevices @ 0x1402B88C0 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x140803DB4 (KdExitDebugger.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiEndDebugAccumulation @ 0x1402474FC (KiEndDebugAccumulation.c)
 *     KiSendThawExecution @ 0x1402478BC (KiSendThawExecution.c)
 */

__int64 __fastcall KeThawExecution(char a1)
{
  char v2; // bl
  __int64 v3; // rcx
  unsigned __int8 v4; // di
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 result; // rax

  v2 = 0;
  if ( (KiFreezeFlag & 8) == 0 )
    v2 = KdPortLocked;
  ((void (__fastcall *)(_QWORD, _QWORD))off_140398818[0])(0LL, 0LL);
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
  v5 = __readcr4();
  if ( (v5 & 0x20080) != 0 )
  {
    __writecr4(v5 ^ 0x80);
    __writecr4(v5);
  }
  else
  {
    v6 = __readcr3();
    __writecr3(v6);
  }
  KiEndDebugAccumulation(KeGetCurrentPrcb());
  result = v4;
  __writecr8(v4);
  if ( a1 )
    _enable();
  return result;
}
