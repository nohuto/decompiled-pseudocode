/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C01E48C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E0C0 (DpiGetDxgAdapter.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        __int64 a1,
        __int64 a2,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a3,
        const struct _DXGK_MONITORSOURCEMODESET_INTERFACE **a4)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGADAPTER *DxgAdapter; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGADAPTER *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  int MonitorHandle; // eax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v29; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7052);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v8[3] = v7;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( a3 && (*a3 = 0LL, a4) )
  {
    *a4 = 0LL;
    DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v7);
    v17 = DxgAdapter;
    if ( !DxgAdapter )
      goto LABEL_11;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
      WdLogEvent5_WdAssertion(v20);
    }
    if ( *((_QWORD *)v17 + 285) )
    {
      LOBYTE(v18) = 1;
      MonitorHandle = MonitorGetMonitorHandle(
                        v17,
                        (unsigned int)v6,
                        v18,
                        DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet,
                        (struct HDXGMONITOR__ **)&v29);
      v7 = MonitorHandle;
      if ( MonitorHandle == -1073741275 )
      {
        v25 = WdLogNewEntry5_WdWarning(v12, v23, v13, v24);
        *(_QWORD *)(v25 + 24) = v6;
        WdLogEvent5_WdWarning(v25);
        LODWORD(v7) = -1071774920;
      }
      else if ( MonitorHandle >= 0 )
      {
        v7 = v29;
        if ( !v29 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v12, v23, v13, v24);
          WdLogEvent5_WdAssertion(v27);
        }
        *a3 = (struct D3DKMDT_HMONITORSOURCEMODESET__ *)v7;
        *a4 = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
        LODWORD(v7) = 0;
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v12, v23);
        *(_QWORD *)(v26 + 24) = v6;
        *(_QWORD *)(v26 + 32) = v7;
        WdLogEvent5_WdError(v26);
      }
    }
    else
    {
LABEL_11:
      v21 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v21 + 24) = v7;
      WdLogEvent5_WdError(v21);
      LODWORD(v7) = -1071775742;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = v7;
    WdLogEvent5_WdError(v11);
    LODWORD(v7) = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 7052);
  return (unsigned int)v7;
}
