/*
 * XREFs of NtInitializeRegistry @ 0x1405AD498
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwInitializeRegistry @ 0x14017F7C0 (ZwInitializeRegistry.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 *     PoClearTransitionMarker @ 0x1405ABF50 (PoClearTransitionMarker.c)
 *     RtlLockBootStatusData @ 0x1405ACB30 (RtlLockBootStatusData.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405AD678 (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1405AD6F0 (ExNotifyPlatformBinaryExecuted.c)
 *     PoInitHiberServices @ 0x1405AD774 (PoInitHiberServices.c)
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     PsBootPhaseComplete @ 0x1405C1C0C (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1405C1F1C (ExpRefreshSystemTime.c)
 *     PnpBootPhaseComplete @ 0x1405C4A2C (PnpBootPhaseComplete.c)
 *     EtwInitialize @ 0x1405C6814 (EtwInitialize.c)
 *     CmpCmdInit @ 0x1405CBF00 (CmpCmdInit.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405E18B4 (CmpInitializeSystemHivesLoad.c)
 *     CmpUpdatePhaseAccessBit @ 0x1405EC740 (CmpUpdatePhaseAccessBit.c)
 *     CmpSyncNextBackupHive @ 0x140695A78 (CmpSyncNextBackupHive.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 */

NTSTATUS __stdcall NtInitializeRegistry(USHORT Flag)
{
  NTSTATUS v3; // ebx
  unsigned __int16 v4; // di
  __int64 v5; // rcx
  int SystemThread; // eax
  unsigned __int64 v7; // [rsp+50h] [rbp-30h] BYREF
  int v8; // [rsp+58h] [rbp-28h]
  _QWORD v9[4]; // [rsp+60h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF

  if ( KeGetCurrentThread()->PreviousMode == 1 )
  {
    if ( Flag != 1002 )
      return ZwInitializeRegistry(Flag);
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
      return CmpSyncNextBackupHive();
    return -1073741727;
  }
  if ( Flag > 0x3E9u )
    return -1073741811;
  if ( Flag < 2u )
  {
    if ( CmFirstTime != 1 )
      return -1073741790;
    CmFirstTime = 0;
    EtwInitialize(2LL);
    CmCompleteInitMachineConfig(&IopAutoReboot);
    CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive();
    LOBYTE(v5) = Flag == 1;
    CmpCmdInit(v5);
    CmpUnlockRegistry();
    if ( Flag != 1 )
    {
      CmpLoadingSystemHivesActive = 1;
      if ( CmpInitRmLogOnLoad || CmpForceSynchronousMachineHiveLoad )
      {
        CmpFinishSystemHivesLoad(1LL);
      }
      else
      {
        SystemThread = PsCreateSystemThreadEx(
                         (__int64)&Handle,
                         0x1FFFFF,
                         0LL,
                         0LL,
                         0LL,
                         (__int64)CmpFinishSystemHivesLoad,
                         0LL,
                         0LL,
                         0LL);
        if ( SystemThread < 0 )
          KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, SystemThread);
        ZwClose(Handle);
      }
    }
    if ( !CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
    }
    RtlLockBootStatusData(0LL);
    PnpBootPhaseComplete();
    PoInitHiberServices();
    PoClearTransitionMarker();
    PopAcquirePolicyLock();
    PopThermalCriticalShutdownEnabled = 1;
    if ( PopThermalCriticalShutdownInitiated )
    {
      v8 = 0;
      v7 = 0xC000000400000006uLL;
      v9[1] = 0LL;
      v9[2] = 0LL;
      v9[0] = 0x8000000001LL;
      PopCriticalShutdownInProgress = 1;
      PopExecutePowerAction((unsigned int)v9, 0, (unsigned int)&v7, 5, 1);
    }
    PopReleasePolicyLock();
    NlsLocaleSectionPointer = (PVOID)1;
    ExNotifyPlatformBinaryExecuted();
    if ( Flag != 1 )
      IopCopyBootLogRegistryToFile();
    return 0;
  }
  v3 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 0;
  if ( !CmBootAcceptFirstTime )
    return -1073741790;
  CmBootAcceptFirstTime = 0;
  v4 = Flag - 2;
  if ( !v4 )
    return -1073741811;
  if ( CmpLKGEnabled )
    v3 = CmpSaveBootControlSet(v4);
  off_140354FD8[0]();
  CmpUpdatePhaseAccessBit();
  return v3;
}
