/*
 * XREFs of ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C01039CC
 * Callers:
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0103AAC (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     DxgkStatusChangeNotify @ 0x1C00E85B0 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetOwnership(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r14
  __int64 v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-18h] BYREF
  __int64 v27; // [rsp+28h] [rbp-10h]

  v3 = a3;
  v5 = a2;
  v7 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1);
  v8 = (unsigned int)v5;
  v7[3] = v5;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v17);
  }
  v7[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v7[5] = v3;
  WdLogEvent5_WdDmmEvent(v7);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 80) + 72LL));
  v9 = *(volatile signed __int32 **)(a1 + 80);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v9, v5);
  if ( TargetById )
  {
    if ( v9 )
    {
      v13 = (void (__fastcall ***)(_QWORD, __int64))(v9 + 16);
      v14 = _InterlockedDecrement(v9 + 18);
      if ( v14 )
      {
        if ( v14 < 0 )
        {
          v24 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v24 + 24) = v14;
          WdLogEvent5_WdError(v24);
        }
      }
      else if ( v13 )
      {
        (**v13)(v13, 1LL);
      }
    }
    v27 = 0LL;
    *((_DWORD *)TargetById + 28) = v3;
    v26 = 1;
    if ( (int)DxgkStatusChangeNotify(&v26, v10) < 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v25);
    }
    return 0LL;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v19 + 24) = v8;
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v20);
    }
    *(_QWORD *)(v19 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    WdLogEvent5_WdError(v19);
    if ( v9 )
    {
      v21 = (void (__fastcall ***)(_QWORD, __int64))(v9 + 16);
      v22 = _InterlockedDecrement(v9 + 18);
      if ( v22 )
      {
        if ( v22 < 0 )
        {
          v23 = WdLogNewEntry5_WdError(v21);
          *(_QWORD *)(v23 + 24) = v22;
          WdLogEvent5_WdError(v23);
        }
      }
      else if ( v21 )
      {
        (**v21)(v21, 1LL);
      }
    }
    return 3223192325LL;
  }
}
