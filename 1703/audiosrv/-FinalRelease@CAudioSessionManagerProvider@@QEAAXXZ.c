/*
 * XREFs of ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x1800950A0
 * Callers:
 *     ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x180094D24 (--1-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x18007BF00 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180092FB0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

void __fastcall CAudioSessionManagerProvider::FinalRelease(CAudioSessionManagerProvider *this)
{
  unsigned int v1; // esi
  unsigned __int64 v3; // rdi
  __int64 v4; // r14

  v1 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                        (_QWORD *)this + 13,
                        v3);
      *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                   (_QWORD *)this + 13,
                   v3) = 0LL;
      CAudioSessionManager::Disconnect(v4, 1u, 1);
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xBu,
          (__int64)&WPP_0f05c22c788936a81d29e29f46ea837d_Traceguids,
          v4);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v3 = ++v1;
    }
    while ( (unsigned __int64)v1 < *((_QWORD *)this + 14) );
  }
  if ( g_PolicyEventsHandler )
  {
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)g_PolicyEventsHandler + 16LL))(g_PolicyEventsHandler);
    g_PolicyEventsHandler = 0LL;
  }
  if ( g_DuckingManager )
  {
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)g_DuckingManager + 16LL))(g_DuckingManager);
    g_DuckingManager = 0LL;
  }
  if ( g_PolicyManager )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 232LL))(g_PolicyManager);
    if ( g_PolicyManager )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 16LL))(g_PolicyManager);
      g_PolicyManager = 0LL;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
}
