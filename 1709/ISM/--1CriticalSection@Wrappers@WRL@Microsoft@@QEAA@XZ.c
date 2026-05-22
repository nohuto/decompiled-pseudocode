/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18000AFA0
 * Callers:
 *     _MPCRawInputProvider::_MPCRawInputProvider_::_1_::dtor$7 @ 0x1800CF929 (_MPCRawInputProvider--_MPCRawInputProvider_--_1_--dtor$7.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$1 @ 0x1800D0C5F (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$1.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$4 @ 0x1800D0C98 (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$4.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$6 @ 0x1800D0CBE (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$6.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$14 @ 0x1800D0D56 (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$14.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$20 @ 0x1800D0DC8 (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$20.c)
 *     _WGIRawInputProvider::_WGIRawInputProvider_::_1_::dtor$5 @ 0x1800D1304 (_WGIRawInputProvider--_WGIRawInputProvider_--_1_--dtor$5.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper_::_1_::dtor$1 @ 0x1800D1BF4 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--SpatialGraphDrive_ea_1800D1BF4.c)
 *     _Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory__::_1_::dtor$2 @ 0x1800D201B (_Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraphNodeReferenc_ea_1800D201B.c)
 *     _SpatialInteractionDevices::SpatialInteractionController::_SpatialInteractionController_::_1_::dtor$5 @ 0x1800D226C (_SpatialInteractionDevices--SpatialInteractionController--_SpatialInteractionContro_ea_1800D226C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
