/*
 * XREFs of ?DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z @ 0x1C01EE0D4
 * Callers:
 *     DpiPdoRemovePdo @ 0x1C01E8F0C (DpiPdoRemovePdo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00082F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DmmResetBaseVideoOutputTechnology(DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edi
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF
  __int64 v20; // [rsp+40h] [rbp+18h]

  v2 = a2;
  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v4 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v4);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a1 + 288);
  if ( !v8 )
  {
    v4 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v4 + 24) = a1;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v19, *(_QWORD *)(v8 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
    v11 = *(_QWORD *)(v9 + 80);
    v20 = v11;
    v12 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v11, v2);
    if ( v12 )
    {
      v15 = 0;
      *(_DWORD *)(v12 + 80) = *(_DWORD *)(v12 + 84);
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = v2;
      WdLogEvent5_WdError(v14);
      v15 = -1071774971;
    }
    if ( v11 )
    {
      v16 = (void (__fastcall ***)(_QWORD, __int64))(v11 + 64);
      v17 = _InterlockedDecrement((volatile signed __int32 *)(v11 + 72));
      if ( v17 )
      {
        if ( v17 < 0 )
        {
          v18 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v18 + 24) = v17;
          WdLogEvent5_WdError(v18);
        }
      }
      else if ( v16 )
      {
        (**v16)(v16, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40));
    return v15;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3223192373LL;
  }
}
