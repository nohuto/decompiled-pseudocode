/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1406C547C
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1402346D0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     RtlGetSetBootStatusData @ 0x1405820B0 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140585800 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140585EE0 (RtlUnlockBootStatusData.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  HANDLE FileHandle; // [rsp+48h] [rbp+10h] BYREF

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    LOBYTE(xmmword_140387698) = PopBsdCurrentCsPhase;
    DWORD1(xmmword_140387698) = PopBsdTransitionLatestCheckpointId;
    DWORD2(xmmword_140387698) = PopBsdTransitionLatestCheckpointType;
    HIDWORD(xmmword_140387698) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = PopBsdPowerWatchdogArmed & 1 | HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_140387688 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140387688);
    WORD6(xmmword_140387688) = MEMORY[0xFFFFF780000002C4];
  }
  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdItemPowerButtonPressInfo, &PopBsdPhysicalPowerButtonInfo, 0x30u, 0LL);
    RtlUnlockBootStatusData(FileHandle);
  }
  else if ( HIWORD(xmmword_140387688) != 0xFFFF )
  {
    ++HIWORD(xmmword_140387688);
  }
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
