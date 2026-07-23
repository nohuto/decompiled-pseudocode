/*
 * XREFs of ZwReadVirtualMemory @ 0x1800A5AE0
 * Callers:
 *     sub_1800023CC @ 0x1800023CC (sub_1800023CC.c)
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     sub_1800681C0 @ 0x1800681C0 (sub_1800681C0.c)
 *     sub_1800DD168 @ 0x1800DD168 (sub_1800DD168.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 *     PssNtFreeRemoteSnapshot @ 0x180106810 (PssNtFreeRemoteSnapshot.c)
 *     sub_1801088FC @ 0x1801088FC (sub_1801088FC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  NTSTATUS result; // eax

  result = 63;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
