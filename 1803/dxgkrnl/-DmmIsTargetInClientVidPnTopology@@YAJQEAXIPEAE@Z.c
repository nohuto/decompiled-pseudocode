/*
 * XREFs of ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C0213FCC
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BAD34 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4774 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01C4C24 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C67BC (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004564 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsTargetInClientVidPnTopology(DXGADAPTER *a1, int a2, bool *a3)
{
  bool IsTargetInTopology; // bl
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  IsTargetInTopology = 0;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = 0;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v11 = *((_QWORD *)a1 + 307);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v12);
    v11 = *((_QWORD *)a1 + 307);
    if ( !v11 )
    {
      v9 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v9 + 24) = a1;
      goto LABEL_5;
    }
  }
  v13 = *(_QWORD *)(v11 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v18, v13);
    v15 = *(_QWORD *)(v13 + 88);
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
      v16 = *(_QWORD *)(v13 + 88);
      v17 = v16;
      if ( v16 )
        IsTargetInTopology = DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v16 + 96), a2);
    }
    else
    {
      v17 = 0LL;
    }
    *a3 = IsTargetInTopology;
    auto_rc<DMMVIDPN const>::reset(&v17, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v18 + 40));
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3223192373LL;
  }
}
