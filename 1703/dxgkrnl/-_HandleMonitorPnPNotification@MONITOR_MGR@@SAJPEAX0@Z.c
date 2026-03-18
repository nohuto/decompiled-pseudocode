/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C011C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memcmp @ 0x1C00151F0 (memcmp.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E9DB8 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C011CA40 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  UNICODE_STRING *v9; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGADAPTER *v21; // rdi
  __int64 v22; // r12
  int v23; // r8d
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _FAST_MUTEX *v29; // rdi
  int MonitorInstance; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct DXGMONITOR *v35; // r14
  __int64 v36; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGMONITOR *v51; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGADAPTER *InputBuffer; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v53[2]; // [rsp+68h] [rbp-A0h]
  __int64 v54; // [rsp+70h] [rbp-98h]
  __int64 v55; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v56[32]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v57[40]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v58[8]; // [rsp+C8h] [rbp-40h] BYREF

  memset(v58, 0, sizeof(v58));
  EtwActivityIdControl(3u, (LPGUID)&v58[1]);
  v58[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v58[3]) = 2;
  WdLogNewEntry5_WdTrace(v4, v3, v5, v6);
  if ( !NotificationStructure )
    return 3221225485LL;
  v8 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v8 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v8 )
  {
    v38 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v38 + 24) = (char *)NotificationStructure + 20;
    WdLogEvent5_WdError(v38);
    return 3221225485LL;
  }
  v9 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(v9, 0x80000000, &FileObject, &DeviceObject);
  v15 = DeviceObjectPointer;
  if ( DeviceObjectPointer != -1073741772 )
  {
    if ( DeviceObjectPointer < 0 )
    {
      v40 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v40 + 24) = v9->Buffer;
      *(_QWORD *)(v40 + 32) = v15;
      WdLogEvent5_WdError(v40);
      return (unsigned int)v15;
    }
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    InputBuffer = 0LL;
    *(_QWORD *)v53 = 0LL;
    v54 = 0LL;
    v15 = (int)DxgkCallDriverIoControl(DeviceObject, 0x232407u, &InputBuffer, 0x18u, &InputBuffer, 0x18u, 1u, 0LL);
    ObfDereferenceObject(FileObject);
    if ( (int)v15 < 0 )
    {
      v41 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      *(_QWORD *)(v41 + 24) = v9->Buffer;
      *(_QWORD *)(v41 + 32) = v15;
      WdLogEvent5_WdWarning(v41);
      return (unsigned int)v15;
    }
    v21 = InputBuffer;
    v22 = v53[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v55, InputBuffer, 0LL);
    v24 = COREADAPTERACCESS::AcquireExclusive(&v55, v23 + 1);
    LODWORD(v15) = v24;
    if ( v24 < 0 )
    {
      if ( v24 != -1073741130 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
        WdLogEvent5_WdAssertion(v42);
      }
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
    }
    else
    {
      if ( !*((_QWORD *)v21 + 285) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
        WdLogEvent5_WdAssertion(v44);
      }
      v29 = *(struct _FAST_MUTEX **)(*((_QWORD *)v21 + 285) + 96LL);
      if ( !v29 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
        WdLogEvent5_WdAssertion(v45);
      }
      v51 = 0LL;
      LOBYTE(v27) = 1;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v29, (unsigned int)v22, v27, (ULONG **)&v51);
      v15 = MonitorInstance;
      if ( MonitorInstance >= 0 )
      {
        v35 = v51;
        if ( !v51 )
        {
          v46 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
          WdLogEvent5_WdAssertion(v46);
        }
        if ( *((PDEVICE_OBJECT *)v35 + 5) == DeviceAttachmentBaseRef )
        {
          v36 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
          if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
            v36 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
          if ( v36 )
          {
            LODWORD(v15) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                         ? 0xC000000D
                         : 0;
            goto LABEL_22;
          }
          DXGMONITOR::_OnMonitorFunctionDriverArrival(v35, v9, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v58, v34);
          MONITOR_MGR::_LogMonitorPresentEvent((__int64)v29, 3LL, (unsigned int)v22, (unsigned int)v15, 0LL);
        }
        else
        {
          v47 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
          *(_QWORD *)(v47 + 24) = v29;
          WdLogEvent5_WdWarning(v47);
        }
        LODWORD(v15) = 0;
LABEL_22:
        COREACCESS::~COREACCESS((COREACCESS *)v57);
        COREACCESS::~COREACCESS((COREACCESS *)v56);
        return (unsigned int)v15;
      }
      if ( MonitorInstance == -1073741275 )
      {
        v48 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
        *(_QWORD *)(v48 + 24) = v22;
        *(_QWORD *)(v48 + 32) = v29;
        WdLogEvent5_WdWarning(v48);
        LODWORD(v15) = 0;
        goto LABEL_22;
      }
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
      v43[3] = v22;
      v43[4] = v29;
      v43[5] = v15;
    }
    WdLogEvent5_WdError(v43);
    goto LABEL_22;
  }
  v39 = WdLogNewEntry5_WdDmmEvent(v12, v11, v13, v14);
  *(_QWORD *)(v39 + 24) = v9->Buffer;
  WdLogEvent5_WdDmmEvent(v39);
  return 3221225524LL;
}
