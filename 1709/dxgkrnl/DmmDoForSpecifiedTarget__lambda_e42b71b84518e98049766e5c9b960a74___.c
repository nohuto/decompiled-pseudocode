/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_e42b71b84518e98049766e5c9b960a74___ @ 0x1C01223EC
 * Callers:
 *     ?DmmSetTargetForcableState@@YAJQEAXIE@Z @ 0x1C01223CC (-DmmSetTargetForcableState@@YAJQEAXIE@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_e42b71b84518e98049766e5c9b960a74_(
        DXGADAPTER *a1,
        unsigned int a2,
        _BYTE *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  volatile signed __int32 *v9; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 *v23; // [rsp+58h] [rbp+20h]

  v3 = a2;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = 0LL;
LABEL_20:
    WdLogEvent5_WdError(v17);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v18);
  }
  v7 = *((_QWORD *)a1 + 288);
  if ( !v7 )
  {
    v17 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v17 + 24) = a1;
    goto LABEL_20;
  }
  v8 = *(_QWORD *)(v7 + 88);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, *(_QWORD *)(v7 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 80) + 72LL));
    v9 = *(volatile signed __int32 **)(v8 + 80);
    v23 = v9;
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v9, v3);
    v11 = TargetById;
    if ( TargetById )
    {
      v12 = *((_DWORD *)TargetById + 20);
      if ( v12 >= 0 && (v12 <= 3 || v12 == 14) )
        *((_DWORD *)v11 + 100) = *a3 != 0;
      v13 = 0;
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v20 + 24) = v3;
      WdLogEvent5_WdError(v20);
      v13 = -1071774971;
    }
    if ( v9 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(v9 + 16);
      v15 = _InterlockedDecrement(v9 + 18);
      if ( v15 )
      {
        if ( v15 < 0 )
        {
          v21 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v21 + 24) = v15;
          WdLogEvent5_WdError(v21);
        }
      }
      else if ( v14 )
      {
        (**v14)(v14, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40));
    return v13;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
