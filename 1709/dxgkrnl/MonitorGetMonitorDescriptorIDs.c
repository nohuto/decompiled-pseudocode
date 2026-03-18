/*
 * XREFs of MonitorGetMonitorDescriptorIDs @ 0x1C01054E0
 * Callers:
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0105414 (DpiPdoGetDeviceIdFromDescriptor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C010B914 (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorDescriptorIDs(DXGADAPTER *this, __int64 a2, struct _DXGK_GENERIC_DESCRIPTOR *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _FAST_MUTEX *v8; // rcx
  __int64 v9; // rcx
  int MonitorInstance; // edi
  struct DXGMONITOR *v11; // rdi
  int MonitorDescriptorIDs; // eax
  struct _ERESOURCE *v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct DXGMONITOR *v21; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || !a3 || (_DWORD)v4 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_QWORD *)this + 288) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v16);
  }
  v8 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 288) + 96LL);
  if ( !v8 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v21 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v8, v4, 1, (ULONG **)&v21);
  if ( MonitorInstance >= 0 )
  {
    v11 = v21;
    if ( !v21 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v18);
      v20 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 280), 1u);
    MonitorDescriptorIDs = DXGMONITOR::_GetMonitorDescriptorIDs(v11, a3);
    v13 = (struct _ERESOURCE *)((char *)v11 + 280);
    MonitorInstance = MonitorDescriptorIDs;
    ExReleaseResourceLite(v13);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)MonitorInstance;
}
