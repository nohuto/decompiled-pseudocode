/*
 * XREFs of ??1?$ComPtr@VImeNotificationExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A04C0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ImeNotificationExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18019C2D4 (_Microsoft--WRL--Details--MakeAndInitialize_ImeNotificationExperienceManager_IInspectable_IServi.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImeStatusNotificationExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A00E0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImeStatusNotificationExperienceManager@Experience@She.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<ImeNotificationExperienceManager>::~ComPtr<ImeNotificationExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
