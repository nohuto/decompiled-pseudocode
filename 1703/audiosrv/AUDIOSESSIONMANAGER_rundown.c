/*
 * XREFs of AUDIOSESSIONMANAGER_rundown @ 0x1800028C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180021120 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 */

void __fastcall AUDIOSESSIONMANAGER_rundown(CAudioSessionManager **a1)
{
  __int64 (*v2)(void); // rax
  unsigned int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // eax

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 67LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, a1, *a1);
  }
  v2 = *(__int64 (**)(void))(*(_QWORD *)*a1 + 16LL);
  if ( (char *)v2 == (char *)CAudioSessionManager::Release )
    v3 = CAudioSessionManager::Release(*a1);
  else
    v3 = v2();
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, v3);
  }
  if ( g_DuckingManager )
  {
    v4 = *(_QWORD *)g_DuckingManager;
    v5 = (*(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)a1[1] + 40LL))(a1[1]);
    (*(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD, _QWORD))(v4 + 40))(g_DuckingManager, v5, 0LL);
  }
  (*(void (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)a1[1] + 16LL))(a1[1]);
  operator delete(a1, (const struct std::nothrow_t *)0x10);
}
