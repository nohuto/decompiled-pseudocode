/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400B89E0
 * Callers:
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400B88D8 (AlpcpFreeCompletionPacketLookaside.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400F3D30 (AlpcpLookasidePacketCallbackRoutine.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IoFreeMiniCompletionPacket @ 0x14055F6A0 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_QWORD *P)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(P[3 * i + 8]);
  ExFreePoolWithTag(P, 0);
}
