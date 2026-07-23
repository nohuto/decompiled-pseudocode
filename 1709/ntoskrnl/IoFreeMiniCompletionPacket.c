/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14050AFE0
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14006B320 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400D2F28 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x1400D2F70 (ExpDeleteWorkerFactory.c)
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x1404A39C0 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IoFreeMiniCompletionPacket(__int64 a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  IopFreeMiniCompletionPacket((_SLIST_ENTRY *)a1);
}
