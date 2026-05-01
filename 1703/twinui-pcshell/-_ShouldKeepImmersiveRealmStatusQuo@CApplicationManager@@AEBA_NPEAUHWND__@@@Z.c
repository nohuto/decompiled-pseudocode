/*
 * XREFs of ?_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x180010D6C
 * Callers:
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180010DD4 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18001350C (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo(CApplicationManager *this, HWND a2)
{
  char v4; // bl

  if ( GetShellWindow() == a2 )
    return 1;
  v4 = 0;
  if ( (unsigned int)GetPropW(a2, L"MultimonitorActivationException")
    || (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 86) + 24LL))(*((_QWORD *)this + 86)) == a2 )
  {
    return 1;
  }
  return v4;
}
