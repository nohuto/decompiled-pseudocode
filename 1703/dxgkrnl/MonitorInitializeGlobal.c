/*
 * XREFs of MonitorInitializeGlobal @ 0x1C011C58C
 * Callers:
 *     DriverEntry @ 0x1C01EB008 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C010A064 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C011CB50 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall MonitorInitializeGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int64 v28; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v31; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v32; // [rsp+68h] [rbp-A0h] BYREF
  GUID v33; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v34[10]; // [rsp+88h] [rbp-80h] BYREF
  int v35; // [rsp+128h] [rbp+20h]
  _OWORD v36[10]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v37; // [rsp+1D8h] [rbp+D0h]

  WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_DWORD *)&v31.Length = 10748066;
  byte_1C006FF70 = 0;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v5 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[1] = v4;
  v6 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[2] = v5;
  v7 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[3] = v6;
  v8 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[4] = v7;
  v9 = *(_OWORD *)L"ol\\GraphicsDrivers\\BreakOnBadEDID";
  v34[5] = v8;
  v10 = *(_OWORD *)L"rs\\BreakOnBadEDID";
  v34[6] = v9;
  v34[7] = *(_OWORD *)L"icsDrivers\\BreakOnBadEDID";
  v11 = *(_OWORD *)L"OnBadEDID";
  v12 = *(_DWORD *)L"D";
  v34[8] = v10;
  v34[9] = v11;
  v35 = v12;
  v31.Buffer = (wchar_t *)v34;
  if ( DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, 0LL, &v31) >= 0 )
  {
    byte_1C006FF70 = 1;
    ZwClose(KeyHandle);
  }
  KeInitializeSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  qword_1C0070B20 = (__int64)&MONITOR_MGR::_MonitorPendingEventTraceHead;
  MONITOR_MGR::_MonitorPendingEventTraceHead.Flink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  v33 = GUID_DEVINTERFACE_MONITOR_DRIVER;
  v13 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &v33,
          g_pDriverObject,
          MONITOR_MGR::_HandleMonitorPnPNotification,
          0LL,
          &MONITOR_MGR::_pInterfaceNotificationHandle);
  v16 = v13;
  if ( v13 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v28 + 24) = v16;
    WdLogEvent5_WdError(v28);
  }
  qword_1C0070D98 = 0LL;
  KeInitializeGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  *(_DWORD *)&v32.Length = 11010214;
  qword_1C0070B38 = (__int64)&DXGMONITOR::_UniqueEntryList;
  DXGMONITOR::_UniqueEntryList.Flink = &DXGMONITOR::_UniqueEntryList;
  v17 = *(_OWORD *)(0x1C0000000LL + 299024);
  v36[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore";
  v18 = *(_OWORD *)(0x1C0000000LL + 299040);
  v36[1] = v17;
  v19 = *(_OWORD *)(0x1C0000000LL + 299056);
  v36[2] = v18;
  v20 = *(_OWORD *)(0x1C0000000LL + 299072);
  v36[3] = v19;
  v21 = *(_OWORD *)(0x1C0000000LL + 299088);
  v36[4] = v20;
  v22 = *(_OWORD *)(0x1C0000000LL + 299104);
  v36[5] = v21;
  v23 = *(_OWORD *)(0x1C0000000LL + 299120);
  v36[6] = v22;
  v24 = *(_OWORD *)(0x1C0000000LL + 299136);
  v36[7] = v23;
  v25 = *(_OWORD *)(0x1C0000000LL + 299152);
  v26 = *(_QWORD *)(0x1C0000000LL + 299168);
  v36[8] = v24;
  v36[9] = v25;
  v37 = v26;
  v32.Buffer = (wchar_t *)v36;
  if ( (int)DxgkCreateRegistrySubkey(&Handle, 0xF003Fu, 0LL, &v32) >= 0 )
    ZwClose(Handle);
  return (unsigned int)v16;
}
