/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x180096EDC
 * Callers:
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$1 @ 0x180066AAC (_CPolicyConfig--CPolicyConfig_--_1_--dtor$1.c)
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$3 @ 0x180066ACC (_CPolicyConfig--CPolicyConfig_--_1_--dtor$3.c)
 *     _CVolumeControlBase::CVolumeControlBase_::_1_::dtor$0 @ 0x180066C91 (_CVolumeControlBase--CVolumeControlBase_--_1_--dtor$0.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$5 @ 0x180068718 (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$5.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$6 @ 0x1800688A6 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$6.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$2 @ 0x180068AF8 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$3 @ 0x180068B08 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$4 @ 0x180068B18 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$4.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$2 @ 0x180068BAA (_PhoneTopology--PhoneTopology_--_1_--dtor$2.c)
 *     _CSharedStreamGroupProxy::RuntimeClassInitialize_::_1_::dtor$4 @ 0x1800692AB (_CSharedStreamGroupProxy--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$6 @ 0x180069446 (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$6.c)
 *     _AudioJournal::AudioJournal_::_1_::dtor$0 @ 0x1800698CC (_AudioJournal--AudioJournal_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x180069A75 (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x180069A95 (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x180069AB5 (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x180069C2A (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     _CAudioDGProcess::CAudioDGProcess_::_1_::dtor$0 @ 0x180069D31 (_CAudioDGProcess--CAudioDGProcess_--_1_--dtor$0.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$5 @ 0x18006A090 (_CAudioStream--CAudioStream_--_1_--dtor$5.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$14 @ 0x18006A13B (_CAudioStream--CAudioStream_--_1_--dtor$14.c)
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$7 @ 0x18006A499 (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$7.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$1 @ 0x18006A587 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$1.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$3 @ 0x18006A5A7 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$3.c)
 *     _CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession_::_1_::dtor$1 @ 0x18006A955 (_CPerStreamVolumeAudioSession--CPerStreamVolumeAudioSession_--_1_--dtor$1.c)
 *     _CDeviceGraphStore::CDeviceGraphStore_::_1_::dtor$1 @ 0x18006B134 (_CDeviceGraphStore--CDeviceGraphStore_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x18006B178 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x18006B188 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x18006B198 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$3.c)
 *     _CResourcePriorityTracker::CResourcePriorityTracker_::_1_::dtor$0 @ 0x180099605 (_CResourcePriorityTracker--CResourcePriorityTracker_--_1_--dtor$0.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$1 @ 0x1800B83F6 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$1.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$3 @ 0x1800B8416 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$3.c)
 *     _CMonitor::CMonitor_::_1_::dtor$0 @ 0x1800DDE5B (_CMonitor--CMonitor_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$4 @ 0x1800F1D6E (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
