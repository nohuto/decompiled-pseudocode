/*
 * XREFs of IsNonImmersiveBand @ 0x1C00B79A8
 * Callers:
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0068B20 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     CheckForegroundRight @ 0x1C00B431C (CheckForegroundRight.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00B4500 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00B7444 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxEnableWindow @ 0x1C00B7870 (xxxEnableWindow.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00B9628 (IsImmersiveBandOrShellManaged.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0132100 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C013224C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01322D0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0139694 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01B578C (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01B5CD4 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01B6194 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 320);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
