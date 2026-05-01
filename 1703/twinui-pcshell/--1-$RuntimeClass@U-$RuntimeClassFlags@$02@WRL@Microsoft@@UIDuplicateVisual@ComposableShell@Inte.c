/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@UEAA@XZ @ 0x1800A6F14
 * Callers:
 *     _CShoulderTapExperienceManager::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18019C501 (_CShoulderTapExperienceManager--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _ThumbnailInteropVisual::ThumbnailInteropVisual_::_1_::dtor$0 @ 0x1801A4B5A (_ThumbnailInteropVisual--ThumbnailInteropVisual_--_1_--dtor$0.c)
 *     _ThumbnailInteropVisual::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1801A4BCA (_ThumbnailInteropVisual--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _SolidColorVisual::SolidColorVisual_::_1_::dtor$0 @ 0x1801A4D64 (_SolidColorVisual--SolidColorVisual_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v1));
  return result;
}
