/*
 * XREFs of DmmGetSourceConnectedToTargetInClientVidPn @ 0x1C00A6F38
 * Callers:
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00A701C (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1C0174A70 (DxgkOpmGetRedirectionInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E0D48 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DmmGetSourceConnectedToTargetInClientVidPn(DXGADAPTER *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int PathSourceFromTarget; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+50h] [rbp+18h] BYREF
  __int64 v32; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  if ( !a3 )
    return 3221225485LL;
  if ( !a1 )
  {
    v27 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v27 + 24) = 0LL;
LABEL_17:
    WdLogEvent5_WdError(v27);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v28);
  }
  v11 = *((_QWORD *)a1 + 285);
  if ( !v11 )
  {
    v27 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v27 + 24) = a1;
    goto LABEL_17;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v32, v12, v9, v10);
    v13 = *(_QWORD *)(v12 + 88);
    v31 = 0LL;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 32));
      v14 = *(_QWORD *)(v12 + 88);
    }
    else
    {
      v14 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v31, v14);
    if ( v31 )
    {
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v31 + 96), v4);
      if ( PathSourceFromTarget == -1 )
      {
        v30 = WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
        v3 = -1071774912;
        *(_QWORD *)(v30 + 24) = v4;
        *(_QWORD *)(v30 + 32) = a1;
      }
      else
      {
        *a3 = PathSourceFromTarget;
      }
    }
    else
    {
      v3 = -1071774884;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v15, v16, v17) + 24) = a1;
    }
    auto_rc<DMMVIDPN const>::reset(&v31, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40), v23, v24, v25);
    return v3;
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v29 + 24) = a1;
    WdLogEvent5_WdError(v29);
    return 3223192373LL;
  }
}
