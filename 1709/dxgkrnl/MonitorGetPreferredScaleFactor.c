/*
 * XREFs of MonitorGetPreferredScaleFactor @ 0x1C00E4350
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00E42A4 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetPreferredScaleFactor(DXGADAPTER *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  struct _FAST_MUTEX *v7; // rcx
  __int64 v8; // rcx
  struct DXGMONITOR *v9; // rbx
  int v10; // eax
  struct _ERESOURCE *v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct DXGMONITOR *v21; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 || a2 == -1 )
  {
    v16 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !*((_QWORD *)a1 + 288) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v15);
  }
  v7 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 288) + 96LL);
  if ( !v7 )
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = a1;
LABEL_16:
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  v21 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v7, v3, 1, (ULONG **)&v21) < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v17[4] = a1;
    v12 = -1073741275;
    v17[5] = -1073741275LL;
    v17[3] = v3;
    WdLogEvent5_WdError(v17);
  }
  else
  {
    v9 = v21;
    if ( !v21 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v18);
      v20 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v9 + 280), 1u);
    v10 = *((_DWORD *)v9 + 140);
    v11 = (struct _ERESOURCE *)((char *)v9 + 280);
    *a3 = v10;
    v12 = v10 == 0 ? 0xC0000001 : 0;
    ExReleaseResourceLite(v11);
    KeLeaveCriticalRegion();
  }
  return v12;
}
