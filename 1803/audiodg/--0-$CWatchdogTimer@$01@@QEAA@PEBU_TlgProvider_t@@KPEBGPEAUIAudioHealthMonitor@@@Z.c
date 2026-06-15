/*
 * XREFs of ??0?$CWatchdogTimer@$01@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x14000184C
 * Callers:
 *     ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400025F0 (-CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005A10 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140012AF0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140042C60 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400431D0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     <none>
 */

struct _TP_TIMER **__fastcall CWatchdogTimer<2>::CWatchdogTimer<2>(
        struct _TP_TIMER **pv,
        struct _TP_TIMER *a2,
        __int64 a3,
        struct _TP_TIMER *a4,
        __int64 pftDueTime)
{
  __int64 v5; // rsi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax

  v5 = g_AudioDgWatchDogTimerInMs;
  *pv = 0LL;
  pv[1] = a2;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)pv + 11) = 0;
  *((_DWORD *)pv + 4) = CurrentThreadId;
  pv[4] = (struct _TP_TIMER *)pftDueTime;
  pv[3] = a4;
  *((_BYTE *)pv + 40) = 0;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<2>::TimerCallback, pv, 0LL);
    *pv = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = -10000 * v5 / 3;
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  return pv;
}
