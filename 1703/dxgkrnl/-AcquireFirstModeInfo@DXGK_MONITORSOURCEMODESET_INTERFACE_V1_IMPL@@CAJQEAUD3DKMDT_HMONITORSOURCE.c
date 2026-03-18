/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01E46D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0108448 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
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
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  D3DKMDT_COLOR_BASIS *p_ColorBasis; // rdi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v35; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v44; // rdi
  __int64 v45; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v47; // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7018);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(
                          (struct HDXGMONITOR__ *)a1,
                          (struct DXGMONITOR **)&v47,
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
      v22 = v47;
      if ( !v47 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        WdLogEvent5_WdAssertion(v23);
        v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v28);
      }
      KeEnterCriticalRegion();
      p_PixelRate = (struct _ERESOURCE *)&v22[2].VideoSignalInfo.PixelRate;
      ExAcquireResourceSharedLite((PERESOURCE)&v22[2].VideoSignalInfo.PixelRate, 1u);
      if ( v22[1].VideoSignalInfo.AdditionalSignalInfo )
      {
        p_ColorBasis = &v22[1].ColorBasis;
        v47 = 0LL;
        v35 = *(struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v22[1].ColorBasis;
        if ( v35 == (struct _D3DKMDT_MONITOR_SOURCE_MODE *)&v22[1].ColorBasis )
          goto LABEL_18;
        v36 = v35 - 1;
        if ( !v35 )
          v36 = 0LL;
        if ( !v36 )
        {
LABEL_18:
          v37 = WdLogNewEntry5_WdAssertion(v35, v30, v32, v33);
          WdLogEvent5_WdAssertion(v37);
        }
        v38 = *(_QWORD **)p_ColorBasis;
        if ( *(D3DKMDT_COLOR_BASIS **)p_ColorBasis == p_ColorBasis )
        {
          v39 = 0LL;
        }
        else
        {
          v39 = (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)(v38 - 12);
          if ( !v38 )
            v39 = 0LL;
        }
        v14 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v22, v39, &v47, v33);
        if ( !v14 )
        {
          v44 = v47;
          if ( !v47 )
          {
            v45 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
            WdLogEvent5_WdAssertion(v45);
          }
          *a2 = v44;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v30, v32, v33) + 24) = v22;
        v14 = 1075708747;
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
    Template_q(v12, &EventProfilerExit, v13, 7018);
  return v14;
}
