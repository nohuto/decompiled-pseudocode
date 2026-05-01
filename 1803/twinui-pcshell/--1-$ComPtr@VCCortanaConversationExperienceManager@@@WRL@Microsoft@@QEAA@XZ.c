/*
 * XREFs of ??1?$ComPtr@VCCortanaConversationExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180159614
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CCortanaConversationExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x180159477 (_Microsoft--WRL--Details--MakeAndInitialize_CCortanaConversationExperienceManager_I_ea_180159477.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007E550 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVis_ea_18007E550.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CCortanaConversationExperienceManager>::~ComPtr<CCortanaConversationExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
