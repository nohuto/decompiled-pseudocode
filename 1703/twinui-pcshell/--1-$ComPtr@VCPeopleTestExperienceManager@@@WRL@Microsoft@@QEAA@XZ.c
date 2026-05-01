/*
 * XREFs of ??1?$ComPtr@VCPeopleTestExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6A20
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPeopleTestExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18019C4E9 (_Microsoft--WRL--Details--MakeAndInitialize_CPeopleTestExperienceManager_IInspectable_IServicePr.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A66C0 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIPresentation.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CPeopleTestExperienceManager>::~ComPtr<CPeopleTestExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(result);
  }
  return result;
}
