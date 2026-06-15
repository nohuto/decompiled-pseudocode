/*
 * XREFs of ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x14002EFDC
 * Callers:
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$0 @ 0x14002034F (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$0.c)
 *     _ATL::CComCreator_ATL::CComObject_CStreamGroup___::CreateInstance_::_1_::dtor$2 @ 0x1400208F4 (_ATL--CComCreator_ATL--CComObject_CStreamGroup___--CreateInstance_--_1_--dtor$2.c)
 *     _ATL::CComCreator_ATL::CComObject_CProcessSubmix___::CreateInstance_::_1_::dtor$2 @ 0x14002094B (_ATL--CComCreator_ATL--CComObject_CProcessSubmix___--CreateInstance_--_1_--dtor$2.c)
 *     _ATL::CComCreator_ATL::CComObject_CSystemAudioDeviceShared___::CreateInstance_::_1_::dtor$2 @ 0x1400209A2 (_ATL--CComCreator_ATL--CComObject_CSystemAudioDeviceShared___--CreateInstance_--_1_--dtor$2.c)
 *     _CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x1400209DC (_CCrossProcessServerInputEndpoint--CCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceShared::CSystemAudioDeviceShared_::_1_::dtor$0 @ 0x14002EC16 (_CSystemAudioDeviceShared--CSystemAudioDeviceShared_--_1_--dtor$0.c)
 *     _CStreamGroup::CStreamGroup_::_1_::dtor$0 @ 0x14002EE67 (_CStreamGroup--CStreamGroup_--_1_--dtor$0.c)
 *     _CProcessSubmix::CProcessSubmix_::_1_::dtor$0 @ 0x14002EF2F (_CProcessSubmix--CProcessSubmix_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::CSystemAudioDeviceExclusive_::_1_::dtor$0 @ 0x140037BC8 (_CSystemAudioDeviceExclusive--CSystemAudioDeviceExclusive_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffload::CSystemAudioDeviceOffload_::_1_::dtor$0 @ 0x14003ADC9 (_CSystemAudioDeviceOffload--CSystemAudioDeviceOffload_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph_::_1_::dtor$0 @ 0x14003C709 (_CSystemAudioDeviceOffloadGraph--CSystemAudioDeviceOffloadGraph_--_1_--dtor$0.c)
 *     _CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint_::_1_::dtor$0 @ 0x14004F8E0 (_CCrossProcessClientInputEndpoint--CCrossProcessClientInputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x14004F988 (_CCrossProcessClientOutputEndpoint--CCrossProcessClientOutputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint_::_1_::dtor$0 @ 0x14004FA1F (_CCrossProcessServerOutputEndpoint--CCrossProcessServerOutputEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x140057D15 (_CSpatialCrossProcessClientOutputEndpoint--CSpatialCrossProcessClientOutputEndpoint_--_1_--dtor$.c)
 *     _CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x140057E7D (_CSpatialCrossProcessServerInputEndpoint--CSpatialCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::~CComObjectRootEx<ATL::CComMultiThreadModel>(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 + 8;
  if ( *(_BYTE *)(v1 + 40) )
  {
    *(_BYTE *)(v1 + 40) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)v1);
  }
}
