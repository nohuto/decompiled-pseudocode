/*
 * XREFs of RaidResumeAdapterQueue @ 0x1C00119A4
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C000CC80 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011770 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     StorPortAdapterActiveCondition @ 0x1C001CE20 (StorPortAdapterActiveCondition.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002BB7C (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C002E734 (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C002EBF0 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C002F700 (RaidPauseTimerDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C00329A0 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C0032F20 (StorPortPause.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000D264 (DbgLogRequest.c)
 */

__int64 __fastcall RaidResumeAdapterQueue(__int64 a1)
{
  signed __int32 v1; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C00551F8 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return (unsigned int)v1;
}
