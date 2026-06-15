/*
 * XREFs of ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x1800B49F8
 * Callers:
 *     ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x1800B4834 (--1-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180004468 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

void __fastcall CAudioSessionManagerProvider::FinalRelease(CAudioSessionManagerProvider *this)
{
  unsigned int v1; // esi
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi

  v1 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v3 = 0LL;
    do
    {
      _mm_lfence();
      v4 = *((_QWORD *)this + 13);
      v5 = *(_QWORD *)(v4 + 8 * v3);
      if ( v3 >= *((_QWORD *)this + 14) )
        ATL::AtlThrowImpl(-2147024809);
      *(_QWORD *)(v4 + 8 * v3) = 0LL;
      CAudioSessionManager::Disconnect(v5, 1u, 1);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_aeba30c7500c361d0468064516c9e613_Traceguids, v5);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
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
    (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 208LL))(g_PolicyManager);
    if ( g_PolicyManager )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 16LL))(g_PolicyManager);
      g_PolicyManager = 0LL;
    }
  }
  if ( g_TelephonyControlEventsHandler )
  {
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)g_TelephonyControlEventsHandler + 16LL))(g_TelephonyControlEventsHandler);
    g_TelephonyControlEventsHandler = 0LL;
  }
  if ( g_TelephonyControl )
  {
    ((void (__fastcall *)(struct IUnknown *))g_TelephonyControl->lpVtbl->Release)(g_TelephonyControl);
    g_TelephonyControl = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
}
