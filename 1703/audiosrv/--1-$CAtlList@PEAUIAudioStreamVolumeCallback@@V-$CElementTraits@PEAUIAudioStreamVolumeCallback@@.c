/*
 * XREFs of ??1?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAA@XZ @ 0x18007BB08
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$13 @ 0x18005A8A8 (_CAudioStream--_CAudioStream_--_1_--dtor$13.c)
 *     _CMonitor::CMonitor_::_1_::dtor$20 @ 0x1800B1387 (_CMonitor--CMonitor_--_1_--dtor$20.c)
 *     _CMonitor::CMonitor_::_1_::dtor$21 @ 0x1800B139A (_CMonitor--CMonitor_--_1_--dtor$21.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::~CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>(
        __int64 a1)
{
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll(a1);
}
