/*
 * XREFs of ?_IsActiveDesktopApp@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x180110E24
 * Callers:
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18003D1C4 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CApplicationManager::_IsActiveDesktopApp(CApplicationManager *this, HWND a2)
{
  char v4; // bl

  v4 = 1;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 56LL))(*((_QWORD *)this + 65)) != 1
    || !(*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 66) + 88LL))(*((_QWORD *)this + 66), a2) )
  {
    return 0;
  }
  return v4;
}
