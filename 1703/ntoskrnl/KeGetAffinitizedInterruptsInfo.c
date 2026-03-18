/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x1402055D0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     ExSystemExceptionFilter @ 0x140430F30 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(_WORD *a1)
{
  KeCopyAffinityEx((__int64)a1, (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
  return 0LL;
}
