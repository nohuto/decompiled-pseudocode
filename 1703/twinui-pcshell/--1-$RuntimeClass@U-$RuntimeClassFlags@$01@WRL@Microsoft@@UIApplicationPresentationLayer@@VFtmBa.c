/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationPresentationLayer@@VFtmBase@23@VNil@Details@23@V6723@V6723@V6723@V6723@V6723@V6723@@WRL@Microsoft@@UEAA@XZ @ 0x180024464
 * Callers:
 *     _AgileRegistrationList::AgileCallbackArray::AgileCallbackArray_::_1_::dtor$0 @ 0x180198DBB (_AgileRegistrationList--AgileCallbackArray--AgileCallbackArray_--_1_--dtor$0.c)
 *     _CFrameApplicationPresentation::CFrameApplicationPresentation_::_1_::dtor$0 @ 0x18019A766 (_CFrameApplicationPresentation--CFrameApplicationPresentation_--_1_--dtor$0.c)
 *     _Windows::Internal::Details::GitInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64__Windows::Internal::GitPtr_2_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18019AC2E (_Windows--Internal--Details--GitInvokeHelper_Windows--Foundation--ITypedEventHandler_Windows--Ap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationPresentationLayer,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationPresentationLayer,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  *(_DWORD *)(a1 + 36) = -1073741823;
  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
