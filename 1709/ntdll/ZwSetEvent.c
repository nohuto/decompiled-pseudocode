/*
 * XREFs of ZwSetEvent @ 0x1800A0280
 * Callers:
 *     TppCallbackEpilog @ 0x18000E3F0 (TppCallbackEpilog.c)
 *     RtlpTpTimerRundown @ 0x180011C54 (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x180012E38 (RtlpTpWaitRundown.c)
 *     RtlpTpTimerQueueRundown @ 0x180015460 (RtlpTpTimerQueueRundown.c)
 *     LdrpDropLastInProgressCount @ 0x18004B1EC (LdrpDropLastInProgressCount.c)
 *     LdrpProcessWork @ 0x18004B260 (LdrpProcessWork.c)
 *     EtwpSynchronizeWithLogger @ 0x180060E5C (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x180062A90 (EtwpLogger.c)
 *     RtlpUnWaitCriticalSection @ 0x18006F6A0 (RtlpUnWaitCriticalSection.c)
 *     EtwpSwitchBuffer @ 0x1800863E4 (EtwpSwitchBuffer.c)
 *     RtlpWnfMetaCallbackProc @ 0x180088720 (RtlpWnfMetaCallbackProc.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18009F950 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlCreateProcessReflection @ 0x1800D6CD0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D7260 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800F79E8 (RtlpHeapTrkSyncWithDiagnoser.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 14;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
