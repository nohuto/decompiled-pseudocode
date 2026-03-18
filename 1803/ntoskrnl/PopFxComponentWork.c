/*
 * XREFs of PopFxComponentWork @ 0x14016D8E0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxIdleWorker @ 0x140078330 (PopFxIdleWorker.c)
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 */

void __fastcall PopFxComponentWork(__int64 a1)
{
  do
    PopFxIdleWorker(*(__int64 **)(a1 + 80), *(_DWORD *)(a1 + 16));
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF) != 1 );
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(a1 + 80) + 216LL), 0LL, 0x20u);
}
