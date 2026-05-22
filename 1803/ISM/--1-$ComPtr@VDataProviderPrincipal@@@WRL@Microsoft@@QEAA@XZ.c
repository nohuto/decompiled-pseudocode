/*
 * XREFs of ??1?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@QEAA@XZ @ 0x18000C340
 * Callers:
 *     _InputSiteManager::RegisterInputSiteElement_::_1_::dtor$1 @ 0x1800E3B4B (_InputSiteManager--RegisterInputSiteElement_--_1_--dtor$1.c)
 *     _InputSiteElementProxy::OnDragSourceClientChanged_::_1_::dtor$0 @ 0x1800E3D0F (_InputSiteElementProxy--OnDragSourceClientChanged_--_1_--dtor$0.c)
 *     _InputDeliveryServer::RegisterInputAttemptedClient_::_1_::dtor$1 @ 0x1800E43B0 (_InputDeliveryServer--RegisterInputAttemptedClient_--_1_--dtor$1.c)
 *     _ControllerNavigationManager::RegisterControllerProcessor_::_1_::dtor$0 @ 0x1800E4962 (_ControllerNavigationManager--RegisterControllerProcessor_--_1_--dtor$0.c)
 *     _ControllerNavigationManager::RegisterOverride_::_1_::dtor$0 @ 0x1800E496E (_ControllerNavigationManager--RegisterOverride_--_1_--dtor$0.c)
 *     _DragManagerHost::CancelDrag_::_1_::dtor$0 @ 0x1800E6D0B (_DragManagerHost--CancelDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$5 @ 0x1800E6DB3 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$5.c)
 *     _DragNDropProcessor::StartGestureRecognition_::_1_::dtor$0 @ 0x1800E6E38 (_DragNDropProcessor--StartGestureRecognition_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartGestureRecognition_::_1_::dtor$1 @ 0x1800E6E44 (_DragNDropProcessor--StartGestureRecognition_--_1_--dtor$1.c)
 *     _DragNDropProcessor::StartDrag_::_1_::dtor$0 @ 0x1800E6E5C (_DragNDropProcessor--StartDrag_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$0 @ 0x1800E6E74 (_DragNDropProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$1 @ 0x1800E6E80 (_DragNDropProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x1800E6E8C (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x1800E6E98 (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$20 @ 0x1800E7A07 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$20.c)
 *     _AnimationDataProvider::AnimationDataProvider_::_1_::dtor$1 @ 0x1800E80E2 (_AnimationDataProvider--AnimationDataProvider_--_1_--dtor$1.c)
 *     _AnimationDataProvider::AnimationDataProvider_::_1_::dtor$2 @ 0x1800E80F2 (_AnimationDataProvider--AnimationDataProvider_--_1_--dtor$2.c)
 *     _AnimationDataProvider::CreateDataSource_::_1_::dtor$0 @ 0x1800E8143 (_AnimationDataProvider--CreateDataSource_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$0 @ 0x1800E8186 (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$1 @ 0x1800E8192 (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$1.c)
 *     _AnimationDataProvider::GetDataSourceId_::_1_::dtor$0 @ 0x1800E81B8 (_AnimationDataProvider--GetDataSourceId_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<DataProviderPrincipal>::~ComPtr<DataProviderPrincipal>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return result;
}
