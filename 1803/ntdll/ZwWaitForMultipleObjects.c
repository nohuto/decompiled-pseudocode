/*
 * XREFs of ZwWaitForMultipleObjects @ 0x18009B610
 * Callers:
 *     TpTrimPools @ 0x18007F020 (TpTrimPools.c)
 *     RtlCreateProcessReflection @ 0x1800D0D60 (RtlCreateProcessReflection.c)
 *     sub_1800D7E44 @ 0x1800D7E44 (sub_1800D7E44.c)
 *     sub_1800F3E58 @ 0x1800F3E58 (sub_1800F3E58.c)
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
