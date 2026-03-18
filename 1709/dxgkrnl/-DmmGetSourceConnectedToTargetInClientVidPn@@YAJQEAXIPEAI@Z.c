/*
 * XREFs of ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00E24E4
 * Callers:
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00E243C (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1C0178488 (DxgkOpmGetRedirectionInfo.c)
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C01D9894 (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00A42F8 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DmmGetSourceConnectedToTargetInClientVidPn(DXGADAPTER *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned int PathSourceFromTarget; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF
  __int64 v22; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
    return 3221225485LL;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = 0LL;
LABEL_17:
    WdLogEvent5_WdError(v17);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v18);
  }
  v8 = *((_QWORD *)a1 + 288);
  if ( !v8 )
  {
    v17 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v17 + 24) = a1;
    goto LABEL_17;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, v9);
    v10 = *(_QWORD *)(v9 + 88);
    v21 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 32));
      v11 = *(_QWORD *)(v9 + 88);
    }
    else
    {
      v11 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v21, v11);
    if ( v21 )
    {
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v21 + 96), (unsigned int)v4);
      if ( PathSourceFromTarget == -1 )
      {
        v20 = WdLogNewEntry5_WdTrace(v15, v14);
        v3 = -1071774912;
        *(_QWORD *)(v20 + 24) = v4;
        *(_QWORD *)(v20 + 32) = a1;
      }
      else
      {
        *a3 = PathSourceFromTarget;
      }
    }
    else
    {
      v3 = -1071774884;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v12) + 24) = a1;
    }
    auto_rc<DMMVIDPN const>::reset(&v21, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40));
    return v3;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
