/*
 * XREFs of GreUnlockDwmState @ 0x1C00278D0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003C60 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0003F80 (NtDCompositionSetChildRootVisual.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C002580C (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     UserReferenceDwmApiPort @ 0x1C00275D0 (UserReferenceDwmApiPort.c)
 *     OpenDwmHandle @ 0x1C00276C0 (OpenDwmHandle.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0029724 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0065FD4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00663B4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00FDCE0 (DwmSetProcessBreakOnTerminate.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C013F0A0 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C013F330 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockDwmState()
{
  __int64 result; // rax

  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    return PsLeavePriorityRegion();
  }
  return result;
}
