/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x1800A6490
 * Callers:
 *     sub_1800134A4 @ 0x1800134A4 (sub_1800134A4.c)
 *     sub_180017914 @ 0x180017914 (sub_180017914.c)
 *     sub_180018A00 @ 0x180018A00 (sub_180018A00.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  NTSTATUS result; // eax

  result = 141;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
