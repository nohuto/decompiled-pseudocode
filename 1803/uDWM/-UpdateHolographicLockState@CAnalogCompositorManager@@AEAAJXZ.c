/*
 * XREFs of ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x180031650
 * Callers:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180005FA4 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180032598 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18002FC4C (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 */

__int64 __fastcall CAnalogCompositorManager::UpdateHolographicLockState(CAnalogCompositorManager *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  bool IsLogonDesktop; // al

  v1 = 0;
  if ( *((_BYTE *)this + 72)
    || ((v2 = *((_QWORD *)this + 8)) == 0
      ? (IsLogonDesktop = 0)
      : (IsLogonDesktop = CDesktopManager::IsLogonDesktop(v2)),
        IsLogonDesktop) )
  {
    v1 = 1;
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4)
                                                   + 288LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
           v1);
}
