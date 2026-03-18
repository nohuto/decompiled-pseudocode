/*
 * XREFs of KiEpfCompletionIsr @ 0x14024B1F0
 * Callers:
 *     KiHvInterrupt @ 0x1401AF010 (KiHvInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 */

__int64 KiEpfCompletionIsr()
{
  __int64 result; // rax

  if ( KiEpfCompletionQueue )
  {
    result = *(_QWORD *)(KiEpfCompletionQueue + 8);
    if ( *(_QWORD *)KiEpfCompletionQueue != result )
    {
      _InterlockedIncrement(&dword_1403AD928);
      return KiInsertQueueDpc((ULONG_PTR)&KiEpfCompletionDpc, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
