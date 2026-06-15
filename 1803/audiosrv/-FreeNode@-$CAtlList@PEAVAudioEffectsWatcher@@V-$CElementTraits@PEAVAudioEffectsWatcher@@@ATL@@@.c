/*
 * XREFs of ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800A7514
 * Callers:
 *     ??1CAudioStream@@MEAA@XZ @ 0x180044320 (--1CAudioStream@@MEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180097FD0 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x18009FC40 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 *     ?RemoveAt@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800DA688 (-RemoveAt@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCal.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x1800E50FC (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180097FD0 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 */

void __fastcall ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // zf

  *a2 = *(_QWORD *)(a1 + 32);
  v2 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v2 )
    ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll(a1);
}
