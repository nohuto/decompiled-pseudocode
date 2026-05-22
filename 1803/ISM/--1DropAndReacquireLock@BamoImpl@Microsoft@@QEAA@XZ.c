/*
 * XREFs of ??1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000ACD8
 * Callers:
 *     _Microsoft::BamoImpl::BamoPrincipalImpl::OnZeroReferenceCount_::_1_::dtor$1 @ 0x1800E3A31 (_Microsoft--BamoImpl--BamoPrincipalImpl--OnZeroReferenceCount_--_1_--dtor$1.c)
 *     _Microsoft::BamoImpl::BamoPrincipalImpl::OnZeroReferenceCount_::_1_::dtor$0 @ 0x1800E3A3D (_Microsoft--BamoImpl--BamoPrincipalImpl--OnZeroReferenceCount_--_1_--dtor$0.c)
 *     _BamoImpl::BamoTestCommandsStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x1800E3A55 (_BamoImpl--BamoTestCommandsStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     _BamoImpl::BamoTestCommandsPrincipalImpl::AllocateStubThunk_::_1_::dtor$0 @ 0x1800E3A61 (_BamoImpl--BamoTestCommandsPrincipalImpl--AllocateStubThunk_--_1_--dtor$0.c)
 *     _IEdgyControllerServerPrincipal_Receive_BamoImpl::BamoEdgyControllerServerPrincipalImpl_::Thunk_RegisterEdgyControllerClient_90_::_1_::dtor$0 @ 0x1800E3CDA (_IEdgyControllerServerPrincipal_Receive_BamoImpl--BamoEdgyControllerServerPrincipalImpl_--Thunk_.c)
 *     _IInputSystemProxy_Receive_BamoImpl::BamoInputSystemProxyImpl_::Thunk_UpdateTestCommands_0_::_1_::dtor$0 @ 0x1800E3D27 (_IInputSystemProxy_Receive_BamoImpl--BamoInputSystemProxyImpl_--Thunk_UpdateTestCommands_0_--_1_.c)
 *     _Microsoft::BamoImpl::BamoConnectionImpl::OnPeerConnected_::_1_::dtor$2 @ 0x1800E4197 (_Microsoft--BamoImpl--BamoConnectionImpl--OnPeerConnected_--_1_--dtor$2.c)
 *     _Microsoft::BamoImpl::ConnectionIndirector::OnPeerDisconnected_::_1_::dtor$1 @ 0x1800E41C7 (_Microsoft--BamoImpl--ConnectionIndirector--OnPeerDisconnected_--_1_--dtor$1.c)
 *     _IBamoPeer_dataprovider_Receive_BamoImpl::dataproviderBamoPeerImpl_::Thunk_MaterializeBamoDataProviderRegistrarProxy_5_::_1_::dtor$0 @ 0x1800E41D3 (_IBamoPeer_dataprovider_Receive_BamoImpl--dataproviderBamoPeerImpl_--Thunk_MaterializeBamoDataPr.c)
 *     _ITestCommandsPrincipal_Receive_BamoImpl::BamoTestCommandsPrincipalImpl_::Thunk_RequestHitTest_3_::_1_::dtor$0 @ 0x1800E41DF (_ITestCommandsPrincipal_Receive_BamoImpl--BamoTestCommandsPrincipalImpl_--Thunk_RequestHitTest_3.c)
 *     _IDragNDropContextualProcessorPrincipal_Receive_BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl_::Thunk_StartDrag_55_::_1_::dtor$0 @ 0x1800E6D17 (_IDragNDropContextualProcessorPrincipal_Receive_BamoImpl--BamoDragNDropContextualProcessorPrinci.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::BamoImpl::DropAndReacquireLock::~DropAndReacquireLock(
        Microsoft::BamoImpl::DropAndReacquireLock *this)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 96));
    *(_DWORD *)(v1 + 136) = GetCurrentThreadId();
  }
}
