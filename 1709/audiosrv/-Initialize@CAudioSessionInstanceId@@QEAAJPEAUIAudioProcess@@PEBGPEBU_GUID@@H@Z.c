/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800176CC
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180015510 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800276C4 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180079C80 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180013458 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x180014208 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180017800 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3,
        const struct _GUID *a4,
        int a5)
{
  int v8; // ebx
  struct IAudioProcess *v9; // rcx

  v8 = CAudioEndpointId::Initialize(this, a3);
  if ( v8 < 0
    || (v8 = CAppAudioSessionId::Initialize((GUID *)((char *)this + 8), a2, a4, a5), v8 < 0)
    || ((*((_DWORD *)this + 16) = a5, v9 = a2, !a5)
      ? (*((_DWORD *)this + 14) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2), v9 = a2)
      : (struct IAudioProcess *)(*((_DWORD *)this + 14) = 0),
        *((_DWORD *)this + 15) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(v9),
        v8 = CAudioSessionInstanceId::CalculateStaticId(this),
        v8 < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x386u, v8);
  }
  return (unsigned int)v8;
}
