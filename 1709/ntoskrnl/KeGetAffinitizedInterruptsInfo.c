/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x14020B770
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     ExSystemExceptionFilter @ 0x140515700 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(_WORD *a1)
{
  KeCopyAffinityEx((__int64)a1, (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
  return 0LL;
}
