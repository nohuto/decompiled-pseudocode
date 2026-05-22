/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000F2E4
 * Callers:
 *     _MPCManagerClient::Create_::_1_::dtor$0 @ 0x1800E45C6 (_MPCManagerClient--Create_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance_::_1_::dtor$0 @ 0x1800E8C08 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Instance_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking_::_1_::dtor$0 @ 0x1800E9AF4 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StartTracking_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::dtor$0 @ 0x1800E9B4E (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StopTracking_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::dtor$0 @ 0x1800E9B9C (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNodeReferenceWit.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
