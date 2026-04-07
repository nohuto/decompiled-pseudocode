/*
 * XREFs of ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180032598
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180025418 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180028B10 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002A9C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18003E720 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x18004A270 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18002FC4C (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x180031650 (-UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ?GetRemotingMode@CDesktopManager@@SAJAEAW4Enum@DwmRemotingMode@@@Z @ 0x180032628 (-GetRemotingMode@CDesktopManager@@SAJAEAW4Enum@DwmRemotingMode@@@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x1800326E8 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::SendSwitchModeCommand(__int64 a1)
{
  int RemotingMode; // eax
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  int v5; // eax
  struct CAnalogCompositorManager *Instance; // rax
  int updated; // eax
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 27) = 0;
  RemotingMode = CDesktopManager::GetRemotingMode((enum DwmRemotingMode::Enum *)&v9);
  v3 = RemotingMode;
  if ( RemotingMode < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RemotingMode, 0xFCu);
  }
  else
  {
    v4 = v9;
    if ( v9 == 3 )
    {
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 27) = 1;
      if ( CDesktopManager::IsLogonDesktop(a1) )
        v4 = 2;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4)
                                                   + 256LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
           v4);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x10Au);
    }
    else
    {
      Instance = CAnalogCompositorManager::GetInstance();
      *((_QWORD *)Instance + 8) = a1;
      updated = CAnalogCompositorManager::UpdateHolographicLockState(Instance);
      v3 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x10Du);
    }
  }
  return v3;
}
