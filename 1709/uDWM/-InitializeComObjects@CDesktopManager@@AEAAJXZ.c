/*
 * XREFs of ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18003B6C0
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180034984 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003DF00 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x18003DE3C (-Initialize@CAnimationEngine@@QEAAJXZ.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 */

__int64 __fastcall CDesktopManager::InitializeComObjects(LPVOID *this)
{
  unsigned int v2; // ebx
  HRESULT Instance; // eax
  HRESULT v4; // eax
  CAnimationEngine *v5; // rcx
  unsigned int ppv; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimationInitialization_Start);
  v2 = 0;
  if ( !this[36] )
  {
    Instance = CoCreateInstance(
                 &CLSID_UIAnimationTransitionLibrary,
                 0LL,
                 1u,
                 &GUID_ca5a14b1_d24f_48b8_8fe4_c78169ba954e,
                 this + 37);
    v2 = Instance;
    if ( Instance < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Instance, 0x5C6u);
      goto LABEL_8;
    }
    v4 = CoCreateInstance(&CLSID_UIAnimationManager, 0LL, 1u, &GUID_9169896c_ac8d_4e7d_94e5_67fa4dc2f2e8, this + 36);
    v2 = v4;
    if ( v4 < 0 )
    {
      ppv = 1484;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, ppv);
      goto LABEL_8;
    }
  }
  v5 = (CAnimationEngine *)this[24];
  if ( !*((_BYTE *)v5 + 120) )
  {
    v4 = CAnimationEngine::Initialize(v5);
    v2 = v4;
    if ( v4 < 0 )
    {
      ppv = 1489;
      goto LABEL_14;
    }
  }
LABEL_8:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimationInitialization_Stop);
  return v2;
}
