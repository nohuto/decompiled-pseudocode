/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0105044
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0107994 (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0100C74 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0100CA8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C0104E38 (DpiDxgkDdiGetChildContainerId.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C010534C (MonitorGetContainerIDFromDescriptor.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C010BCA4 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
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
  DXGADAPTER *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct _FAST_MUTEX *v13; // rcx
  __int64 v14; // rcx
  int MonitorEldInformation; // eax
  struct _ERESOURCE *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  GUID *p_Guid; // rcx
  NTSTATUS v25; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  struct DXGMONITOR *v39; // [rsp+30h] [rbp-50h] BYREF
  GUID Guid; // [rsp+38h] [rbp-48h] BYREF
  __int64 v41; // [rsp+48h] [rbp-38h] BYREF
  int v42; // [rsp+50h] [rbp-30h]
  _OWORD v43[2]; // [rsp+58h] [rbp-28h] BYREF

  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  LODWORD(ChildContainerId) = -1073741637;
  v41 = 0LL;
  v42 = 0;
  memset(v43, 0, sizeof(v43));
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_QWORD **)(*(_QWORD *)(v4 + 32) + 64LL);
  v7 = v6[5];
  if ( *(_DWORD *)(v4 + 496) != 1 )
    goto LABEL_18;
  if ( !IsInternalVideoOutput(*(_DWORD *)(*(_QWORD *)(v4 + 936) + 4LL)) )
  {
    ChildContainerId = *(unsigned int *)(v4 + 504);
    v10 = (DXGADAPTER *)v6[466];
    v11 = WdLogNewEntry5_WdTrace(v9, v8);
    *(_QWORD *)(v11 + 24) = ChildContainerId;
    *(_QWORD *)(v11 + 32) = v10;
    if ( !v10 || (_DWORD)ChildContainerId == -1 )
    {
      LODWORD(ChildContainerId) = -1073741811;
    }
    else
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v27);
      }
      if ( !*((_QWORD *)v10 + 288) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v28);
      }
      v13 = *(struct _FAST_MUTEX **)(*((_QWORD *)v10 + 288) + 96LL);
      if ( !v13 )
      {
        v29 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v29 + 24) = v10;
        WdLogEvent5_WdError(v29);
        LODWORD(ChildContainerId) = -1073741811;
        return (unsigned int)ChildContainerId;
      }
      v39 = 0LL;
      LODWORD(ChildContainerId) = MONITOR_MGR::_GetMonitorInstance(v13, ChildContainerId, 1, (ULONG **)&v39);
      if ( (int)ChildContainerId >= 0 )
      {
        ChildContainerId = (__int64)v39;
        if ( !v39 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v14);
          WdLogEvent5_WdAssertion(v30);
          v32 = WdLogNewEntry5_WdAssertion(v31);
          WdLogEvent5_WdAssertion(v32);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)(ChildContainerId + 280), 1u);
        MonitorEldInformation = DXGMONITOR::_GetMonitorEldInformation(
                                  (DXGMONITOR *)ChildContainerId,
                                  (struct _MONITOR_PACKED_ELD_INFORMATION *)&v41);
        v16 = (struct _ERESOURCE *)(ChildContainerId + 280);
        LODWORD(ChildContainerId) = MonitorEldInformation;
        ExReleaseResourceLite(v16);
        KeLeaveCriticalRegion();
      }
    }
    if ( (int)ChildContainerId >= 0 )
    {
      LODWORD(ChildContainerId) = MonitorGetContainerIDFromDescriptor(v6[466], *(unsigned int *)(v4 + 504), &Guid);
      if ( (int)ChildContainerId >= 0 )
      {
        v5 = 1;
      }
      else
      {
        v17 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v41, 12LL, &Guid);
        ChildContainerId = v17;
        if ( v17 < 0 )
          goto LABEL_37;
      }
      *(_QWORD *)&v43[1] = v41;
      DWORD2(v43[1]) = v42;
      v43[0] = Guid;
LABEL_18:
      if ( *(_DWORD *)(v7 + 28) >= 0x3005u && *(_QWORD *)(v7 + 768) )
      {
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(v6[466], 1);
        ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(
                                  v7,
                                  v6[6],
                                  *(unsigned int *)(*(_QWORD *)(v4 + 936) + 24LL),
                                  (__int64)v43);
        DxgkReleaseAdapterDdiSync((DXGADAPTER *)v6[466]);
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
        if ( (_DWORD)ChildContainerId == -1071841279 )
        {
          if ( *(_DWORD *)(v4 + 496) == 1 )
          {
            v21 = WdLogNewEntry5_WdEvent(v3, v18, v19, v20);
            *(_QWORD *)(v21 + 24) = a1;
            WdLogEvent5_WdEvent(v21);
            LODWORD(ChildContainerId) = 0;
            v43[0] = Guid;
            goto LABEL_23;
          }
LABEL_37:
          v33 = WdLogNewEntry5_WdError(v3);
          *(_QWORD *)(v33 + 24) = *(_QWORD *)(v7 + 768);
          *(_QWORD *)(v33 + 32) = ChildContainerId;
          WdLogEvent5_WdError(v33);
          goto LABEL_24;
        }
        if ( (int)ChildContainerId < 0 )
          goto LABEL_37;
      }
LABEL_23:
      if ( v5 )
      {
        v34 = *(_QWORD *)&v43[0] - *(_QWORD *)&Guid.Data1;
        if ( *(_QWORD *)&v43[0] == *(_QWORD *)&Guid.Data1 )
          v34 = *((_QWORD *)&v43[0] + 1) - *(_QWORD *)Guid.Data4;
        if ( v34 )
        {
          v35 = WdLogNewEntry5_WdError(v3);
          *(_QWORD *)(v35 + 24) = *(_QWORD *)(v7 + 768);
          *(_QWORD *)(v35 + 32) = (int)ChildContainerId;
          WdLogEvent5_WdError(v35);
          v37 = WdLogNewEntry5_WdError(v36);
          *(GUID *)(v37 + 24) = Guid;
          *(_OWORD *)(v37 + 40) = v43[0];
          WdLogEvent5_WdError(v37);
          v43[0] = Guid;
        }
      }
LABEL_24:
      if ( (int)ChildContainerId < 0 && !v5 )
        return (unsigned int)ChildContainerId;
      v22 = *(_QWORD *)&v43[0];
      v23 = 0LL;
      if ( !*(_QWORD *)&v43[0] )
        v22 = *((_QWORD *)&v43[0] + 1);
      if ( v22 )
      {
        p_Guid = (GUID *)v43;
        if ( v5 )
          p_Guid = &Guid;
        v25 = RtlStringFromGUID(p_Guid, (PUNICODE_STRING)(v4 + 960));
        ChildContainerId = v25;
        if ( v25 >= 0 )
          return (unsigned int)ChildContainerId;
      }
      else
      {
        ChildContainerId = -1073741823LL;
      }
      v38 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v38 + 24) = *(_QWORD *)(v7 + 768);
      *(_QWORD *)(v38 + 32) = ChildContainerId;
      WdLogEvent5_WdError(v38);
    }
  }
  return (unsigned int)ChildContainerId;
}
