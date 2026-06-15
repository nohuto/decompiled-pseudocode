/*
 * XREFs of s_afxCloseAudioEffectsWatcher @ 0x180009CC0
 * Callers:
 *     HAUDIOEFFECTSWATCHER_rundown @ 0x18006FA70 (HAUDIOEFFECTSWATCHER_rundown.c)
 * Callees:
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x180009E7C (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall s_afxCloseAudioEffectsWatcher(struct AudioEffectsWatcher ***a1)
{
  struct AudioEffectsWatcher **v1; // rdi
  struct AudioEffectsWatcher *v3; // rsi
  AudioEffectsWatcherFactory *v4; // rcx

  v1 = *a1;
  v3 = **a1;
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    AudioEffectsWatcherFactory::ReleaseWatcher(v4, v3);
    CoUninitialize();
  }
  operator delete(v1, (const struct std::nothrow_t *)8);
  *a1 = 0LL;
}
