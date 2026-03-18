/*
 * XREFs of GreLockDwmState @ 0x1C0027890
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003C60 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0003F80 (NtDCompositionSetChildRootVisual.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C002580C (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     UserReferenceDwmApiPort @ 0x1C00275D0 (UserReferenceDwmApiPort.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00277CC (CheckOrAcquireDwmStateLock.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0029724 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0065FD4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00663B4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00FDCE0 (DwmSetProcessBreakOnTerminate.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C013F330 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 */

__int64 GreLockDwmState()
{
  EngAcquireSemaphore(ghsemDwmState);
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
}
