/*
 * XREFs of ??1?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18019DECC
 * Callers:
 *     _TouchKeyboardExperienceManager::RelaunchSIPWithDelay_::_1_::dtor$0 @ 0x1801F63DB (_TouchKeyboardExperienceManager--RelaunchSIPWithDelay_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x1801F66A9 (_TouchKeyboardExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManagerCF::CreateInstance_::_1_::dtor$3 @ 0x1801F66DD (_TouchKeyboardExperienceManagerCF--CreateInstance_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18019E2B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18019E2B0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::~ComPtr<TouchKeyboardExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
