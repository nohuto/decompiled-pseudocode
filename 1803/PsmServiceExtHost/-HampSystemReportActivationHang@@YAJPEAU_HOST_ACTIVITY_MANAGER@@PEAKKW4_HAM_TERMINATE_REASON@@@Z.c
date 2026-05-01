/*
 * XREFs of ?HampSystemReportActivationHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z @ 0x180041C2C
 * Callers:
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064AB8 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x18006E540 (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 */

int __fastcall HampSystemReportActivationHang(HWND a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // [rsp+20h] [rbp-18h]
  const unsigned __int16 *v6; // [rsp+28h] [rbp-10h]

  if ( ((_BYTE)a1[164] & 1) != 0 )
    return HampSystemGenerateLegacyHangReport(a2, a3, a4);
  else
    return ReportHangInternal(a1, a2, a3, a4, v5, v6);
}
