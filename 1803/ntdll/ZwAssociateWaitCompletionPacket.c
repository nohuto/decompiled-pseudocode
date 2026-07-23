/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x18009BC70
 * Callers:
 *     sub_180029160 @ 0x180029160 (sub_180029160.c)
 *     sub_180058424 @ 0x180058424 (sub_180058424.c)
 *     sub_180076198 @ 0x180076198 (sub_180076198.c)
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

  result = 142;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
