/*
 * XREFs of RtlStringCchLengthW @ 0x1C000BCF8
 * Callers:
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D92D4 (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C00E211C (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00F5D08 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C0180420 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C0180820 (DxgkNetDispStopMiracastDisplayDevice.c)
 *     ?LookupDisplayDiagonal@@YAJPEAK@Z @ 0x1C01D43F0 (-LookupDisplayDiagonal@@YAJPEAK@Z.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1C000BD2C (RtlStringLengthWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  NTSTATUS result; // eax

  if ( psz && cchMax <= 0x7FFFFFFF )
    result = RtlStringLengthWorkerW(psz, cchMax, pcchLength);
  else
    result = -1073741811;
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
