/*
 * XREFs of RtlStringCchCopyNW @ 0x140161D3C
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14023C034 (PiDevCfgParsePropertyKeyName.c)
 *     PiUEventHandleVetoEvent @ 0x1405E5ED8 (PiUEventHandleVetoEvent.c)
 *     AslPathSplit @ 0x1405FE68C (AslPathSplit.c)
 *     WmipBuildInstanceSet @ 0x1405FEAE8 (WmipBuildInstanceSet.c)
 *     IopErrorLogThread @ 0x1406000E0 (IopErrorLogThread.c)
 *     IopLogBlockedDriverEvent @ 0x14071A2F8 (IopLogBlockedDriverEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x14076C5A4 (PoQueryProcessEnergyTrackingState.c)
 *     EtwpCoverageSamplerQuery @ 0x1407B7744 (EtwpCoverageSamplerQuery.c)
 *     SdbQueryDataExTagID @ 0x1407D4E20 (SdbQueryDataExTagID.c)
 * Callees:
 *     RtlStringCopyWorkerW_3 @ 0x140161D94 (RtlStringCopyWorkerW_3.c)
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
  return RtlStringCopyWorkerW_3(pszDest, cchDest, (size_t *)pszSrc, pszSrc, cchToCopy);
}
