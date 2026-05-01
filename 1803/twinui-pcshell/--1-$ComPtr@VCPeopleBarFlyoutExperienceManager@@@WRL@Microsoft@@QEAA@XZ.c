/*
 * XREFs of ??1?$ComPtr@VCPeopleBarFlyoutExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18016AC10
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPeopleBarFlyoutExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x18016A4B9 (_Microsoft--WRL--Details--MakeAndInitialize_CPeopleBarFlyoutExperienceManager_IInsp_ea_18016A4B9.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnToastActivator@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18016CB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpn_ea_18016CB30.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CPeopleBarFlyoutExperienceManager>::~ComPtr<CPeopleBarFlyoutExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
