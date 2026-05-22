/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180075D4C
 * Callers:
 *     _SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing_::_1_::catch$105 @ 0x1800CFF9F (_SpatialInteractionDevices--PrepareSpatialInteractionDeviceParsing_--_1_--catch$105.c)
 *     _SpatialInputControllerCollection::QueueWorkItem_::_1_::catch$98 @ 0x1800D1067 (_SpatialInputControllerCollection--QueueWorkItem_--_1_--catch$98.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::RuntimeClassInitialize_::_1_::catch$8 @ 0x1800D1AC3 (_Windows--Internal--Holographic--SpatialGraphDriverClient--RuntimeClassInitialize_--_1_--catch$8.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::catch$37 @ 0x1800D1B82 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--Create_--_1_--catch$37.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking_::_1_::catch$154 @ 0x1800D1C28 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StartTracking_--_1_--catch$154.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::catch$16 @ 0x1800D1C76 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StopTracking_--_1_--catch$16.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::catch$108 @ 0x1800D1CDC (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_1800D1CDC.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180009AD0 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
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
