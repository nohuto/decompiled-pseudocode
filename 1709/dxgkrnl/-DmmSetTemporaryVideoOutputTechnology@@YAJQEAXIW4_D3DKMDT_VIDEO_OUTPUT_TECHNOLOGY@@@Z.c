/*
 * XREFs of ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C01EE220
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0107994 (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00082F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DmmSetTemporaryVideoOutputTechnology(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edi
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF
  __int64 v22; // [rsp+58h] [rbp+20h]

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
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21, *(_QWORD *)(v10 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 80) + 72LL));
    v13 = *(_QWORD *)(v11 + 80);
    v22 = v13;
    v14 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v13, v3);
    if ( v14 )
    {
      *(_DWORD *)(v14 + 80) = a3;
      v17 = 0;
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
      v18 = (void (__fastcall ***)(_QWORD, __int64))(v13 + 64);
      v19 = _InterlockedDecrement((volatile signed __int32 *)(v13 + 72));
      if ( v19 )
      {
        if ( v19 < 0 )
        {
          v20 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v20 + 24) = v19;
          WdLogEvent5_WdError(v20);
        }
      }
      else if ( v18 )
      {
        (**v18)(v18, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40));
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
