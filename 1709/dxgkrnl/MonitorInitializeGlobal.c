/*
 * XREFs of MonitorInitializeGlobal @ 0x1C011CEC0
 * Callers:
 *     DriverEntry @ 0x1C0205078 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall MonitorInitializeGlobal(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  int v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int64 v25; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-C0h] BYREF
  ULONG Disposition[2]; // [rsp+78h] [rbp-90h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  int v30; // [rsp+90h] [rbp-78h] BYREF
  _OWORD *v31; // [rsp+98h] [rbp-70h]
  int v32; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD *v33; // [rsp+A8h] [rbp-60h]
  GUID EventCategoryData; // [rsp+B0h] [rbp-58h] BYREF
  _OWORD v35[10]; // [rsp+C8h] [rbp-40h] BYREF
  int v36; // [rsp+168h] [rbp+60h]
  _OWORD v37[10]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v38; // [rsp+218h] [rbp+110h]

  WdLogNewEntry5_WdTrace(a1, a2);
  v30 = 10748066;
  byte_1C0060DF8 = 0;
  v2 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v35[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v3 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v35[1] = v2;
  v4 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v35[2] = v3;
  v5 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v35[3] = v4;
  v6 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v35[4] = v5;
  v7 = *(_OWORD *)L"ol\\GraphicsDrivers\\BreakOnBadEDID";
  v35[5] = v6;
  v8 = *(_OWORD *)L"rs\\BreakOnBadEDID";
  v35[6] = v7;
  v35[7] = *(_OWORD *)L"icsDrivers\\BreakOnBadEDID";
  v9 = *(_OWORD *)L"OnBadEDID";
  v10 = *(_DWORD *)L"D";
  v35[8] = v8;
  v35[9] = v9;
  v36 = v10;
  v31 = v35;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v30;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    byte_1C0060DF8 = 1;
    ZwClose(KeyHandle);
  }
  KeInitializeSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  qword_1C00619A0 = (__int64)&MONITOR_MGR::_MonitorPendingEventTraceHead;
  MONITOR_MGR::_MonitorPendingEventTraceHead.Flink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  EventCategoryData = GUID_DEVINTERFACE_MONITOR_DRIVER;
  v11 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &EventCategoryData,
          g_pDriverObject,
          MONITOR_MGR::_HandleMonitorPnPNotification,
          0LL,
          &MONITOR_MGR::_pInterfaceNotificationHandle);
  v13 = v11;
  if ( v11 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v25 + 24) = v13;
    WdLogEvent5_WdError(v25);
  }
  qword_1C0061C48 = 0LL;
  KeInitializeGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  v32 = 11010214;
  qword_1C00619F0 = (__int64)&DXGMONITOR::_UniqueEntryList;
  DXGMONITOR::_UniqueEntryList.Flink = &DXGMONITOR::_UniqueEntryList;
  v14 = *(_OWORD *)(0x1C0000000LL + 248576);
  v37[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore";
  v15 = *(_OWORD *)(0x1C0000000LL + 248592);
  v37[1] = v14;
  v16 = *(_OWORD *)(0x1C0000000LL + 248608);
  v37[2] = v15;
  v17 = *(_OWORD *)(0x1C0000000LL + 248624);
  v37[3] = v16;
  v18 = *(_OWORD *)(0x1C0000000LL + 248640);
  v37[4] = v17;
  v19 = *(_OWORD *)(0x1C0000000LL + 248656);
  v37[5] = v18;
  v20 = *(_OWORD *)(0x1C0000000LL + 248672);
  v37[6] = v19;
  v21 = *(_OWORD *)(0x1C0000000LL + 248688);
  v37[7] = v20;
  v22 = *(_OWORD *)(0x1C0000000LL + 248704);
  v23 = *(_QWORD *)(0x1C0000000LL + 248720);
  v37[8] = v21;
  v37[9] = v22;
  v38 = v23;
  v33 = v37;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v32;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, Disposition) >= 0 )
    ZwClose(Handle);
  return (unsigned int)v13;
}
