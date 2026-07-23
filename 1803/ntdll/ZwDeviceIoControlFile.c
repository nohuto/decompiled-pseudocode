/*
 * XREFs of ZwDeviceIoControlFile @ 0x18009ABA0
 * Callers:
 *     sub_18008A314 @ 0x18008A314 (sub_18008A314.c)
 *     sub_18010CC28 @ 0x18010CC28 (sub_18010CC28.c)
 *     sub_18010E570 @ 0x18010E570 (sub_18010E570.c)
 *     sub_18010E690 @ 0x18010E690 (sub_18010E690.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 7;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
