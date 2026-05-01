/*
 * XREFs of ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x18002A680
 * Callers:
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x180008950 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x18000C370 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x18000C570 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 *     ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18000D360 (-SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___::operator() @ 0x180019CB0 (CDelayIAMOperations--CDelayedOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___--operator().c)
 *     ?SwitchToLastActiveApp@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18002E4F0 (-SwitchToLastActiveApp@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?SwitchToLastActiveApp@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800367B0 (-SwitchToLastActiveApp@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z @ 0x1800369F0 (-SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

CApplicationManagerUtility *__fastcall CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(
        CApplicationManagerUtility *this,
        HWND a2)
{
  CApplicationManagerUtility *v2; // rdi
  HWND LastActivePopup; // rbx

  v2 = this;
  LastActivePopup = GetLastActivePopup((HWND)this);
  if ( IsWindowVisible(LastActivePopup) )
    return (CApplicationManagerUtility *)LastActivePopup;
  return v2;
}
