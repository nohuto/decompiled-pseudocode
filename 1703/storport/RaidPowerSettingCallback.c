/*
 * XREFs of RaidPowerSettingCallback @ 0x1C001C2D0
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00124FC (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0012E88 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C002C404 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C002C424 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     Template_qqqqq @ 0x1C00300A0 (Template_qqqqq.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0035CB0 (RaidAdapterSetMaxOperationalPower.c)
 *     StorpCSEntryTelemetry @ 0x1C004272C (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0042B08 (StorpCSExitTelemetry.c)
 */

__int64 __fastcall RaidPowerSettingCallback(
        _OWORD *SettingGuid,
        unsigned int *Value,
        ULONG ValueLength,
        _QWORD *Context)
{
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  char v13; // di
  unsigned int SystemPowerHint; // eax
  unsigned __int8 v15; // cl
  int SystemPowerResumeLatency; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  char v20; // r9
  char v21; // r10
  char v22; // al
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  char v27; // r10
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
    v10 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_DISK_MAX_POWER.Data1;
    if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_DISK_MAX_POWER.Data1 )
      v10 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_DISK_MAX_POWER.Data4;
    if ( !v10 )
    {
      v28[0] = *Value;
      if ( v28[0] <= 0x64uLL )
      {
        LOBYTE(v8) = 1;
        RaidAdapterSetMaxOperationalPower(Context, v28, v8);
      }
      return 0LL;
    }
    v11 = *SettingGuid;
    v28[3] = Value;
    LODWORD(v28[4]) = ValueLength;
    *(_OWORD *)&v28[1] = v11;
    if ( !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 5) )
      return 0LL;
LABEL_8:
    RaCallMiniportAdapterControl((__int64)(Context + 37));
    return 0LL;
  }
  if ( ValueLength == 4 && Value )
  {
    v13 = *(_BYTE *)Value;
    if ( !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12) || !Context[637] || !Context[639] )
      return 0LL;
    SystemPowerHint = RaidAdapterGetSystemPowerHint(Context);
    RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
    v29 = 0x1000000001LL;
    if ( v13 == 1 )
    {
      v15 = *((_BYTE *)Context + 108);
      if ( v15 >= 0x80u )
        return 0LL;
      *((_BYTE *)Context + 108) = v15 | 0x80;
      LODWORD(v30) = RaidAdapterGetSystemPowerHint(Context);
      SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency((unsigned int)v30);
      HIDWORD(v30) = SystemPowerResumeLatency;
      if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_qqqqq(v18, v17, v19, *((_DWORD *)Context + 14), v19, v21, v20, SystemPowerResumeLatency);
      StorpCSEntryTelemetry(Context);
    }
    else
    {
      if ( v13 )
        return 0LL;
      v22 = *((_BYTE *)Context + 108);
      if ( v22 >= 0 )
        return 0LL;
      *((_BYTE *)Context + 108) = v22 & 0x7F;
      LODWORD(v30) = RaidAdapterGetSystemPowerHint(Context);
      v23 = RaidAdapterGetSystemPowerResumeLatency((unsigned int)v30);
      HIDWORD(v30) = v23;
      if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_qqqqq(v25, v24, v26, *((_DWORD *)Context + 14), v26, v27, v24, v23);
      StorpCSExitTelemetry(Context);
    }
    goto LABEL_8;
  }
  return 3221225485LL;
}
