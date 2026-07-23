/*
 * XREFs of ZwReadFile @ 0x1800A53C0
 * Callers:
 *     sub_1800518CC @ 0x1800518CC (sub_1800518CC.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     sub_1800884C4 @ 0x1800884C4 (sub_1800884C4.c)
 *     RtlCheckBootStatusIntegrity @ 0x18008DE40 (RtlCheckBootStatusIntegrity.c)
 *     sub_1800E2D04 @ 0x1800E2D04 (sub_1800E2D04.c)
 *     sub_18010D57C @ 0x18010D57C (sub_18010D57C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  NTSTATUS result; // eax

  result = 6;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
