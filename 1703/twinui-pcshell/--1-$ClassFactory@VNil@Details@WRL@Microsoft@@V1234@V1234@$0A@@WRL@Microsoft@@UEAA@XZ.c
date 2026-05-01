/*
 * XREFs of ??1?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ @ 0x180006638
 * Callers:
 *     ??_G?$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800CBDA0 (--_G-$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_G?$CTaskWrapper@V_lambda_9519b51f5876991f6a0f1ef563cf8f11_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800D54C0 (--_G-$CTaskWrapper@V_lambda_9519b51f5876991f6a0f1ef563cf8f11_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??_GVirtualTouchpadUriHandlerFactory@@EEAAPEAXI@Z @ 0x1801477D0 (--_GVirtualTouchpadUriHandlerFactory@@EEAAPEAXI@Z.c)
 *     ??_G?$CTaskWrapper@V_lambda_4de2082f8d92723017ebdb5676c04982_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18017FD10 (--_G-$CTaskWrapper@V_lambda_4de2082f8d92723017ebdb5676c04982_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     _Windows::Internal::ComTaskPool::CRemoteReleaseStub::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x180198C65 (_Windows--Internal--ComTaskPool--CRemoteReleaseStub--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _PWSLayoutPolicyManager::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18019BB3D (_PWSLayoutPolicyManager--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$0 @ 0x1801A5158 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::~ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
