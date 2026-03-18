/*
 * XREFs of UserReferenceDwmApiPort @ 0x1C00275D0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003C60 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0003F80 (NtDCompositionSetChildRootVisual.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0029724 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     PowerOnMonitor @ 0x1C0065390 (PowerOnMonitor.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C013F330 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0027850 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     GreLockDwmState @ 0x1C0027890 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00278D0 (GreUnlockDwmState.c)
 */

PVOID UserReferenceDwmApiPort()
{
  int v0; // edi
  PVOID v1; // rbx

  v0 = 0;
  if ( !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState) )
  {
    GreLockDwmState();
    v0 = 1;
  }
  v1 = g_pDwmApiPort;
  if ( g_pDwmApiPort )
    ObfReferenceObject(g_pDwmApiPort);
  if ( v0 )
    GreUnlockDwmState();
  return v1;
}
