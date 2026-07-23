/*
 * XREFs of ZwUpdateWnfStateData @ 0x18009E370
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007D640 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180082DB0 (RtlTestAndPublishWnfStateData.c)
 *     sub_1800D785C @ 0x1800D785C (sub_1800D785C.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800F7360 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  NTSTATUS result; // eax

  result = 454;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
