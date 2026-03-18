/*
 * XREFs of KxTryToAcquireSpinLock @ 0x1402050F8
 * Callers:
 *     KdPollBreakIn @ 0x140201FD0 (KdPollBreakIn.c)
 *     KiProcessNMI @ 0x140203ED0 (KiProcessNMI.c)
 *     KeFreezeExecution @ 0x1402093B0 (KeFreezeExecution.c)
 *     EtwpTraceStackKey @ 0x1402821CC (EtwpTraceStackKey.c)
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x140205068 (KiTryToAcquireSpinLockInstrumented.c)
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1)
{
  char result; // al

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented(a1);
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  result = 0;
  _mm_pause();
  return result;
}
