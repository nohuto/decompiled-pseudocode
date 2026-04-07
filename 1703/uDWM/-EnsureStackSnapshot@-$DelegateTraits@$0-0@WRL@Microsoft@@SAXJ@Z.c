/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180073528
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_1fb07860902cf0495ca2b3e5f54263f5__2__1_::Invoke @ 0x180073850 (Microsoft--WRL--Details--InvokeHelper_Microsoft--WRL--Implements_Microsoft--WRL--RuntimeClassFla.c)
 *     Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_f22d5cbf612beadeeb19a63fa8ca3a96__2__1_::Invoke @ 0x180073880 (Microsoft--WRL--Details--InvokeHelper_Microsoft--WRL--Implements_Microsoft--WRL--Ru_ea_180073880.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v3);
  if ( (int)RoGetMatchingRestrictedErrorInfo(a1, &v3) >= 0 )
    SetRestrictedErrorInfo(v3);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v3);
}
