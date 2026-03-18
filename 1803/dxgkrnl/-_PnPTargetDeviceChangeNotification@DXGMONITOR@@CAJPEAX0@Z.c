/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0237460
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00BAA4C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C01A88F4 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02373EC (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0238468 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_PnPTargetDeviceChangeNotification(
        char *NotificationStructure,
        struct _DEVICE_OBJECT *Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rax
  struct DXGADAPTER *v17; // rdi
  __int64 v18; // r12
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct _FAST_MUTEX *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  PERESOURCE v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r15
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v40; // rdx
  PVOID Reserved2; // rcx
  __int64 v42; // rcx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  PERESOURCE Resource; // [rsp+48h] [rbp-C0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGADAPTER *InputBuffer[6]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v54[32]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v55[120]; // [rsp+B0h] [rbp-58h] BYREF

  memset(&v55[40], 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v55[48]);
  *(_QWORD *)&v55[104] = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)&v55[64] = 3;
  v55[88] = -1;
  v8 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
  v9 = 0;
  *(_QWORD *)(v8 + 24) = Context;
  *(_QWORD *)(v8 + 32) = NotificationStructure;
  if ( NotificationStructure && Context )
  {
    memset(InputBuffer, 0, 0x28uLL);
    v10 = DxgkCallDriverIoControl(Context, 0x232407u, InputBuffer, 0x28u, InputBuffer, 0x28u, 1u, 0LL);
    v14 = v10;
    if ( v10 < 0 )
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = Context;
      *(_QWORD *)(v15 + 32) = v14;
      WdLogEvent5_WdWarning(v15);
      return 0LL;
    }
    v17 = InputBuffer[0];
    v18 = LODWORD(InputBuffer[2]);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v53, InputBuffer[0], 0LL);
    v19 = COREADAPTERACCESS::AcquireExclusive(&v53);
    if ( v19 >= 0 )
    {
      v23 = *((_QWORD *)v17 + 307);
      if ( !v23 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v24);
        v23 = *((_QWORD *)v17 + 307);
      }
      v25 = *(struct _FAST_MUTEX **)(v23 + 96);
      if ( !v25 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v26);
      }
      Resource = 0LL;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v25, v18, 1, (struct DXGMONITOR **)&Resource) >= 0 )
      {
        v28 = Resource;
        if ( !Resource )
        {
          v29 = WdLogNewEntry5_WdAssertion(v27);
          WdLogEvent5_WdAssertion(v29);
        }
        if ( LODWORD(v28[4].OwnerTable) != 1 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v27);
          WdLogEvent5_WdAssertion(v30);
        }
        LODWORD(v31) = 0;
        Resource = (PERESOURCE)((char *)v28 + 296);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v28 + 296), 1u);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
        if ( !DeviceAttachmentBaseRef )
        {
          v34 = WdLogNewEntry5_WdAssertion(v32);
          WdLogEvent5_WdAssertion(v34);
        }
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( DeviceAttachmentBaseRef == *(PDEVICE_OBJECT *)&v28->OwnerEntry.0 )
        {
          v39 = *(_QWORD *)(NotificationStructure + 4);
          v40 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v39);
          if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v39 )
            v40 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4
                                                          - *(_QWORD *)(NotificationStructure + 12));
          if ( v40 )
          {
            v42 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v39;
            if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v39 )
              v42 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
            if ( v42 )
            {
              v48 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v39;
              if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v39 )
                v48 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
              if ( v48 )
              {
                LODWORD(v31) = -1073741811;
              }
              else
              {
                DXGMONITOR::_OnMonitorFunctionDriverDeparture((DXGMONITOR *)v28, v40, v36, v37);
                v49 = DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)v28);
                MONITOR_MGR::_LogMonitorPresentEvent((__int64)v25, 6, v18, v49, 0LL);
              }
            }
            else
            {
              MONITOR_MGR::_LogMonitorPresentEvent((__int64)v25, 5, v18, 0, 0LL);
              DeviceObject = 0LL;
              DeviceObjectPointer = IoGetDeviceObjectPointer(
                                      (PUNICODE_STRING)&v28[1],
                                      0x80000000,
                                      (PFILE_OBJECT *)&v28->Reserved2,
                                      &DeviceObject);
              v31 = DeviceObjectPointer;
              if ( DeviceObjectPointer < 0 )
              {
                v45 = WdLogNewEntry5_WdError(v44);
                *(_QWORD *)(v45 + 24) = v28[1].SystemResourcesList.Blink;
                *(_QWORD *)(v45 + 32) = v31;
                WdLogEvent5_WdError(v45);
              }
              if ( !v28->Reserved2 )
              {
                v46 = WdLogNewEntry5_WdAssertion(v44);
                WdLogEvent5_WdAssertion(v46);
              }
              if ( !DeviceObject )
              {
                v47 = WdLogNewEntry5_WdAssertion(v44);
                WdLogEvent5_WdAssertion(v47);
              }
            }
          }
          else
          {
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)v25, 4, v18, 0, 0LL);
            Reserved2 = v28->Reserved2;
            if ( Reserved2 )
            {
              ObfDereferenceObject(Reserved2);
              v28->Reserved2 = 0LL;
            }
          }
          v9 = v31;
        }
        else
        {
          v38 = WdLogNewEntry5_WdError(v35);
          *(_QWORD *)(v38 + 24) = v18;
          WdLogEvent5_WdError(v38);
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
        goto LABEL_45;
      }
      v22 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v22 + 24) = v18;
    }
    else
    {
      if ( v19 != -1073741130 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = WdLogNewEntry5_WdError(v20);
    }
    WdLogEvent5_WdError(v22);
LABEL_45:
    COREACCESS::~COREACCESS((COREACCESS *)v55);
    COREACCESS::~COREACCESS((COREACCESS *)v54);
    return v9;
  }
  return 3221225485LL;
}
