/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x14003F300
 * Callers:
 *     AlpcpFreeCompletionPacketLookaside @ 0x14003F3F0 (AlpcpFreeCompletionPacketLookaside.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400ED6B0 (AlpcpLookasidePacketCallbackRoutine.c)
 * Callees:
 *     IoFreeMiniCompletionPacket @ 0x140470DB0 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_DWORD *a1)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < a1[2]; i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(*(_QWORD *)&a1[6 * i + 16]);
  ExFreePoolWithTag(a1, 0);
}
