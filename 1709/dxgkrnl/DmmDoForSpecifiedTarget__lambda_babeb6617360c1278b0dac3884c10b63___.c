/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_babeb6617360c1278b0dac3884c10b63___ @ 0x1C00E8B00
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00E89D0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
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
  volatile signed __int32 *v9; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v11; // rcx
  struct DMMVIDEOPRESENTTARGET *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edi
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v19 + 24) = 0LL;
LABEL_17:
    WdLogEvent5_WdError(v19);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v20);
  }
  v7 = *((_QWORD *)a1 + 288);
  if ( !v7 )
  {
    v19 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v19 + 24) = a1;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(v7 + 88);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v24, *(_QWORD *)(v7 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 80) + 72LL));
    v9 = *(volatile signed __int32 **)(v8 + 80);
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
      v22 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v22 + 24) = v3;
      WdLogEvent5_WdError(v22);
      v15 = -1071774971;
    }
    if ( v9 )
    {
      v16 = (void (__fastcall ***)(_QWORD, __int64))(v9 + 16);
      v17 = _InterlockedDecrement(v9 + 18);
      if ( v17 )
      {
        if ( v17 < 0 )
        {
          v23 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v23 + 24) = v17;
          WdLogEvent5_WdError(v23);
        }
      }
      else if ( v16 )
      {
        (**v16)(v16, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v24 + 40));
    return v15;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}
