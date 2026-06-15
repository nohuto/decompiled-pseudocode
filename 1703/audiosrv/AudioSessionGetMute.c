/*
 * XREFs of AudioSessionGetMute @ 0x180024430
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x180020BF0 (-GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
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
