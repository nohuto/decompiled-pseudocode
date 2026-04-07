/*
 * XREFs of ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180025418
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180024928 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x1800853C0 (-ModeChange@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?CheckInteropDCompDevice@CDesktopManager@@AEAAJXZ @ 0x1800255C0 (-CheckInteropDCompDevice@CDesktopManager@@AEAAJXZ.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18002714C (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180032598 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x1800326E8 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180049FF4 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopManager::ModeChangeImpl(CDesktopManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int MonitorRenderTargets; // eax
  int v5; // eax
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  GetDesktopID(1LL, &v7);
  v2 = CDesktopManager::SendSwitchModeCommand(v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *((_BYTE *)this + 16)
      && (MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets(this),
          v3 = MonitorRenderTargets,
          MonitorRenderTargets < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MonitorRenderTargets, 0x377u);
    }
    else
    {
      CAnalogCompositorManager::GetInstance();
      v5 = CDesktopManager::CheckInteropDCompDevice(this);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x37Fu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x373u);
  }
  CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 56));
  return v3;
}
