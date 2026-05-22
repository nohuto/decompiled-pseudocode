/*
 * XREFs of ??1?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@QEAA@XZ @ 0x180044A9C
 * Callers:
 *     ??1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ @ 0x1800C223C (--1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C2EFC (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     _MPCSixDofProcessor::UpdatePoint_::_1_::dtor$1 @ 0x1800E537A (_MPCSixDofProcessor--UpdatePoint_--_1_--dtor$1.c)
 *     _MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor$1 @ 0x1800E549F (_MPCSixDofProcessor--UpdateTouchpadDownleveling_--_1_--dtor$1.c)
 *     _MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper_::_1_::dtor$0 @ 0x1800E65CB (_MPCSlateDeadzoneHelper--MPCSlateDeadzoneHelper_--_1_--dtor$0.c)
 *     _ButtonProcessor::QueueWorkItem_::_1_::dtor$2 @ 0x1800E830A (_ButtonProcessor--QueueWorkItem_--_1_--dtor$2.c)
 *     _std::_Func_impl_no_alloc__lambda_144149a9c27bf167f7fd901056a59f58__void_::_Do_call_::_1_::dtor$3 @ 0x1800E834F (_std--_Func_impl_no_alloc__lambda_144149a9c27bf167f7fd901056a59f58__void_--_Do_call_--_1_--dtor$.c)
 *     _SpatialInteractionDevices::GetReportCaps_::_1_::dtor$0 @ 0x1800E8C91 (_SpatialInteractionDevices--GetReportCaps_--_1_--dtor$0.c)
 *     _SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing_::_1_::dtor$0 @ 0x1800E8C9D (_SpatialInteractionDevices--PrepareSpatialInteractionDeviceParsing_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem_::_1_::dtor$2 @ 0x1800E8F03 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E8F03.c)
 *     _std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__&___ptr64_std::function_void___cdecl(std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64)__&___ptr64_bool_&___ptr64__::_1_::dtor$15 @ 0x1800E927E (_std--_Ref_count_obj_Windows--Internal--SpatialInteractions--SpatialInteractionSour_ea_1800E927E.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$1 @ 0x1800E99C4 (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerT_ea_1800E99C4.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::dtor$1 @ 0x1800E9BA8 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_1800E9BA8.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$1 @ 0x1800E9E75 (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_1800E9E75.c)
 *     _Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::_Create_Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory__::_1_::dtor$4 @ 0x1800EA00F (_Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraphNodeReferenc_ea_1800EA00F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>::~shared_ptr<ButtonProcessor::AsynchronousWorkItem>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
