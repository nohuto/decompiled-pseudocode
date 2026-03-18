/*
 * XREFs of ZwFlushInstructionCache @ 0x14017FB20
 * Callers:
 *     DbgkpSendApiMessage @ 0x140681108 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140681200 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140681320 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, ULONG NumberOfBytesToFlush)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, *(_QWORD *)&NumberOfBytesToFlush);
}
