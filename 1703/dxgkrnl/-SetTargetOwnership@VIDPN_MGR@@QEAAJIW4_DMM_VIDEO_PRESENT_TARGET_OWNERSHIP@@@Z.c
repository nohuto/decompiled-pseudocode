/*
 * XREFs of ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C01037BC
 * Callers:
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010388C (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C0098C20 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetOwnership(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-18h] BYREF
  __int64 v35; // [rsp+28h] [rbp-10h]

  v4 = (int)a3;
  v6 = (unsigned int)a2;
  v9 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1, a2, a3, a4);
  v12 = (unsigned int)v6;
  v9[3] = v6;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v8, v7, v10, v11);
    WdLogEvent5_WdAssertion(v25);
  }
  v9[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v9[5] = v4;
  WdLogEvent5_WdDmmEvent(v9);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 80) + 72LL));
  v13 = *(_QWORD *)(a1 + 80);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v13, (unsigned int)v6, v14, v15);
  if ( TargetById )
  {
    if ( v13 )
      ReferenceCounted::Release((ReferenceCounted *)(v13 + 64), v16);
    v35 = 0LL;
    *((_DWORD *)TargetById + 28) = v4;
    v34 = 1;
    if ( (int)DxgkStatusChangeNotify(&v34, v16, v18) < 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
      WdLogEvent5_WdAssertion(v33);
    }
    return 0LL;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v28 + 24) = v12;
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v27, v26, v29, v30);
      WdLogEvent5_WdAssertion(v31);
    }
    *(_QWORD *)(v28 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    WdLogEvent5_WdError(v28);
    if ( v13 )
      ReferenceCounted::Release((ReferenceCounted *)(v13 + 64), v32);
    return 3223192325LL;
  }
}
