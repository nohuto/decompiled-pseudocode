/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18007AD60
 * Callers:
 *     _CVolumeControlBase::CVolumeControlBase_::_1_::dtor$0 @ 0x180059259 (_CVolumeControlBase--CVolumeControlBase_--_1_--dtor$0.c)
 *     _CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor$2 @ 0x1800599C7 (_CProcessSubmixProxy--_CProcessSubmixProxy_--_1_--dtor$2.c)
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$3 @ 0x180059CCA (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$6 @ 0x180059DBE (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$6.c)
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$7 @ 0x180059DCE (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$7.c)
 *     _CBaseStreamGroupProxy::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180059E1F (_CBaseStreamGroupProxy--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::CDeviceGraphObjectsStore_::_1_::dtor$1 @ 0x180059E37 (_CDeviceGraphObjectsStore--CDeviceGraphObjectsStore_--_1_--dtor$1.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$5 @ 0x18005A810 (_CAudioStream--_CAudioStream_--_1_--dtor$5.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$12 @ 0x18005A895 (_CAudioStream--_CAudioStream_--_1_--dtor$12.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$5 @ 0x18005A960 (_CAudioStream--CAudioStream_--_1_--dtor$5.c)
 *     _CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession_::_1_::dtor$1 @ 0x18005AB78 (_CPerStreamVolumeAudioSession--CPerStreamVolumeAudioSession_--_1_--dtor$1.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$1 @ 0x18005B0D4 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x18005B9FE (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x18005BA0E (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$1 @ 0x18005C030 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$1.c)
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$3 @ 0x18005C050 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$3.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x18005C09D (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x18005C0BD (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x18005C0DD (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _CAudioDGProcess::CAudioDGProcess_::_1_::dtor$0 @ 0x18005C2AB (_CAudioDGProcess--CAudioDGProcess_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::CDeviceGraphStore_::_1_::dtor$1 @ 0x18005C426 (_CDeviceGraphStore--CDeviceGraphStore_--_1_--dtor$1.c)
 *     _CAudioResourceManager::CAudioResourceManager_::_1_::dtor$1 @ 0x18005C49F (_CAudioResourceManager--CAudioResourceManager_--_1_--dtor$1.c)
 *     _CAudioSrv::_CAudioSrv_::_1_::dtor$1 @ 0x180080461 (_CAudioSrv--_CAudioSrv_--_1_--dtor$1.c)
 *     _CVolumeControlBase::_CVolumeControlBase_::_1_::dtor$0 @ 0x180084CA9 (_CVolumeControlBase--_CVolumeControlBase_--_1_--dtor$0.c)
 *     _CMuteSoftware::_CMuteSoftware_::_1_::dtor$2 @ 0x180087D32 (_CMuteSoftware--_CMuteSoftware_--_1_--dtor$2.c)
 *     _CVolumeSoftware::_CVolumeSoftware_::_1_::dtor$2 @ 0x180087DE5 (_CVolumeSoftware--_CVolumeSoftware_--_1_--dtor$2.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$1 @ 0x1800989C7 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$1.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$3 @ 0x1800989E7 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$3.c)
 *     _CMonitor::CMonitor_::_1_::dtor$0 @ 0x1800B1223 (_CMonitor--CMonitor_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x1800C1E73 (_Sarm--CSpatialAudioResourceManager--_CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::_CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x1800C1E83 (_Sarm--CSpatialAudioResourceManager--_CSpatialAudioResourceManager_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
