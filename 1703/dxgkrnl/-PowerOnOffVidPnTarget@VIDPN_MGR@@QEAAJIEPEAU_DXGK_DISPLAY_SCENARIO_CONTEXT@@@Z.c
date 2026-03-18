/*
 * XREFs of ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010388C
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115C60 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000C6E8 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkStatusChangeNotify @ 0x1C0098C20 (DxgkStatusChangeNotify.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009A1E0 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C01037BC (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PowerOnOffVidPnTarget(
        VIDPN_MGR *this,
        __int64 a2,
        __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v5; // rbx
  char v6; // si
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rbp
  unsigned int *NextTarget; // rbp
  int v18; // esi
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  char v45[8]; // [rsp+40h] [rbp-E8h] BYREF
  int v46; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-D8h]
  _BYTE v48[144]; // [rsp+60h] [rbp-C8h] BYREF

  v5 = (unsigned int)a2;
  v6 = a3;
  v8 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
  v9 = (unsigned int)v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  WdLogEvent5_WdDmmEvent(v8);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(CurrentThread, v10, v11, v12);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (_DWORD)v5 == -1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 72LL));
    v15 = (_QWORD *)*((_QWORD *)this + 10);
    v16 = (_QWORD *)v15[3];
    if ( v16 != v15 + 3 )
    {
      NextTarget = (unsigned int *)(v16 - 1);
      if ( NextTarget )
      {
        v18 = -(v6 != 0);
        do
        {
          VIDPN_MGR::SetTargetOwnership((__int64)this, NextTarget[6], (unsigned int)(v18 + 2), v12);
          NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                         (DMMVIDEOPRESENTTARGETSET *)v15,
                                         (const struct DMMVIDEOPRESENTTARGET *const)NextTarget,
                                         v19,
                                         v20);
        }
        while ( NextTarget );
      }
    }
    if ( v15 )
      ReferenceCounted::Release((ReferenceCounted *)(v15 + 8), v10);
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership((__int64)this, (unsigned int)v5, 2 - (unsigned int)(v6 != 0), v12);
  }
  memset(v48, 0, 0x8CuLL);
  v45[0] = 0;
  v21 = VIDPN_MGR::SetTimingsFromVidPn(this, 0LL, 4LL, 0LL, (struct _D3DKMT_VIDPN_SOURCE_MASKS *)v48, v45, 0LL, 0LL);
  v26 = v21;
  if ( v21 < 0 )
  {
    v45[0] = 2;
    v36 = (_QWORD *)WdLogNewEntry5_WdError(2LL, v22);
    v36[3] = v9;
    if ( !*((_QWORD *)this + 1) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v35, v34, v37, v38);
      WdLogEvent5_WdAssertion(v39);
    }
    v40 = *((_QWORD *)this + 1);
    v41 = *(_QWORD *)(v40 + 16);
    v36[4] = *(int *)(v41 + 272);
    if ( !*((_QWORD *)this + 1) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v40, v41, v37, v38);
      WdLogEvent5_WdAssertion(v42);
    }
    v36[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 268LL);
    v36[6] = v26;
    WdLogEvent5_WdError(v36);
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    WdLogEvent5_WdAssertion(v43);
  }
  DmmHandleSetTimingsResult(
    *(ADAPTER_DISPLAY ***)(*((_QWORD *)this + 1) + 16LL),
    (struct _DMM_SET_TIMING_RESULT *)v45,
    a4);
  v47 = 0LL;
  v46 = 1;
  if ( (int)DxgkStatusChangeNotify(&v46, v27, v28) < 0 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
    WdLogEvent5_WdAssertion(v44);
  }
  return 0LL;
}
