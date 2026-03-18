/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1406F55C8
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140249C30 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     RtlpSystemBootStatusRequest @ 0x1405AC0A4 (RtlpSystemBootStatusRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  int v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 *v3; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+30h] [rbp-18h]

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    LOBYTE(xmmword_1403A2B70) = PopBsdCurrentCsPhase;
    DWORD1(xmmword_1403A2B70) = PopBsdTransitionLatestCheckpointId;
    DWORD2(xmmword_1403A2B70) = PopBsdTransitionLatestCheckpointType;
    HIDWORD(xmmword_1403A2B70) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = PopBsdPowerWatchdogArmed & 1 | HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_1403A2B60 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_1403A2B60);
    WORD6(xmmword_1403A2B60) = MEMORY[0xFFFFF780000002C4];
  }
  v2 = 14;
  v4 = 48;
  v3 = &PopBsdPhysicalPowerButtonInfo;
  if ( (int)RtlpSystemBootStatusRequest(0x20u, (__int64)&v2, 1u, 0LL) < 0 && HIWORD(xmmword_1403A2B60) != 0xFFFF )
    ++HIWORD(xmmword_1403A2B60);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
