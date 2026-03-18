/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C011D180
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memcmp @ 0x1C0016620 (memcmp.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B0DD4 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C011D418 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  UNICODE_STRING *v6; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rdi
  __int64 v15; // r15
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  struct _FAST_MUTEX *v19; // rdi
  int MonitorInstance; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGMONITOR *v24; // r14
  __int64 v25; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGMONITOR *v40; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGADAPTER *InputBuffer; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v42[2]; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+70h] [rbp-98h]
  __int64 v44; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v45[32]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v46[40]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v47[10]; // [rsp+C8h] [rbp-40h] BYREF

  memset(v47, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v47[1]);
  v47[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v47[3]) = 2;
  LOBYTE(v47[6]) = -1;
  WdLogNewEntry5_WdTrace(v4, v3);
  if ( !NotificationStructure )
    return 3221225485LL;
  v5 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v5 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v5 )
  {
    v27 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v27 + 24) = (char *)NotificationStructure + 20;
    WdLogEvent5_WdError(v27);
    return 3221225485LL;
  }
  v6 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(v6, 0x80000000, &FileObject, &DeviceObject);
  v9 = DeviceObjectPointer;
  if ( DeviceObjectPointer != -1073741772 )
  {
    if ( DeviceObjectPointer < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v29 + 24) = v6->Buffer;
      *(_QWORD *)(v29 + 32) = v9;
      WdLogEvent5_WdError(v29);
      return (unsigned int)v9;
    }
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    InputBuffer = 0LL;
    *(_QWORD *)v42 = 0LL;
    v43 = 0LL;
    v9 = (int)DxgkCallDriverIoControl(DeviceObject, 0x232407u, &InputBuffer, 0x18u, &InputBuffer, 0x18u, 1u, 0LL);
    ObfDereferenceObject(FileObject);
    if ( (int)v9 < 0 )
    {
      v30 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v30 + 24) = v6->Buffer;
      *(_QWORD *)(v30 + 32) = v9;
      WdLogEvent5_WdWarning(v30);
      return (unsigned int)v9;
    }
    v14 = InputBuffer;
    v15 = v42[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v44, InputBuffer, 0LL);
    v17 = COREADAPTERACCESS::AcquireExclusive(&v44, v16 + 1);
    LODWORD(v9) = v17;
    if ( v17 < 0 )
    {
      if ( v17 != -1073741130 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v31);
      }
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    }
    else
    {
      if ( !*((_QWORD *)v14 + 288) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v33);
      }
      v19 = *(struct _FAST_MUTEX **)(*((_QWORD *)v14 + 288) + 96LL);
      if ( !v19 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v34);
      }
      v40 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v19, v15, 1, (ULONG **)&v40);
      v9 = MonitorInstance;
      if ( MonitorInstance >= 0 )
      {
        v24 = v40;
        if ( !v40 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v35);
        }
        if ( *((PDEVICE_OBJECT *)v24 + 5) == DeviceAttachmentBaseRef )
        {
          v25 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
          if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
            v25 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
          if ( v25 )
          {
            LODWORD(v9) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                        ? 0xC000000D
                        : 0;
            goto LABEL_22;
          }
          DXGMONITOR::_OnMonitorFunctionDriverArrival(v24, v6, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v47);
          MONITOR_MGR::_LogMonitorPresentEvent((__int64)v19, 3, v15, v9, 0LL);
        }
        else
        {
          v36 = WdLogNewEntry5_WdWarning(v22, v21, v23);
          *(_QWORD *)(v36 + 24) = v19;
          WdLogEvent5_WdWarning(v36);
        }
        LODWORD(v9) = 0;
LABEL_22:
        COREACCESS::~COREACCESS((COREACCESS *)v46);
        COREACCESS::~COREACCESS((COREACCESS *)v45);
        return (unsigned int)v9;
      }
      if ( MonitorInstance == -1073741275 )
      {
        v37 = WdLogNewEntry5_WdWarning(v22, v21, v23);
        *(_QWORD *)(v37 + 24) = v15;
        *(_QWORD *)(v37 + 32) = v19;
        WdLogEvent5_WdWarning(v37);
        LODWORD(v9) = 0;
        goto LABEL_22;
      }
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v32[3] = v15;
      v32[4] = v19;
      v32[5] = v9;
    }
    WdLogEvent5_WdError(v32);
    goto LABEL_22;
  }
  v28 = WdLogNewEntry5_WdDmmEvent(v8);
  *(_QWORD *)(v28 + 24) = v6->Buffer;
  WdLogEvent5_WdDmmEvent(v28);
  return 3221225524LL;
}
