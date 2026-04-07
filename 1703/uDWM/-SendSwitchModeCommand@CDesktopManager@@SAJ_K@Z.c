/*
 * XREFs of ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x1800166B4
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x1800231E4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800302A0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180031E80 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800426D4 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180015A00 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?GetRemotingMode@CDesktopManager@@SAJAEAW4Enum@DwmRemotingMode@@@Z @ 0x180016738 (-GetRemotingMode@CDesktopManager@@SAJAEAW4Enum@DwmRemotingMode@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RemotingMode, 0xFDu);
  }
  else
  {
    if ( v7 == 3 )
    {
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) = 1;
      IsLogonDesktop = CDesktopManager::IsLogonDesktop(a1);
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, BOOL))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4)
                                                         + 248LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
           v7,
           IsLogonDesktop);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x105u);
  }
  return v4;
}
