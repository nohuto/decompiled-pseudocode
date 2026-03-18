/*
 * XREFs of ACPIPepPowerSettingChangeCallback @ 0x1C00854D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPISetDeviceWorker @ 0x1C0024760 (ACPISetDeviceWorker.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIPepPowerSettingChangeCallback(
        _OWORD *SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        char *Context)
{
  struct _FAST_MUTEX *v4; // r14
  char v9; // al
  _DWORD InputBuffer[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h]

  v4 = (struct _FAST_MUTEX *)(Context + 184);
  ExAcquireFastMutex((PFAST_MUTEX)(Context + 184));
  if ( *(_OWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED == *SettingGuid && ValueLength == 4 && Value )
  {
    Context[245] = *Value != 0;
  }
  else
  {
    if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *(_QWORD *)SettingGuid
      && *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 == *((_QWORD *)SettingGuid + 1)
      && ValueLength == 4
      && Value )
    {
      *((_DWORD *)Context + 62) = *Value;
    }
    else if ( *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 == *(_QWORD *)SettingGuid
           && *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4 == *((_QWORD *)SettingGuid + 1)
           && ValueLength == 4
           && Value )
    {
      *((_DWORD *)Context + 63) = *Value;
    }
    if ( *((_DWORD *)Context + 62) || (v9 = 1, *((_DWORD *)Context + 63) != 2) )
      v9 = 0;
    Context[243] = v9;
  }
  if ( !Context[247] && (Context[243] != Context[244] || Context[245] != Context[246]) )
  {
    v12 = 0LL;
    InputBuffer[1] = 0;
    Context[247] = 1;
    InputBuffer[0] = 40;
    BYTE4(v12) = 1;
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x10u, 0LL, 0);
    ACPISetDeviceWorker((__int64)Context, 0);
  }
  ExReleaseFastMutex(v4);
  return 0LL;
}
