/*
 * XREFs of ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x1800434BC
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18001024C (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800405E0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x180042000 (-Initialize@CAnimationEngine@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 */

__int64 __fastcall CDesktopManager::InitializeComObjects(LPVOID *this)
{
  unsigned int v2; // ebx
  HRESULT Instance; // eax
  int v4; // eax
  LPVOID *v5; // rcx
  unsigned int ppv; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(this, &UdwmAnimationInitialization_Start);
  v2 = 0;
  if ( !this[30] )
  {
    Instance = CoCreateInstance(
                 &CLSID_UIAnimationTransitionLibrary,
                 0LL,
                 1u,
                 &GUID_ca5a14b1_d24f_48b8_8fe4_c78169ba954e,
                 this + 31);
    v2 = Instance;
    if ( Instance < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Instance, 0x519u);
      goto LABEL_8;
    }
    v4 = CoCreateInstance(&CLSID_UIAnimationManager, 0LL, 1u, &GUID_9169896c_ac8d_4e7d_94e5_67fa4dc2f2e8, this + 30);
    v2 = v4;
    if ( v4 < 0 )
    {
      ppv = 1311;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, ppv);
      goto LABEL_8;
    }
  }
  v5 = (LPVOID *)this[20];
  if ( !*((_BYTE *)v5 + 120) )
  {
    v4 = CAnimationEngine::Initialize(v5);
    v2 = v4;
    if ( v4 < 0 )
    {
      ppv = 1316;
      goto LABEL_14;
    }
  }
LABEL_8:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v5, &UdwmAnimationInitialization_Stop);
  return v2;
}
