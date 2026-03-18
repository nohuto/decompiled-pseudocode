/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad___ @ 0x1C01E9F34
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z @ 0x1C007AF9C (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad_(
        DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edi
  _QWORD *v18; // rax
  __int64 v19; // rax
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 *v24; // [rsp+58h] [rbp+20h]

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
  v10 = *((_QWORD *)a1 + 288);
  if ( !v10 )
  {
    v6 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v23, *(_QWORD *)(v10 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 80) + 72LL));
    v13 = *(volatile signed __int32 **)(v11 + 80);
    v24 = v13;
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v13, v3);
    if ( TargetById )
    {
      v18 = *(_QWORD **)(a3 + 8);
      if ( *((_QWORD *)TargetById + 65) == *v18 )
      {
        *((_QWORD *)TargetById + 65) = **(_QWORD **)a3;
        v17 = 0;
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(*v18);
        WdLogEvent5_WdError(v19);
        v17 = -1073741790;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = v3;
      WdLogEvent5_WdError(v16);
      v17 = -1071774971;
    }
    if ( v13 )
    {
      v20 = (void (__fastcall ***)(_QWORD, __int64))(v13 + 16);
      v21 = _InterlockedDecrement(v13 + 18);
      if ( v21 )
      {
        if ( v21 < 0 )
        {
          v22 = WdLogNewEntry5_WdError(v20);
          *(_QWORD *)(v22 + 24) = v21;
          WdLogEvent5_WdError(v22);
        }
      }
      else if ( v20 )
      {
        (**v20)(v20, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40));
    return v17;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
}
