/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14002FFFC
 * Callers:
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000C9D0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x140020408 (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$1.c)
 *     _GraphStreamingResourceManager::RegisterThread_::_1_::dtor$0 @ 0x14002044E (_GraphStreamingResourceManager--RegisterThread_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterProcess_::_1_::dtor$0 @ 0x140020494 (_GraphStreamingResourceManager--RegisterProcess_--_1_--dtor$0.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$3 @ 0x140020904 (_PublishDeviceGraphWnfState_--_1_--dtor$3.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x140020910 (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$3 @ 0x140021124 (_CAudioDeviceGraph--Initialize_--_1_--dtor$3.c)
 *     _CAudioDeviceGraph::Cleanup_::_1_::dtor$0 @ 0x140021308 (_CAudioDeviceGraph--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::_CSystemAudioDeviceSharedBase_::_1_::dtor$4 @ 0x1400213D2 (_CSystemAudioDeviceSharedBase--_CSystemAudioDeviceSharedBase_--_1_--dtor$4.c)
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$0 @ 0x140021420 (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$0.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$2 @ 0x140021488 (_CSubmixImpl--CreateStream_--_1_--dtor$2.c)
 *     _CSubmixImpl::Initialize_::_1_::dtor$2 @ 0x14002152C (_CSubmixImpl--Initialize_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$0 @ 0x140021C62 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$3 @ 0x140021D94 (_CSystemAudioDeviceShared--_CSystemAudioDeviceShared_--_1_--dtor$3.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x14003762C (_CpuManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x1400377F6 (_CpuManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x1400379C9 (_CpuManager--RegisterThread_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::_CSystemAudioDeviceOffloadGraph_::_1_::dtor$7 @ 0x14003E669 (_CSystemAudioDeviceOffloadGraph--_CSystemAudioDeviceOffloadGraph_--_1_--dtor$7.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$0 @ 0x14004246E (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$2 @ 0x140044854 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$2.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$2 @ 0x140044B3E (_CStreamGroup--CreateStream_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::~CCritSecLock(LPCRITICAL_SECTION *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    LeaveCriticalSection(*this);
    *((_BYTE *)this + 8) = 0;
  }
}
