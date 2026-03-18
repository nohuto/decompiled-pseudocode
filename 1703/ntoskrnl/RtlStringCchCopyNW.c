/*
 * XREFs of RtlStringCchCopyNW @ 0x14006DBC0
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1401F96B8 (PiDevCfgParsePropertyKeyName.c)
 *     AslPathSplit @ 0x1404B603C (AslPathSplit.c)
 *     PiUEventHandleVetoEvent @ 0x1405743B4 (PiUEventHandleVetoEvent.c)
 *     IopErrorLogThread @ 0x1405812A0 (IopErrorLogThread.c)
 *     WmipBuildInstanceSet @ 0x1405A06AC (WmipBuildInstanceSet.c)
 *     IopLogBlockedDriverEvent @ 0x140689948 (IopLogBlockedDriverEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1406D0590 (PoQueryProcessEnergyTrackingState.c)
 *     SdbQueryDataExTagID @ 0x14072AFB4 (SdbQueryDataExTagID.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x14006DC18 (RtlStringCopyWorkerW_1.c)
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
