/*
 * XREFs of DpiMiracastHandlePowerCallback @ 0x1C01E19B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00FC1C0 (DxgkMiracastStopAllMiracastSessions.c)
 */

__int64 __fastcall DpiMiracastHandlePowerCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  __int64 v5; // rax
  union _LARGE_INTEGER v7[2]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v8[8]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v9[8]; // [rsp+70h] [rbp+7h] BYREF

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_MONITOR_POWER_ON.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_MONITOR_POWER_ON.Data1 )
      v5 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_MONITOR_POWER_ON.Data4;
    if ( !v5 )
    {
      if ( *Value )
      {
        if ( byte_1C0060859 && KeCancelTimer(&Timer) )
        {
          _InterlockedIncrement(&dword_1C0060C18);
          memset(v9, 0, sizeof(v9));
          v9[0] = 0x4000000006LL;
          memset(&v9[1], 0, 36);
          LODWORD(v9[6]) = 73;
          *(_QWORD *)((char *)&v9[6] + 4) = 2LL;
          HIDWORD(v9[7]) = 0;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9);
        }
        byte_1C0060859 = 0;
      }
      else
      {
        byte_1C0060859 = 1;
        if ( byte_1C0060858 && dword_1C0060C00 )
        {
          v7[0].QuadPart = -300000000LL;
          KeSetTimer(&Timer, (LARGE_INTEGER)-300000000LL, &Dpc);
          memset(v8, 0, sizeof(v8));
          v8[0] = 0x4000000006LL;
          memset(&v8[1], 0, 36);
          v8[6] = 73LL;
          v8[7] = 0LL;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8);
        }
      }
    }
  }
  else if ( *Value )
  {
    v7[0].QuadPart = -300000000LL;
    DxgkMiracastStopAllMiracastSessions(1, v7, 0x89u);
  }
  return 0LL;
}
