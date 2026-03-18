/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0201980
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B0DD4 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C011D418 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0201918 (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0202114 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_PnPTargetDeviceChangeNotification(
        char *NotificationStructure,
        struct _DEVICE_OBJECT *Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // r12
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct _FAST_MUTEX *v23; // r13
  __int64 v24; // rax
  __int64 v25; // rcx
  PERESOURCE v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r15
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v36; // rdx
  void *v37; // rcx
  __int64 v38; // rcx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // eax
  PERESOURCE Resource; // [rsp+48h] [rbp-C0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGADAPTER *InputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v49[2]; // [rsp+60h] [rbp-A8h]
  __int64 v50; // [rsp+68h] [rbp-A0h]
  __int64 v51; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v52[32]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v53[120]; // [rsp+A0h] [rbp-68h] BYREF

  memset(&v53[40], 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v53[48]);
  *(_QWORD *)&v53[104] = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)&v53[64] = 3;
  v53[88] = -1;
  v6 = WdLogNewEntry5_WdTrace(v5, v4);
  v7 = 0;
  *(_QWORD *)(v6 + 24) = Context;
  *(_QWORD *)(v6 + 32) = NotificationStructure;
  if ( NotificationStructure && Context )
  {
    InputBuffer = 0LL;
    *(_QWORD *)v49 = 0LL;
    v50 = 0LL;
    v8 = DxgkCallDriverIoControl(Context, 0x232407u, &InputBuffer, 0x18u, &InputBuffer, 0x18u, 1u, 0LL);
    v12 = v8;
    if ( v8 < 0 )
    {
      v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = Context;
      *(_QWORD *)(v13 + 32) = v12;
      WdLogEvent5_WdWarning(v13);
      return 0LL;
    }
    v15 = InputBuffer;
    v16 = v49[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v51, InputBuffer, 0LL);
    v18 = COREADAPTERACCESS::AcquireExclusive(&v51, v17 + 1);
    if ( v18 >= 0 )
    {
      if ( !*((_QWORD *)v15 + 288) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v22);
      }
      v23 = *(struct _FAST_MUTEX **)(*((_QWORD *)v15 + 288) + 96LL);
      if ( !v23 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v24);
      }
      Resource = 0LL;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v23, v16, 1, (ULONG **)&Resource) >= 0 )
      {
        v26 = Resource;
        if ( !Resource )
        {
          v27 = WdLogNewEntry5_WdAssertion(v25);
          WdLogEvent5_WdAssertion(v27);
        }
        if ( LODWORD(v26[4].SystemResourcesList.Flink) != 1 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v25);
          WdLogEvent5_WdAssertion(v28);
        }
        LODWORD(v29) = 0;
        KeEnterCriticalRegion();
        Resource = (PERESOURCE)((char *)v26 + 280);
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v26 + 280), 1u);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
        if ( !DeviceAttachmentBaseRef )
        {
          v32 = WdLogNewEntry5_WdAssertion(v30);
          WdLogEvent5_WdAssertion(v32);
        }
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( DeviceAttachmentBaseRef == v26->ExclusiveWaiters )
        {
          v35 = *(_QWORD *)(NotificationStructure + 4);
          v36 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v35);
          if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v35 )
            v36 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4
                                                          - *(_QWORD *)(NotificationStructure + 12));
          if ( v36 )
          {
            v38 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v35;
            if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v35 )
              v38 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
            if ( v38 )
            {
              v44 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v35;
              if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v35 )
                v44 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
              if ( v44 )
              {
                LODWORD(v29) = -1073741811;
              }
              else
              {
                DXGMONITOR::_OnMonitorFunctionDriverDeparture((DXGMONITOR *)v26, v36);
                v45 = DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)v26);
                MONITOR_MGR::_LogMonitorPresentEvent((__int64)v23, 6, v16, v45, 0LL);
              }
            }
            else
            {
              MONITOR_MGR::_LogMonitorPresentEvent((__int64)v23, 5, v16, 0, 0LL);
              DeviceObject = 0LL;
              DeviceObjectPointer = IoGetDeviceObjectPointer(
                                      (PUNICODE_STRING)&v26->Address,
                                      0x80000000,
                                      (PFILE_OBJECT *)&v26->ActiveEntries,
                                      &DeviceObject);
              v29 = DeviceObjectPointer;
              if ( DeviceObjectPointer < 0 )
              {
                v41 = WdLogNewEntry5_WdError(v40);
                *(_QWORD *)(v41 + 24) = v26->SpinLock;
                *(_QWORD *)(v41 + 32) = v29;
                WdLogEvent5_WdError(v41);
              }
              if ( !*(_QWORD *)&v26->ActiveEntries )
              {
                v42 = WdLogNewEntry5_WdAssertion(v40);
                WdLogEvent5_WdAssertion(v42);
              }
              if ( !DeviceObject )
              {
                v43 = WdLogNewEntry5_WdAssertion(v40);
                WdLogEvent5_WdAssertion(v43);
              }
            }
          }
          else
          {
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)v23, 4, v16, 0, 0LL);
            v37 = *(void **)&v26->ActiveEntries;
            if ( v37 )
            {
              ObfDereferenceObject(v37);
              *(_QWORD *)&v26->ActiveEntries = 0LL;
            }
          }
          v7 = v29;
        }
        else
        {
          v34 = WdLogNewEntry5_WdError(v33);
          *(_QWORD *)(v34 + 24) = v16;
          WdLogEvent5_WdError(v34);
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
        goto LABEL_45;
      }
      v21 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v21 + 24) = v16;
    }
    else
    {
      if ( v18 != -1073741130 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = WdLogNewEntry5_WdError(v19);
    }
    WdLogEvent5_WdError(v21);
LABEL_45:
    COREACCESS::~COREACCESS((COREACCESS *)v53);
    COREACCESS::~COREACCESS((COREACCESS *)v52);
    return v7;
  }
  return 3221225485LL;
}
