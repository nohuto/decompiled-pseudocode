/*
 * XREFs of DxgkReportDripsBlocker @ 0x1C01A1F10
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C0150344 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01A0D00 (-ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_K@Z @ 0x1C01A0AC8 (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 */

void __fastcall DxgkReportDripsBlocker(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  struct DXGGLOBAL *v7; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  if ( *((_DWORD *)Global + 398) )
  {
    if ( *((_DWORD *)Global + 399) )
    {
      v7 = DXGGLOBAL::GetGlobal(v6);
      DXGGLOBAL::ReportDripsBlocker((__int64)v7, 0LL, a2, a3, 1LL);
    }
  }
}
