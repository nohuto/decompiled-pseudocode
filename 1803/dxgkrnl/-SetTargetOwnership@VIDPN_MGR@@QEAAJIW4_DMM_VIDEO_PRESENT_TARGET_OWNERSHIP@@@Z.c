/*
 * XREFs of ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C02175C0
 * Callers:
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0216514 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DxgkStatusChangeNotify @ 0x1C00D7140 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetOwnership(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-18h] BYREF
  __int64 v24; // [rsp+28h] [rbp-10h]

  v3 = a3;
  v5 = a2;
  v7 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1);
  v8 = (unsigned int)v5;
  v7[3] = v5;
  v9 = *(_QWORD *)(a1 + 8);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v10);
    v9 = *(_QWORD *)(a1 + 8);
  }
  v7[4] = *(_QWORD *)(v9 + 16);
  v7[5] = v3;
  WdLogEvent5_WdDmmEvent(v7);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 80) + 72LL));
  v11 = *(_QWORD *)(a1 + 80);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v11, v5);
  if ( TargetById )
  {
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
    v24 = 0LL;
    *((_DWORD *)TargetById + 28) = v3;
    v23 = 1;
    if ( (int)DxgkStatusChangeNotify(&v23, v12, v14) < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v22);
    }
    return 0LL;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = v8;
    v18 = *(_QWORD *)(a1 + 8);
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v19);
      v18 = *(_QWORD *)(a1 + 8);
    }
    *(_QWORD *)(v17 + 32) = *(_QWORD *)(v18 + 16);
    WdLogEvent5_WdError(v17);
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
    return 3223192325LL;
  }
}
