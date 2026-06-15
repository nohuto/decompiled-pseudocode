/*
 * XREFs of ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x1800085C0 (s_afxOpenAudioEffectsWatcher.c)
 *     AudioServerCreateStream @ 0x180008C70 (AudioServerCreateStream.c)
 *     AudioVolumeConnect @ 0x180008FA0 (AudioVolumeConnect.c)
 *     AudioSessionManagerGetCurrentSession @ 0x180012D30 (AudioSessionManagerGetCurrentSession.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002AD2C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     _AudioServerInitialize_Internal_::_1_::dtor$1 @ 0x180039BCD (_AudioServerInitialize_Internal_--_1_--dtor$1.c)
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
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWatchdogTimer::~CWatchdogTimer(HANDLE *this)
{
  HANDLE v2; // rcx

  if ( *this )
  {
    DeleteTimerQueueTimer(0LL, *this, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    *this = 0LL;
  }
  if ( *((_BYTE *)this + 40) )
  {
    v2 = this[4];
    if ( v2 )
      (*(void (__fastcall **)(HANDLE, HANDLE))(*(_QWORD *)v2 + 8LL))(v2, this[1]);
  }
}
