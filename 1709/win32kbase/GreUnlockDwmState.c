/*
 * XREFs of GreUnlockDwmState @ 0x1C003CA70
 * Callers:
 *     NtDCompositionSetChildRootVisual @ 0x1C0003B20 (NtDCompositionSetChildRootVisual.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003BE0 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C002A59C (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00358DC (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     OpenDwmHandle @ 0x1C003C85C (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x1C00748B0 (UserReferenceDwmApiPort.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007A88C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007AADC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00FE000 (DwmSetProcessBreakOnTerminate.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C013E500 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C013E7A0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockDwmState()
{
  __int64 result; // rax

  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDwmState);
    return PsLeavePriorityRegion();
  }
  return result;
}
