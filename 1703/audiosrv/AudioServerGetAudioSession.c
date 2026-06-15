/*
 * XREFs of AudioServerGetAudioSession @ 0x18002E130
 * Callers:
 *     <none>
 * Callees:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x18001C8A0 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetAudioSession(CVADServer *this, struct CServerAudioSessionControl **a2)
{
  GUID v4; // xmm0
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CVADServer *, struct CServerAudioSessionControl **); // rax
  int AudioSession; // eax
  unsigned int v8; // ebx
  struct CServerAudioSessionControl *v10[2]; // [rsp+20h] [rbp-40h] BYREF
  GUID v11; // [rsp+30h] [rbp-30h]
  GUID v12; // [rsp+40h] [rbp-20h] BYREF

  if ( this )
    v4 = (GUID)*((_OWORD *)this + 17);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)v10 = v4;
  v11 = v4;
  v12 = v4;
  EtwEventActivityIdControl(4LL, &v12);
  v5 = *(_QWORD *)this;
  v10[0] = 0LL;
  v6 = *(__int64 (__fastcall **)(CVADServer *, struct CServerAudioSessionControl **))(v5 + 40);
  if ( v6 == CVADServer::get_AudioSession )
    AudioSession = CVADServer::get_AudioSession(this, v10);
  else
    AudioSession = v6(this, v10);
  v8 = AudioSession;
  if ( !AudioSession )
    *a2 = v10[0];
  if ( AudioSession < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAudioSession", 0xAE6u, AudioSession);
  EtwEventActivityIdControl(4LL, &v12);
  return v8;
}
