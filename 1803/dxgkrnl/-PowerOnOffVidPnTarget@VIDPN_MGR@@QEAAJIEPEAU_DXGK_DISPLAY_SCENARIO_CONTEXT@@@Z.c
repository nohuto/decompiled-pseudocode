/*
 * XREFs of ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0216514
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0217CE0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     DxgkStatusChangeNotify @ 0x1C00D7140 (DxgkStatusChangeNotify.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DEA4C (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C02175C0 (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
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
  __int64 v11; // rax
  _QWORD *v12; // rbx
  unsigned int *NextTarget; // rbp
  _QWORD *v14; // rcx
  int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int8 v19; // al
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rcx
  _QWORD *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // esi
  __int64 i; // rbx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  char v42[8]; // [rsp+50h] [rbp-148h] BYREF
  int v43; // [rsp+58h] [rbp-140h] BYREF
  __int64 v44; // [rsp+60h] [rbp-138h]
  _DWORD v45[60]; // [rsp+70h] [rbp-128h] BYREF

  v5 = a2;
  v8 = WdLogNewEntry5_WdDmmEvent(this);
  v9 = (unsigned int)v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  WdLogEvent5_WdDmmEvent(v8);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(CurrentThread);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (_DWORD)v5 == -1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 72LL));
    v12 = (_QWORD *)*((_QWORD *)this + 10);
    NextTarget = 0LL;
    v14 = (_QWORD *)v12[3];
    if ( v14 != v12 + 3 )
      NextTarget = (unsigned int *)(v14 - 1);
    if ( NextTarget )
    {
      v15 = -(a3 != 0);
      do
      {
        VIDPN_MGR::SetTargetOwnership(this, NextTarget[6], (unsigned int)(v15 + 2));
        NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                       (DMMVIDEOPRESENTTARGETSET *)v12,
                                       (const struct DMMVIDEOPRESENTTARGET *const)NextTarget);
      }
      while ( NextTarget );
    }
    ReferenceCounted::Release((ReferenceCounted *)(v12 + 8));
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership(this, (unsigned int)v5, 2 - (unsigned int)(a3 != 0));
  }
  memset(v45, 0, sizeof(v45));
  v16 = *((_QWORD *)this + 1);
  v42[0] = 0;
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v17);
    v16 = *((_QWORD *)this + 1);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v16 + 16) + 2464LL) )
    goto LABEL_18;
  if ( !v16 )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v18);
    v16 = *((_QWORD *)this + 1);
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 2464LL) + 540LL) )
LABEL_18:
    v19 = 1;
  else
    v19 = 0;
  v20 = VIDPN_MGR::SetTimingsFromVidPn(this, 0, 4u, 0LL, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v45, v42, v19, 0LL, 0LL);
  v22 = v20;
  if ( v20 < 0 )
  {
    v42[0] = 2;
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v24[3] = v9;
    v25 = *((_QWORD *)this + 1);
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v26);
      v25 = *((_QWORD *)this + 1);
    }
    v27 = *(int *)(*(_QWORD *)(v25 + 16) + 272LL);
    v24[4] = v27;
    v28 = *((_QWORD *)this + 1);
    if ( !v28 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v27);
      WdLogEvent5_WdAssertion(v29);
      v28 = *((_QWORD *)this + 1);
    }
    v24[5] = *(unsigned int *)(*(_QWORD *)(v28 + 16) + 268LL);
    v24[6] = v22;
    WdLogEvent5_WdError(v24);
  }
  v30 = v45[6];
  if ( v45[6] )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v32 = *((_QWORD *)this + 1);
      v33 = v32;
      if ( !v32 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v34);
        v32 = *((_QWORD *)this + 1);
        v33 = v32;
      }
      v21 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 2456LL);
      if ( (unsigned int)i >= *(_DWORD *)(v21 + 80) )
        break;
      if ( _bittest(&v30, i) )
      {
        if ( !v33 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v35);
          v33 = *((_QWORD *)this + 1);
        }
        DisplayRestoreVidPnResult(
          *(_QWORD *)(*(_QWORD *)(v33 + 16) + 268LL),
          (unsigned int)i,
          3LL,
          (unsigned int)v45[i + 20],
          a4);
      }
    }
  }
  else
  {
    v33 = *((_QWORD *)this + 1);
  }
  if ( !v33 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v36);
    v33 = *((_QWORD *)this + 1);
  }
  DmmHandleSetTimingsResult(*(ADAPTER_DISPLAY ***)(v33 + 16), (struct _DMM_SET_TIMING_RESULT *)v42, a4);
  v44 = 0LL;
  v43 = 1;
  if ( (int)DxgkStatusChangeNotify(&v43, v37, v38) < 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v39);
    WdLogEvent5_WdAssertion(v40);
  }
  return 0LL;
}
