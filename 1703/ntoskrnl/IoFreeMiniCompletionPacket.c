/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x140470DB0
 * Callers:
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14003F300 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x14003F350 (ExpDeleteWorkerFactory.c)
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14012B400 (ExpWorkerFactoryCompletionPacketRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoFreeMiniCompletionPacket(_QWORD *a1)
{
  a1[7] = 0LL;
  return IopFreeMiniCompletionPacket(a1);
}
