/*
 * XREFs of ??1?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F8B68
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800485A0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     _CImmersiveApp::_ScheduleApplicationNotifications_::_1_::dtor$8 @ 0x1800B4118 (_CImmersiveApp--_ScheduleApplicationNotifications_--_1_--dtor$8.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180047140 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChange.c)
 */

ClientWindowReadyForPresentationEventArgs *__fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::~ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>(
        ClientWindowReadyForPresentationEventArgs **a1)
{
  ClientWindowReadyForPresentationEventArgs *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (ClientWindowReadyForPresentationEventArgs *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
