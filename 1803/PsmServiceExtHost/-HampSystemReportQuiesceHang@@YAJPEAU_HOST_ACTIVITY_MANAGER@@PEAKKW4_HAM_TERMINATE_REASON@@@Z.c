/*
 * XREFs of ?HampSystemReportQuiesceHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z @ 0x180041C5C
 * Callers:
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064AB8 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ReportHangInternal2 @ 0x18006DB78 (ReportHangInternal2.c)
 */

__int64 __fastcall HampSystemReportQuiesceHang(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  if ( (*(_BYTE *)(a1 + 656) & 1) != 0 )
    return HampSystemGenerateLegacyHangReport(a2, a3, a4);
  else
    return ReportHangInternal2(a2);
}
