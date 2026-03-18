/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C01E7060
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E9DB8 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C011CA40 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E6FEC (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C01E77F8 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
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
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rax
  struct DXGADAPTER *v18; // rdi
  __int64 v19; // r12
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct _FAST_MUTEX *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  PERESOURCE v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r15
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v51; // rdx
  void *v52; // rcx
  __int64 v53; // rcx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned int v63; // eax
  PERESOURCE Resource; // [rsp+48h] [rbp-C0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGADAPTER *InputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v67[2]; // [rsp+60h] [rbp-A8h]
  __int64 v68; // [rsp+68h] [rbp-A0h]
  __int64 v69; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v70[32]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v71[104]; // [rsp+A0h] [rbp-68h] BYREF

  memset(&v71[40], 0, 0x40uLL);
  EtwActivityIdControl(3u, (LPGUID)&v71[48]);
  *(_QWORD *)&v71[96] = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)&v71[64] = 3;
  v8 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
  v9 = 0;
  *(_QWORD *)(v8 + 24) = Context;
  *(_QWORD *)(v8 + 32) = NotificationStructure;
  if ( NotificationStructure && Context )
  {
    InputBuffer = 0LL;
    *(_QWORD *)v67 = 0LL;
    v68 = 0LL;
    v10 = DxgkCallDriverIoControl(Context, 2302983LL, &InputBuffer, 24LL, &InputBuffer, 0x18u, 1u, 0LL);
    v15 = v10;
    if ( v10 < 0 )
    {
      v16 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v16 + 24) = Context;
      *(_QWORD *)(v16 + 32) = v15;
      WdLogEvent5_WdWarning(v16);
      return 0LL;
    }
    v18 = InputBuffer;
    v19 = v67[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v69, InputBuffer, 0LL);
    v21 = COREADAPTERACCESS::AcquireExclusive(&v69, v20 + 1);
    if ( v21 >= 0 )
    {
      if ( !*((_QWORD *)v18 + 285) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = *(struct _FAST_MUTEX **)(*((_QWORD *)v18 + 285) + 96LL);
      if ( !v29 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
        WdLogEvent5_WdAssertion(v30);
      }
      Resource = 0LL;
      LOBYTE(v24) = 1;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v29, (unsigned int)v19, v24, (ULONG **)&Resource) >= 0 )
      {
        v35 = Resource;
        if ( !Resource )
        {
          v36 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
          WdLogEvent5_WdAssertion(v36);
        }
        if ( v35[3].ActiveEntries != 1 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
          WdLogEvent5_WdAssertion(v37);
        }
        LODWORD(v38) = 0;
        KeEnterCriticalRegion();
        Resource = (PERESOURCE)((char *)v35 + 240);
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v35 + 240), 1u);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
        if ( !DeviceAttachmentBaseRef )
        {
          v44 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
          WdLogEvent5_WdAssertion(v44);
        }
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( DeviceAttachmentBaseRef == v35->ExclusiveWaiters )
        {
          v50 = *(_QWORD *)(NotificationStructure + 4);
          v51 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v50);
          if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v50 )
            v51 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4
                                                          - *(_QWORD *)(NotificationStructure + 12));
          if ( v51 )
          {
            v53 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v50;
            if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v50 )
              v53 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
            if ( v53 )
            {
              v62 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v50;
              if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v50 )
                v62 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
              if ( v62 )
              {
                LODWORD(v38) = -1073741811;
              }
              else
              {
                DXGMONITOR::_OnMonitorFunctionDriverDeparture((DXGMONITOR *)v35, v51, v47, v48);
                v63 = DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)v35);
                MONITOR_MGR::_LogMonitorPresentEvent((__int64)v29, 6LL, (unsigned int)v19, v63, 0LL);
              }
            }
            else
            {
              MONITOR_MGR::_LogMonitorPresentEvent((__int64)v29, 5LL, (unsigned int)v19, 0LL, 0LL);
              DeviceObject = 0LL;
              DeviceObjectPointer = IoGetDeviceObjectPointer(
                                      (PUNICODE_STRING)&v35->Address,
                                      0x80000000,
                                      (PFILE_OBJECT *)&v35->ActiveEntries,
                                      &DeviceObject);
              v38 = DeviceObjectPointer;
              if ( DeviceObjectPointer < 0 )
              {
                v59 = WdLogNewEntry5_WdError(v56, v55);
                *(_QWORD *)(v59 + 24) = v35->SpinLock;
                *(_QWORD *)(v59 + 32) = v38;
                WdLogEvent5_WdError(v59);
              }
              if ( !*(_QWORD *)&v35->ActiveEntries )
              {
                v60 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
                WdLogEvent5_WdAssertion(v60);
              }
              if ( !DeviceObject )
              {
                v61 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
                WdLogEvent5_WdAssertion(v61);
              }
            }
          }
          else
          {
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)v29, 4LL, (unsigned int)v19, 0LL, 0LL);
            v52 = *(void **)&v35->ActiveEntries;
            if ( v52 )
            {
              ObfDereferenceObject(v52);
              *(_QWORD *)&v35->ActiveEntries = 0LL;
            }
          }
          v9 = v38;
        }
        else
        {
          v49 = WdLogNewEntry5_WdError(v46, v45);
          *(_QWORD *)(v49 + 24) = v19;
          WdLogEvent5_WdError(v49);
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
        goto LABEL_45;
      }
      v27 = WdLogNewEntry5_WdError(v32, v31);
      *(_QWORD *)(v27 + 24) = v19;
    }
    else
    {
      if ( v21 != -1073741130 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
        WdLogEvent5_WdAssertion(v26);
      }
      v27 = WdLogNewEntry5_WdError(v23, v22);
    }
    WdLogEvent5_WdError(v27);
LABEL_45:
    COREACCESS::~COREACCESS((COREACCESS *)v71);
    COREACCESS::~COREACCESS((COREACCESS *)v70);
    return v9;
  }
  return 3221225485LL;
}
