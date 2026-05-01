/*
 * XREFs of ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x180072194
 * Callers:
 *     _lambda_de3f4501c60332f424e3ead36a7d18c4_::operator() @ 0x180071554 (_lambda_de3f4501c60332f424e3ead36a7d18c4_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_b923ede267b549ce3e612fdbda9e4264___1_IInspectable_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180307280 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_180307280.c)
 *     SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::OnIdleStateChanged @ 0x180309AB0 (SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___--OnIdleStateChanged.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B0F4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 */

struct IInspectable **__fastcall ExperienceManagerUtils::AsStrong<IInspectable>(
        struct IInspectable **a1,
        Microsoft::WRL::Details::WeakReferenceImpl **this)
{
  *a1 = 0LL;
  Microsoft::WRL::WeakRef::As<IInspectable>(this, a1);
  return a1;
}
