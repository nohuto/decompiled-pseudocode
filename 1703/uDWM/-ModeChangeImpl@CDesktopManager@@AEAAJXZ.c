/*
 * XREFs of ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x1800231E4
 * Callers:
 *     ?SetIdleState@CAnalogCompositorManager@@SAXW4AnalogIdleOrigin@@_N@Z @ 0x1800102E4 (-SetIdleState@CAnalogCompositorManager@@SAXW4AnalogIdleOrigin@@_N@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021FE8 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     _lambda_1fb07860902cf0495ca2b3e5f54263f5_::operator() @ 0x180072E0C (_lambda_1fb07860902cf0495ca2b3e5f54263f5_--operator().c)
 *     _lambda_f22d5cbf612beadeeb19a63fa8ca3a96_::operator() @ 0x180072F1C (_lambda_f22d5cbf612beadeeb19a63fa8ca3a96_--operator().c)
 *     _anonymous_namespace_::FodWaiter @ 0x180073570 (_anonymous_namespace_--FodWaiter.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x180084480 (-ModeChange@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ @ 0x18001036C (-EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18001341C (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x1800166B4 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800229D0 (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18002EE60 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopManager::ModeChangeImpl(CDesktopManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int RenderTargets; // eax
  CAnalogCompositorManager *v5; // rcx
  CAnalogCompositorManager *Instance; // rax
  unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  GetDesktopID(1LL, &v8);
  v2 = CDesktopManager::SendSwitchModeCommand(v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x31Du);
  }
  else
  {
    RenderTargets = CDesktopManager::CreateRenderTargets(this);
    v3 = RenderTargets;
    if ( RenderTargets < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargets, 0x31Fu);
    }
    else
    {
      Instance = CAnalogCompositorManager::GetInstance(v5);
      CAnalogCompositorManager::EnsureHolographicDisplay(Instance);
      v3 = 0;
    }
  }
  CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 51));
  return v3;
}
