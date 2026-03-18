/*
 * XREFs of ?AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01E4F50
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0108448 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePreferredModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  int MonitorFromHandle; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  struct _ERESOURCE *p_PixelRate; // rbp
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v38; // rsi
  __int64 v39; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v41; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7017);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(
                          (struct HDXGMONITOR__ *)a1,
                          (struct DXGMONITOR **)&v41,
                          v9,
                          v10);
    if ( MonitorFromHandle == -1073741816 )
    {
      v20 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v20 + 24) = a1;
      WdLogEvent5_WdError(v20);
      v14 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = v41;
      if ( !v41 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        WdLogEvent5_WdAssertion(v23);
        v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v28);
      }
      KeEnterCriticalRegion();
      p_PixelRate = (struct _ERESOURCE *)&v22[2].VideoSignalInfo.PixelRate;
      ExAcquireResourceSharedLite((PERESOURCE)&v22[2].VideoSignalInfo.PixelRate, 1u);
      v33 = *(const struct DXGMONITOR::_DMMMONITORSOURCEMODE **)&v22[1].ColorCoeffDynamicRanges.FourthChannel;
      if ( v33 )
      {
        v41 = 0LL;
        v14 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v22, v33, &v41, v32);
        if ( !v14 )
        {
          v38 = v41;
          if ( !v41 )
          {
            v39 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
            WdLogEvent5_WdAssertion(v39);
          }
          *a2 = v38;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v30, 0LL, v31, v32) + 24) = v22;
        v14 = 1075708702;
      }
      ExReleaseResourceLite(p_PixelRate);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = a1;
    WdLogEvent5_WdError(v11);
    v14 = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 7017);
  return v14;
}
