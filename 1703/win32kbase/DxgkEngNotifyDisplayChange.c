/*
 * XREFs of DxgkEngNotifyDisplayChange @ 0x1C00F0990
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6B34 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C00700A0 (ReferenceDwmApiPort.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00F0B10 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall DxgkEngNotifyDisplayChange(char a1)
{
  PVOID v1; // rax
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( gpGdiSharedMemory )
    {
      _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393346);
      DisplayScenarioJournalDisplayUniquenessIncremented();
    }
  }
  else
  {
    GreIncrementDisplaySettingsUniqueness();
  }
  if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
  {
    v1 = ReferenceDwmApiPort();
    DwmAsyncNotifyDisplayModeChange(v1);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  return ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
}
