/*
 * XREFs of AudioSessionGetState @ 0x180031160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180017000 (-GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioSessionGetState(CServerAudioSessionControl **a1, enum _AudioSessionState *a2)
{
  CServerAudioSessionControl *v2; // rcx
  __int64 (*v3)(void); // rax
  int State; // eax
  unsigned int v5; // ebx

  v2 = *a1;
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 144LL);
  if ( (char *)v3 == (char *)CServerAudioSessionControl::GetState )
    State = CServerAudioSessionControl::GetState(v2, a2);
  else
    State = v3();
  v5 = State;
  if ( State < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetState", 0x681u, State);
  return v5;
}
