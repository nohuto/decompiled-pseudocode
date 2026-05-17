/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x18009D630
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x1800494E0 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x1800824B0 (RtlQueryWnfMetaNotification.c)
 *     sub_1800D785C @ 0x1800D785C (sub_1800D785C.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800F7360 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 348LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
