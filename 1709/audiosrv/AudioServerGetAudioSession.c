/*
 * XREFs of AudioServerGetAudioSession @ 0x18002C5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180027510 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18002B404 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerGetAudioSession(CVADServer *this, struct CServerAudioSessionControl **a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(CVADServer *, struct CServerAudioSessionControl **); // rax
  int AudioSession; // eax
  unsigned int v7; // ebx
  struct CServerAudioSessionControl *v9; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[16]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-20h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v10, this);
  v4 = *(_QWORD *)this;
  v9 = 0LL;
  v5 = *(__int64 (__fastcall **)(CVADServer *, struct CServerAudioSessionControl **))(v4 + 40);
  if ( v5 == CVADServer::get_AudioSession )
    AudioSession = CVADServer::get_AudioSession(this, &v9);
  else
    AudioSession = v5(this, &v9);
  v7 = AudioSession;
  if ( !AudioSession )
    *a2 = v9;
  if ( AudioSession < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAudioSession", 0xAAEu, AudioSession);
  EtwEventActivityIdControl(4LL, v11);
  return v7;
}
