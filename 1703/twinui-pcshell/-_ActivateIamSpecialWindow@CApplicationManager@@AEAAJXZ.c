/*
 * XREFs of ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x180008950
 * Callers:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180008B20 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___::operator() @ 0x180019F40 (CDelayIAMOperations--CDelayedOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___--operator().c)
 * Callees:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1800088B0 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x18002A680 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x18002B1D4 (-CanChangeForeground@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  int v8; // eax
  signed int LastError; // eax

  v3 = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch(this, a2);
  if ( v3 >= 0 )
  {
    v4 = CanChangeForeground();
    v3 = v4;
    if ( v4 >= 0 )
    {
      v5 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 86) + 24LL))(
                                           *((_QWORD *)this + 86),
                                           (unsigned int)v4);
      LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(v5, v6);
      v8 = -SetForegroundWindow(LastActiveVisiblePopupOrSelf);
      v3 = v8 == 0 ? 0x80070005 : 0;
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
