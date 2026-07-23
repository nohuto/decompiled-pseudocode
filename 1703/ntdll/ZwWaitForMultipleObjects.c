/*
 * XREFs of ZwWaitForMultipleObjects @ 0x1800A5E50
 * Callers:
 *     TpTrimPools @ 0x180070D30 (TpTrimPools.c)
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 *     sub_1800DE5E4 @ 0x1800DE5E4 (sub_1800DE5E4.c)
 *     sub_1800F68A4 @ 0x1800F68A4 (sub_1800F68A4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForMultipleObjects(
        ULONG Count,
        HANDLE Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 91;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
