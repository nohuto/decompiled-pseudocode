/*
 * XREFs of ??1?$EventSource@U?$ITypedEventHandler@PEAVWelcomeScreenExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18005F9B4
 * Callers:
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bf1a12db3054eef3113d4368dbd0853d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64____::_1_::dtor$0 @ 0x18019A626 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_bf1a12db3054eef3113d4368dbd0853d__Win.c)
 *     _CWelcomeScreenExperienceManager::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x18019C8A8 (_CWelcomeScreenExperienceManager--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _ThumbnailInteropVisual::ThumbnailInteropVisual_::_1_::dtor$4 @ 0x1801A4B96 (_ThumbnailInteropVisual--ThumbnailInteropVisual_--_1_--dtor$4.c)
 *     _ThumbnailInteropVisual::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x1801A4C06 (_ThumbnailInteropVisual--_scalar_deleting_destructor__--_1_--dtor$4.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::WelcomeScreenExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::WelcomeScreenExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
