/*
 * XREFs of MonitorGetLinkInfo @ 0x1C00F8644
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7330 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfo(DXGADAPTER *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGMONITOR *v16; // rdi
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  struct DXGMONITOR *v28; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  if ( (_DWORD)a2 == -1 )
    return 3221226021LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 285) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v20);
  }
  v11 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 285) + 96LL);
  if ( !v11 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, v7);
    *(_QWORD *)(v19 + 24) = a1;
    goto LABEL_16;
  }
  v28 = 0LL;
  LOBYTE(v9) = 1;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v11, (unsigned int)v4, v9, (ULONG **)&v28) < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v21[3] = v4;
    v21[4] = a1;
    v21[5] = -1073741275LL;
    WdLogEvent5_WdError(v21);
    return 3221226021LL;
  }
  v16 = v28;
  if ( !v28 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v22);
    v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
    WdLogEvent5_WdAssertion(v27);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 240), 1u);
  if ( (*((_DWORD *)v16 + 6) & 0x400) != 0 )
  {
    v17 = *((_QWORD *)v16 + 51);
  }
  else
  {
    v17 = 0LL;
    v3 = -1073741275;
  }
  *a3 = v17;
  ExReleaseResourceLite((PERESOURCE)((char *)v16 + 240));
  KeLeaveCriticalRegion();
  return v3;
}
