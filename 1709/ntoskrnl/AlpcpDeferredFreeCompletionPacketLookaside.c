/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400D2F28
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14006B170 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400D2EC8 (AlpcpFreeCompletionPacketLookaside.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IoFreeMiniCompletionPacket @ 0x14050AFE0 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_QWORD *P)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(P[3 * i + 8]);
  ExFreePoolWithTag(P, 0);
}
