/*
 * XREFs of ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C0107A98
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01089B4 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C001029C (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI(
        struct _DEVICE_OBJECT **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  struct _DEVICE_OBJECT *v6; // rax
  struct _DEVICE_OBJECT *v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  NTSTATUS v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  void *DeviceRegKey; // [rsp+40h] [rbp+8h] BYREF

  if ( ((_DWORD)this[3] & 0x10) == 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  v5 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    v6 = this[15];
    if ( v6 )
    {
      v5 = *(_QWORD *)&v6->Type;
      if ( *(_QWORD *)&v6->Type )
      {
        if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)(v5 + 24)) < 0 )
          v5 = 0LL;
      }
    }
  }
  v7 = this[5];
  DeviceRegKey = 0LL;
  v8 = IoOpenDeviceRegistryKey(v7, 1u, 0xF003Fu, &DeviceRegKey);
  v11 = v8;
  if ( v8 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v18 + 24) = v11;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v11;
  }
  else
  {
    if ( v5 )
    {
      RtlDeleteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"BAD_EDID");
      v12 = RtlWriteRegistryValue(
              0x40000000u,
              (PCWSTR)DeviceRegKey,
              L"EDID",
              3u,
              (PVOID)(v5 + 24),
              *(_DWORD *)(v5 + 16));
    }
    else
    {
      RtlDeleteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"EDID");
      v12 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)DeviceRegKey, L"BAD_EDID", 3u, 0LL, 0);
    }
    v15 = v12;
    if ( v12 < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v19 + 24) = v15;
      WdLogEvent5_WdError(v19);
    }
    ZwClose(DeviceRegKey);
    return (unsigned int)v15;
  }
}
