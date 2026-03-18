/*
 * XREFs of MonitorGetPreferredScaleFactor @ 0x1C00AC06C
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00ABFC0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetPreferredScaleFactor(DXGADAPTER *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  MONITOR_MGR *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGMONITOR *v15; // rbx
  int v16; // eax
  struct _ERESOURCE *v17; // rcx
  unsigned int v18; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  struct DXGMONITOR *v30; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 || (_DWORD)a2 == -1 )
  {
    v22 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !*((_QWORD *)a1 + 285) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v21);
  }
  v10 = *(MONITOR_MGR **)(*((_QWORD *)a1 + 285) + 96LL);
  if ( !v10 )
  {
    v22 = WdLogNewEntry5_WdError(0LL, v6);
    *(_QWORD *)(v22 + 24) = a1;
LABEL_16:
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  v30 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v10, v3, 1u, &v30) < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v23[4] = a1;
    v18 = -1073741275;
    v23[5] = -1073741275LL;
    v23[3] = v3;
    WdLogEvent5_WdError(v23);
  }
  else
  {
    v15 = v30;
    if ( !v30 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      WdLogEvent5_WdAssertion(v24);
      v29 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
      WdLogEvent5_WdAssertion(v29);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 240), 1u);
    v16 = *((_DWORD *)v15 + 130);
    v17 = (struct _ERESOURCE *)((char *)v15 + 240);
    *a3 = v16;
    v18 = v16 == 0 ? 0xC0000001 : 0;
    ExReleaseResourceLite(v17);
    KeLeaveCriticalRegion();
  }
  return v18;
}
