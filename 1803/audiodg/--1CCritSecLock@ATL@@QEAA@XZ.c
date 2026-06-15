/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14002EFB8
 * Callers:
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000E870 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$0 @ 0x14001F554 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::Cleanup_::_1_::dtor$0 @ 0x14001F5A5 (_CAudioDeviceGraph--Cleanup_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x14001F6C8 (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$1.c)
 *     _GraphStreamingResourceManager::RegisterThread_::_1_::dtor$0 @ 0x14001F70E (_GraphStreamingResourceManager--RegisterThread_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterProcess_::_1_::dtor$0 @ 0x14001F754 (_GraphStreamingResourceManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$0 @ 0x14001F79A (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$0.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$2 @ 0x14001F808 (_CSubmixImpl--CreateStream_--_1_--dtor$2.c)
 *     _CSubmixImpl::Initialize_::_1_::dtor$2 @ 0x14001F8AC (_CSubmixImpl--Initialize_--_1_--dtor$2.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$3 @ 0x14001FB84 (_PublishDeviceGraphWnfState_--_1_--dtor$3.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x14001FB90 (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$5 @ 0x14002030C (_CAudioDeviceGraph--Initialize_--_1_--dtor$5.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x1400361F1 (_CpuManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x1400363CB (_CpuManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x14003659E (_CpuManager--RegisterThread_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$1 @ 0x1400405C1 (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$1.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$2 @ 0x140043147 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$2.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$2 @ 0x1400433D1 (_CStreamGroup--CreateStream_--_1_--dtor$2.c)
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
