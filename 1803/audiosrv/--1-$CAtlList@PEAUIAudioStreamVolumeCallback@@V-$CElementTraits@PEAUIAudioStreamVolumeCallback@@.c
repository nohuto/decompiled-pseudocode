/*
 * XREFs of ??1?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAA@XZ @ 0x180098030
 * Callers:
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$5 @ 0x180068B28 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$5.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$15 @ 0x18006A14E (_CAudioStream--CAudioStream_--_1_--dtor$15.c)
 *     _CMonitor::CMonitor_::_1_::dtor$20 @ 0x1800DDFBF (_CMonitor--CMonitor_--_1_--dtor$20.c)
 *     _CMonitor::CMonitor_::_1_::dtor$21 @ 0x1800DDFD2 (_CMonitor--CMonitor_--_1_--dtor$21.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::~CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>(
        __int64 a1)
{
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll(a1);
}
