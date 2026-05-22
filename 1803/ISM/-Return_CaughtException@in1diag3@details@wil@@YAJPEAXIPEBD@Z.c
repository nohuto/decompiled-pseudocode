/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180082ECC
 * Callers:
 *     _InputDestTarget::DeliverInput_::_1_::catch$26 @ 0x1800E7E57 (_InputDestTarget--DeliverInput_--_1_--catch$26.c)
 *     _ButtonProcessor::QueueWorkItem_::_1_::catch$135 @ 0x1800E8316 (_ButtonProcessor--QueueWorkItem_--_1_--catch$135.c)
 *     _SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing_::_1_::catch$105 @ 0x1800E8CA9 (_SpatialInteractionDevices--PrepareSpatialInteractionDeviceParsing_--_1_--catch$105.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDeviceToCache_::_1_::catch$50 @ 0x1800E8E9B (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E8E9B.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem_::_1_::catch$105 @ 0x1800E8F0F (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E8F0F.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::RuntimeClassInitialize_::_1_::catch$10 @ 0x1800E98CC (_Windows--Internal--Holographic--SpatialGraphDriverClient--RuntimeClassInitialize_--_1_--catch$1.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::catch$61 @ 0x1800E9ABE (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--Create_--_1_--catch$61.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking_::_1_::catch$116 @ 0x1800E9B18 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StartTracking_--_1_--catch$116.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::catch$19 @ 0x1800E9B66 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StopTracking_--_1_--catch$19.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::catch$81 @ 0x1800E9BCC (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_1800E9BCC.c)
 *     _Windows::Internal::SpatialInteractions::AverageHapticsFilter::OnInit_::_1_::catch$1 @ 0x1800EA59C (_Windows--Internal--SpatialInteractions--AverageHapticsFilter--OnInit_--_1_--catch$1.c)
 *     _Windows::Internal::SpatialInteractions::AverageHapticsFilter::EnsurePresent_::_1_::catch$22 @ 0x1800EA5CF (_Windows--Internal--SpatialInteractions--AverageHapticsFilter--EnsurePresent_--_1_--catch$22.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::BeginInitialize_::_1_::catch$5 @ 0x1800EA65E (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--BeginInitialize_--_.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800097F8 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr, 1);
}
