/*
 * XREFs of s_afxOpenAudioEffectsWatcher @ 0x180089B20
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180088FB4 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x180089864 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 */

__int64 __fastcall s_afxOpenAudioEffectsWatcher(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        _OWORD *a5,
        AudioEffectsWatcherFactory **a6,
        _QWORD *a7)
{
  _QWORD *v7; // rdi
  char v8; // si
  int Watcher; // ebx
  AudioEffectsWatcherFactory *v14; // rcx
  AudioEffectsWatcherFactory *v15; // rcx
  struct AudioEffectsWatcher *v16; // rcx
  struct AudioEffectsWatcher *v17; // rdx
  unsigned int v19; // [rsp+30h] [rbp-28h] BYREF
  struct AudioEffectsWatcher *v20; // [rsp+38h] [rbp-20h] BYREF

  v7 = 0LL;
  v8 = 0;
  v20 = 0LL;
  if ( g_PolicyManager )
  {
    Watcher = CoInitializeEx(0LL, 0);
    if ( Watcher >= 0 )
    {
      v8 = 1;
      v7 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v7 )
      {
        Watcher = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)g_PolicyManager + 96LL))(
                    g_PolicyManager,
                    a1,
                    a3,
                    0LL,
                    &v19);
        if ( Watcher >= 0 )
        {
          Watcher = AudioEffectsWatcherFactory::GetWatcher(v14, a2, v19, a4, &v20);
          if ( Watcher < 0 )
          {
            v17 = v20;
          }
          else
          {
            v16 = v20;
            v17 = 0LL;
            *v7 = v20;
            *a5 = *(_OWORD *)((char *)v16 + 8);
            v15 = *(AudioEffectsWatcherFactory **)((char *)v16 + 92);
            *a6 = v15;
            *a7 = v7;
            v7 = 0LL;
            Watcher = 0;
          }
          if ( v17 )
            AudioEffectsWatcherFactory::ReleaseWatcher(v15, v17);
        }
      }
      else
      {
        Watcher = -2147024882;
      }
    }
  }
  else
  {
    Watcher = -2147418113;
  }
  operator delete(v7, (const struct std::nothrow_t *)8);
  if ( v8 )
    CoUninitialize();
  return (unsigned int)Watcher;
}
