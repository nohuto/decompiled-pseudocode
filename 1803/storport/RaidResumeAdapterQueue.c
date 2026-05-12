/*
 * XREFs of RaidResumeAdapterQueue @ 0x1C000EFB0
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0003730 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000DA0C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C00251DC (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0028C1C (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C0029890 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C002B700 (RaidPauseTimerDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C0030010 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C0030B10 (StorPortPause.c)
 *     StorPortAdapterActiveCondition @ 0x1C0036380 (StorPortAdapterActiveCondition.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 */

__int64 __fastcall RaidResumeAdapterQueue(__int64 a1)
{
  signed __int32 v1; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C0056210 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return (unsigned int)v1;
}
