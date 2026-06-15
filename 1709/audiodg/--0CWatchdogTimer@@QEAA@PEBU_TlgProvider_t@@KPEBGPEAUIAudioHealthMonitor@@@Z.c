/*
 * XREFs of ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x140030E68
 * Callers:
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140044310 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400448E0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     <none>
 */

CWatchdogTimer *__fastcall CWatchdogTimer::CWatchdogTimer(
        _QWORD *Parameter,
        const struct _TlgProvider_t *a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  DWORD DueTime; // esi
  DWORD CurrentThreadId; // eax

  DueTime = g_AudioDgWatchDogTimerInMs;
  *Parameter = 0LL;
  Parameter[1] = a2;
  CurrentThreadId = GetCurrentThreadId();
  Parameter[4] = 0LL;
  *((_DWORD *)Parameter + 4) = CurrentThreadId;
  Parameter[3] = a4;
  *((_BYTE *)Parameter + 40) = 0;
  if ( DueTime >= 0x3E8 )
    CreateTimerQueueTimer((PHANDLE)Parameter, 0LL, CWatchdogTimer::TimerCallback, Parameter, DueTime, 0, 0x20u);
  return (CWatchdogTimer *)Parameter;
}
