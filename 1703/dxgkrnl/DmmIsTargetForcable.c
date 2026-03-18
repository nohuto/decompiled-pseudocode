/*
 * XREFs of DmmIsTargetForcable @ 0x1C01D6310
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0114FFC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A8FD8 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C01AB420 (DxgkHandleForceProjectionMonitor.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01E070C (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01E34BC (MonitorCreateSimulatedMonitor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C016D17C (-IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsTargetForcable(DXGADAPTER *a1, __int64 a2, bool *a3, int a4)
{
  __int64 v4; // rbp
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  DMMVIDEOPRESENTTARGET *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // edi
  bool IsTargetForcable; // al
  __int64 v32; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  *a3 = 0;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v8);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)a1 + 285);
  if ( !v15 )
  {
    v8 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v8 + 24) = a1;
    goto LABEL_3;
  }
  v16 = *(_QWORD *)(v15 + 88);
  if ( v16 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v32, v16, v12, v13);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 72LL));
    v18 = *(_QWORD *)(v16 + 80);
    v19 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v18, v4);
    if ( v19 )
    {
      if ( a4 == 5 )
        IsTargetForcable = *((_QWORD *)v19 + 13) == 0LL;
      else
        IsTargetForcable = DMMVIDEOPRESENTTARGET::IsTargetForcable(v19, v20, v22, v23);
      *a3 = IsTargetForcable;
      v30 = 0;
    }
    else
    {
      v26 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      *(_QWORD *)(v26 + 24) = v4;
      if ( !*(_QWORD *)(v16 + 8) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v25, v24, v27, v28);
        WdLogEvent5_WdAssertion(v29);
      }
      *(_QWORD *)(v26 + 32) = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL);
      WdLogEvent5_WdWarning(v26);
      v30 = -1071774971;
    }
    if ( v18 )
      ReferenceCounted::Release((ReferenceCounted *)(v18 + 64), v20);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40), v20, v22, v23);
    return v30;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    return 3223192373LL;
  }
}
