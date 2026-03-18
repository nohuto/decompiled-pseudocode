/*
 * XREFs of IsNonImmersiveBand @ 0x1C009DE0C
 * Callers:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006F230 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     xxxEnableWindow @ 0x1C009DF50 (xxxEnableWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00C8B90 (IsImmersiveBandOrShellManaged.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00C980C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     CheckForegroundRight @ 0x1C00CBD2C (CheckForegroundRight.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00CBF18 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C013420C (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C013436C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01343F0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C01401E0 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01B89F0 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01B8F64 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01B9428 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 320);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
