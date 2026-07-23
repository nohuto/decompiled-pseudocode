/*
 * XREFs of ZwDeviceIoControlFile @ 0x1800A53E0
 * Callers:
 *     sub_18008CE44 @ 0x18008CE44 (sub_18008CE44.c)
 *     sub_180109DC0 @ 0x180109DC0 (sub_180109DC0.c)
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
