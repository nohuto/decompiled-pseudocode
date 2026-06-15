/*
 * XREFs of ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180009EF4
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x1800085C0 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x180009DC0 (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x18000C034 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x18000C0A4 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x18000C344 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x18005A84C (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioEffectsWatcherFactory::GetWatcher(
        AudioEffectsWatcherFactory *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct AudioEffectsWatcher **a5)
{
  struct AudioEffectsWatcher **v8; // rsi
  _QWORD *i; // rdi
  __int64 v10; // rbx
  int v11; // edi
  AudioEffectsWatcher *v12; // rax
  unsigned int v13; // edx
  AudioEffectsWatcher *v14; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v17; // [rsp+40h] [rbp-28h]
  AudioEffectsWatcherFactory *v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = this;
  v8 = a5;
  *a5 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)&TheAudioEffectsWatcherFactory;
  v17 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  for ( i = (_QWORD *)qword_18014C3B8; i; i = (_QWORD *)*i )
  {
    v10 = i[2];
    if ( CompareStringOrdinal(a2, -1, *(LPCWCH *)(v10 + 24), -1, 1) == 2
      && a3 == *(_DWORD *)(v10 + 32)
      && a4 == *(_DWORD *)(v10 + 36) )
    {
      if ( ++*(_DWORD *)(v10 + 72) < 0x3FFFFFFFu )
      {
        v11 = 0;
        *v8 = (struct AudioEffectsWatcher *)v10;
      }
      else
      {
        AudioEffectsWatcher::ReleaseAppRef((AudioEffectsWatcher *)v10);
        v11 = -2147024882;
      }
      goto LABEL_19;
    }
  }
  v12 = (AudioEffectsWatcher *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v12;
  if ( v12 )
    v14 = AudioEffectsWatcher::AudioEffectsWatcher(v12);
  else
    v14 = 0LL;
  v18 = v14;
  if ( v14 )
  {
    v11 = AudioEffectsWatcher::Init(v14, a2, a3, a4);
    if ( v11 >= 0 )
    {
      *((_QWORD *)v14 + 10) = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(
                                (__int64)&qword_18014C3B8,
                                &v18);
      ++*((_DWORD *)v14 + 18);
      *v8 = v14;
      v14 = 0LL;
      v11 = 0;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v14 )
    AudioEffectsWatcher::`scalar deleting destructor'(v14, v13);
LABEL_19:
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v11;
}
