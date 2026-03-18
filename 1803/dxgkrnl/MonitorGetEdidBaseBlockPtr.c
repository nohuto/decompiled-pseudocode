/*
 * XREFs of MonitorGetEdidBaseBlockPtr @ 0x1C00C752C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C01C4F6C (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E2C88 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C00B8004 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

const void *__fastcall MonitorGetEdidBaseBlockPtr(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _FAST_MUTEX *v9; // rcx
  __int64 v10; // rcx
  DXGMONITOR *v11; // rbx
  const void *EdidBaseBlockPtr; // rax
  struct _ERESOURCE *v13; // rcx
  const void *v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || (_DWORD)v4 == -1 )
    return 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v16);
  }
  v8 = *((_QWORD *)this + 307);
  if ( !v8 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v17);
    v8 = *((_QWORD *)this + 307);
  }
  v9 = *(struct _FAST_MUTEX **)(v8 + 96);
  if ( !v9 )
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 0LL;
  }
  v22 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v9, v4, 0, &v22) < 0 )
    return 0LL;
  v11 = v22;
  if ( !v22 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v19);
    v21 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v21);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 296), 1u);
  EdidBaseBlockPtr = DXGMONITOR::_GetEdidBaseBlockPtr(v11);
  v13 = (struct _ERESOURCE *)((char *)v11 + 296);
  v14 = EdidBaseBlockPtr;
  ExReleaseResourceLite(v13);
  KeLeaveCriticalRegion();
  return v14;
}
