/*
 * XREFs of MonitorGetMonitorDescriptorIDs @ 0x1C0105C74
 * Callers:
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0105AB0 (DpiPdoGetDeviceIdFromDescriptor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C0108A44 (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorDescriptorIDs(
        DXGADAPTER *this,
        __int64 a2,
        struct _DXGK_GENERIC_DESCRIPTOR *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _FAST_MUTEX *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int MonitorInstance; // edi
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGMONITOR *v18; // rdi
  int MonitorDescriptorIDs; // eax
  struct _ERESOURCE *v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  struct DXGMONITOR *v31; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || !a3 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !*((_QWORD *)this + 285) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v23);
  }
  v12 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 285) + 96LL);
  if ( !v12 )
  {
    v24 = WdLogNewEntry5_WdError(0LL, v8);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  v31 = 0LL;
  LOBYTE(v10) = 1;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v12, (unsigned int)v5, v10, (ULONG **)&v31);
  if ( MonitorInstance >= 0 )
  {
    v18 = v31;
    if ( !v31 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v14, v13, v16, v17);
      WdLogEvent5_WdAssertion(v25);
      v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      WdLogEvent5_WdAssertion(v30);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v18 + 240), 1u);
    MonitorDescriptorIDs = DXGMONITOR::_GetMonitorDescriptorIDs(v18, a3);
    v20 = (struct _ERESOURCE *)((char *)v18 + 240);
    MonitorInstance = MonitorDescriptorIDs;
    ExReleaseResourceLite(v20);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)MonitorInstance;
}
