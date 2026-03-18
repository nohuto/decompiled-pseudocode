/*
 * XREFs of ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01E4DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0108448 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePreferredModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  int MonitorFromHandle; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  struct _ERESOURCE *p_PixelRate; // rbp
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v33; // rdi
  __int64 v34; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v36; // [rsp+38h] [rbp+10h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 6000);
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  *a2 = 0LL;
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v36, a3, a4);
  if ( MonitorFromHandle == -1073741816 )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    v15 = -1071774943;
  }
  else
  {
    if ( MonitorFromHandle < 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      WdLogEvent5_WdAssertion(v16);
    }
    v17 = v36;
    if ( !v36 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      WdLogEvent5_WdAssertion(v18);
      v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
      WdLogEvent5_WdAssertion(v23);
    }
    KeEnterCriticalRegion();
    p_PixelRate = (struct _ERESOURCE *)&v17[2].VideoSignalInfo.PixelRate;
    ExAcquireResourceSharedLite((PERESOURCE)&v17[2].VideoSignalInfo.PixelRate, 1u);
    v28 = *(const struct DXGMONITOR::_DMMMONITORSOURCEMODE **)&v17[1].ColorCoeffDynamicRanges.FourthChannel;
    if ( v28 )
    {
      v36 = 0LL;
      v15 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v17, v28, &v36, v27);
      if ( !v15 )
      {
        v33 = v36;
        if ( !v36 )
        {
          v34 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
          WdLogEvent5_WdAssertion(v34);
        }
        *a2 = v33;
      }
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v25, 0LL, v26, v27) + 24) = v17;
      v15 = 1075708702;
    }
    ExReleaseResourceLite(p_PixelRate);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 6000);
  return v15;
}
