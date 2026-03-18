/*
 * XREFs of PopFxComponentWork @ 0x140158960
 * Callers:
 *     <none>
 * Callees:
 *     PopFxIdleWorker @ 0x1400FE0E4 (PopFxIdleWorker.c)
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 */

void __fastcall PopFxComponentWork(__int64 a1)
{
  do
    PopFxIdleWorker(*(__int64 **)(a1 + 80), *(_DWORD *)(a1 + 16));
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF) != 1 );
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(a1 + 80) + 216LL), 0LL, 0x20u);
}
