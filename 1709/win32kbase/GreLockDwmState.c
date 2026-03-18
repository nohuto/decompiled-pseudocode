/*
 * XREFs of GreLockDwmState @ 0x1C003CA30
 * Callers:
 *     NtDCompositionSetChildRootVisual @ 0x1C0003B20 (NtDCompositionSetChildRootVisual.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003BE0 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C002A59C (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00358DC (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C003C96C (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C00748B0 (UserReferenceDwmApiPort.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007A88C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007AADC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00FE000 (DwmSetProcessBreakOnTerminate.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C013E7A0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreLockDwmState()
{
  EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
}
