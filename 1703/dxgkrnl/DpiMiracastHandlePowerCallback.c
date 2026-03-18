/*
 * XREFs of DpiMiracastHandlePowerCallback @ 0x1C01C7850
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00A6600 (DxgkMiracastStopAllMiracastSessions.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiMiracastHandlePowerCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  union _LARGE_INTEGER v13[2]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v14[8]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v15[8]; // [rsp+70h] [rbp+7h] BYREF

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
        if ( byte_1C006F9D9 && KeCancelTimer(&Timer) )
        {
          _InterlockedIncrement(&dword_1C006FD98);
          memset(v15, 0, sizeof(v15));
          v15[0] = 0x4000000006LL;
          memset(&v15[1], 0, 36);
          LODWORD(v15[6]) = 73;
          *(_QWORD *)((char *)&v15[6] + 4) = 2LL;
          HIDWORD(v15[7]) = 0;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15, v9, v10, v11);
        }
        byte_1C006F9D9 = 0;
      }
      else
      {
        byte_1C006F9D9 = 1;
        if ( byte_1C006F9D8 && dword_1C006FD80 )
        {
          v13[0].QuadPart = -300000000LL;
          KeSetTimer(&Timer, (LARGE_INTEGER)-300000000LL, &Dpc);
          memset(v14, 0, sizeof(v14));
          v14[0] = 0x4000000006LL;
          memset(&v14[1], 0, 36);
          v14[6] = 73LL;
          v14[7] = 0LL;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14, v6, v7, v8);
        }
      }
    }
  }
  else if ( *Value )
  {
    v13[0].QuadPart = -300000000LL;
    DxgkMiracastStopAllMiracastSessions(1, v13, 0x89u);
  }
  return 0LL;
}
