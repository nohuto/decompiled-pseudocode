/*
 * XREFs of ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1800089BC
 * Callers:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180008B90 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___::operator() @ 0x18001ACD0 (CDelayIAMOperations--CDelayedOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___--operator().c)
 * Callees:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x18000891C (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x18002BF78 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x18002C9B0 (-CanChangeForeground@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::_ActivateIamSpecialWindow(
        CApplicationManager *this,
        enum PROCESS_UICONTEXT *a2)
{
  signed int v3; // edx
  int v4; // eax
  CApplicationManagerUtility *v5; // rax
  HWND v6; // rdx
  HWND LastActiveVisiblePopupOrSelf; // rax
  BOOL v8; // eax
  signed int LastError; // eax

  v3 = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch(this, a2);
  if ( v3 >= 0 )
  {
    v4 = CanChangeForeground();
    v3 = v4;
    if ( v4 >= 0 )
    {
      v5 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 95) + 24LL))(
                                           *((_QWORD *)this + 95),
                                           (unsigned int)v4);
      LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(v5, v6);
      v8 = SetForegroundWindow(LastActiveVisiblePopupOrSelf);
      v3 = !v8 ? 0x80070005 : 0;
      if ( v8 )
      {
        if ( AllowSetForegroundWindow(0xFFFFFFFF) )
        {
          return 0;
        }
        else
        {
          LastError = GetLastError();
          v3 = (unsigned __int16)LastError | 0x80070000;
          if ( LastError <= 0 )
            return (unsigned int)LastError;
        }
      }
    }
  }
  return (unsigned int)v3;
}
