/*
 * XREFs of NtInitializeRegistry @ 0x140585198
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwInitializeRegistry @ 0x14017FE20 (ZwInitializeRegistry.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 *     CmpSaveBootControlSet @ 0x14058D508 (CmpSaveBootControlSet.c)
 *     EtwInitialize @ 0x14059E53C (EtwInitialize.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405A444C (CmpInitializeSystemHivesLoad.c)
 *     PsBootPhaseComplete @ 0x1405A529C (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1405A57F4 (ExpRefreshSystemTime.c)
 *     CmpCmdInit @ 0x1405A8688 (CmpCmdInit.c)
 *     PoInitHiberServices @ 0x1405A913C (PoInitHiberServices.c)
 *     PoClearTransitionMarker @ 0x1405B8BC8 (PoClearTransitionMarker.c)
 *     CmpUpdatePhaseAccessBit @ 0x1405D1534 (CmpUpdatePhaseAccessBit.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1405D4A08 (ExNotifyPlatformBinaryExecuted.c)
 *     PnpBootPhaseComplete @ 0x1405D518C (PnpBootPhaseComplete.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405D6404 (IopCopyBootLogRegistryToFile.c)
 *     CmpSyncNextBackupHive @ 0x14066B40C (CmpSyncNextBackupHive.c)
 */

NTSTATUS __stdcall NtInitializeRegistry(USHORT Flag)
{
  NTSTATUS v3; // ebx
  unsigned __int16 v4; // di
  __int64 v5; // rcx
  int SystemThread; // eax
  __int64 v7; // [rsp+50h] [rbp-30h] BYREF
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
      PopExecutePowerAction((__int64)v9, 0, &v7, 5, 1u);
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
  off_14033C7A8[0]();
  CmpUpdatePhaseAccessBit();
  return v3;
}
