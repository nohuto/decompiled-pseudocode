/*
 * XREFs of ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C007BC60
 * Callers:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00020C4 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005A440 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C00FAAF0 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00FAD40 (NtGdiGetGammaRampCapability.c)
 *     GreSetMagicColors @ 0x1C00FB1FC (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall NEEDGRELOCK::vUnlock(PERESOURCE *this)
{
  __int64 v2; // rcx

  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem");
    if ( *this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*this);
      PsLeavePriorityRegion(v2);
    }
    *this = 0LL;
  }
}
