/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C0024C70
 * Callers:
 *     CreateKernelEvent @ 0x1C0008540 (CreateKernelEvent.c)
 *     CreateKernelSemaphore @ 0x1C00085A0 (CreateKernelSemaphore.c)
 *     RIMAllocateHidConfigDesc @ 0x1C00087B0 (RIMAllocateHidConfigDesc.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C000AF0C (RIMSetDeviceIdleTimeout.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000D190 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C000D844 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C000E2DC (RIMHidGetCaps.c)
 *     RIMGetProductString @ 0x1C000E9E0 (RIMGetProductString.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C00204F4 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00249F0 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C0024B58 (GreCreateSemaphoreInternal.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0024CB0 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C0032B80 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C003401C (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z @ 0x1C003BE20 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z.c)
 *     HmgCreate @ 0x1C006F330 (HmgCreate.c)
 *     EngAllocMem @ 0x1C00704A0 (EngAllocMem.c)
 *     QueuePowerRequest @ 0x1C00771C0 (QueuePowerRequest.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C00800A0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     UserPostNKAPC @ 0x1C0093780 (UserPostNKAPC.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00944D4 (RIMGetMaxCountFeatureDetails.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C0097C00 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0097CEC (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0098970 (RIMRegisterForInputWithCallbacks.c)
 *     RIMGetKbdExId @ 0x1C009A600 (RIMGetKbdExId.c)
 *     GreCreateFastMutex @ 0x1C009BD80 (GreCreateFastMutex.c)
 *     xxxRemoteConnect @ 0x1C00A9030 (xxxRemoteConnect.c)
 *     UserPostNKAPCBuffer @ 0x1C00DB940 (UserPostNKAPCBuffer.c)
 *     CreateKernelTimer @ 0x1C00DC460 (CreateKernelTimer.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C0112B38 (RIMCreateHidKeyboardDeviceInfo.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C0112E18 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C01132A8 (rimHidKeyboardIsButtonDevice.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C01139AC (rimValidateCustomHidKeyboardUsages.c)
 *     ?PopulateCustomDipatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C01190E0 (-PopulateCustomDipatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     InitializePowerRequestList @ 0x1C01DD080 (InitializePowerRequestList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32AllocPoolNonPaged(__int64 a1, unsigned int a2)
{
  if ( (int)IsWin32AllocPoolImplSupported() < 0 )
    return 0LL;
  else
    return Win32AllocPoolImpl(544LL, a1, a2);
}
