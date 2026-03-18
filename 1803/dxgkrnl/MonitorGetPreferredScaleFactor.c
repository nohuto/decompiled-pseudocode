/*
 * XREFs of MonitorGetPreferredScaleFactor @ 0x1C00C6740
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00C6694 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetPreferredScaleFactor(DXGADAPTER *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _FAST_MUTEX *v8; // rcx
  __int64 v9; // rcx
  struct DXGMONITOR *v10; // rbx
  int v11; // eax
  struct _ERESOURCE *v12; // rcx
  unsigned int v13; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 || a2 == -1 )
  {
    v17 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v15);
  }
  v7 = *((_QWORD *)a1 + 307);
  if ( !v7 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v16);
    v7 = *((_QWORD *)a1 + 307);
  }
  v8 = *(struct _FAST_MUTEX **)(v7 + 96);
  if ( !v8 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = a1;
LABEL_16:
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v22 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v8, v3, 1, &v22) < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v18[4] = a1;
    v13 = -1073741275;
    v18[5] = -1073741275LL;
    v18[3] = v3;
    WdLogEvent5_WdError(v18);
  }
  else
  {
    v10 = v22;
    if ( !v22 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v19);
      v21 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v21);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 296), 1u);
    v11 = *((_DWORD *)v10 + 144);
    v12 = (struct _ERESOURCE *)((char *)v10 + 296);
    *a3 = v11;
    v13 = v11 == 0 ? 0xC0000001 : 0;
    ExReleaseResourceLite(v12);
    KeLeaveCriticalRegion();
  }
  return v13;
}
