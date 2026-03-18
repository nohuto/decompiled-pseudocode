/*
 * XREFs of ?DmmSetMonitorColorSpaceTransform@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@AEAE@Z @ 0x1C021516C
 * Callers:
 *     DxgkSetMonitorColorSpaceTransform @ 0x1C01581E0 (DxgkSetMonitorColorSpaceTransform.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetColorSpaceTansform@DMMVIDEOPRESENTTARGET@@QEAAEPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0044ED8 (-SetColorSpaceTansform@DMMVIDEOPRESENTTARGET@@QEAAEPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

__int64 __fastcall DmmSetMonitorColorSpaceTransform(DXGADAPTER *a1, unsigned int a2, const void **a3, bool *a4)
{
  __int64 v4; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  DMMVIDEOPRESENTTARGET *TargetById; // rdi
  __int64 v18; // rax
  unsigned int v19; // edi
  unsigned __int8 v20; // al
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( !a1 || !*((_QWORD *)a1 + 307) )
  {
    v10 = WdLogNewEntry5_WdError(a1);
    goto LABEL_17;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (*((_DWORD *)a1 + 454) & 4) == 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 32) = -1071775742LL;
LABEL_17:
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3223191554LL;
  }
  v11 = *((_QWORD *)a1 + 307);
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, *(_QWORD *)(v11 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 80) + 72LL));
    v15 = *(_QWORD *)(v12 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, v4);
    if ( TargetById )
    {
      if ( v15 )
        ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
      v20 = DMMVIDEOPRESENTTARGET::SetColorSpaceTansform(TargetById, a3);
      v19 = 0;
      *a4 = v20 == 0;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v16);
      v19 = -1071774971;
      *(_QWORD *)(v18 + 24) = v4;
      *(_QWORD *)(v18 + 32) = -1071774971LL;
      WdLogEvent5_WdError(v18);
      if ( v15 )
        ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40));
    return v19;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
}
