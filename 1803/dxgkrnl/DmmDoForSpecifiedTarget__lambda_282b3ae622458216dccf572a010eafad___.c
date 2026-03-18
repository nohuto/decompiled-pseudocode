/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad___ @ 0x1C020EF94
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_N@Z @ 0x1C0098734 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_N@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad_(
        DXGADAPTER *a1,
        unsigned int a2,
        __int64 **a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)a1 + 307);
  if ( !v10 )
  {
    v6 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, *(_QWORD *)(v10 + 88));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 80) + 72LL));
  v13 = *(_QWORD *)(v11 + 80);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v13, v3);
  if ( TargetById )
  {
    v18 = *((_QWORD *)TargetById + 65);
    v19 = **a3;
    if ( v18 != v19 )
    {
      if ( v18 != *a3[1] )
      {
        v20 = WdLogNewEntry5_WdError(v19);
        WdLogEvent5_WdError(v20);
        v17 = -1073741790;
        goto LABEL_17;
      }
      *((_QWORD *)TargetById + 65) = v19;
    }
    v17 = 0;
    goto LABEL_17;
  }
  v16 = WdLogNewEntry5_WdError(v15);
  *(_QWORD *)(v16 + 24) = v3;
  WdLogEvent5_WdError(v16);
  v17 = -1071774971;
LABEL_17:
  if ( v13 )
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40));
  return v17;
}
