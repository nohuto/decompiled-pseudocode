/*
 * XREFs of MonitorIsMonitorConnected @ 0x1C00D6C8C
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C009FEC4 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00D6910 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C0167570 (DxgkIsMonitorConnected.c)
 *     ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C021B510 (-IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorConnected(DXGADAPTER *this, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // rsi
  char v6; // bp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct DXGMONITOR *v19; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v6 = a3;
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || !a4 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  *a4 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v14);
  }
  v10 = *((_QWORD *)this + 307);
  if ( !v10 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v15);
    v10 = *((_QWORD *)this + 307);
  }
  v11 = *(struct _FAST_MUTEX **)(v10 + 96);
  if ( !v11 )
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  result = MONITOR_MGR::_GetMonitorInstance(v11, v5, v6, &v19);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( v19 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v17);
    }
    *a4 = 0;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    if ( !v19 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v18);
    }
    *a4 = 1;
  }
  return 0LL;
}
