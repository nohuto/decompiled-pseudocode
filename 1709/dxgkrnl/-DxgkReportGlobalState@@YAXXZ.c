/*
 * XREFs of ?DxgkReportGlobalState@@YAXXZ @ 0x1C01AA0D0
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00133D4 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C01ABB54 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DxgkReportGlobalState(__int64 a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  DXGGLOBAL::ReportState(Global);
}
