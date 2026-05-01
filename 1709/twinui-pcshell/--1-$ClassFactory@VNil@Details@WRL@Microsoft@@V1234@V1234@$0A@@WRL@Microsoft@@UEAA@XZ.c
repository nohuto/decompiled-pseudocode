/*
 * XREFs of ??1?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ @ 0x180006658
 * Callers:
 *     ??_G?$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800DE1A0 (--_G-$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_GVirtualTouchpadUriHandlerFactory@@EEAAPEAXI@Z @ 0x18017C470 (--_GVirtualTouchpadUriHandlerFactory@@EEAAPEAXI@Z.c)
 *     ??_G?$CTaskWrapper@V_lambda_4de2082f8d92723017ebdb5676c04982_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801CD6B0 (--_G-$CTaskWrapper@V_lambda_4de2082f8d92723017ebdb5676c04982_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     _Windows::Internal::ComTaskPool::CRemoteReleaseStub::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1801E74D8 (_Windows--Internal--ComTaskPool--CRemoteReleaseStub--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _StartExperienceWallpaperBackground::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1801EB6C9 (_StartExperienceWallpaperBackground--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _PenWorkspaceDiscoverBroker::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1801EC1FB (_PenWorkspaceDiscoverBroker--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1801F6A72 (_KeyboardHosting--TabTipAdapterPolicy--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$0 @ 0x1801F7616 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::~ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
