/*
 * XREFs of ZwQueryWnfStateData @ 0x18009D610
 * Callers:
 *     RtlQueryWnfStateData @ 0x18007C1B0 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180081FA0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800F7360 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 347LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
