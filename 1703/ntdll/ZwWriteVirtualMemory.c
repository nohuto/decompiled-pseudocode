/*
 * XREFs of ZwWriteVirtualMemory @ 0x1800A5A40
 * Callers:
 *     sub_1800D8360 @ 0x1800D8360 (sub_1800D8360.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 *     RtlRemoteCall @ 0x1800F6C40 (RtlRemoteCall.c)
 *     sub_18010840C @ 0x18010840C (sub_18010840C.c)
 *     sub_1801088FC @ 0x1801088FC (sub_1801088FC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  NTSTATUS result; // eax

  result = 58;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
