/*
 * XREFs of ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C01D4268
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01D877C (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z @ 0x1C003709C (-EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C010C0F0 (-_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z.c)
 */

__int64 __fastcall DpiInternal::IsAudioAvailableInEdid(DpiInternal *this, void *a2)
{
  __int64 v2; // rbx
  unsigned __int8 v4; // si
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rax
  int MonitorInstance; // ebx
  struct DXGMONITOR *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int i; // ebx
  union _EDID_V1_BLOCK *EdidBlockPtr; // rax
  _QWORD *v21; // rax
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned int)a2;
  v4 = 0;
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  v7 = (unsigned int)v2;
  *(_QWORD *)(v5 + 24) = v2;
  *(_QWORD *)(v5 + 32) = this;
  if ( !this || (_DWORD)v2 == -1 )
  {
    MonitorInstance = -1073741811;
    goto LABEL_21;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)this + 288) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 288) + 96LL);
  if ( v11 )
  {
    v22 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v11, v2, 1, (ULONG **)&v22);
    if ( MonitorInstance >= 0 )
    {
      v14 = v22;
      if ( !v22 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v15);
        v17 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v17);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 280), 1u);
      v4 = 0;
      for ( i = 1; i < 0x37; ++i )
      {
        EdidBlockPtr = (union _EDID_V1_BLOCK *)DXGMONITOR::_GetEdidBlockPtr(v14, i);
        if ( !EdidBlockPtr )
          break;
        if ( EDID_V1_CeaExt_IsAudioSupported(EdidBlockPtr) )
        {
          v4 = 1;
          break;
        }
      }
      ExReleaseResourceLite((PERESOURCE)((char *)v14 + 280));
      KeLeaveCriticalRegion();
      return v4;
    }
LABEL_21:
    if ( MonitorInstance < 0 )
      goto LABEL_22;
    return v4;
  }
  v12 = WdLogNewEntry5_WdError(0LL);
  *(_QWORD *)(v12 + 24) = this;
  WdLogEvent5_WdError(v12);
  MonitorInstance = -1073741811;
LABEL_22:
  v21 = (_QWORD *)WdLogNewEntry5_WdError(v6);
  v21[3] = MonitorInstance;
  v21[4] = this;
  v21[5] = v7;
  WdLogEvent5_WdError(v21);
  return 0LL;
}
