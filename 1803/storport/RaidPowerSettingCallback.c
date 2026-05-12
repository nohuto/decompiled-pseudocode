/*
 * XREFs of RaidPowerSettingCallback @ 0x1C002B730
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000EDD4 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0014F3C (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     McTemplateK0qqqqq @ 0x1C00244F4 (McTemplateK0qqqqq.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0026234 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0026254 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0034F80 (RaidAdapterSetMaxOperationalPower.c)
 *     StorpCSEntryTelemetry @ 0x1C00426B0 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0042A84 (StorpCSExitTelemetry.c)
 */

__int64 __fastcall RaidPowerSettingCallback(
        _OWORD *SettingGuid,
        unsigned int *Value,
        ULONG ValueLength,
        __int64 Context)
{
  __int64 v8; // r8
  __int64 v9; // rax
  char v10; // di
  int SystemPowerHint; // eax
  char v12; // cl
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  char v17; // r9
  char v18; // r10
  char v19; // al
  int SystemPowerResumeLatency; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // r10
  __int64 v26; // rax
  __int128 v27; // xmm0
  _QWORD v28[5]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+68h] [rbp-18h]
  __int64 v30; // [rsp+70h] [rbp-10h]

  memset(&v28[1], 0, 0x20uLL);
  v29 = 0LL;
  v30 = 0LL;
  v9 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v9 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v9 )
  {
    v26 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_DISK_MAX_POWER.Data1;
    if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_DISK_MAX_POWER.Data1 )
      v26 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_DISK_MAX_POWER.Data4;
    if ( !v26 )
    {
      v28[0] = *Value;
      if ( v28[0] <= 0x64uLL )
      {
        LOBYTE(v8) = 1;
        RaidAdapterSetMaxOperationalPower(Context, v28, v8, 1LL);
      }
      return 0LL;
    }
    v27 = *SettingGuid;
    v28[3] = Value;
    LODWORD(v28[4]) = ValueLength;
    *(_OWORD *)&v28[1] = v27;
    if ( (unsigned int)RaidIsAdapterControlSupported(Context, 5) )
      goto LABEL_29;
  }
  else
  {
    if ( ValueLength != 4 || !Value )
      return 3221225485LL;
    v10 = *(_BYTE *)Value;
    if ( (unsigned int)RaidIsAdapterControlSupported(Context, 12)
      && *(_QWORD *)(Context + 5096)
      && *(_QWORD *)(Context + 5112) )
    {
      SystemPowerHint = RaidAdapterGetSystemPowerHint(Context);
      RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
      v29 = 0x1000000001LL;
      if ( v10 != 1 )
      {
        if ( v10 )
          return 0LL;
        v19 = *(_BYTE *)(Context + 108);
        if ( v19 >= 0 )
          return 0LL;
        *(_BYTE *)(Context + 108) = v19 & 0x7F;
        LODWORD(v30) = RaidAdapterGetSystemPowerHint(Context);
        SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v30);
        HIDWORD(v30) = SystemPowerResumeLatency;
        if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
          McTemplateK0qqqqq(v22, v21, v23, *(_DWORD *)(Context + 56), v23, v24, v21, SystemPowerResumeLatency);
        StorpCSExitTelemetry(Context);
        goto LABEL_29;
      }
      v12 = *(_BYTE *)(Context + 108);
      if ( v12 >= 0 )
      {
        *(_BYTE *)(Context + 108) = v12 | 0x80;
        LODWORD(v30) = RaidAdapterGetSystemPowerHint(Context);
        v13 = RaidAdapterGetSystemPowerResumeLatency(v30);
        HIDWORD(v30) = v13;
        if ( StorEtwLoggingEnabled )
        {
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
            McTemplateK0qqqqq(v15, v14, v16, *(_DWORD *)(Context + 56), v16, v18, v17, v13);
        }
        StorpCSEntryTelemetry(Context);
LABEL_29:
        RaCallMiniportAdapterControl(Context + 296);
      }
    }
  }
  return 0LL;
}
