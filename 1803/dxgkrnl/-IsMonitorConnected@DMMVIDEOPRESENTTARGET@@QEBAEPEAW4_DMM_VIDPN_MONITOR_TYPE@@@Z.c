/*
 * XREFs of ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00BA524
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00AF75C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     MonitorGetMonitorType @ 0x1C00C689C (MonitorGetMonitorType.c)
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::IsMonitorConnected(
        DMMVIDEOPRESENTTARGET *this,
        enum _DMM_VIDPN_MONITOR_TYPE *a2)
{
  struct HDXGMONITOR__ *v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  DXGADAPTER *v9; // rbx
  int MonitorType; // eax
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax

  *(_DWORD *)a2 = 0;
  v3 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 13);
  if ( !v3 )
    return 0;
  v6 = *((_QWORD *)this + 5);
  if ( !v6 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
    v6 = *((_QWORD *)this + 5);
  }
  v7 = *(_QWORD *)(v6 + 88);
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v14);
    v8 = *(_QWORD *)(v7 + 8);
  }
  v9 = *(DXGADAPTER **)(v8 + 16);
  MonitorType = MonitorGetMonitorType(v9, v3);
  v12 = MonitorType;
  if ( MonitorType < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v15[3] = v3;
    v15[4] = v9;
    v15[5] = v12;
    WdLogEvent5_WdError(v15);
    *(_DWORD *)a2 = 0;
  }
  return 1;
}
