/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C020BCE8
 * Callers:
 *     DpiPdoAddPdo @ 0x1C020B454 (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C010930C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0109340 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C020A348 (DpiDxgkDdiGetChildContainerId.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C022DE68 (MonitorGetContainerIDFromDescriptor.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0235CEC (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 */

__int64 __fastcall DpiPdoGetDeviceContainerIdFromDescriptor(__int64 a1)
{
  __int64 ChildContainerId; // rdi
  __int64 v3; // rcx
  __int64 v4; // r14
  char v5; // r15
  _QWORD *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DXGADAPTER *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  struct _FAST_MUTEX *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int MonitorEldInformation; // eax
  struct _ERESOURCE *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  GUID *p_Guid; // rcx
  NTSTATUS v37; // eax
  __int64 v38; // rax
  struct DXGMONITOR *v40; // [rsp+30h] [rbp-50h] BYREF
  GUID Guid; // [rsp+38h] [rbp-48h] BYREF
  __int64 v42; // [rsp+48h] [rbp-38h] BYREF
  int v43; // [rsp+50h] [rbp-30h]
  _OWORD v44[2]; // [rsp+58h] [rbp-28h] BYREF

  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  LODWORD(ChildContainerId) = -1073741637;
  v42 = 0LL;
  v43 = 0;
  memset(v44, 0, sizeof(v44));
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_QWORD **)(*(_QWORD *)(v4 + 32) + 64LL);
  v7 = v6[5];
  if ( *(_DWORD *)(v4 + 496) == 1 )
  {
    if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(v4 + 936) + 4LL)) )
      return (unsigned int)ChildContainerId;
    ChildContainerId = *(unsigned int *)(v4 + 504);
    v12 = (DXGADAPTER *)v6[466];
    v13 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = ChildContainerId;
    *(_QWORD *)(v13 + 32) = v12;
    if ( !v12 || (_DWORD)ChildContainerId == -1 )
    {
      LODWORD(ChildContainerId) = -1073741811;
    }
    else
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v12) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v15);
      }
      v16 = *((_QWORD *)v12 + 307);
      if ( !v16 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v17);
        v16 = *((_QWORD *)v12 + 307);
      }
      v18 = *(struct _FAST_MUTEX **)(v16 + 96);
      if ( !v18 )
      {
        v19 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v19 + 24) = v12;
        WdLogEvent5_WdError(v19);
        LODWORD(ChildContainerId) = -1073741811;
        return (unsigned int)ChildContainerId;
      }
      v40 = 0LL;
      LODWORD(ChildContainerId) = MONITOR_MGR::_GetMonitorInstance(v18, ChildContainerId, 1, &v40);
      if ( (int)ChildContainerId >= 0 )
      {
        ChildContainerId = (__int64)v40;
        if ( !v40 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v20);
          WdLogEvent5_WdAssertion(v21);
          v23 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v23);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)(ChildContainerId + 296), 1u);
        MonitorEldInformation = DXGMONITOR::_GetMonitorEldInformation(
                                  (DXGMONITOR *)ChildContainerId,
                                  (struct _MONITOR_PACKED_ELD_INFORMATION *)&v42);
        v25 = (struct _ERESOURCE *)(ChildContainerId + 296);
        LODWORD(ChildContainerId) = MonitorEldInformation;
        ExReleaseResourceLite(v25);
        KeLeaveCriticalRegion();
      }
    }
    if ( (int)ChildContainerId < 0 )
      return (unsigned int)ChildContainerId;
    LODWORD(ChildContainerId) = MonitorGetContainerIDFromDescriptor(v6[466], *(unsigned int *)(v4 + 504), &Guid);
    if ( (int)ChildContainerId < 0 )
    {
      v28 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v42, 12LL, &Guid);
      ChildContainerId = v28;
      if ( v28 < 0 )
        goto LABEL_26;
    }
    else
    {
      v5 = 1;
    }
    *(_QWORD *)&v44[1] = v42;
    DWORD2(v44[1]) = v43;
    v44[0] = Guid;
  }
  if ( *(_DWORD *)(v7 + 28) >= 0x3005u && *(_QWORD *)(v7 + 768) )
  {
    KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(v6[466], 1);
    ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(
                              v7,
                              v6[6],
                              *(unsigned int *)(*(_QWORD *)(v4 + 936) + 24LL),
                              (__int64)v44);
    DxgkReleaseAdapterDdiSync((DXGADAPTER *)v6[466]);
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
    if ( (_DWORD)ChildContainerId == -1071841279 )
    {
      if ( *(_DWORD *)(v4 + 496) == 1 )
      {
        v27 = WdLogNewEntry5_WdEvent(v3, v26);
        *(_QWORD *)(v27 + 24) = a1;
        WdLogEvent5_WdEvent(v27);
        LODWORD(ChildContainerId) = 0;
        v44[0] = Guid;
        goto LABEL_28;
      }
LABEL_26:
      v29 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v29 + 24) = *(_QWORD *)(v7 + 768);
      *(_QWORD *)(v29 + 32) = ChildContainerId;
      WdLogEvent5_WdError(v29);
      goto LABEL_33;
    }
    if ( (int)ChildContainerId < 0 )
      goto LABEL_26;
  }
LABEL_28:
  if ( v5 )
  {
    v30 = *(_QWORD *)&v44[0] - *(_QWORD *)&Guid.Data1;
    if ( *(_QWORD *)&v44[0] == *(_QWORD *)&Guid.Data1 )
      v30 = *((_QWORD *)&v44[0] + 1) - *(_QWORD *)Guid.Data4;
    if ( v30 )
    {
      v31 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v31 + 24) = *(_QWORD *)(v7 + 768);
      *(_QWORD *)(v31 + 32) = (int)ChildContainerId;
      WdLogEvent5_WdError(v31);
      v33 = WdLogNewEntry5_WdError(v32);
      *(GUID *)(v33 + 24) = Guid;
      *(_OWORD *)(v33 + 40) = v44[0];
      WdLogEvent5_WdError(v33);
      v44[0] = Guid;
    }
  }
LABEL_33:
  if ( (int)ChildContainerId >= 0 || v5 )
  {
    v34 = *(_QWORD *)&v44[0];
    v35 = 0LL;
    if ( !*(_QWORD *)&v44[0] )
      v34 = *((_QWORD *)&v44[0] + 1);
    if ( !v34 )
    {
      ChildContainerId = -1073741823LL;
LABEL_42:
      v38 = WdLogNewEntry5_WdError(v35);
      *(_QWORD *)(v38 + 24) = *(_QWORD *)(v7 + 768);
      *(_QWORD *)(v38 + 32) = ChildContainerId;
      WdLogEvent5_WdError(v38);
      return (unsigned int)ChildContainerId;
    }
    p_Guid = (GUID *)v44;
    if ( v5 )
      p_Guid = &Guid;
    v37 = RtlStringFromGUID(p_Guid, (PUNICODE_STRING)(v4 + 960));
    ChildContainerId = v37;
    if ( v37 < 0 )
      goto LABEL_42;
  }
  return (unsigned int)ChildContainerId;
}
