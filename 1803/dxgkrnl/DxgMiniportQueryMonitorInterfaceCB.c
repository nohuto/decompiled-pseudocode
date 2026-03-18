/*
 * XREFs of DxgMiniportQueryMonitorInterfaceCB @ 0x1C00D7260
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0006E10 (DpiGetDxgAdapter.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DxgMiniportQueryMonitorInterfaceCB(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  DXGADAPTER *DxgAdapter; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-18h] BYREF
  __int64 v23; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v4 = a2;
  v23 = 0LL;
  v22 = 7057;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 7057);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 7057);
  if ( a3 )
  {
    *a3 = 0LL;
    DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
    if ( !DxgAdapter )
      goto LABEL_20;
    if ( KeGetCurrentIrql() )
    {
      v17 = *(_QWORD *)(*((_QWORD *)DxgAdapter + 24) + 64LL);
      if ( *(_DWORD *)(*(_QWORD *)(v17 + 40) + 28LL) >= 0x2003u )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
        v18[3] = 275LL;
        v18[4] = 20LL;
        v18[5] = DxgAdapter;
        v18[6] = 0LL;
        v18[7] = 0LL;
        WdLogEvent5_WdCriticalError(v18);
      }
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( *((_QWORD *)DxgAdapter + 307) )
    {
      if ( (_DWORD)v4 == 1 )
      {
        v12 = &DXGK_MONITOR_INTERFACE_V1_IMPL::DxgMiniportMonitorInterfaceV1;
      }
      else
      {
        if ( (_DWORD)v4 != 2 )
        {
          v21 = WdLogNewEntry5_WdWarning((unsigned int)(v4 - 1), v10, v11);
          *(_QWORD *)(v21 + 24) = v4;
          WdLogEvent5_WdWarning(v21);
          v3 = -1073741637;
          goto LABEL_12;
        }
        v12 = &DXGK_MONITOR_INTERFACE_V2_IMPL::DxgMiniportMonitorInterfaceV2;
      }
      *a3 = v12;
    }
    else
    {
LABEL_20:
      v20 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v20 + 24) = a1;
      WdLogEvent5_WdError(v20);
      v3 = -1071775742;
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v16[3] = 0LL;
    v16[4] = v4;
    v16[5] = a1;
    WdLogEvent5_WdError(v16);
    v3 = -1073741811;
  }
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v22);
  return v3;
}
