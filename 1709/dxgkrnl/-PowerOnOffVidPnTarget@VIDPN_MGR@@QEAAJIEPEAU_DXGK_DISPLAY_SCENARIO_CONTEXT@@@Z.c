/*
 * XREFs of ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0103AAC
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DF40 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0008364 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1950 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     DxgkStatusChangeNotify @ 0x1C00E85B0 (DxgkStatusChangeNotify.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C01039CC (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PowerOnOffVidPnTarget(
        VIDPN_MGR *this,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbp
  unsigned int *NextTarget; // rbp
  int v14; // esi
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  char v32[8]; // [rsp+50h] [rbp-F8h] BYREF
  int v33; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-E8h]
  _BYTE v35[160]; // [rsp+70h] [rbp-D8h] BYREF

  v5 = a2;
  v8 = WdLogNewEntry5_WdDmmEvent(this);
  v9 = (unsigned int)v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  WdLogEvent5_WdDmmEvent(v8);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v23 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (_DWORD)v5 == -1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 72LL));
    v11 = *((_QWORD *)this + 10);
    v12 = *(_QWORD *)(v11 + 24);
    if ( v12 != v11 + 24 )
    {
      NextTarget = (unsigned int *)(v12 - 8);
      if ( NextTarget )
      {
        v14 = -(a3 != 0);
        do
        {
          VIDPN_MGR::SetTargetOwnership((__int64)this, NextTarget[6], v14 + 2);
          NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                         (DMMVIDEOPRESENTTARGETSET *)v11,
                                         (const struct DMMVIDEOPRESENTTARGET *const)NextTarget);
        }
        while ( NextTarget );
      }
    }
    if ( v11 )
    {
      v15 = (void (__fastcall ***)(_QWORD, __int64))(v11 + 64);
      v16 = _InterlockedDecrement((volatile signed __int32 *)(v11 + 72));
      if ( v16 )
      {
        if ( v16 < 0 )
        {
          v24 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v24 + 24) = v16;
          WdLogEvent5_WdError(v24);
        }
      }
      else if ( v15 )
      {
        (**v15)(v15, 1LL);
      }
    }
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership((__int64)this, v5, 2 - (a3 != 0));
  }
  memset(v35, 0, 0x94uLL);
  v32[0] = 0;
  v17 = VIDPN_MGR::SetTimingsFromVidPn(
          (__int64 *)this,
          0,
          4,
          0LL,
          (struct D3DKMT_VIDPN_SOURCE_MASKS *)v35,
          v32,
          1u,
          0LL,
          0LL);
  v19 = v17;
  if ( v17 < 0 )
  {
    v32[0] = 2;
    v26 = (_QWORD *)WdLogNewEntry5_WdError(2LL);
    v26[3] = v9;
    if ( !*((_QWORD *)this + 1) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = *((_QWORD *)this + 1);
    v26[4] = *(int *)(*(_QWORD *)(v28 + 16) + 272LL);
    if ( !*((_QWORD *)this + 1) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v29);
    }
    v26[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 268LL);
    v26[6] = v19;
    WdLogEvent5_WdError(v26);
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v30);
  }
  DmmHandleSetTimingsResult(
    *(ADAPTER_DISPLAY ***)(*((_QWORD *)this + 1) + 16LL),
    (struct _DMM_SET_TIMING_RESULT *)v32,
    a4);
  v34 = 0LL;
  v33 = 1;
  if ( (int)DxgkStatusChangeNotify(&v33, v20) < 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v31);
  }
  return 0LL;
}
