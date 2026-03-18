/*
 * XREFs of DpiIsDriverUpdateInProgress @ 0x1C00FAD88
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DpiGetDevicePropertyDataBoolean @ 0x1C00FAE24 (DpiGetDevicePropertyDataBoolean.c)
 */

char __fastcall DpiIsDriverUpdateInProgress(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  int DevicePropertyDataBoolean; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // bl
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // [rsp+40h] [rbp+8h] BYREF
  char v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v15 = 0;
  v16 = 0;
  v4 = *(_QWORD *)(v2 + 40);
  DevicePropertyDataBoolean = DpiGetDevicePropertyDataBoolean(
                                *(_QWORD *)(v2 + 152),
                                &DEVPKEY_Device_InstallInProgress,
                                &v15);
  v7 = DevicePropertyDataBoolean;
  if ( DevicePropertyDataBoolean < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v13 + 24) = v7;
    WdLogEvent5_WdError(v13);
  }
  v8 = v15;
  if ( !v15 && *(_DWORD *)(v4 + 28) < 0x6000u )
  {
    v9 = DpiGetDevicePropertyDataBoolean(*(_QWORD *)(v2 + 152), &DEVPKEY_Device_IsRebootRequired, &v16);
    v11 = v9;
    if ( v9 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v14 + 24) = v11;
      WdLogEvent5_WdError(v14);
    }
    if ( v16 )
    {
      v8 = 1;
      *a2 = 1;
    }
  }
  return v8;
}
