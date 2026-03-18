/*
 * XREFs of ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C009F5A0
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C009FB10 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsPresentPathInClientVidPnTopology(DXGADAPTER *a1, int a2, int a3, bool *a4)
{
  bool v4; // bl
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( !a4 )
  {
    v15 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v15 + 24) = 0LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v17);
  }
  v10 = *((_QWORD *)a1 + 307);
  if ( !v10 )
  {
    v16 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v16 + 24) = a1;
    goto LABEL_15;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v19, v11);
    v12 = *(_QWORD *)(v11 + 88);
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 32));
      v13 = *(_QWORD *)(v11 + 88);
      v20 = v13;
      if ( v13 )
        v4 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v13 + 96), a2, a3) != 0LL;
    }
    else
    {
      v20 = 0LL;
    }
    *a4 = v4;
    auto_rc<DMMVIDPN const>::reset(&v20, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19[0] + 40));
    return 0LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3223192373LL;
  }
}
