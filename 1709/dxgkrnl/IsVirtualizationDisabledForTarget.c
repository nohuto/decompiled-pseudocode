/*
 * XREFs of IsVirtualizationDisabledForTarget @ 0x1C00B3084
 * Callers:
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00B3A10 (DxgkIsVirtualizationDisabledForTarget.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 */

__int64 __fastcall IsVirtualizationDisabledForTarget(DXGADAPTER *this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct _FAST_MUTEX *v11; // rcx
  int MonitorInstance; // eax
  __int64 v13; // rcx
  struct DXGMONITOR *v14; // rdi
  unsigned __int8 IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v16; // rcx
  unsigned __int8 v17; // di
  int v18; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct DXGMONITOR *v29; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( !this || a2 == -1 || !a3 || !a4 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v21 + 24) = 7392LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v9 = *((_QWORD *)this + 288);
  if ( !v9 )
  {
    v22 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v22 + 24) = 7397LL;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !*((_QWORD *)this + 288) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v24);
  }
  v11 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 288) + 96LL);
  if ( v11 )
  {
    v29 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v11, v4, 1, (ULONG **)&v29);
    if ( MonitorInstance == -1073741275 )
    {
      v20 = WdLogNewEntry5_WdDmmEvent(v13);
      *(_QWORD *)(v20 + 24) = v4;
      *(_QWORD *)(v20 + 32) = this;
      WdLogEvent5_WdDmmEvent(v20);
      MonitorInstance = -1073741632;
    }
    else
    {
      if ( MonitorInstance < 0 )
      {
        v17 = (unsigned __int8)v29;
      }
      else
      {
        v14 = v29;
        if ( !v29 || *((_DWORD *)v29 + 104) != 1 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v26);
        }
        if ( !v14 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v27);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 280), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v14);
        v16 = (struct _ERESOURCE *)((char *)v14 + 280);
        v17 = IsVirtualModeSuportDisabled;
        ExReleaseResourceLite(v16);
        KeLeaveCriticalRegion();
        MonitorInstance = 0;
      }
      if ( MonitorInstance != -1073741632 )
        goto LABEL_21;
    }
    v17 = 0;
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    v17 = (unsigned __int8)v29;
    MonitorInstance = -1073741811;
  }
LABEL_21:
  v18 = 0;
  if ( MonitorInstance != -1073741632 )
    v18 = MonitorInstance;
  if ( v18 < 0 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v28 + 24) = v18;
    WdLogEvent5_WdAssertion(v28);
  }
  else if ( v17 )
  {
    *a3 = 1;
    *a4 = 1;
  }
  else
  {
    *a3 = *(_BYTE *)(v9 + 132) == 0;
    *a4 = *(_BYTE *)(v9 + 133) == 0;
  }
  return (unsigned int)v18;
}
