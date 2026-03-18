/*
 * XREFs of PopFxComponentWork @ 0x14014A960
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140022800 (IoReleaseRemoveLockEx.c)
 *     PopFxIdleWorker @ 0x140069984 (PopFxIdleWorker.c)
 */

void __fastcall PopFxComponentWork(__int64 a1)
{
  do
    PopFxIdleWorker(*(__int64 **)(a1 + 80), *(_DWORD *)(a1 + 16));
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF) != 1 );
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(a1 + 80) + 216LL), 0LL, 0x20u);
}
