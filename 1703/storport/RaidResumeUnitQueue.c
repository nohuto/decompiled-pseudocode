/*
 * XREFs of RaidResumeUnitQueue @ 0x1C000D1B0
 * Callers:
 *     RaidAdapterResumeUnit @ 0x1C000CDC8 (RaidAdapterResumeUnit.c)
 *     RaidSetUnitPauseTimer @ 0x1C000D344 (RaidSetUnitPauseTimer.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E860 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C000FDF0 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidCompletionDpcRoutine @ 0x1C002EBF0 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C00329A0 (StorPortCompleteRequest.c)
 *     RaUnitRequestPowerUp @ 0x1C0035928 (RaUnitRequestPowerUp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000D264 (DbgLogRequest.c)
 *     RaidResumeIoQueue @ 0x1C000D2E4 (RaidResumeIoQueue.c)
 */

__int64 __fastcall RaidResumeUnitQueue(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned __int8 v5; // dl
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v2 = RaidResumeIoQueue(a1 + 384);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  if ( v3 )
    v5 = *(_BYTE *)(v3 + 56);
  else
    v5 = -1;
  if ( (qword_1C00551F8 & 0x200) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      5,
      (_DWORD)retaddr,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | (((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88)) | (((unsigned __int8)*(_DWORD *)(a1 + 88) | (v5 << 8)) << 8)) << 8),
      *(int *)(a1 + 428),
      v2,
      0LL);
  return v4;
}
