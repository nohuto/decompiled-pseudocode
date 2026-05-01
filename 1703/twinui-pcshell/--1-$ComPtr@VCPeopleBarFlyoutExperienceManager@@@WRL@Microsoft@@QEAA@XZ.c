/*
 * XREFs of ??1?$ComPtr@VCPeopleBarFlyoutExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A4090
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPeopleBarFlyoutExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18019C3E1 (_Microsoft--WRL--Details--MakeAndInitialize_CPeopleBarFlyoutExperienceManager_IInspectable_IServ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UILightDismissNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A30D0 (-Release@-$RuntimeClass@U-$InterfaceList@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Int.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CPeopleBarFlyoutExperienceManager>::~ComPtr<CPeopleBarFlyoutExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
