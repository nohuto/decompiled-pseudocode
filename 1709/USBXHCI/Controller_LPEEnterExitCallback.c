/*
 * XREFs of Controller_LPEEnterExitCallback @ 0x1C0011790
 * Callers:
 *     <none>
 * Callees:
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C000FEB0 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_InUseByDebugger @ 0x1C0011070 (Controller_InUseByDebugger.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C0012058 (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall Controller_LPEEnterExitCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        __int64 *Context)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  int v7; // r9d
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = 0;
  if ( !Value || ValueLength != 4 )
  {
    v4 = -1073741811;
    v7 = 248;
    v9 = *Context;
    goto LABEL_13;
  }
  v6 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v6 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v6 )
  {
    v4 = -1073741811;
    v7 = 249;
    v9 = *Context;
LABEL_13:
    LOBYTE(Value) = 2;
    WPP_RECORDER_SF_q(Context[9], (_DWORD)Value, 4, v7, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v9);
    return v4;
  }
  if ( *Value )
  {
    LOBYTE(Value) = 4;
    WPP_RECORDER_SF_q(
      Context[9],
      (_DWORD)Value,
      4,
      251,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      *Context);
    if ( Controller_InUseByDebugger(Context) )
      Controller_ReleaseWdfPowerReferenceForDebugger(Context);
  }
  else
  {
    LOBYTE(Value) = 4;
    WPP_RECORDER_SF_q(
      Context[9],
      (_DWORD)Value,
      4,
      250,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      *Context);
    if ( Controller_InUseByDebugger(Context) )
      Controller_AcquireWdfPowerReferenceForDebugger(Context);
  }
  return v4;
}
