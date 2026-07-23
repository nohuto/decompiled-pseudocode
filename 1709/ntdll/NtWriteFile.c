/*
 * XREFs of NtWriteFile @ 0x1800A01C0
 * Callers:
 *     EtwpWriteBufferCompressed @ 0x18005F220 (EtwpWriteBufferCompressed.c)
 *     EtwpFlushBuffer @ 0x180062DF8 (EtwpFlushBuffer.c)
 *     EtwpFinalizeLogFileHeader @ 0x18006305C (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800649D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpWriteRemainingCompressedData @ 0x180088B58 (EtwpWriteRemainingCompressedData.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EA8B0 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EABE0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800EAD84 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWriteFile(
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

  result = 8;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
