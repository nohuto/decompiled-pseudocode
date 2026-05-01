/*
 * XREFs of ??1?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180234BD0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPeopleTestExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x18016FAB7 (_Microsoft--WRL--Details--MakeAndInitialize_CPeopleTestExperienceManager_IInspectab_ea_18016FAB7.c)
 *     _wil::MakeOrThrow_ApplicationViewWrapper_IApplicationView_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180233CE0 (_wil--MakeOrThrow_ApplicationViewWrapper_IApplicationView_____ptr64_-___ptr64__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180237690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmB_ea_180237690.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewWrapper>::~ComPtr<ApplicationViewWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::Release(result);
  }
  return result;
}
