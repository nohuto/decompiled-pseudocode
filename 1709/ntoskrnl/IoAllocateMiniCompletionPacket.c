/*
 * XREFs of IoAllocateMiniCompletionPacket @ 0x1404EB9F0
 * Callers:
 *     AlpcpAllocateCompletionPacketLookaside @ 0x1404EB3F4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     NtCreateWorkerFactory @ 0x1404EB4C8 (NtCreateWorkerFactory.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 * Callees:
 *     IopAllocateMiniCompletionPacket @ 0x1404EBA2C (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoAllocateMiniCompletionPacket(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = a1;
  LOBYTE(a1) = 4;
  result = IopAllocateMiniCompletionPacket(a1, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 56) = v3;
    *(_QWORD *)(result + 64) = a2;
    *(_BYTE *)(result + 72) = 1;
  }
  return result;
}
