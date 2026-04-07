/*
 * XREFs of ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180035D00
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180017F28 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800290D0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002ADB0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18003D1BC (-StartupEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x1800348B0 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?GetRemotingMode@CDesktopManager@@SAJAEAW4Enum@DwmRemotingMode@@@Z @ 0x180035D84 (-GetRemotingMode@CDesktopManager@@SAJAEAW4Enum@DwmRemotingMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::SendSwitchModeCommand(__int64 a1)
{
  BOOL IsLogonDesktop; // edi
  int RemotingMode; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  IsLogonDesktop = 0;
  *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) = 0;
  RemotingMode = CDesktopManager::GetRemotingMode((enum DwmRemotingMode::Enum *)&v7);
  v4 = RemotingMode;
  if ( RemotingMode < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RemotingMode, 0x105u);
  }
  else
  {
    if ( v7 == 3 )
    {
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) = 1;
      IsLogonDesktop = CDesktopManager::IsLogonDesktop(a1);
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, BOOL))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4)
                                                         + 256LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
           v7,
           IsLogonDesktop);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x10Du);
  }
  return v4;
}
