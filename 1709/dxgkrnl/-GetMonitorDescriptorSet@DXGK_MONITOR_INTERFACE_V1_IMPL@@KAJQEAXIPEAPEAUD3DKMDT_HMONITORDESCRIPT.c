/*
 * XREFs of ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C0122E10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0008BE0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet(
        __int64 a1,
        __int64 a2,
        struct D3DKMDT_HMONITORDESCRIPTORSET__ **a3,
        const struct _DXGK_MONITORDESCRIPTORSET_INTERFACE **a4)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  DXGADAPTER *DxgAdapter; // rax
  __int64 v11; // rcx
  DXGADAPTER *v12; // rsi
  int MonitorHandle; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 7055);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2);
  v8[3] = v7;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 )
  {
    v20 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v20 + 32) = v7;
LABEL_19:
    *(_QWORD *)(v20 + 24) = 0LL;
    WdLogEvent5_WdError(v20);
    LODWORD(v7) = -1073741811;
    goto LABEL_13;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    v20 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v20 + 32) = v6;
    goto LABEL_19;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v7);
  v12 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_20;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( *((_QWORD *)v12 + 288) )
  {
    MonitorHandle = MonitorGetMonitorHandle(
                      v12,
                      (unsigned int)v6,
                      1,
                      DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet,
                      &v26);
    v7 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v23 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v23 + 24) = v6;
      WdLogEvent5_WdWarning(v23);
      LODWORD(v7) = -1071774920;
    }
    else if ( MonitorHandle < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v24 + 24) = v6;
      *(_QWORD *)(v24 + 32) = v7;
      WdLogEvent5_WdError(v24);
    }
    else
    {
      v7 = v26;
      if ( !v26 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v25);
      }
      *a3 = (struct D3DKMDT_HMONITORDESCRIPTORSET__ *)v7;
      *a4 = &DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::DxgMonitorDescriptorSetInterfaceV1;
      MonitorReleaseMonitorHandle(
        v12,
        (struct _IO_REMOVE_LOCK *)v7,
        DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet);
      LODWORD(v7) = 0;
    }
  }
  else
  {
LABEL_20:
    v22 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v22 + 24) = v7;
    WdLogEvent5_WdError(v22);
    LODWORD(v7) = -1071775742;
  }
LABEL_13:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, 7055);
  return (unsigned int)v7;
}
