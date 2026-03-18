/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C0054B50
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C00079F4 (RIMAllocateHidConfigDesc.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0008310 (RIMGetMaxCountFeatureDetails.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0015818 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C001D57C (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C001D7B0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C002CC34 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 *     RIMHidGetCaps @ 0x1C00544D4 (RIMHidGetCaps.c)
 *     CreateKernelEvent @ 0x1C0054640 (CreateKernelEvent.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0054810 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00548F4 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C0054A38 (GreCreateSemaphoreInternal.c)
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 *     UserPostNKAPC @ 0x1C0055860 (UserPostNKAPC.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C00582E8 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMGetProductString @ 0x1C00585D0 (RIMGetProductString.c)
 *     CreateKernelSemaphore @ 0x1C0058750 (CreateKernelSemaphore.c)
 *     QueuePowerRequest @ 0x1C00649B0 (QueuePowerRequest.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z @ 0x1C006E510 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z.c)
 *     HmgCreate @ 0x1C0075A30 (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C00762E4 (GreCreateFastMutex.c)
 *     EngAllocMem @ 0x1C0076E30 (EngAllocMem.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C008DA68 (RIMSetDeviceIdleTimeout.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C008F480 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C008F56C (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C008FB70 (RIMRegisterForInputWithCallbacks.c)
 *     RIMGetKbdExId @ 0x1C0092E00 (RIMGetKbdExId.c)
 *     xxxRemoteConnect @ 0x1C009F300 (xxxRemoteConnect.c)
 *     UserPostNKAPCBuffer @ 0x1C00D5590 (UserPostNKAPCBuffer.c)
 *     CreateKernelTimer @ 0x1C00D85B0 (CreateKernelTimer.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C0114064 (RIMCreateHidKeyboardDeviceInfo.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C0114344 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C01147D4 (rimHidKeyboardIsButtonDevice.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C0114ED8 (rimValidateCustomHidKeyboardUsages.c)
 *     InitializePowerRequestList @ 0x1C01D5664 (InitializePowerRequestList.c)
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
