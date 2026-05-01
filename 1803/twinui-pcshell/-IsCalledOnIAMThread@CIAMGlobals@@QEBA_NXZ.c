/*
 * XREFs of ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x1800F7A4C
 * Callers:
 *     ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1800F167C (-_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DA.c)
 *     ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18010B6C0 (-SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18010DA20 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 *     ?DisableAutoRotationPreferences@CRotationManagerSync@@UEAAJXZ @ 0x18011B530 (-DisableAutoRotationPreferences@CRotationManagerSync@@UEAAJXZ.c)
 *     ?EnableAutoRotationPreferences@CRotationManagerSync@@UEAAJXZ @ 0x18011B5B0 (-EnableAutoRotationPreferences@CRotationManagerSync@@UEAAJXZ.c)
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x18011B650 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 *     ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x18011B870 (-UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 *     ?HideCharm@CCharmsWindowManager@@UEAAJPEAUHWND__@@@Z @ 0x18011C9B0 (-HideCharm@CCharmsWindowManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x18011EA10 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     ?QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z @ 0x18012FAD0 (-QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEA.c)
 * Callees:
 *     <none>
 */

bool __fastcall CIAMGlobals::IsCalledOnIAMThread(CIAMGlobals *this)
{
  PSRWLOCK v1; // rbx

  v1 = CApplicationManagerUtility::g_pIAMGlobals;
  return LODWORD(v1[11].Ptr) == GetCurrentThreadId();
}
