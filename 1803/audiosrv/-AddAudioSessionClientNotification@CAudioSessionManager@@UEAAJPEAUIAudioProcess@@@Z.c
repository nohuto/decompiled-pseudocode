/*
 * XREFs of ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800B1790
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800B1840 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 */

__int64 __fastcall CAudioSessionManager::AddAudioSessionClientNotification(
        CAudioSessionManager *this,
        struct IAudioProcess *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-18h]
  struct IAudioProcess *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
      this,
      v7);
  }
  v8 = a2;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = CLockedList<CAudioSessionNotificationProcess,1,0>::AddInterface((char *)this + 200, &v8);
  v5 = v4;
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::AddAudioSessionClientNotification", 695, v4);
  return v5;
}
