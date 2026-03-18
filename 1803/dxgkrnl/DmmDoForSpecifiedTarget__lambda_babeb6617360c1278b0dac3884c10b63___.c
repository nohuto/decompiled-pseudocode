/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_babeb6617360c1278b0dac3884c10b63___ @ 0x1C0109120
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C0108FF0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_babeb6617360c1278b0dac3884c10b63_(
        DXGADAPTER *a1,
        unsigned int a2,
        _QWORD **a3)
{
  __int64 v3; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v11; // rcx
  struct DMMVIDEOPRESENTTARGET *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v17);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v18);
  }
  v7 = *((_QWORD *)a1 + 307);
  if ( !v7 )
  {
    v17 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v17 + 24) = a1;
    goto LABEL_15;
  }
  v8 = *(_QWORD *)(v7 + 88);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, *(_QWORD *)(v7 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 80) + 72LL));
    v9 = *(_QWORD *)(v8 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v9, v3);
    v12 = TargetById;
    if ( TargetById )
    {
      v13 = *a3;
      **a3 = 0LL;
      v14 = *((_QWORD *)TargetById + 65);
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        *v13 = *((_QWORD *)v12 + 65);
      }
      v15 = 0;
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v20 + 24) = v3;
      WdLogEvent5_WdError(v20);
      v15 = -1071774971;
    }
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40));
    return v15;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
