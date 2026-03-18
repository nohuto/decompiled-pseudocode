/*
 * XREFs of CmCompleteRegistryInitialization @ 0x140624A30
 * Callers:
 *     NtInitializeRegistry @ 0x14061371C (NtInitializeRegistry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 *     PopExecutePowerAction @ 0x1405EB7B4 (PopExecutePowerAction.c)
 *     RtlLockBootStatusData @ 0x14060F700 (RtlLockBootStatusData.c)
 *     EtwInitialize @ 0x1406224E0 (EtwInitialize.c)
 *     PoClearTransitionMarker @ 0x1406230BC (PoClearTransitionMarker.c)
 *     PnpBootPhaseComplete @ 0x14062461C (PnpBootPhaseComplete.c)
 *     IopCopyBootLogRegistryToFile @ 0x140624BCC (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x140624C44 (ExNotifyPlatformBinaryExecuted.c)
 *     PoInitHiberServices @ 0x140624CC8 (PoInitHiberServices.c)
 *     CmpCmdInit @ 0x140627EE8 (CmpCmdInit.c)
 *     PsBootPhaseComplete @ 0x14062F6F0 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x14062FA00 (ExpRefreshSystemTime.c)
 *     CmpInitializeSystemHivesLoad @ 0x1406498CC (CmpInitializeSystemHivesLoad.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  char v4; // si
  int v5; // eax
  __int64 v7; // [rsp+50h] [rbp-29h] BYREF
  int v8; // [rsp+58h] [rbp-21h]
  _QWORD v9[3]; // [rsp+60h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-1h] BYREF
  __int128 v11; // [rsp+90h] [rbp+17h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+27h]
  int v13; // [rsp+A8h] [rbp+2Fh]
  __int128 v14; // [rsp+B0h] [rbp+37h]
  HANDLE Handle; // [rsp+E8h] [rbp+6Fh] BYREF

  v1 = 0;
  Handle = 0LL;
  if ( _InterlockedExchange(&CmFirstTime, 0) )
  {
    EtwInitialize(2u);
    CmCompleteInitMachineConfig(&IopAutoReboot);
    CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive();
    LOBYTE(v3) = a1 == 1;
    CmpCmdInit(v3);
    CmpUnlockRegistry();
    if ( a1 != 1 )
    {
      CmpLoadingSystemHivesActive = 1;
      if ( CmpInitRmLogOnLoad || (v4 = 0, CmpForceSynchronousMachineHiveLoad) )
        v4 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      LODWORD(v11) = 48;
      *((_QWORD *)&v11 + 1) = 0LL;
      v13 = 512;
      v12 = 0LL;
      v14 = 0LL;
      v5 = PsCreateSystemThreadEx(
             (__int64)&Handle,
             0x1FFFFF,
             &v11,
             CmpRegistryProcess,
             0LL,
             (__int64)CmpFinishSystemHivesLoad,
             (unsigned __int64)&Event & -(__int64)(v4 != 0),
             0LL,
             0LL);
      if ( v5 < 0 )
        KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, v5);
      if ( v4 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ZwClose(Handle);
      Handle = 0LL;
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
      PopExecutePowerAction((__int64)v9, 0, &v7, 5, 1u);
    }
    PopReleasePolicyLock();
    NlsLocaleSectionPointer = (PVOID)1;
    ExNotifyPlatformBinaryExecuted();
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
