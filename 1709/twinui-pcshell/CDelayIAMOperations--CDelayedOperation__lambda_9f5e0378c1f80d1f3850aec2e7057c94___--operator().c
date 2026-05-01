/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___::operator() @ 0x18001ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1800089BC (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180008E4C (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 */

void __fastcall CDelayIAMOperations::CDelayedOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___::operator()(
        __int64 a1,
        enum PROCESS_UICONTEXT *a2)
{
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 32)
    || (~(*(_DWORD *)(a1 + 48) >> 2) & 1) == 0
    || (int)CApplicationManager::_ActivateIamSpecialWindow(*(CApplicationManager **)(a1 + 16), a2) >= 0 )
  {
    CApplicationManager::_PerformDesktopActivationCallouts(
      *(CApplicationManager **)(a1 + 16),
      *(struct IObjectArray **)(a1 + 24),
      *(_DWORD *)(a1 + 48));
  }
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    SetEvent(*(HANDLE *)(v3 + 8));
}
