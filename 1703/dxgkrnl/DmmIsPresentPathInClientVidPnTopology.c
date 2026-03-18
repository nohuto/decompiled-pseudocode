/*
 * XREFs of DmmIsPresentPathInClientVidPnTopology @ 0x1C00AA714
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9E90 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmIsPresentPathInClientVidPnTopology(DXGADAPTER *a1, __int64 a2, int a3, bool *a4)
{
  int v6; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD v24[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+68h] [rbp+20h] BYREF

  v6 = a2;
  if ( !a4 )
  {
    v20 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v20 + 24) = 0LL;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v21 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v21 + 24) = 0LL;
LABEL_16:
    WdLogEvent5_WdError(v21);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v22);
  }
  v12 = *((_QWORD *)a1 + 285);
  if ( !v12 )
  {
    v21 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v21 + 24) = a1;
    goto LABEL_16;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v24, v13, v10, v11);
    v14 = *(_QWORD *)(v13 + 88);
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v13 + 88);
      v25 = v15;
      if ( v15 )
      {
        *a4 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v15 + 96), v6, a3) != 0LL;
LABEL_10:
        auto_rc<DMMVIDPN const>::reset(&v25, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v24[0] + 40LL), v16, v17, v18);
        return 0LL;
      }
    }
    else
    {
      v25 = 0LL;
    }
    *a4 = 0;
    goto LABEL_10;
  }
  v23 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v23 + 24) = a1;
  WdLogEvent5_WdError(v23);
  return 3223192373LL;
}
