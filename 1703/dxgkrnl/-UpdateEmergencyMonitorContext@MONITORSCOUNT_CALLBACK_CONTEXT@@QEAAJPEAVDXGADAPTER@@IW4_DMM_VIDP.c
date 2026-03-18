/*
 * XREFs of ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C008D03C
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F8220 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01AAF40 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = 2950LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *(_QWORD *)(a1 + 12) = *(_QWORD *)(a2 + 268);
  *(_DWORD *)(a1 + 20) = a3;
  *(_BYTE *)(a1 + 29) = *(_DWORD *)(a2 + 1944) >= 0x2000;
  return 0LL;
}
