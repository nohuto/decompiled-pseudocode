/*
 * XREFs of ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180009810
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x1800085C0 (s_afxOpenAudioEffectsWatcher.c)
 *     AudioServerCreateStream @ 0x180008C70 (AudioServerCreateStream.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002AD2C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     AudioSessionManagerAddAudioSessionClientNotification @ 0x18007AAF0 (AudioSessionManagerAddAudioSessionClientNotification.c)
 *     AudioSessionManagerGetAudioSessions @ 0x18007AE00 (AudioSessionManagerGetAudioSessions.c)
 *     AudioSessionManagerGetExistingSession @ 0x18007AF90 (AudioSessionManagerGetExistingSession.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x18007B170 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     AudioServerDestroyStream @ 0x18008DEB0 (AudioServerDestroyStream.c)
 *     AudioServerDisconnect @ 0x18008DFF0 (AudioServerDisconnect.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008E370 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x18008EC00 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x18008F370 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     <none>
 */

CWatchdogTimer *__fastcall CWatchdogTimer::CWatchdogTimer(
        _QWORD *Parameter,
        const struct _TlgProvider_t *a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  void *v4; // rbx
  DWORD DueTime; // ebp
  DWORD CurrentThreadId; // eax

  v4 = g_AudioHealthMonitor;
  DueTime = g_AudioSrvWatchDogTimerInMs;
  *Parameter = 0LL;
  Parameter[1] = a2;
  CurrentThreadId = GetCurrentThreadId();
  Parameter[3] = a4;
  *((_DWORD *)Parameter + 4) = CurrentThreadId;
  Parameter[4] = v4;
  *((_BYTE *)Parameter + 40) = 0;
  if ( DueTime >= 0x3E8 )
    CreateTimerQueueTimer((PHANDLE)Parameter, 0LL, CWatchdogTimer::TimerCallback, Parameter, DueTime, 0, 0x20u);
  return (CWatchdogTimer *)Parameter;
}
