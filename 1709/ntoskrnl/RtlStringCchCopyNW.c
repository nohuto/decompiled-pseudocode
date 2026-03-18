/*
 * XREFs of RtlStringCchCopyNW @ 0x1400F9D6C
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14000F0D0 (PiDevCfgParsePropertyKeyName.c)
 *     AslPathSplit @ 0x1405450C4 (AslPathSplit.c)
 *     WmipBuildInstanceSet @ 0x1405455F8 (WmipBuildInstanceSet.c)
 *     IopErrorLogThread @ 0x140594B30 (IopErrorLogThread.c)
 *     PiUEventHandleVetoEvent @ 0x1405E0CB0 (PiUEventHandleVetoEvent.c)
 *     IopLogBlockedDriverEvent @ 0x1406B5648 (IopLogBlockedDriverEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1407085F4 (PoQueryProcessEnergyTrackingState.c)
 *     SdbQueryDataExTagID @ 0x14076DCDC (SdbQueryDataExTagID.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x1400F9DC4 (RtlStringCopyWorkerW_1.c)
 */

NTSTATUS __stdcall RtlStringCchCopyNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v4; // r10d

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !cchDest )
      return v4;
LABEL_9:
    *pszDest = 0;
    return v4;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    v4 = -1073741811;
    goto LABEL_9;
  }
  return RtlStringCopyWorkerW_1(pszDest, cchDest, (size_t *)pszSrc, pszSrc, cchToCopy);
}
