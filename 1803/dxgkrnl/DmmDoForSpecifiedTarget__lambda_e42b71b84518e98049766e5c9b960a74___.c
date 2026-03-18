/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_e42b71b84518e98049766e5c9b960a74___ @ 0x1C020F0E0
 * Callers:
 *     ?DmmSetTargetForcableState@@YAJQEAXIE@Z @ 0x1C02152C4 (-DmmSetTargetForcableState@@YAJQEAXIE@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_e42b71b84518e98049766e5c9b960a74_(
        DXGADAPTER *a1,
        unsigned int a2,
        _BYTE *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

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
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, *(_QWORD *)(v10 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 80) + 72LL));
    v13 = *(_QWORD *)(v11 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v13, v3);
    v15 = TargetById;
    if ( TargetById )
    {
      v18 = *((_DWORD *)TargetById + 20);
      if ( v18 >= 0 && (v18 <= 3 || v18 == 14) )
        *((_DWORD *)v15 + 100) = *a3 != 0;
      v17 = 0;
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v16 + 24) = v3;
      WdLogEvent5_WdError(v16);
      v17 = -1071774971;
    }
    if ( v13 )
      ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40));
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
