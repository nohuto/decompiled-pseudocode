/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal_____ptr64_IInspectable_____ptr64___lambda_e87c9e5367669f477d6dc870d4013be7__2_1_::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal_____ptr64_IInspectable_____ptr64___lambda_e87c9e5367669f477d6dc870d4013be7__2_1_ @ 0x180072C54
 * Callers:
 *     _lambda_f22d5cbf612beadeeb19a63fa8ca3a96_::operator() @ 0x180072F1C (_lambda_f22d5cbf612beadeeb19a63fa8ca3a96_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal_____ptr64_IInspectable_____ptr64___lambda_e87c9e5367669f477d6dc870d4013be7__2_1_::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal_____ptr64_IInspectable_____ptr64___lambda_e87c9e5367669f477d6dc870d4013be7__2_1_(
        __int64 a1,
        __int128 *a2)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  *(_QWORD *)a1 = &IBitmapUnlock::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal *,IInspectable *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v4 = *a2;
  *(_QWORD *)a1 = &off_1800A6A90;
  result = a1;
  *(_OWORD *)(a1 + 16) = v4;
  return result;
}
