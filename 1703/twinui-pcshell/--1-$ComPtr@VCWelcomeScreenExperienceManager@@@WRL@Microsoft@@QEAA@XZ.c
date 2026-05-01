/*
 * XREFs of ??1?$ComPtr@VCWelcomeScreenExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B5010
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CWelcomeScreenExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18019C95F (_Microsoft--WRL--Details--MakeAndInitialize_CWelcomeScreenExperienceManager_IInspectable_IServic.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWelcomeScreenExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B3AB0 (-Release@-$RuntimeClass@U-$InterfaceList@UIWelcomeScreenExperienceManager@Experience@Shell@Inter.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CWelcomeScreenExperienceManager>::~ComPtr<CWelcomeScreenExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IWelcomeScreenExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
