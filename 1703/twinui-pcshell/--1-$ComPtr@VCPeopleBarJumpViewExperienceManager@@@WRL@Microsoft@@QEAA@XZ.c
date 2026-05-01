/*
 * XREFs of ??1?$ComPtr@VCPeopleBarJumpViewExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A5E60
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPeopleBarJumpViewExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18019C4C5 (_Microsoft--WRL--Details--MakeAndInitialize_CPeopleBarJumpViewExperienceManager_IInspectable_ISe.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A5A20 (-Release@-$RuntimeClass@U-$InterfaceList@UIPeopleBarJumpViewExperienceManager@Experience@Shell@I.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CPeopleBarJumpViewExperienceManager>::~ComPtr<CPeopleBarJumpViewExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
