/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097AAC
 * Callers:
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180094AE0 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A4F10 (-OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800ACBE0 (-OnViewUncloaking@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x1800C1470 (-SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z.c)
 *     ?GetProcessStartTime@@YA_JPEAX@Z @ 0x1801081B8 (-GetProcessStartTime@@YA_JPEAX@Z.c)
 *     ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180110BF0 (-v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180117368 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x18014D500 (-LinkUIATrees@XamlLauncher@@AEAAX_N@Z.c)
 *     ??_GFocusHoldingTank@@QEAAPEAXI@Z @ 0x180150994 (--_GFocusHoldingTank@@QEAAPEAXI@Z.c)
 *     ??0FocusHoldingTank@@QEAA@XZ @ 0x18015C738 (--0FocusHoldingTank@@QEAA@XZ.c)
 *     ?ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperience@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18018E260 (-ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperienc.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180003E1C (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError((__int64)this, (unsigned int)a2, a3, (__int64)a4, v4, retaddr, 2u);
}
