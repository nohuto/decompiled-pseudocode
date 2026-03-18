/*
 * XREFs of KxTryToAcquireSpinLock @ 0x140031B1C
 * Callers:
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x140031B10 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     KdPollBreakIn @ 0x1401FC2C0 (KdPollBreakIn.c)
 *     KiProcessNMI @ 0x1401FDD10 (KiProcessNMI.c)
 *     KeFreezeExecution @ 0x1402030B4 (KeFreezeExecution.c)
 *     EtwpTraceStackKey @ 0x140258578 (EtwpTraceStackKey.c)
 * Callees:
 *     <none>
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1)
{
  char result; // al

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented();
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  result = 0;
  _mm_pause();
  return result;
}
