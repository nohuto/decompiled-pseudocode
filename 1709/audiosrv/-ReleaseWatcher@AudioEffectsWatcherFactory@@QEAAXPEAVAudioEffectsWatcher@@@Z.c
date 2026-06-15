/*
 * XREFs of ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x180009E7C
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x1800085C0 (s_afxOpenAudioEffectsWatcher.c)
 *     s_afxCloseAudioEffectsWatcher @ 0x180009CC0 (s_afxCloseAudioEffectsWatcher.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180009D68 (-RemoveAt@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x18000BB44 (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x18000C034 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioEffectsWatcherFactory::ReleaseWatcher(
        AudioEffectsWatcherFactory *this,
        struct AudioEffectsWatcher *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&TheAudioEffectsWatcherFactory;
  v4 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( !AudioEffectsWatcher::ReleaseAppRef(a2) )
  {
    ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::RemoveAt(
      &qword_18014C3B8,
      *((_QWORD **)a2 + 10));
    AudioEffectsWatcher::~AudioEffectsWatcher(a2);
    operator delete(a2, (const struct std::nothrow_t *)0xE8);
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
