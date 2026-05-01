/*
 * XREFs of ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180025CF4
 * Callers:
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C1EC (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C2E8 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x1800564F0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ @ 0x180057EC0 (-IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x180058670 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z @ 0x1800591C0 (-s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z.c)
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 */

char __fastcall CReportWindowVisibilityChange::IsReportingEnabled(
        CReportWindowVisibilityChange *this,
        struct IImmersiveMonitor *a2,
        struct IImmersiveApplicationInternal *a3)
{
  __int64 v3; // rdi

  v3 = *((_QWORD *)this + 1);
  if ( a3 && (unsigned int)SHIsSameObject(a3, *((_QWORD *)this + 6)) )
    return 1;
  if ( v3 )
    return *(_DWORD *)(*(_QWORD *)this + 4 * v3 - 4) == 1;
  if ( *((_DWORD *)this + 8) && (unsigned int)SHIsSameObject(a2, *((_QWORD *)this + 5)) )
    return *((_DWORD *)this + 8) == 1;
  return *((_DWORD *)this + 9) == 1;
}
