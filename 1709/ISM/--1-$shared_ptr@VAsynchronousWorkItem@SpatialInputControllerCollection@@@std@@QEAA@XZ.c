/*
 * XREFs of ??1?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@QEAA@XZ @ 0x180039B24
 * Callers:
 *     _std::make_unique_MPCSlateDeadzoneHelper_float_const_&___ptr64_float_const_&___ptr64_void__::_1_::dtor$4 @ 0x1800CE667 (_std--make_unique_MPCSlateDeadzoneHelper_float_const_-___ptr64_float_const_-___ptr6_ea_1800CE667.c)
 *     _MPCSixDofProcessor::UpdatePoint_::_1_::dtor$0 @ 0x1800CEB37 (_MPCSixDofProcessor--UpdatePoint_--_1_--dtor$0.c)
 *     _SpatialInteractionDevices::GetReportCaps_::_1_::dtor$0 @ 0x1800CFF87 (_SpatialInteractionDevices--GetReportCaps_--_1_--dtor$0.c)
 *     _SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing_::_1_::dtor$0 @ 0x1800CFF93 (_SpatialInteractionDevices--PrepareSpatialInteractionDeviceParsing_--_1_--dtor$0.c)
 *     _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$15 @ 0x1800D0266 (_InputDeliveryServer--_InputDeliveryServer_--_1_--dtor$15.c)
 *     _InputAttemptedTarget::InputAttemptedTarget_::_1_::dtor$1 @ 0x1800D05F7 (_InputAttemptedTarget--InputAttemptedTarget_--_1_--dtor$1.c)
 *     _SpatialInputControllerCollection::DoDeviceAttach_::_1_::dtor$2 @ 0x1800D0E2F (_SpatialInputControllerCollection--DoDeviceAttach_--_1_--dtor$2.c)
 *     _SpatialInputControllerCollection::DoDeviceRemoval_::_1_::dtor$0 @ 0x1800D0E53 (_SpatialInputControllerCollection--DoDeviceRemoval_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::OnInputReport_::_1_::dtor$0 @ 0x1800D0E8F (_SpatialInputControllerCollection--OnInputReport_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::AddDeviceToCache_::_1_::dtor$2 @ 0x1800D0EF0 (_SpatialInputControllerCollection--AddDeviceToCache_--_1_--dtor$2.c)
 *     _SpatialInputControllerCollection::SetInputDeviceHapticsFeedback_::_1_::dtor$0 @ 0x1800D1007 (_SpatialInputControllerCollection--SetInputDeviceHapticsFeedback_--_1_--dtor$0.c)
 *     _std::_Func_impl__lambda_a715caf48442d4e80fa12b33611da91a__std::allocator_int__void_::_Do_call_::_1_::dtor$5 @ 0x1800D102B (_std--_Func_impl__lambda_a715caf48442d4e80fa12b33611da91a__std--allocator_int__void_--_Do_call_-.c)
 *     _SpatialInputControllerCollection::QueueWorkItem_::_1_::dtor$2 @ 0x1800D105B (_SpatialInputControllerCollection--QueueWorkItem_--_1_--dtor$2.c)
 *     _std::make_shared_SpatialInputControllerCollection::AsynchronousWorkItem_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__&___ptr64_std::function_void___cdecl(std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64)__&___ptr64_bool_&___ptr64__::_1_::dtor$20 @ 0x1800D1148 (_std--make_shared_SpatialInputControllerCollection--AsynchronousWorkItem_std--share_ea_1800D1148.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$1 @ 0x1800D1B02 (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerT_ea_1800D1B02.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReference::_SpatialGraphNodeReference_::_1_::dtor$1 @ 0x1800D1B26 (_Windows--Internal--Holographic--SpatialGraphNodeReference--_SpatialGraphNodeRefere_ea_1800D1B26.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::dtor$1 @ 0x1800D1CB8 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_1800D1CB8.c)
 *     _Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::_Create_Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory__::_1_::dtor$4 @ 0x1800D1F03 (_Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraphNodeReferenc_ea_1800D1F03.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>::~shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>(
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
