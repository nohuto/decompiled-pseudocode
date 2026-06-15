/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1400303EC
 * Callers:
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000FB60 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x14002092C (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$1.c)
 *     _GraphStreamingResourceManager::RegisterThread_::_1_::dtor$0 @ 0x140020970 (_GraphStreamingResourceManager--RegisterThread_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterProcess_::_1_::dtor$0 @ 0x1400209C0 (_GraphStreamingResourceManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::_CSystemAudioDeviceSharedBase_::_1_::dtor$4 @ 0x140020ACE (_CSystemAudioDeviceSharedBase--_CSystemAudioDeviceSharedBase_--_1_--dtor$4.c)
 *     _CSystemAudioDeviceSharedBase::Cleanup_::_1_::dtor$1 @ 0x140020AEC (_CSystemAudioDeviceSharedBase--Cleanup_--_1_--dtor$1.c)
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$0 @ 0x140020B20 (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$0.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$2 @ 0x140020B88 (_CSubmixImpl--CreateStream_--_1_--dtor$2.c)
 *     _CSubmixImpl::Initialize_::_1_::dtor$2 @ 0x140020C6C (_CSubmixImpl--Initialize_--_1_--dtor$2.c)
 *     _ATL::CComObject_CSystemAudioDeviceShared_::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x140020E07 (_ATL--CComObject_CSystemAudioDeviceShared_--_scalar_deleting_destructor__--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$3 @ 0x140021544 (_CAudioDeviceGraph--Initialize_--_1_--dtor$3.c)
 *     _CAudioDeviceGraph::Cleanup_::_1_::dtor$0 @ 0x1400216F0 (_CAudioDeviceGraph--Cleanup_--_1_--dtor$0.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$3 @ 0x140021C64 (_PublishDeviceGraphWnfState_--_1_--dtor$3.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x140021C70 (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$3 @ 0x14002FF79 (_CSystemAudioDeviceShared--_CSystemAudioDeviceShared_--_1_--dtor$3.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x140037C36 (_CpuManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x140037E04 (_CpuManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x140037FDC (_CpuManager--RegisterThread_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$0 @ 0x14003900A (_CSystemAudioDeviceCollection--Add_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceCollection::Remove_::_1_::dtor$0 @ 0x14003954B (_CSystemAudioDeviceCollection--Remove_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::_CSystemAudioDeviceOffloadGraph_::_1_::dtor$7 @ 0x14003DCF9 (_CSystemAudioDeviceOffloadGraph--_CSystemAudioDeviceOffloadGraph_--_1_--dtor$7.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$0 @ 0x140041C1E (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$2 @ 0x140043EA8 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$2.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$2 @ 0x14004418E (_CStreamGroup--CreateStream_--_1_--dtor$2.c)
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
