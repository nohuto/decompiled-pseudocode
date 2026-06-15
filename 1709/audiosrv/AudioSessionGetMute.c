/*
 * XREFs of AudioSessionGetMute @ 0x1800317E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x180016DE0 (-GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioSessionGetMute(CServerAudioSessionControl **a1, int *a2)
{
  CServerAudioSessionControl *v2; // rcx
  __int64 (*v3)(void); // rax
  int Mute; // eax
  unsigned int v5; // ebx

  v2 = *a1;
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 296LL);
  if ( (char *)v3 == (char *)CServerAudioSessionControl::GetMute )
    Mute = CServerAudioSessionControl::GetMute(v2, a2);
  else
    Mute = v3();
  v5 = Mute;
  if ( Mute < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetMute", 0x818u, Mute);
  return v5;
}
