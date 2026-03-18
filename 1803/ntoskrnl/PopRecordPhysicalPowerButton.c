/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x14075D3A8
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14027FBD0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     RtlpSystemBootStatusRequest @ 0x140611E5C (RtlpSystemBootStatusRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_1403A7E18 + dword_1403A7E1C) & 0x3F);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_1403A7E20 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_1403A7E28 = MEMORY[0xFFFFF78000000014];
    ++dword_1403A7E18;
    LOBYTE(xmmword_1403E9198) = PopBsdCurrentCsPhase;
    DWORD1(xmmword_1403E9198) = PopBsdTransitionLatestCheckpointId;
    DWORD2(xmmword_1403E9198) = PopBsdTransitionLatestCheckpointType;
    HIDWORD(xmmword_1403E9198) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = PopBsdPowerWatchdogArmed & 1 | HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_1403E9188 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_1403E9188);
    qword_1403A7E20 &= ~v2;
    ++dword_1403A7E1C;
    WORD6(xmmword_1403E9188) = MEMORY[0xFFFFF780000002C4];
    qword_1403A7E30 = MEMORY[0xFFFFF78000000014];
  }
  if ( dword_1403A7E18 < (unsigned int)dword_1403A7E1C || (unsigned int)(dword_1403A7E18 - dword_1403A7E1C) > 1 )
    byte_1403A7E48 = 1;
  v3 = 14;
  v5 = 48;
  v4 = &PopBsdPhysicalPowerButtonInfo;
  if ( (int)RtlpSystemBootStatusRequest(0x20u, (__int64)&v3, 1u, 0LL) < 0 && HIWORD(xmmword_1403E9188) != 0xFFFF )
    ++HIWORD(xmmword_1403E9188);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
