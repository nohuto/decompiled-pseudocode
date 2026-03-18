/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C022BD10
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memcmp @ 0x1C001C500 (memcmp.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00BAA4C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C01A88F4 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  UNICODE_STRING *v10; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  struct DXGADAPTER *v21; // r15
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  struct _FAST_MUTEX *v29; // rdi
  __int64 v30; // rax
  int MonitorInstance; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGMONITOR *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGMONITOR *v42; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGADAPTER *InputBuffer[5]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v45[32]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v46[40]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v47[10]; // [rsp+D8h] [rbp-30h] BYREF

  memset(v47, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v47[1]);
  v47[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v47[3]) = 2;
  LOBYTE(v47[6]) = -1;
  WdLogNewEntry5_WdTrace(v4, v3, v5, v6);
  if ( !NotificationStructure )
    return 3221225485LL;
  v8 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v8 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v8 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = (char *)NotificationStructure + 20;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  v10 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(v10, 0x80000000, &FileObject, &DeviceObject);
  v13 = DeviceObjectPointer;
  if ( DeviceObjectPointer == -1073741772 )
  {
    v14 = WdLogNewEntry5_WdDmmEvent(v12);
    *(_QWORD *)(v14 + 24) = v10->Buffer;
    WdLogEvent5_WdDmmEvent(v14);
    return 3221225524LL;
  }
  if ( DeviceObjectPointer >= 0 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    memset(InputBuffer, 0, sizeof(InputBuffer));
    v13 = (int)DxgkCallDriverIoControl(DeviceObject, 0x232407u, InputBuffer, 0x28u, InputBuffer, 0x28u, 1u, 0LL);
    ObfDereferenceObject(FileObject);
    if ( (int)v13 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = v10->Buffer;
      *(_QWORD *)(v20 + 32) = v13;
      WdLogEvent5_WdWarning(v20);
      return (unsigned int)v13;
    }
    v21 = InputBuffer[0];
    v22 = LODWORD(InputBuffer[2]);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v44, InputBuffer[0], 0LL);
    v23 = COREADAPTERACCESS::AcquireExclusive(&v44);
    LODWORD(v13) = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -1073741130 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v25);
      }
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      goto LABEL_36;
    }
    v27 = *((_QWORD *)v21 + 307);
    if ( !v27 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v28);
      v27 = *((_QWORD *)v21 + 307);
    }
    v29 = *(struct _FAST_MUTEX **)(v27 + 96);
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v30);
    }
    v42 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v29, v22, 1, &v42);
    v13 = MonitorInstance;
    if ( MonitorInstance < 0 )
    {
      if ( MonitorInstance != -1073741275 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v33);
        v26[3] = v22;
        v26[4] = v29;
        v26[5] = v13;
LABEL_36:
        WdLogEvent5_WdError(v26);
        goto LABEL_37;
      }
      v37 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v37 + 24) = v22;
      *(_QWORD *)(v37 + 32) = v29;
    }
    else
    {
      v35 = v42;
      if ( !v42 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v33);
        WdLogEvent5_WdAssertion(v36);
      }
      if ( *((PDEVICE_OBJECT *)v35 + 7) == DeviceAttachmentBaseRef )
      {
        v38 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
        if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
          v38 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
        if ( v38 )
        {
          LODWORD(v13) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                       ? 0xC000000D
                       : 0;
LABEL_37:
          COREACCESS::~COREACCESS((COREACCESS *)v46);
          COREACCESS::~COREACCESS((COREACCESS *)v45);
          return (unsigned int)v13;
        }
        v39 = DXGMONITOR::_OnMonitorFunctionDriverArrival(v35, v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v47);
        MONITOR_MGR::_LogMonitorPresentEvent((__int64)v29, 3, v22, v39, 0LL);
LABEL_34:
        LODWORD(v13) = 0;
        goto LABEL_37;
      }
      v37 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v37 + 24) = v29;
    }
    WdLogEvent5_WdWarning(v37);
    goto LABEL_34;
  }
  v15 = WdLogNewEntry5_WdError(v12);
  *(_QWORD *)(v15 + 24) = v10->Buffer;
  *(_QWORD *)(v15 + 32) = v13;
  WdLogEvent5_WdError(v15);
  return (unsigned int)v13;
}
