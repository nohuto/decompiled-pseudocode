/*
 * XREFs of DmmEnablePathsFromVidPnSource @ 0x1C0099FDC
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C0096610 (DxgkDisplayOnOff.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E7C6C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 * Callees:
 *     ?FillFailedStatus@@YAXPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C0002AD8 (-FillFailedStatus@@YAXPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C000B508 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009A1E0 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D3888 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00E8674 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E87E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8A44 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     DmmResetModeState @ 0x1C0105124 (DmmResetModeState.c)
 */

__int64 __fastcall DmmEnablePathsFromVidPnSource(
        struct DXGDEVICE *a1,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // bl
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // bl
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  unsigned int v26; // ebx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int CddAllocations; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  char v46[8]; // [rsp+40h] [rbp-91h] BYREF
  struct COREDEVICEACCESS *v47; // [rsp+48h] [rbp-89h] BYREF
  _DWORD v48[36]; // [rsp+50h] [rbp-81h] BYREF

  v6 = a2;
  v47 = a4;
  memset(v48, 0, 0x8CuLL);
  v8 = *((_QWORD *)a1 + 225);
  v46[0] = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v8) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v37);
  }
  if ( !*(_QWORD *)(v8 + 2288) || a3 )
  {
    v17 = 1;
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v8 + 2280), v6, 0);
  }
  else
  {
    v13 = DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v8);
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(ADAPTER_DISPLAY **)(v8 + 2280), v6);
    v17 = v13 == 0;
  }
  if ( !v17
    || CddPrimaryAllocation
    && (*((_DWORD *)CddPrimaryAllocation + 1) & 0x10) == 0
    && *((_QWORD *)CddPrimaryAllocation + 2) )
  {
    goto LABEL_10;
  }
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*(DXGADAPTER ***)(v8 + 2280), v6);
  if ( !CddDisplayMode->Width || !CddDisplayMode->Height )
  {
    v39 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    *(_QWORD *)(v39 + 24) = v6;
    *(_QWORD *)(v39 + 32) = v8;
    WdLogEvent5_WdWarning(v39);
    return 0LL;
  }
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(*(ADAPTER_DISPLAY **)(v8 + 2280), a1, v6, CddDisplayMode, v47);
  v36 = CddAllocations;
  if ( CddAllocations >= 0 )
  {
LABEL_10:
    v18 = *(_QWORD *)(*(_QWORD *)(v8 + 2280) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v47, v18, v15, v16);
    v19 = WdLogNewEntry5_WdDmmEvent();
    v20 = v6;
    *(_QWORD *)(v19 + 24) = v6;
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdDmmEvent(v19);
    v48[6] = 1 << v6;
    v21 = VIDPN_MGR::SetTimingsFromVidPn(v18, 0LL, 5LL);
    v25 = v21;
    if ( v21 < 0 )
    {
      v48[17] = -1;
      FillFailedStatus((struct _D3DKMT_VIDPN_SOURCE_MASKS *)v48, v21);
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
      v42[3] = v20;
      v42[4] = *(int *)(v8 + 272);
      v42[5] = *(unsigned int *)(v8 + 268);
      v42[6] = v25;
      WdLogEvent5_WdError(v42);
    }
    v26 = v48[17];
    if ( v48[17] )
    {
      v43 = *(_QWORD *)(v8 + 268);
      v46[0] |= 2u;
      DisplayRestoreVidPnResult(v43, v48[17], 7LL, (unsigned int)v25, a5);
      if ( (int)DmmResetModeState(v8, v26) < 0 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v44, v22, v23, v24);
        WdLogEvent5_WdAssertion(v45);
      }
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v47 + 5), v22, v23, v24);
  }
  else
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
    v38[3] = v6;
    v38[4] = v8;
    v38[5] = v36;
    WdLogEvent5_WdError(v38);
    v46[0] = 2;
  }
  DmmHandleSetTimingsResult((DXGADAPTER *)v8, (struct _DMM_SET_TIMING_RESULT *)v46, a5);
  return 0LL;
}
