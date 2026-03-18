/*
 * XREFs of KxTryToAcquireSpinLock @ 0x1400B8074
 * Callers:
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x1400B8060 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     KdPollBreakIn @ 0x14023F130 (KdPollBreakIn.c)
 *     KiProcessNMI @ 0x140241770 (KiProcessNMI.c)
 *     KeFreezeExecution @ 0x140246F28 (KeFreezeExecution.c)
 *     EtwpTraceStackKey @ 0x1402B4280 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1402B5B78 (EtwpCovSampTryAcquireBufferLock.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x14024281C (KiTryToAcquireSpinLockInstrumented.c)
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v4; // bl

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented();
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 1;
  LOBYTE(a2) = 1;
  KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v4 = 0;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    _mm_pause();
  }
  return v4;
}
