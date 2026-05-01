/*
 * XREFs of _lambda_7b06266c645e87ea8bded8a7a75fbbc2_::__lambda_7b06266c645e87ea8bded8a7a75fbbc2_ @ 0x18019A07C
 * Callers:
 *     _TouchKeyboardExperienceManager::RelaunchSIPWithDelay_::_1_::dtor$1 @ 0x1801F63E7 (_TouchKeyboardExperienceManager--RelaunchSIPWithDelay_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18019E2B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18019E2B0.c)
 */

__int64 __fastcall lambda_7b06266c645e87ea8bded8a7a75fbbc2_::__lambda_7b06266c645e87ea8bded8a7a75fbbc2_(__int64 *a1)
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
