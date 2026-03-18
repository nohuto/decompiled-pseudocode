/*
 * XREFs of ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C02341E8
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236E24 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0047588 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI(struct _DEVICE_OBJECT **this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _DEVICE_OBJECT *v4; // rax
  struct _DEVICE_OBJECT *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  NTSTATUS v13; // ebx
  __int64 v14; // rax
  void *DeviceRegKey; // [rsp+40h] [rbp+8h] BYREF

  if ( ((_DWORD)this[5] & 0x10) == 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = 0LL;
  if ( *((_DWORD *)this + 32) )
  {
    v4 = this[17];
    if ( v4 )
    {
      v3 = *(_QWORD *)&v4->Type;
      if ( *(_QWORD *)&v4->Type )
      {
        if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)(v3 + 24)) < 0 )
          v3 = 0LL;
      }
    }
  }
  v5 = this[7];
  DeviceRegKey = 0LL;
  v6 = IoOpenDeviceRegistryKey(v5, 1u, 0xF003Fu, &DeviceRegKey);
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( v3 )
    {
      RtlDeleteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"BAD_EDID");
      v11 = RtlWriteRegistryValue(
              0x40000000u,
              (PCWSTR)DeviceRegKey,
              L"EDID",
              3u,
              (PVOID)(v3 + 24),
              *(_DWORD *)(v3 + 16));
    }
    else
    {
      RtlDeleteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"EDID");
      v11 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"BAD_EDID", 3u, 0LL, 0);
    }
    v13 = v11;
    if ( v11 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v14 + 24) = v13;
      WdLogEvent5_WdError(v14);
    }
    ZwClose(DeviceRegKey);
    return (unsigned int)v13;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
    return (unsigned int)v8;
  }
}
