/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14055F6A0
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140089390 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     ExpDeleteWorkerFactory @ 0x1400B8940 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400B89E0 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x14059C710 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoFreeMiniCompletionPacket(_QWORD *a1)
{
  a1[7] = 0LL;
  return IopFreeMiniCompletionPacket(a1);
}
