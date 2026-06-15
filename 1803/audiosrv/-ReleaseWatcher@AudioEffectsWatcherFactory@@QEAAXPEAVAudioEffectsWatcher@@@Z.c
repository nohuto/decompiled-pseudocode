/*
 * XREFs of ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800A7DF4
 * Callers:
 *     s_afxCloseAudioEffectsWatcher @ 0x1800A8030 (s_afxCloseAudioEffectsWatcher.c)
 *     s_afxOpenAudioEffectsWatcher @ 0x1800A80B0 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x1800A74A8 (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x1800A7D84 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800DA688 (-RemoveAt@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCal.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioEffectsWatcherFactory::ReleaseWatcher(
        AudioEffectsWatcherFactory *this,
        struct AudioEffectsWatcher *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  lpCriticalSection = &TheAudioEffectsWatcherFactory;
  v4 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !(unsigned int)AudioEffectsWatcher::ReleaseAppRef(a2) )
  {
    ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAt(
      &qword_18018A308,
      *((_QWORD *)a2 + 10));
    AudioEffectsWatcher::`scalar deleting destructor'(a2);
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
