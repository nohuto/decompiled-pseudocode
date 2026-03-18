/*
 * XREFs of MonitorGetLinkInfo @ 0x1C00D6B34
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfo(DXGADAPTER *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 v7; // rcx
  struct _FAST_MUTEX *v8; // rcx
  __int64 v9; // rcx
  struct DXGMONITOR *v10; // rdi
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DXGMONITOR *v19; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  if ( a2 == -1 )
    return 3221226021LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 288) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v14);
  }
  v8 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 288) + 96LL);
  if ( !v8 )
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = a1;
    goto LABEL_16;
  }
  v19 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v8, v4, 1, (ULONG **)&v19) < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v15[3] = v4;
    v15[4] = a1;
    v15[5] = -1073741275LL;
    WdLogEvent5_WdError(v15);
    return 3221226021LL;
  }
  v10 = v19;
  if ( !v19 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v16);
    v18 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v18);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 280), 1u);
  if ( (*((_DWORD *)v10 + 6) & 0x400) != 0 )
  {
    v11 = *((_QWORD *)v10 + 56);
  }
  else
  {
    v11 = 0LL;
    v3 = -1073741275;
  }
  *a3 = v11;
  ExReleaseResourceLite((PERESOURCE)((char *)v10 + 280));
  KeLeaveCriticalRegion();
  return v3;
}
