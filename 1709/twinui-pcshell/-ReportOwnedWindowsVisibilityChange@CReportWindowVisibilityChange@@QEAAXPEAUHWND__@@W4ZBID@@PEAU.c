/*
 * XREFs of ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C2E8
 * Callers:
 *     ?_UpdateNavigationLevel@CTaskWindow@@AEAAXXZ @ 0x180064C80 (-_UpdateNavigationLevel@CTaskWindow@@AEAAXXZ.c)
 *     ?SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z @ 0x1800658C0 (-SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z.c)
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180025CF4 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     WPP_SF_qll @ 0x18002BCEC (WPP_SF_qll.c)
 *     ?_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@Z @ 0x18002C38C (-_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@.c)
 */

char __fastcall CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
        CReportWindowVisibilityChange *a1,
        __int64 a2,
        unsigned int a3,
        struct IImmersiveMonitor *a4,
        struct IImmersiveApplicationInternal *a5,
        __int64 a6)
{
  char result; // al
  __int64 v10; // r8
  int v11; // ebx
  unsigned __int8 v12; // si
  int v13; // [rsp+20h] [rbp-18h]
  int v14; // [rsp+28h] [rbp-10h]

  result = CReportWindowVisibilityChange::IsReportingEnabled(a1, a4, a5);
  v11 = 0;
  v12 = result;
  if ( a3 == 13 || result )
    result = CReportWindowVisibilityChange::_ReportOwnedWindowsVisibilityChange(a1, a2, a3, a6);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LOBYTE(v11) = a3 == 13;
    v14 = v12;
    v13 = v11;
    return WPP_SF_qll(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, v10, a2, v13, v14);
  }
  return result;
}
