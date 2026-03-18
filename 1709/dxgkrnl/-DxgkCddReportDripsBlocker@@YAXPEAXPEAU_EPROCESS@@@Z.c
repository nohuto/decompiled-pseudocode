/*
 * XREFs of ?DxgkCddReportDripsBlocker@@YAXPEAXPEAU_EPROCESS@@@Z @ 0x1C00EF8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_K@Z @ 0x1C01ABA2C (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 */

void __fastcall DxgkCddReportDripsBlocker(_QWORD *a1, struct _EPROCESS *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct DXGGLOBAL *v7; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  if ( *((_DWORD *)Global + 366) )
  {
    if ( *((_DWORD *)Global + 367) )
    {
      v6 = a1[24];
      v7 = DXGGLOBAL::GetGlobal(v5);
      DXGGLOBAL::ReportDripsBlocker(v7, 2LL, v6, a2, 1LL);
    }
  }
}
